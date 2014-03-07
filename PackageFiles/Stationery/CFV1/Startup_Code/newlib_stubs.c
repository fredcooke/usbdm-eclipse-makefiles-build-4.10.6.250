/*
 * newlib_stubs.c
 *
 *  Created on: 2 Nov 2010
 *      Author: nanoage.co.uk
 */
#include <errno.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <sys/unistd.h>

#undef errno
extern int errno;

// Overridden by actual routine if present
__attribute__((__weak__))
void uart_txChar(int ch) {
   (void)ch;
}

// Overridden by actual routine if present
__attribute__((__weak__))
int uart_rxChar(void) {
   return 0;
}

/*
 environ
 A pointer to a list of environment variables and their values.
 For a minimal environment, this empty list is adequate:
 */
char *__env[1] = { 0 };
char **environ = __env;

int _write(int file, const char *ptr, int len);

int _close(int file) {
   (void)file;
   return -1;
}
int close(int file) __attribute__ ((unused, alias ("_close")));

/*
 execve
 Transfer control to a new process. Minimal implementation (for a system without processes):
 */
int _execve(char *name, char **argv, char **env) {
   (void)name;
   (void)argv;
   (void)env;
   errno = ENOMEM;
   return -1;
}
/*
 fork
 Create a new process. Minimal implementation (for a system without processes):
 */

int _fork() {
   errno = EAGAIN;
   return -1;
}
/*
 fstat
 Status of an open file. For consistency with other minimal implementations in these examples,
 all files are regarded as character special devices.
 The `sys/stat.h' header file required is distributed in the `include' subdirectory for this C library.
 */
int _fstat(int file, struct stat *st) {
   (void)file;
   (void)st;
   st->st_mode = S_IFCHR;
   return 0;
}
int fstat(int file, struct stat *st) __attribute__ ((unused, alias ("_fstat")));

/*
 getpid
 Process-ID; this is sometimes used to generate strings unlikely to conflict with other processes. Minimal implementation, for a system without processes:
 */

int _getpid() {
   return 1;
}

/*
 isatty
 Query whether output stream is a terminal. For consistency with the other minimal implementations,
 */
int _isatty(int file) {
   switch (file){
   case STDOUT_FILENO:
   case STDERR_FILENO:
   case STDIN_FILENO:
      return 1;
   default:
      //errno = ENOTTY;
      errno = EBADF;
      return 0;
   }
}
int isatty(int fil) __attribute__ ((unused, alias ("_isatty")));

/*
 kill
 Send a signal. Minimal implementation:
 */
int _kill(int pid, int sig) {
   (void)pid;
   (void)sig;
   errno = EINVAL;
   return (-1);
}

/*
 link
 Establish a new name for an existing file. Minimal implementation:
 */

int _link(char *old, char *new) {
   (void)old;
   (void)new;
   errno = EMLINK;
   return -1;
}

/*
 lseek
 Set position in a file. Minimal implementation:
 */
int _lseek(int file, int ptr, int dir) {
   (void)file;
   (void)ptr;
   (void)dir;
   return 0;
}

/**
 *  sbrk
 *
 *   Increase program data space.
 *   Malloc and related functions depend on this
 */
static caddr_t heap_end = NULL;

caddr_t _sbrk(int incr) {
   extern char __cs3_heap_start; /* Defined by the linker */
   extern char __cs3_heap_end; /* Defined by the linker */
   caddr_t prev_heap_end;
   caddr_t next_heap_end;

   if (heap_end == NULL) {
      /* First allocation */
      heap_end = &__cs3_heap_start;
   }
   prev_heap_end = heap_end;
   // Round top to 2^3 boundary
   next_heap_end = (caddr_t)(((int)prev_heap_end + incr + 7) & ~7);
   if (next_heap_end > &__cs3_heap_end) {
      /* Heap and stack collision */
      return NULL;
   }
   heap_end = next_heap_end;
   return prev_heap_end;
}

/*
 read
 Read a character to a file. `libc' subroutines will use this system routine for input from all files, including stdin
 Returns -1 on error or blocks until the number of characters have been read.
 */
int _read(int file, char *ptr, int len) {
   (void)file;
   (void)ptr;
   (void)len;
   int todo;
   if(len == 0) {
      return 0;
   }
   *ptr++ = uart_rxChar();
   for(todo = 1; todo < len; todo++) {
      *ptr++ = uart_rxChar();
   }
   return todo;
}
int read(int __fd, void *__buf, size_t __nbyte ) __attribute__ ((unused, alias ("_read")));

/*
 stat
 Status of a file (by name). Minimal implementation:
 int    _EXFUN(stat,( const char *__path, struct stat *__sbuf ));
 */
int _stat(const char *filepath, struct stat *st) {
   (void)filepath;
   (void)st;
   st->st_mode = S_IFCHR;
   return 0;
}
int stat( const char *__path, struct stat *__sbuf ) __attribute__ ((unused, alias ("_stat")));

/*
 times
 Timing information for current process. Minimal implementation:
 */

clock_t _times(struct tms *buf) {
   (void)buf;
   return -1;
}

/*
 unlink
 Remove a file's directory entry. Minimal implementation:
 */
int _unlink(char *name) {
   (void)name;
   errno = ENOENT;
   return -1;
}

/*
 wait
 Wait for a child process. Minimal implementation:
 */
int _wait(int *status) {
   (void)status;
   errno = ECHILD;
   return -1;
}

/*
 write
 Write a character to a file. `libc' subroutines will use this system routine for output to all files, including stdout
 Returns -1 on error or number of bytes sent
 */
int _write(int file, const char *ptr, int len) {
   int n;
   switch (file) {
   case STDOUT_FILENO: /* stdout */
   case STDERR_FILENO: /* stderr */
      for (n = 0; n < len; n++) {
         if (*ptr == '\n') {
            uart_txChar('\r');
         }
         uart_txChar(*ptr++);
      }
      break;
   default:
      errno = EBADF;
      return -1;
   }
   return len;
}
int write(int __fd, const void *__buf, size_t __nbyte)  __attribute__ ((unused, alias ("_write")));

void _exit(int i) {
   (void)i;
   while (1) {
      asm("halt");
   }
}

