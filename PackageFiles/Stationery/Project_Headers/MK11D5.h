/****************************************************************************************************//**
 * @file     MK11D5.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for MK11D5.
 *           Equivalent: MK11DN512M5, MK11DX128M5, MK11DX256M5
 *
 * @version  V0.0
 * @date     2014/12
 *
 *******************************************************************************************************/

#ifndef MCU_MK11D5
#define MCU_MK11D5

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* ------------------------  Processor Exceptions Numbers  ------------------------- */
  Reset_IRQn                    = -15,   /*!<   1 Reset Vector, invoked on Power up and warm reset                                 */
  NonMaskableInt_IRQn           = -14,   /*!<   2 Non maskable Interrupt, cannot be stopped or preempted                           */
  HardFault_IRQn                = -13,   /*!<   3 Hard Fault, all classes of Fault                                                 */
  MemoryManagement_IRQn         = -12,   /*!<   4 Memory Management, MPU mismatch, including Access Violation and No Match         */
  BusFault_IRQn                 = -11,   /*!<   5 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault   */
  UsageFault_IRQn               = -10,   /*!<   6 Usage Fault, i.e. Undef Instruction, Illegal State Transition                    */
  SVCall_IRQn                   =  -5,   /*!<  11 System Service Call via SVC instruction                                          */
  DebugMonitor_IRQn             =  -4,   /*!<  12 Debug Monitor                                                                    */
  PendSV_IRQn                   =  -2,   /*!<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /*!<  15 System Tick Timer                                                                */
/* ----------------------   MK11D5 VectorTable                       ---------------------- */
  DMA0_IRQn                     =   0,   /*!<  16 DMA channel 0 transfer complete interrupt                                        */
  DMA1_IRQn                     =   1,   /*!<  17 DMA channel 1 transfer complete interrupt                                        */
  DMA2_IRQn                     =   2,   /*!<  18 DMA channel 2 transfer complete interrupt                                        */
  DMA3_IRQn                     =   3,   /*!<  19 DMA channel 3 transfer complete interrupt                                        */
  DMA4_IRQn                     =   4,   /*!<  20 DMA channel 4 transfer complete interrupt                                        */
  DMA5_IRQn                     =   5,   /*!<  21 DMA channel 5 transfer complete interrupt                                        */
  DMA6_IRQn                     =   6,   /*!<  22 DMA channel 6 transfer complete interrupt                                        */
  DMA7_IRQn                     =   7,   /*!<  23 DMA channel 7 transfer complete interrupt                                        */
  DMA8_IRQn                     =   8,   /*!<  24 DMA channel 8 transfer complete interrupt                                        */
  DMA9_IRQn                     =   9,   /*!<  25 DMA channel 9 transfer complete interrupt                                        */
  DMA10_IRQn                    =  10,   /*!<  26 DMA channel 10 transfer complete interrupt                                       */
  DMA11_IRQn                    =  11,   /*!<  27 DMA channel 11 transfer complete interrupt                                       */
  DMA12_IRQn                    =  12,   /*!<  28 DMA channel 12 transfer complete interrupt                                       */
  DMA13_IRQn                    =  13,   /*!<  29 DMA channel 13 transfer complete interrupt                                       */
  DMA14_IRQn                    =  14,   /*!<  30 DMA channel 14 transfer complete interrupt                                       */
  DMA15_IRQn                    =  15,   /*!<  31 DMA channel 15 transfer complete interrupt                                       */
  DMA_Error_IRQn                =  16,   /*!<  32 DMA error interrupt all channels                                                 */
  MCM_IRQn                      =  17,   /*!<  33 MCM interrupt                                                                    */
  FTFL_Command_IRQn             =  18,   /*!<  34 FTFL interrupt                                                                   */
  FTFL_Collision_IRQn           =  19,   /*!<  35 FTFL Read collision interrupt                                                    */
  PMC_IRQn                      =  20,   /*!<  36 PMC Low Voltage Detect, Low Voltage Warning                                      */
  LLWU_IRQn                     =  21,   /*!<  37 LLWU Low Leakage Wakeup                                                          */
  WDOG_IRQn                     =  22,   /*!<  38 WDOG interrupt                                                                   */
  RNG_IRQn                      =  23,   /*!<  39 RNG interrupt                                                                    */
  I2C0_IRQn                     =  24,   /*!<  40 I2C0 interrupt                                                                   */
  I2C1_IRQn                     =  25,   /*!<  41 I2C1 interrupt                                                                   */
  SPI0_IRQn                     =  26,   /*!<  42 SPI0 interrupt                                                                   */
  SPI1_IRQn                     =  27,   /*!<  43 SPI1 interrupt                                                                   */
  I2S0_Tx_IRQn                  =  28,   /*!<  44 Inter-IC Sound / Synchronous Audio Interface                                     */
  I2S0_Rx_IRQn                  =  29,   /*!<  45                                                                                  */
  UART0_RxTx_IRQn               =  31,   /*!<  47 UART0 receive/transmit interrupt                                                 */
  UART0_Error_IRQn              =  32,   /*!<  48 UART0 error interrupt                                                            */
  UART1_RxTx_IRQn               =  33,   /*!<  49 UART1 receive/transmit interrupt                                                 */
  UART1_Error_IRQn              =  34,   /*!<  50 UART1 error interrupt                                                            */
  UART2_RxTx_IRQn               =  35,   /*!<  51 UART2 receive/transmit interrupt                                                 */
  UART2_Error_IRQn              =  36,   /*!<  52 UART0 error interrupt                                                            */
  UART3_RxTx_IRQn               =  37,   /*!<  53 UART2 receive/transmit interrupt                                                 */
  UART3_Error_IRQn              =  38,   /*!<  54 UART0 error interrupt                                                            */
  ADC0_IRQn                     =  39,   /*!<  55 ADC0 interrupt                                                                   */
  CMP0_IRQn                     =  40,   /*!<  56 CMP0 interrupt                                                                   */
  CMP1_IRQn                     =  41,   /*!<  57 CMP1 interrupt                                                                   */
  FTM0_IRQn                     =  42,   /*!<  58 FTM0 fault, overflow and channels interrupt                                      */
  FTM1_IRQn                     =  43,   /*!<  59 FTM1 fault, overflow and channels interrupt                                      */
  FTM2_IRQn                     =  44,   /*!<  60 FTM2 fault, overflow and channels interrupt                                      */
  CMT_IRQn                      =  45,   /*!<  61 CMT interrupt                                                                    */
  RTC_Alarm_IRQn                =  46,   /*!<  62 RTC Alarm interrupt                                                              */
  RTC_Seconds_IRQn              =  47,   /*!<  63 RTC seconds interrupt                                                            */
  PIT_Ch0_IRQn                  =  48,   /*!<  64 PIT timer channel 0 interrupt                                                    */
  PIT_Ch1_IRQn                  =  49,   /*!<  65 PIT timer channel 1 interrupt                                                    */
  PIT_Ch2_IRQn                  =  50,   /*!<  66 PIT timer channel 2 interrupt                                                    */
  PIT_Ch3_IRQn                  =  51,   /*!<  67 PIT timer channel 3 interrupt                                                    */
  PDB0_IRQn                     =  52,   /*!<  68 PDB0 Programmable Delay Block interrupt                                          */
  DAC0_IRQn                     =  56,   /*!<  72 Digital to Analogue Converter                                                    */
  MCG_IRQn                      =  57,   /*!<  73 Clock Generator                                                                  */
  LPTMR0_IRQn                   =  58,   /*!<  74 LPTMR Low Power Timer interrupt                                                  */
  PORTA_IRQn                    =  59,   /*!<  75 Port A interrupt                                                                 */
  PORTB_IRQn                    =  60,   /*!<  76 Port B interrupt                                                                 */
  PORTC_IRQn                    =  61,   /*!<  77 Port C interrupt                                                                 */
  PORTD_IRQn                    =  62,   /*!<  78 Port D interrupt                                                                 */
  PORTE_IRQn                    =  63,   /*!<  79 Port E interrupt                                                                 */
  SWI_IRQn                      =  64,   /*!<  80 Software interrupt                                                               */
} IRQn_Type;

/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);
extern void HardFault_Handler(void);
extern void MemManage_Handler(void);
extern void BusFault_Handler(void);
extern void UsageFault_Handler(void);
extern void SVC_Handler(void);
extern void DebugMon_Handler(void);
extern void PendSV_Handler(void);
extern void SysTick_Handler(void);
extern void DMA0_IRQHandler(void);
extern void DMA1_IRQHandler(void);
extern void DMA2_IRQHandler(void);
extern void DMA3_IRQHandler(void);
extern void DMA4_IRQHandler(void);
extern void DMA5_IRQHandler(void);
extern void DMA6_IRQHandler(void);
extern void DMA7_IRQHandler(void);
extern void DMA8_IRQHandler(void);
extern void DMA9_IRQHandler(void);
extern void DMA10_IRQHandler(void);
extern void DMA11_IRQHandler(void);
extern void DMA12_IRQHandler(void);
extern void DMA13_IRQHandler(void);
extern void DMA14_IRQHandler(void);
extern void DMA15_IRQHandler(void);
extern void DMA_Error_IRQHandler(void);
extern void MCM_IRQHandler(void);
extern void FTFL_Command_IRQHandler(void);
extern void FTFL_Collision_IRQHandler(void);
extern void PMC_IRQHandler(void);
extern void LLWU_IRQHandler(void);
extern void WDOG_IRQHandler(void);
extern void RNG_IRQHandler(void);
extern void I2C0_IRQHandler(void);
extern void I2C1_IRQHandler(void);
extern void SPI0_IRQHandler(void);
extern void SPI1_IRQHandler(void);
extern void I2S0_Tx_IRQHandler(void);
extern void I2S0_Rx_IRQHandler(void);
extern void UART0_RxTx_IRQHandler(void);
extern void UART0_Error_IRQHandler(void);
extern void UART1_RxTx_IRQHandler(void);
extern void UART1_Error_IRQHandler(void);
extern void UART2_RxTx_IRQHandler(void);
extern void UART2_Error_IRQHandler(void);
extern void UART3_RxTx_IRQHandler(void);
extern void UART3_Error_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void CMP0_IRQHandler(void);
extern void CMP1_IRQHandler(void);
extern void FTM0_IRQHandler(void);
extern void FTM1_IRQHandler(void);
extern void FTM2_IRQHandler(void);
extern void CMT_IRQHandler(void);
extern void RTC_Alarm_IRQHandler(void);
extern void RTC_Seconds_IRQHandler(void);
extern void PIT_Ch0_IRQHandler(void);
extern void PIT_Ch1_IRQHandler(void);
extern void PIT_Ch2_IRQHandler(void);
extern void PIT_Ch3_IRQHandler(void);
extern void PDB0_IRQHandler(void);
extern void DAC0_IRQHandler(void);
extern void MCG_IRQHandler(void);
extern void LPTMR0_IRQHandler(void);
extern void PORTA_IRQHandler(void);
extern void PORTB_IRQHandler(void);
extern void PORTC_IRQHandler(void);
extern void PORTD_IRQHandler(void);
extern void PORTE_IRQHandler(void);
extern void SWI_IRQHandler(void);

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the cm4 Processor and Core Peripherals---------------- */
#define __CM4_REV                0x0100
#define __MPU_PRESENT            0
#define __NVIC_PRIO_BITS         4
#define __Vendor_SysTickConfig   0
#define __FPU_PRESENT            0

#include <core_cm4.h>   /*!< Processor and core peripherals */

#ifndef __IO
#define __IO volatile 
#endif

#ifndef __I
#define __I volatile const
#endif

#ifndef __O
#define __O volatile
#endif


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */



/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================           ADC0 (file:ADC0_MKD5_MKLZ4)          ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */
typedef struct {                                /*!<       ADC0 Structure                                               */
   __IO uint32_t  SC1A;                         /*!< 0000: Status and Control Register 1                                */
   __IO uint32_t  SC1B;                         /*!< 0004: Status and Control Register 1                                */
   __IO uint32_t  CFG1;                         /*!< 0008: Configuration Register 1                                     */
   __IO uint32_t  CFG2;                         /*!< 000C: Configuration Register 2                                     */
   __I  uint32_t  RA;                           /*!< 0010: Data Result Register                                         */
   __I  uint32_t  RB;                           /*!< 0014: Data Result Register                                         */
   __IO uint32_t  CV1;                          /*!< 0018: Compare Value                                                */
   __IO uint32_t  CV2;                          /*!< 001C: Compare Value                                                */
   __IO uint32_t  SC2;                          /*!< 0020: Status and Control Register 2                                */
   __IO uint32_t  SC3;                          /*!< 0024: Status and Control Register 3                                */
   __IO uint32_t  OFS;                          /*!< 0028: Offset Correction Register                                   */
   __IO uint32_t  PG;                           /*!< 002C: Plus-Side Gain Register                                      */
   __IO uint32_t  MG;                           /*!< 0030: Minus-Side Gain Register                                     */
   __IO uint32_t  CLPD;                         /*!< 0034: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLPS;                         /*!< 0038: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP4;                         /*!< 003C: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP3;                         /*!< 0040: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP2;                         /*!< 0044: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP1;                         /*!< 0048: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP0;                         /*!< 004C: Plus-Side General Calibration Value                          */
   __I  uint32_t  RESERVED0;                    /*!< 0050:                                                              */
   __IO uint32_t  CLMD;                         /*!< 0054: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLMS;                         /*!< 0058: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM4;                         /*!< 005C: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM3;                         /*!< 0060: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM2;                         /*!< 0064: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM1;                         /*!< 0068: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM0;                         /*!< 006C: Minus-Side General Calibration Value                         */
} ADC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- ADC0_SC1                                 ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FUL << ADC_SC1_ADCH_SHIFT)                      /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       0                                                   /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((x)<<ADC_SC1_ADCH_SHIFT)&ADC_SC1_ADCH_MASK)       /*!< ADC0_SC1                                */
#define ADC_SC1_DIFF_MASK                        (0x01UL << ADC_SC1_DIFF_SHIFT)                      /*!< ADC0_SC1: DIFF Mask                     */
#define ADC_SC1_DIFF_SHIFT                       5                                                   /*!< ADC0_SC1: DIFF Position                 */
#define ADC_SC1_AIEN_MASK                        (0x01UL << ADC_SC1_AIEN_SHIFT)                      /*!< ADC0_SC1: AIEN Mask                     */
#define ADC_SC1_AIEN_SHIFT                       6                                                   /*!< ADC0_SC1: AIEN Position                 */
#define ADC_SC1_COCO_MASK                        (0x01UL << ADC_SC1_COCO_SHIFT)                      /*!< ADC0_SC1: COCO Mask                     */
#define ADC_SC1_COCO_SHIFT                       7                                                   /*!< ADC0_SC1: COCO Position                 */

/* ------- ADC0_CFG1                                ------ */
#define ADC_CFG1_ADICLK_MASK                     (0x03UL << ADC_CFG1_ADICLK_SHIFT)                   /*!< ADC0_CFG1: ADICLK Mask                  */
#define ADC_CFG1_ADICLK_SHIFT                    0                                                   /*!< ADC0_CFG1: ADICLK Position              */
#define ADC_CFG1_ADICLK(x)                       (((x)<<ADC_CFG1_ADICLK_SHIFT)&ADC_CFG1_ADICLK_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_MODE_MASK                       (0x03UL << ADC_CFG1_MODE_SHIFT)                     /*!< ADC0_CFG1: MODE Mask                    */
#define ADC_CFG1_MODE_SHIFT                      2                                                   /*!< ADC0_CFG1: MODE Position                */
#define ADC_CFG1_MODE(x)                         (((x)<<ADC_CFG1_MODE_SHIFT)&ADC_CFG1_MODE_MASK)     /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLSMP_MASK                     (0x01UL << ADC_CFG1_ADLSMP_SHIFT)                   /*!< ADC0_CFG1: ADLSMP Mask                  */
#define ADC_CFG1_ADLSMP_SHIFT                    4                                                   /*!< ADC0_CFG1: ADLSMP Position              */
#define ADC_CFG1_ADIV_MASK                       (0x03UL << ADC_CFG1_ADIV_SHIFT)                     /*!< ADC0_CFG1: ADIV Mask                    */
#define ADC_CFG1_ADIV_SHIFT                      5                                                   /*!< ADC0_CFG1: ADIV Position                */
#define ADC_CFG1_ADIV(x)                         (((x)<<ADC_CFG1_ADIV_SHIFT)&ADC_CFG1_ADIV_MASK)     /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLPC_MASK                      (0x01UL << ADC_CFG1_ADLPC_SHIFT)                    /*!< ADC0_CFG1: ADLPC Mask                   */
#define ADC_CFG1_ADLPC_SHIFT                     7                                                   /*!< ADC0_CFG1: ADLPC Position               */

/* ------- ADC0_CFG2                                ------ */
#define ADC_CFG2_ADLSTS_MASK                     (0x03UL << ADC_CFG2_ADLSTS_SHIFT)                   /*!< ADC0_CFG2: ADLSTS Mask                  */
#define ADC_CFG2_ADLSTS_SHIFT                    0                                                   /*!< ADC0_CFG2: ADLSTS Position              */
#define ADC_CFG2_ADLSTS(x)                       (((x)<<ADC_CFG2_ADLSTS_SHIFT)&ADC_CFG2_ADLSTS_MASK) /*!< ADC0_CFG2                               */
#define ADC_CFG2_ADHSC_MASK                      (0x01UL << ADC_CFG2_ADHSC_SHIFT)                    /*!< ADC0_CFG2: ADHSC Mask                   */
#define ADC_CFG2_ADHSC_SHIFT                     2                                                   /*!< ADC0_CFG2: ADHSC Position               */
#define ADC_CFG2_ADACKEN_MASK                    (0x01UL << ADC_CFG2_ADACKEN_SHIFT)                  /*!< ADC0_CFG2: ADACKEN Mask                 */
#define ADC_CFG2_ADACKEN_SHIFT                   3                                                   /*!< ADC0_CFG2: ADACKEN Position             */
#define ADC_CFG2_MUXSEL_MASK                     (0x01UL << ADC_CFG2_MUXSEL_SHIFT)                   /*!< ADC0_CFG2: MUXSEL Mask                  */
#define ADC_CFG2_MUXSEL_SHIFT                    4                                                   /*!< ADC0_CFG2: MUXSEL Position              */

/* ------- ADC0_R                                   ------ */
#define ADC_R_D_MASK                             (0xFFFFUL << ADC_R_D_SHIFT)                         /*!< ADC0_R: D Mask                          */
#define ADC_R_D_SHIFT                            0                                                   /*!< ADC0_R: D Position                      */
#define ADC_R_D(x)                               (((x)<<ADC_R_D_SHIFT)&ADC_R_D_MASK)                 /*!< ADC0_R                                  */

/* ------- ADC0_CV                                  ------ */
#define ADC_CV_CV_MASK                           (0xFFFFUL << ADC_CV_CV_SHIFT)                       /*!< ADC0_CV: CV Mask                        */
#define ADC_CV_CV_SHIFT                          0                                                   /*!< ADC0_CV: CV Position                    */
#define ADC_CV_CV(x)                             (((x)<<ADC_CV_CV_SHIFT)&ADC_CV_CV_MASK)             /*!< ADC0_CV                                 */

/* ------- ADC0_SC2                                 ------ */
#define ADC_SC2_REFSEL_MASK                      (0x03UL << ADC_SC2_REFSEL_SHIFT)                    /*!< ADC0_SC2: REFSEL Mask                   */
#define ADC_SC2_REFSEL_SHIFT                     0                                                   /*!< ADC0_SC2: REFSEL Position               */
#define ADC_SC2_REFSEL(x)                        (((x)<<ADC_SC2_REFSEL_SHIFT)&ADC_SC2_REFSEL_MASK)   /*!< ADC0_SC2                                */
#define ADC_SC2_DMAEN_MASK                       (0x01UL << ADC_SC2_DMAEN_SHIFT)                     /*!< ADC0_SC2: DMAEN Mask                    */
#define ADC_SC2_DMAEN_SHIFT                      2                                                   /*!< ADC0_SC2: DMAEN Position                */
#define ADC_SC2_ACREN_MASK                       (0x01UL << ADC_SC2_ACREN_SHIFT)                     /*!< ADC0_SC2: ACREN Mask                    */
#define ADC_SC2_ACREN_SHIFT                      3                                                   /*!< ADC0_SC2: ACREN Position                */
#define ADC_SC2_ACFGT_MASK                       (0x01UL << ADC_SC2_ACFGT_SHIFT)                     /*!< ADC0_SC2: ACFGT Mask                    */
#define ADC_SC2_ACFGT_SHIFT                      4                                                   /*!< ADC0_SC2: ACFGT Position                */
#define ADC_SC2_ACFE_MASK                        (0x01UL << ADC_SC2_ACFE_SHIFT)                      /*!< ADC0_SC2: ACFE Mask                     */
#define ADC_SC2_ACFE_SHIFT                       5                                                   /*!< ADC0_SC2: ACFE Position                 */
#define ADC_SC2_ADTRG_MASK                       (0x01UL << ADC_SC2_ADTRG_SHIFT)                     /*!< ADC0_SC2: ADTRG Mask                    */
#define ADC_SC2_ADTRG_SHIFT                      6                                                   /*!< ADC0_SC2: ADTRG Position                */
#define ADC_SC2_ADACT_MASK                       (0x01UL << ADC_SC2_ADACT_SHIFT)                     /*!< ADC0_SC2: ADACT Mask                    */
#define ADC_SC2_ADACT_SHIFT                      7                                                   /*!< ADC0_SC2: ADACT Position                */

/* ------- ADC0_SC3                                 ------ */
#define ADC_SC3_AVGS_MASK                        (0x03UL << ADC_SC3_AVGS_SHIFT)                      /*!< ADC0_SC3: AVGS Mask                     */
#define ADC_SC3_AVGS_SHIFT                       0                                                   /*!< ADC0_SC3: AVGS Position                 */
#define ADC_SC3_AVGS(x)                          (((x)<<ADC_SC3_AVGS_SHIFT)&ADC_SC3_AVGS_MASK)       /*!< ADC0_SC3                                */
#define ADC_SC3_AVGE_MASK                        (0x01UL << ADC_SC3_AVGE_SHIFT)                      /*!< ADC0_SC3: AVGE Mask                     */
#define ADC_SC3_AVGE_SHIFT                       2                                                   /*!< ADC0_SC3: AVGE Position                 */
#define ADC_SC3_ADCO_MASK                        (0x01UL << ADC_SC3_ADCO_SHIFT)                      /*!< ADC0_SC3: ADCO Mask                     */
#define ADC_SC3_ADCO_SHIFT                       3                                                   /*!< ADC0_SC3: ADCO Position                 */
#define ADC_SC3_CALF_MASK                        (0x01UL << ADC_SC3_CALF_SHIFT)                      /*!< ADC0_SC3: CALF Mask                     */
#define ADC_SC3_CALF_SHIFT                       6                                                   /*!< ADC0_SC3: CALF Position                 */
#define ADC_SC3_CAL_MASK                         (0x01UL << ADC_SC3_CAL_SHIFT)                       /*!< ADC0_SC3: CAL Mask                      */
#define ADC_SC3_CAL_SHIFT                        7                                                   /*!< ADC0_SC3: CAL Position                  */

/* ------- ADC0_OFS                                 ------ */
#define ADC_OFS_OFS_MASK                         (0xFFFFUL << ADC_OFS_OFS_SHIFT)                     /*!< ADC0_OFS: OFS Mask                      */
#define ADC_OFS_OFS_SHIFT                        0                                                   /*!< ADC0_OFS: OFS Position                  */
#define ADC_OFS_OFS(x)                           (((x)<<ADC_OFS_OFS_SHIFT)&ADC_OFS_OFS_MASK)         /*!< ADC0_OFS                                */

/* ------- ADC0_PG                                  ------ */
#define ADC_PG_PG_MASK                           (0xFFFFUL << ADC_PG_PG_SHIFT)                       /*!< ADC0_PG: PG Mask                        */
#define ADC_PG_PG_SHIFT                          0                                                   /*!< ADC0_PG: PG Position                    */
#define ADC_PG_PG(x)                             (((x)<<ADC_PG_PG_SHIFT)&ADC_PG_PG_MASK)             /*!< ADC0_PG                                 */

/* ------- ADC0_MG                                  ------ */
#define ADC_MG_MG_MASK                           (0xFFFFUL << ADC_MG_MG_SHIFT)                       /*!< ADC0_MG: MG Mask                        */
#define ADC_MG_MG_SHIFT                          0                                                   /*!< ADC0_MG: MG Position                    */
#define ADC_MG_MG(x)                             (((x)<<ADC_MG_MG_SHIFT)&ADC_MG_MG_MASK)             /*!< ADC0_MG                                 */

/* ------- ADC0_CLPD                                ------ */
#define ADC_CLPD_CLPD_MASK                       (0x3FUL << ADC_CLPD_CLPD_SHIFT)                     /*!< ADC0_CLPD: CLPD Mask                    */
#define ADC_CLPD_CLPD_SHIFT                      0                                                   /*!< ADC0_CLPD: CLPD Position                */
#define ADC_CLPD_CLPD(x)                         (((x)<<ADC_CLPD_CLPD_SHIFT)&ADC_CLPD_CLPD_MASK)     /*!< ADC0_CLPD                               */

/* ------- ADC0_CLPS                                ------ */
#define ADC_CLPS_CLPS_MASK                       (0x3FUL << ADC_CLPS_CLPS_SHIFT)                     /*!< ADC0_CLPS: CLPS Mask                    */
#define ADC_CLPS_CLPS_SHIFT                      0                                                   /*!< ADC0_CLPS: CLPS Position                */
#define ADC_CLPS_CLPS(x)                         (((x)<<ADC_CLPS_CLPS_SHIFT)&ADC_CLPS_CLPS_MASK)     /*!< ADC0_CLPS                               */

/* ------- ADC0_CLP4                                ------ */
#define ADC_CLP4_CLP4_MASK                       (0x3FFUL << ADC_CLP4_CLP4_SHIFT)                    /*!< ADC0_CLP4: CLP4 Mask                    */
#define ADC_CLP4_CLP4_SHIFT                      0                                                   /*!< ADC0_CLP4: CLP4 Position                */
#define ADC_CLP4_CLP4(x)                         (((x)<<ADC_CLP4_CLP4_SHIFT)&ADC_CLP4_CLP4_MASK)     /*!< ADC0_CLP4                               */

/* ------- ADC0_CLP3                                ------ */
#define ADC_CLP3_CLP3_MASK                       (0x1FFUL << ADC_CLP3_CLP3_SHIFT)                    /*!< ADC0_CLP3: CLP3 Mask                    */
#define ADC_CLP3_CLP3_SHIFT                      0                                                   /*!< ADC0_CLP3: CLP3 Position                */
#define ADC_CLP3_CLP3(x)                         (((x)<<ADC_CLP3_CLP3_SHIFT)&ADC_CLP3_CLP3_MASK)     /*!< ADC0_CLP3                               */

/* ------- ADC0_CLP2                                ------ */
#define ADC_CLP2_CLP2_MASK                       (0xFFUL << ADC_CLP2_CLP2_SHIFT)                     /*!< ADC0_CLP2: CLP2 Mask                    */
#define ADC_CLP2_CLP2_SHIFT                      0                                                   /*!< ADC0_CLP2: CLP2 Position                */
#define ADC_CLP2_CLP2(x)                         (((x)<<ADC_CLP2_CLP2_SHIFT)&ADC_CLP2_CLP2_MASK)     /*!< ADC0_CLP2                               */

/* ------- ADC0_CLP1                                ------ */
#define ADC_CLP1_CLP1_MASK                       (0x7FUL << ADC_CLP1_CLP1_SHIFT)                     /*!< ADC0_CLP1: CLP1 Mask                    */
#define ADC_CLP1_CLP1_SHIFT                      0                                                   /*!< ADC0_CLP1: CLP1 Position                */
#define ADC_CLP1_CLP1(x)                         (((x)<<ADC_CLP1_CLP1_SHIFT)&ADC_CLP1_CLP1_MASK)     /*!< ADC0_CLP1                               */

/* ------- ADC0_CLP0                                ------ */
#define ADC_CLP0_CLP0_MASK                       (0x3FUL << ADC_CLP0_CLP0_SHIFT)                     /*!< ADC0_CLP0: CLP0 Mask                    */
#define ADC_CLP0_CLP0_SHIFT                      0                                                   /*!< ADC0_CLP0: CLP0 Position                */
#define ADC_CLP0_CLP0(x)                         (((x)<<ADC_CLP0_CLP0_SHIFT)&ADC_CLP0_CLP0_MASK)     /*!< ADC0_CLP0                               */

/* ------- ADC0_CLMD                                ------ */
#define ADC_CLMD_CLMD_MASK                       (0x3FUL << ADC_CLMD_CLMD_SHIFT)                     /*!< ADC0_CLMD: CLMD Mask                    */
#define ADC_CLMD_CLMD_SHIFT                      0                                                   /*!< ADC0_CLMD: CLMD Position                */
#define ADC_CLMD_CLMD(x)                         (((x)<<ADC_CLMD_CLMD_SHIFT)&ADC_CLMD_CLMD_MASK)     /*!< ADC0_CLMD                               */

/* ------- ADC0_CLMS                                ------ */
#define ADC_CLMS_CLMS_MASK                       (0x3FUL << ADC_CLMS_CLMS_SHIFT)                     /*!< ADC0_CLMS: CLMS Mask                    */
#define ADC_CLMS_CLMS_SHIFT                      0                                                   /*!< ADC0_CLMS: CLMS Position                */
#define ADC_CLMS_CLMS(x)                         (((x)<<ADC_CLMS_CLMS_SHIFT)&ADC_CLMS_CLMS_MASK)     /*!< ADC0_CLMS                               */

/* ------- ADC0_CLM4                                ------ */
#define ADC_CLM4_CLM4_MASK                       (0x3FFUL << ADC_CLM4_CLM4_SHIFT)                    /*!< ADC0_CLM4: CLM4 Mask                    */
#define ADC_CLM4_CLM4_SHIFT                      0                                                   /*!< ADC0_CLM4: CLM4 Position                */
#define ADC_CLM4_CLM4(x)                         (((x)<<ADC_CLM4_CLM4_SHIFT)&ADC_CLM4_CLM4_MASK)     /*!< ADC0_CLM4                               */

/* ------- ADC0_CLM3                                ------ */
#define ADC_CLM3_CLM3_MASK                       (0x1FFUL << ADC_CLM3_CLM3_SHIFT)                    /*!< ADC0_CLM3: CLM3 Mask                    */
#define ADC_CLM3_CLM3_SHIFT                      0                                                   /*!< ADC0_CLM3: CLM3 Position                */
#define ADC_CLM3_CLM3(x)                         (((x)<<ADC_CLM3_CLM3_SHIFT)&ADC_CLM3_CLM3_MASK)     /*!< ADC0_CLM3                               */

/* ------- ADC0_CLM2                                ------ */
#define ADC_CLM2_CLM2_MASK                       (0xFFUL << ADC_CLM2_CLM2_SHIFT)                     /*!< ADC0_CLM2: CLM2 Mask                    */
#define ADC_CLM2_CLM2_SHIFT                      0                                                   /*!< ADC0_CLM2: CLM2 Position                */
#define ADC_CLM2_CLM2(x)                         (((x)<<ADC_CLM2_CLM2_SHIFT)&ADC_CLM2_CLM2_MASK)     /*!< ADC0_CLM2                               */

/* ------- ADC0_CLM1                                ------ */
#define ADC_CLM1_CLM1_MASK                       (0x7FUL << ADC_CLM1_CLM1_SHIFT)                     /*!< ADC0_CLM1: CLM1 Mask                    */
#define ADC_CLM1_CLM1_SHIFT                      0                                                   /*!< ADC0_CLM1: CLM1 Position                */
#define ADC_CLM1_CLM1(x)                         (((x)<<ADC_CLM1_CLM1_SHIFT)&ADC_CLM1_CLM1_MASK)     /*!< ADC0_CLM1                               */

/* ------- ADC0_CLM0                                ------ */
#define ADC_CLM0_CLM0_MASK                       (0x3FUL << ADC_CLM0_CLM0_SHIFT)                     /*!< ADC0_CLM0: CLM0 Mask                    */
#define ADC_CLM0_CLM0_SHIFT                      0                                                   /*!< ADC0_CLM0: CLM0 Position                */
#define ADC_CLM0_CLM0(x)                         (((x)<<ADC_CLM0_CLM0_SHIFT)&ADC_CLM0_CLM0_MASK)     /*!< ADC0_CLM0                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define ADC0_SC1A                      (ADC0->SC1A)
#define ADC0_SC1B                      (ADC0->SC1B)
#define ADC0_CFG1                      (ADC0->CFG1)
#define ADC0_CFG2                      (ADC0->CFG2)
#define ADC0_RA                        (ADC0->RA)
#define ADC0_RB                        (ADC0->RB)
#define ADC0_CV1                       (ADC0->CV1)
#define ADC0_CV2                       (ADC0->CV2)
#define ADC0_SC2                       (ADC0->SC2)
#define ADC0_SC3                       (ADC0->SC3)
#define ADC0_OFS                       (ADC0->OFS)
#define ADC0_PG                        (ADC0->PG)
#define ADC0_MG                        (ADC0->MG)
#define ADC0_CLPD                      (ADC0->CLPD)
#define ADC0_CLPS                      (ADC0->CLPS)
#define ADC0_CLP4                      (ADC0->CLP4)
#define ADC0_CLP3                      (ADC0->CLP3)
#define ADC0_CLP2                      (ADC0->CLP2)
#define ADC0_CLP1                      (ADC0->CLP1)
#define ADC0_CLP0                      (ADC0->CLP0)
#define ADC0_CLMD                      (ADC0->CLMD)
#define ADC0_CLMS                      (ADC0->CLMS)
#define ADC0_CLM4                      (ADC0->CLM4)
#define ADC0_CLM3                      (ADC0->CLM3)
#define ADC0_CLM2                      (ADC0->CLM2)
#define ADC0_CLM1                      (ADC0->CLM1)
#define ADC0_CLM0                      (ADC0->CLM0)

/* ================================================================================ */
/* ================           CAU (file:CAU_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Memory Mapped Cryptographic Acceleration Unit
 */
typedef struct {                                /*!<       CAU Structure                                                */
   __O  uint32_t  DIRECT[16];                   /*!< 0000: Direct access register                                       */
   __I  uint32_t  RESERVED0[512];               /*!< 0040:                                                              */
   __O  uint32_t  LDR_CASR;                     /*!< 0840: Status register - Load Register command                      */
   __O  uint32_t  LDR_CAA;                      /*!< 0844: Accumulator register - Load Register command                 */
   __O  uint32_t  LDR_CA[9];                    /*!< 0848: General Purpose Register  - Load Register command            */
   __I  uint32_t  RESERVED1[5];                 /*!< 086C:                                                              */
   __I  uint32_t  STR_CASR;                     /*!< 0880: Status register - Store Register command                     */
   __I  uint32_t  STR_CAA;                      /*!< 0884: Accumulator register - Store Register command                */
   __I  uint32_t  STR_CA[9];                    /*!< 0888: General Purpose Register  - Store Register command           */
   __I  uint32_t  RESERVED2[5];                 /*!< 08AC:                                                              */
   __O  uint32_t  ADR_CASR;                     /*!< 08C0: Status register - Add Register command                       */
   __O  uint32_t  ADR_CAA;                      /*!< 08C4: Accumulator register - Add to register command               */
   __O  uint32_t  ADR_CA[9];                    /*!< 08C8: General Purpose Register  - Add to register command          */
   __I  uint32_t  RESERVED3[5];                 /*!< 08EC:                                                              */
   __O  uint32_t  RADR_CASR;                    /*!< 0900: Status register - Reverse and Add to Register command        */
   __O  uint32_t  RADR_CAA;                     /*!< 0904: Accumulator register - Reverse and Add to Register command   */
   __O  uint32_t  RADR_CA[9];                   /*!< 0908: General Purpose Register  - Reverse and Add to Register command */
   __I  uint32_t  RESERVED4[21];                /*!< 092C:                                                              */
   __O  uint32_t  XOR_CASR;                     /*!< 0980: Status register - Exclusive Or command                       */
   __O  uint32_t  XOR_CAA;                      /*!< 0984: Accumulator register - Exclusive Or command                  */
   __O  uint32_t  XOR_CA[9];                    /*!< 0988: General Purpose Register  - Exclusive Or command             */
   __I  uint32_t  RESERVED5[5];                 /*!< 09AC:                                                              */
   __O  uint32_t  ROTL_CASR;                    /*!< 09C0: Status register - Rotate Left command                        */
   __O  uint32_t  ROTL_CAA;                     /*!< 09C4: Accumulator register - Rotate Left command                   */
   __O  uint32_t  ROTL_CA[9];                   /*!< 09C8: General Purpose Register  - Rotate Left command              */
   __I  uint32_t  RESERVED6[69];                /*!< 09EC:                                                              */
   __O  uint32_t  AESC_CASR;                    /*!< 0B00: Status register - AES Column Operation command               */
   __O  uint32_t  AESC_CAA;                     /*!< 0B04: Accumulator register - AES Column Operation command          */
   __O  uint32_t  AESC_CA[9];                   /*!< 0B08: General Purpose Register  - AES Column Operation command     */
   __I  uint32_t  RESERVED7[5];                 /*!< 0B2C:                                                              */
   __O  uint32_t  AESIC_CASR;                   /*!< 0B40: Status register - AES Inverse Column Operation command       */
   __O  uint32_t  AESIC_CAA;                    /*!< 0B44: Accumulator register - AES Inverse Column Operation command  */
   __O  uint32_t  AESIC_CA[9];                  /*!< 0B48: General Purpose Register  - AES Inverse Column Operation command */
} CAU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CAU' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- CAU_DIRECT                               ------ */

/* ------- CAU_LDR_CASR                             ------ */
#define CAU_LDR_CASR_IC_MASK                     (0x01UL << CAU_LDR_CASR_IC_SHIFT)                   /*!< CAU_LDR_CASR: IC Mask                   */
#define CAU_LDR_CASR_IC_SHIFT                    0                                                   /*!< CAU_LDR_CASR: IC Position               */
#define CAU_LDR_CASR_DPE_MASK                    (0x01UL << CAU_LDR_CASR_DPE_SHIFT)                  /*!< CAU_LDR_CASR: DPE Mask                  */
#define CAU_LDR_CASR_DPE_SHIFT                   1                                                   /*!< CAU_LDR_CASR: DPE Position              */
#define CAU_LDR_CASR_VER_MASK                    (0x0FUL << CAU_LDR_CASR_VER_SHIFT)                  /*!< CAU_LDR_CASR: VER Mask                  */
#define CAU_LDR_CASR_VER_SHIFT                   28                                                  /*!< CAU_LDR_CASR: VER Position              */
#define CAU_LDR_CASR_VER(x)                      (((x)<<CAU_LDR_CASR_VER_SHIFT)&CAU_LDR_CASR_VER_MASK) /*!< CAU_LDR_CASR                            */

/* ------- CAU_LDR_CAA                              ------ */

/* ------- CAU_LDR_CA                               ------ */

/* ------- CAU_STR_CASR                             ------ */
#define CAU_STR_CASR_IC_MASK                     (0x01UL << CAU_STR_CASR_IC_SHIFT)                   /*!< CAU_STR_CASR: IC Mask                   */
#define CAU_STR_CASR_IC_SHIFT                    0                                                   /*!< CAU_STR_CASR: IC Position               */
#define CAU_STR_CASR_DPE_MASK                    (0x01UL << CAU_STR_CASR_DPE_SHIFT)                  /*!< CAU_STR_CASR: DPE Mask                  */
#define CAU_STR_CASR_DPE_SHIFT                   1                                                   /*!< CAU_STR_CASR: DPE Position              */
#define CAU_STR_CASR_VER_MASK                    (0x0FUL << CAU_STR_CASR_VER_SHIFT)                  /*!< CAU_STR_CASR: VER Mask                  */
#define CAU_STR_CASR_VER_SHIFT                   28                                                  /*!< CAU_STR_CASR: VER Position              */
#define CAU_STR_CASR_VER(x)                      (((x)<<CAU_STR_CASR_VER_SHIFT)&CAU_STR_CASR_VER_MASK) /*!< CAU_STR_CASR                            */

/* ------- CAU_STR_CAA                              ------ */

/* ------- CAU_STR_CA                               ------ */

/* ------- CAU_ADR_CASR                             ------ */
#define CAU_ADR_CASR_IC_MASK                     (0x01UL << CAU_ADR_CASR_IC_SHIFT)                   /*!< CAU_ADR_CASR: IC Mask                   */
#define CAU_ADR_CASR_IC_SHIFT                    0                                                   /*!< CAU_ADR_CASR: IC Position               */
#define CAU_ADR_CASR_DPE_MASK                    (0x01UL << CAU_ADR_CASR_DPE_SHIFT)                  /*!< CAU_ADR_CASR: DPE Mask                  */
#define CAU_ADR_CASR_DPE_SHIFT                   1                                                   /*!< CAU_ADR_CASR: DPE Position              */
#define CAU_ADR_CASR_VER_MASK                    (0x0FUL << CAU_ADR_CASR_VER_SHIFT)                  /*!< CAU_ADR_CASR: VER Mask                  */
#define CAU_ADR_CASR_VER_SHIFT                   28                                                  /*!< CAU_ADR_CASR: VER Position              */
#define CAU_ADR_CASR_VER(x)                      (((x)<<CAU_ADR_CASR_VER_SHIFT)&CAU_ADR_CASR_VER_MASK) /*!< CAU_ADR_CASR                            */

/* ------- CAU_ADR_CAA                              ------ */

/* ------- CAU_ADR_CA                               ------ */

/* ------- CAU_RADR_CASR                            ------ */
#define CAU_RADR_CASR_IC_MASK                    (0x01UL << CAU_RADR_CASR_IC_SHIFT)                  /*!< CAU_RADR_CASR: IC Mask                  */
#define CAU_RADR_CASR_IC_SHIFT                   0                                                   /*!< CAU_RADR_CASR: IC Position              */
#define CAU_RADR_CASR_DPE_MASK                   (0x01UL << CAU_RADR_CASR_DPE_SHIFT)                 /*!< CAU_RADR_CASR: DPE Mask                 */
#define CAU_RADR_CASR_DPE_SHIFT                  1                                                   /*!< CAU_RADR_CASR: DPE Position             */
#define CAU_RADR_CASR_VER_MASK                   (0x0FUL << CAU_RADR_CASR_VER_SHIFT)                 /*!< CAU_RADR_CASR: VER Mask                 */
#define CAU_RADR_CASR_VER_SHIFT                  28                                                  /*!< CAU_RADR_CASR: VER Position             */
#define CAU_RADR_CASR_VER(x)                     (((x)<<CAU_RADR_CASR_VER_SHIFT)&CAU_RADR_CASR_VER_MASK) /*!< CAU_RADR_CASR                           */

/* ------- CAU_RADR_CAA                             ------ */

/* ------- CAU_RADR_CA                              ------ */

/* ------- CAU_XOR_CASR                             ------ */
#define CAU_XOR_CASR_IC_MASK                     (0x01UL << CAU_XOR_CASR_IC_SHIFT)                   /*!< CAU_XOR_CASR: IC Mask                   */
#define CAU_XOR_CASR_IC_SHIFT                    0                                                   /*!< CAU_XOR_CASR: IC Position               */
#define CAU_XOR_CASR_DPE_MASK                    (0x01UL << CAU_XOR_CASR_DPE_SHIFT)                  /*!< CAU_XOR_CASR: DPE Mask                  */
#define CAU_XOR_CASR_DPE_SHIFT                   1                                                   /*!< CAU_XOR_CASR: DPE Position              */
#define CAU_XOR_CASR_VER_MASK                    (0x0FUL << CAU_XOR_CASR_VER_SHIFT)                  /*!< CAU_XOR_CASR: VER Mask                  */
#define CAU_XOR_CASR_VER_SHIFT                   28                                                  /*!< CAU_XOR_CASR: VER Position              */
#define CAU_XOR_CASR_VER(x)                      (((x)<<CAU_XOR_CASR_VER_SHIFT)&CAU_XOR_CASR_VER_MASK) /*!< CAU_XOR_CASR                            */

/* ------- CAU_XOR_CAA                              ------ */

/* ------- CAU_XOR_CA                               ------ */

/* ------- CAU_ROTL_CASR                            ------ */
#define CAU_ROTL_CASR_IC_MASK                    (0x01UL << CAU_ROTL_CASR_IC_SHIFT)                  /*!< CAU_ROTL_CASR: IC Mask                  */
#define CAU_ROTL_CASR_IC_SHIFT                   0                                                   /*!< CAU_ROTL_CASR: IC Position              */
#define CAU_ROTL_CASR_DPE_MASK                   (0x01UL << CAU_ROTL_CASR_DPE_SHIFT)                 /*!< CAU_ROTL_CASR: DPE Mask                 */
#define CAU_ROTL_CASR_DPE_SHIFT                  1                                                   /*!< CAU_ROTL_CASR: DPE Position             */
#define CAU_ROTL_CASR_VER_MASK                   (0x0FUL << CAU_ROTL_CASR_VER_SHIFT)                 /*!< CAU_ROTL_CASR: VER Mask                 */
#define CAU_ROTL_CASR_VER_SHIFT                  28                                                  /*!< CAU_ROTL_CASR: VER Position             */
#define CAU_ROTL_CASR_VER(x)                     (((x)<<CAU_ROTL_CASR_VER_SHIFT)&CAU_ROTL_CASR_VER_MASK) /*!< CAU_ROTL_CASR                           */

/* ------- CAU_ROTL_CAA                             ------ */

/* ------- CAU_ROTL_CA                              ------ */

/* ------- CAU_AESC_CASR                            ------ */
#define CAU_AESC_CASR_IC_MASK                    (0x01UL << CAU_AESC_CASR_IC_SHIFT)                  /*!< CAU_AESC_CASR: IC Mask                  */
#define CAU_AESC_CASR_IC_SHIFT                   0                                                   /*!< CAU_AESC_CASR: IC Position              */
#define CAU_AESC_CASR_DPE_MASK                   (0x01UL << CAU_AESC_CASR_DPE_SHIFT)                 /*!< CAU_AESC_CASR: DPE Mask                 */
#define CAU_AESC_CASR_DPE_SHIFT                  1                                                   /*!< CAU_AESC_CASR: DPE Position             */
#define CAU_AESC_CASR_VER_MASK                   (0x0FUL << CAU_AESC_CASR_VER_SHIFT)                 /*!< CAU_AESC_CASR: VER Mask                 */
#define CAU_AESC_CASR_VER_SHIFT                  28                                                  /*!< CAU_AESC_CASR: VER Position             */
#define CAU_AESC_CASR_VER(x)                     (((x)<<CAU_AESC_CASR_VER_SHIFT)&CAU_AESC_CASR_VER_MASK) /*!< CAU_AESC_CASR                           */

/* ------- CAU_AESC_CAA                             ------ */

/* ------- CAU_AESC_CA                              ------ */

/* ------- CAU_AESIC_CASR                           ------ */
#define CAU_AESIC_CASR_IC_MASK                   (0x01UL << CAU_AESIC_CASR_IC_SHIFT)                 /*!< CAU_AESIC_CASR: IC Mask                 */
#define CAU_AESIC_CASR_IC_SHIFT                  0                                                   /*!< CAU_AESIC_CASR: IC Position             */
#define CAU_AESIC_CASR_DPE_MASK                  (0x01UL << CAU_AESIC_CASR_DPE_SHIFT)                /*!< CAU_AESIC_CASR: DPE Mask                */
#define CAU_AESIC_CASR_DPE_SHIFT                 1                                                   /*!< CAU_AESIC_CASR: DPE Position            */
#define CAU_AESIC_CASR_VER_MASK                  (0x0FUL << CAU_AESIC_CASR_VER_SHIFT)                /*!< CAU_AESIC_CASR: VER Mask                */
#define CAU_AESIC_CASR_VER_SHIFT                 28                                                  /*!< CAU_AESIC_CASR: VER Position            */
#define CAU_AESIC_CASR_VER(x)                    (((x)<<CAU_AESIC_CASR_VER_SHIFT)&CAU_AESIC_CASR_VER_MASK) /*!< CAU_AESIC_CASR                          */

/* ------- CAU_AESIC_CAA                            ------ */

/* ------- CAU_AESIC_CA                             ------ */

/* -------------------------------------------------------------------------------- */
/* -----------     'CAU' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define CAU_DIRECT0                    (CAU->DIRECT[0])
#define CAU_DIRECT1                    (CAU->DIRECT[1])
#define CAU_DIRECT2                    (CAU->DIRECT[2])
#define CAU_DIRECT3                    (CAU->DIRECT[3])
#define CAU_DIRECT4                    (CAU->DIRECT[4])
#define CAU_DIRECT5                    (CAU->DIRECT[5])
#define CAU_DIRECT6                    (CAU->DIRECT[6])
#define CAU_DIRECT7                    (CAU->DIRECT[7])
#define CAU_DIRECT8                    (CAU->DIRECT[8])
#define CAU_DIRECT9                    (CAU->DIRECT[9])
#define CAU_DIRECT10                   (CAU->DIRECT[10])
#define CAU_DIRECT11                   (CAU->DIRECT[11])
#define CAU_DIRECT12                   (CAU->DIRECT[12])
#define CAU_DIRECT13                   (CAU->DIRECT[13])
#define CAU_DIRECT14                   (CAU->DIRECT[14])
#define CAU_DIRECT15                   (CAU->DIRECT[15])
#define CAU_LDR_CASR                   (CAU->LDR_CASR)
#define CAU_LDR_CAA                    (CAU->LDR_CAA)
#define CAU_LDR_CA0                    (CAU->LDR_CA[0])
#define CAU_LDR_CA1                    (CAU->LDR_CA[1])
#define CAU_LDR_CA2                    (CAU->LDR_CA[2])
#define CAU_LDR_CA3                    (CAU->LDR_CA[3])
#define CAU_LDR_CA4                    (CAU->LDR_CA[4])
#define CAU_LDR_CA5                    (CAU->LDR_CA[5])
#define CAU_LDR_CA6                    (CAU->LDR_CA[6])
#define CAU_LDR_CA7                    (CAU->LDR_CA[7])
#define CAU_LDR_CA8                    (CAU->LDR_CA[8])
#define CAU_STR_CASR                   (CAU->STR_CASR)
#define CAU_STR_CAA                    (CAU->STR_CAA)
#define CAU_STR_CA0                    (CAU->STR_CA[0])
#define CAU_STR_CA1                    (CAU->STR_CA[1])
#define CAU_STR_CA2                    (CAU->STR_CA[2])
#define CAU_STR_CA3                    (CAU->STR_CA[3])
#define CAU_STR_CA4                    (CAU->STR_CA[4])
#define CAU_STR_CA5                    (CAU->STR_CA[5])
#define CAU_STR_CA6                    (CAU->STR_CA[6])
#define CAU_STR_CA7                    (CAU->STR_CA[7])
#define CAU_STR_CA8                    (CAU->STR_CA[8])
#define CAU_ADR_CASR                   (CAU->ADR_CASR)
#define CAU_ADR_CAA                    (CAU->ADR_CAA)
#define CAU_ADR_CA0                    (CAU->ADR_CA[0])
#define CAU_ADR_CA1                    (CAU->ADR_CA[1])
#define CAU_ADR_CA2                    (CAU->ADR_CA[2])
#define CAU_ADR_CA3                    (CAU->ADR_CA[3])
#define CAU_ADR_CA4                    (CAU->ADR_CA[4])
#define CAU_ADR_CA5                    (CAU->ADR_CA[5])
#define CAU_ADR_CA6                    (CAU->ADR_CA[6])
#define CAU_ADR_CA7                    (CAU->ADR_CA[7])
#define CAU_ADR_CA8                    (CAU->ADR_CA[8])
#define CAU_RADR_CASR                  (CAU->RADR_CASR)
#define CAU_RADR_CAA                   (CAU->RADR_CAA)
#define CAU_RADR_CA0                   (CAU->RADR_CA[0])
#define CAU_RADR_CA1                   (CAU->RADR_CA[1])
#define CAU_RADR_CA2                   (CAU->RADR_CA[2])
#define CAU_RADR_CA3                   (CAU->RADR_CA[3])
#define CAU_RADR_CA4                   (CAU->RADR_CA[4])
#define CAU_RADR_CA5                   (CAU->RADR_CA[5])
#define CAU_RADR_CA6                   (CAU->RADR_CA[6])
#define CAU_RADR_CA7                   (CAU->RADR_CA[7])
#define CAU_RADR_CA8                   (CAU->RADR_CA[8])
#define CAU_XOR_CASR                   (CAU->XOR_CASR)
#define CAU_XOR_CAA                    (CAU->XOR_CAA)
#define CAU_XOR_CA0                    (CAU->XOR_CA[0])
#define CAU_XOR_CA1                    (CAU->XOR_CA[1])
#define CAU_XOR_CA2                    (CAU->XOR_CA[2])
#define CAU_XOR_CA3                    (CAU->XOR_CA[3])
#define CAU_XOR_CA4                    (CAU->XOR_CA[4])
#define CAU_XOR_CA5                    (CAU->XOR_CA[5])
#define CAU_XOR_CA6                    (CAU->XOR_CA[6])
#define CAU_XOR_CA7                    (CAU->XOR_CA[7])
#define CAU_XOR_CA8                    (CAU->XOR_CA[8])
#define CAU_ROTL_CASR                  (CAU->ROTL_CASR)
#define CAU_ROTL_CAA                   (CAU->ROTL_CAA)
#define CAU_ROTL_CA0                   (CAU->ROTL_CA[0])
#define CAU_ROTL_CA1                   (CAU->ROTL_CA[1])
#define CAU_ROTL_CA2                   (CAU->ROTL_CA[2])
#define CAU_ROTL_CA3                   (CAU->ROTL_CA[3])
#define CAU_ROTL_CA4                   (CAU->ROTL_CA[4])
#define CAU_ROTL_CA5                   (CAU->ROTL_CA[5])
#define CAU_ROTL_CA6                   (CAU->ROTL_CA[6])
#define CAU_ROTL_CA7                   (CAU->ROTL_CA[7])
#define CAU_ROTL_CA8                   (CAU->ROTL_CA[8])
#define CAU_AESC_CASR                  (CAU->AESC_CASR)
#define CAU_AESC_CAA                   (CAU->AESC_CAA)
#define CAU_AESC_CA0                   (CAU->AESC_CA[0])
#define CAU_AESC_CA1                   (CAU->AESC_CA[1])
#define CAU_AESC_CA2                   (CAU->AESC_CA[2])
#define CAU_AESC_CA3                   (CAU->AESC_CA[3])
#define CAU_AESC_CA4                   (CAU->AESC_CA[4])
#define CAU_AESC_CA5                   (CAU->AESC_CA[5])
#define CAU_AESC_CA6                   (CAU->AESC_CA[6])
#define CAU_AESC_CA7                   (CAU->AESC_CA[7])
#define CAU_AESC_CA8                   (CAU->AESC_CA[8])
#define CAU_AESIC_CASR                 (CAU->AESIC_CASR)
#define CAU_AESIC_CAA                  (CAU->AESIC_CAA)
#define CAU_AESIC_CA0                  (CAU->AESIC_CA[0])
#define CAU_AESIC_CA1                  (CAU->AESIC_CA[1])
#define CAU_AESIC_CA2                  (CAU->AESIC_CA[2])
#define CAU_AESIC_CA3                  (CAU->AESIC_CA[3])
#define CAU_AESIC_CA4                  (CAU->AESIC_CA[4])
#define CAU_AESIC_CA5                  (CAU->AESIC_CA[5])
#define CAU_AESIC_CA6                  (CAU->AESIC_CA[6])
#define CAU_AESIC_CA7                  (CAU->AESIC_CA[7])
#define CAU_AESIC_CA8                  (CAU->AESIC_CA[8])

/* ================================================================================ */
/* ================           CMP0 (file:CMP0_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Comparator, Voltage Ref, D-to-A Converter and Analog Mux
 */
typedef struct {                                /*!<       CMP0 Structure                                               */
   __IO uint8_t   CR0;                          /*!< 0000: CMP Control Register 0                                       */
   __IO uint8_t   CR1;                          /*!< 0001: CMP Control Register 1                                       */
   __IO uint8_t   FPR;                          /*!< 0002: CMP Filter Period Register                                   */
   __IO uint8_t   SCR;                          /*!< 0003: CMP Status and Control Register                              */
   __IO uint8_t   DACCR;                        /*!< 0004: DAC Control Register                                         */
   __IO uint8_t   MUXCR;                        /*!< 0005: MUX Control Register                                         */
} CMP0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- CMP0_CR0                                 ------ */
#define CMP_CR0_HYSTCTR_MASK                     (0x03UL << CMP_CR0_HYSTCTR_SHIFT)                   /*!< CMP0_CR0: HYSTCTR Mask                  */
#define CMP_CR0_HYSTCTR_SHIFT                    0                                                   /*!< CMP0_CR0: HYSTCTR Position              */
#define CMP_CR0_HYSTCTR(x)                       (((x)<<CMP_CR0_HYSTCTR_SHIFT)&CMP_CR0_HYSTCTR_MASK) /*!< CMP0_CR0                                */
#define CMP_CR0_FILTER_CNT_MASK                  (0x07UL << CMP_CR0_FILTER_CNT_SHIFT)                /*!< CMP0_CR0: FILTER_CNT Mask               */
#define CMP_CR0_FILTER_CNT_SHIFT                 4                                                   /*!< CMP0_CR0: FILTER_CNT Position           */
#define CMP_CR0_FILTER_CNT(x)                    (((x)<<CMP_CR0_FILTER_CNT_SHIFT)&CMP_CR0_FILTER_CNT_MASK) /*!< CMP0_CR0                                */

/* ------- CMP0_CR1                                 ------ */
#define CMP_CR1_EN_MASK                          (0x01UL << CMP_CR1_EN_SHIFT)                        /*!< CMP0_CR1: EN Mask                       */
#define CMP_CR1_EN_SHIFT                         0                                                   /*!< CMP0_CR1: EN Position                   */
#define CMP_CR1_OPE_MASK                         (0x01UL << CMP_CR1_OPE_SHIFT)                       /*!< CMP0_CR1: OPE Mask                      */
#define CMP_CR1_OPE_SHIFT                        1                                                   /*!< CMP0_CR1: OPE Position                  */
#define CMP_CR1_COS_MASK                         (0x01UL << CMP_CR1_COS_SHIFT)                       /*!< CMP0_CR1: COS Mask                      */
#define CMP_CR1_COS_SHIFT                        2                                                   /*!< CMP0_CR1: COS Position                  */
#define CMP_CR1_INV_MASK                         (0x01UL << CMP_CR1_INV_SHIFT)                       /*!< CMP0_CR1: INV Mask                      */
#define CMP_CR1_INV_SHIFT                        3                                                   /*!< CMP0_CR1: INV Position                  */
#define CMP_CR1_PMODE_MASK                       (0x01UL << CMP_CR1_PMODE_SHIFT)                     /*!< CMP0_CR1: PMODE Mask                    */
#define CMP_CR1_PMODE_SHIFT                      4                                                   /*!< CMP0_CR1: PMODE Position                */
#define CMP_CR1_WE_MASK                          (0x01UL << CMP_CR1_WE_SHIFT)                        /*!< CMP0_CR1: WE Mask                       */
#define CMP_CR1_WE_SHIFT                         6                                                   /*!< CMP0_CR1: WE Position                   */
#define CMP_CR1_SE_MASK                          (0x01UL << CMP_CR1_SE_SHIFT)                        /*!< CMP0_CR1: SE Mask                       */
#define CMP_CR1_SE_SHIFT                         7                                                   /*!< CMP0_CR1: SE Position                   */

/* ------- CMP0_FPR                                 ------ */
#define CMP_FPR_FILT_PER_MASK                    (0xFFUL << CMP_FPR_FILT_PER_SHIFT)                  /*!< CMP0_FPR: FILT_PER Mask                 */
#define CMP_FPR_FILT_PER_SHIFT                   0                                                   /*!< CMP0_FPR: FILT_PER Position             */
#define CMP_FPR_FILT_PER(x)                      (((x)<<CMP_FPR_FILT_PER_SHIFT)&CMP_FPR_FILT_PER_MASK) /*!< CMP0_FPR                                */

/* ------- CMP0_SCR                                 ------ */
#define CMP_SCR_COUT_MASK                        (0x01UL << CMP_SCR_COUT_SHIFT)                      /*!< CMP0_SCR: COUT Mask                     */
#define CMP_SCR_COUT_SHIFT                       0                                                   /*!< CMP0_SCR: COUT Position                 */
#define CMP_SCR_CFF_MASK                         (0x01UL << CMP_SCR_CFF_SHIFT)                       /*!< CMP0_SCR: CFF Mask                      */
#define CMP_SCR_CFF_SHIFT                        1                                                   /*!< CMP0_SCR: CFF Position                  */
#define CMP_SCR_CFR_MASK                         (0x01UL << CMP_SCR_CFR_SHIFT)                       /*!< CMP0_SCR: CFR Mask                      */
#define CMP_SCR_CFR_SHIFT                        2                                                   /*!< CMP0_SCR: CFR Position                  */
#define CMP_SCR_IEF_MASK                         (0x01UL << CMP_SCR_IEF_SHIFT)                       /*!< CMP0_SCR: IEF Mask                      */
#define CMP_SCR_IEF_SHIFT                        3                                                   /*!< CMP0_SCR: IEF Position                  */
#define CMP_SCR_IER_MASK                         (0x01UL << CMP_SCR_IER_SHIFT)                       /*!< CMP0_SCR: IER Mask                      */
#define CMP_SCR_IER_SHIFT                        4                                                   /*!< CMP0_SCR: IER Position                  */
#define CMP_SCR_DMAEN_MASK                       (0x01UL << CMP_SCR_DMAEN_SHIFT)                     /*!< CMP0_SCR: DMAEN Mask                    */
#define CMP_SCR_DMAEN_SHIFT                      6                                                   /*!< CMP0_SCR: DMAEN Position                */

/* ------- CMP0_DACCR                               ------ */
#define CMP_DACCR_VOSEL_MASK                     (0x3FUL << CMP_DACCR_VOSEL_SHIFT)                   /*!< CMP0_DACCR: VOSEL Mask                  */
#define CMP_DACCR_VOSEL_SHIFT                    0                                                   /*!< CMP0_DACCR: VOSEL Position              */
#define CMP_DACCR_VOSEL(x)                       (((x)<<CMP_DACCR_VOSEL_SHIFT)&CMP_DACCR_VOSEL_MASK) /*!< CMP0_DACCR                              */
#define CMP_DACCR_VRSEL_MASK                     (0x01UL << CMP_DACCR_VRSEL_SHIFT)                   /*!< CMP0_DACCR: VRSEL Mask                  */
#define CMP_DACCR_VRSEL_SHIFT                    6                                                   /*!< CMP0_DACCR: VRSEL Position              */
#define CMP_DACCR_DACEN_MASK                     (0x01UL << CMP_DACCR_DACEN_SHIFT)                   /*!< CMP0_DACCR: DACEN Mask                  */
#define CMP_DACCR_DACEN_SHIFT                    7                                                   /*!< CMP0_DACCR: DACEN Position              */

/* ------- CMP0_MUXCR                               ------ */
#define CMP_MUXCR_MSEL_MASK                      (0x07UL << CMP_MUXCR_MSEL_SHIFT)                    /*!< CMP0_MUXCR: MSEL Mask                   */
#define CMP_MUXCR_MSEL_SHIFT                     0                                                   /*!< CMP0_MUXCR: MSEL Position               */
#define CMP_MUXCR_MSEL(x)                        (((x)<<CMP_MUXCR_MSEL_SHIFT)&CMP_MUXCR_MSEL_MASK)   /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSEL_MASK                      (0x07UL << CMP_MUXCR_PSEL_SHIFT)                    /*!< CMP0_MUXCR: PSEL Mask                   */
#define CMP_MUXCR_PSEL_SHIFT                     3                                                   /*!< CMP0_MUXCR: PSEL Position               */
#define CMP_MUXCR_PSEL(x)                        (((x)<<CMP_MUXCR_PSEL_SHIFT)&CMP_MUXCR_PSEL_MASK)   /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSTM_MASK                      (0x01UL << CMP_MUXCR_PSTM_SHIFT)                    /*!< CMP0_MUXCR: PSTM Mask                   */
#define CMP_MUXCR_PSTM_SHIFT                     7                                                   /*!< CMP0_MUXCR: PSTM Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define CMP0_CR0                       (CMP0->CR0)
#define CMP0_CR1                       (CMP0->CR1)
#define CMP0_FPR                       (CMP0->FPR)
#define CMP0_SCR                       (CMP0->SCR)
#define CMP0_DACCR                     (CMP0->DACCR)
#define CMP0_MUXCR                     (CMP0->MUXCR)

/* ================================================================================ */
/* ================           CMP1 (derived from CMP0)             ================ */
/* ================================================================================ */

/**
 * @brief Comparator, Voltage Ref, D-to-A Converter and Analog Mux
 */
typedef CMP0_Type CMP1_Type;  /*!< CMP1 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'CMP1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define CMP1_CR0                       (CMP1->CR0)
#define CMP1_CR1                       (CMP1->CR1)
#define CMP1_FPR                       (CMP1->FPR)
#define CMP1_SCR                       (CMP1->SCR)
#define CMP1_DACCR                     (CMP1->DACCR)
#define CMP1_MUXCR                     (CMP1->MUXCR)

/* ================================================================================ */
/* ================           CMT (file:CMT_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Carrier Modulator Transmitter
 */
typedef struct {                                /*!<       CMT Structure                                                */
   __IO uint8_t   CGH1;                         /*!< 0000: Carrier Generator High Data Register 1                       */
   __IO uint8_t   CGL1;                         /*!< 0001: Carrier Generator Low Data Register 1                        */
   __IO uint8_t   CGH2;                         /*!< 0002: Carrier Generator High Data Register 2                       */
   __IO uint8_t   CGL2;                         /*!< 0003: Carrier Generator Low Data Register 2                        */
   __IO uint8_t   OC;                           /*!< 0004: Output Control Register                                      */
   __IO uint8_t   MSC;                          /*!< 0005: Modulator Status and Control Register                        */
   __IO uint8_t   CMD1;                         /*!< 0006: Modulator Data Register Mark High                            */
   __IO uint8_t   CMD2;                         /*!< 0007: Modulator Data Register Mark Low                             */
   __IO uint8_t   CMD3;                         /*!< 0008: Modulator Data Register Space High                           */
   __IO uint8_t   CMD4;                         /*!< 0009: Modulator Data Register Space Low                            */
   __IO uint8_t   PPS;                          /*!< 000A: Primary Prescaler Register                                   */
   __IO uint8_t   DMA;                          /*!< 000B: Direct Memory Access Register                                */
} CMT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CMT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- CMT_CGH1                                 ------ */
#define CMT_CGH1_PH_MASK                         (0xFFUL << CMT_CGH1_PH_SHIFT)                       /*!< CMT_CGH1: PH Mask                       */
#define CMT_CGH1_PH_SHIFT                        0                                                   /*!< CMT_CGH1: PH Position                   */
#define CMT_CGH1_PH(x)                           (((x)<<CMT_CGH1_PH_SHIFT)&CMT_CGH1_PH_MASK)         /*!< CMT_CGH1                                */

/* ------- CMT_CGL1                                 ------ */
#define CMT_CGL1_PL_MASK                         (0xFFUL << CMT_CGL1_PL_SHIFT)                       /*!< CMT_CGL1: PL Mask                       */
#define CMT_CGL1_PL_SHIFT                        0                                                   /*!< CMT_CGL1: PL Position                   */
#define CMT_CGL1_PL(x)                           (((x)<<CMT_CGL1_PL_SHIFT)&CMT_CGL1_PL_MASK)         /*!< CMT_CGL1                                */

/* ------- CMT_CGH2                                 ------ */
#define CMT_CGH2_SH_MASK                         (0xFFUL << CMT_CGH2_SH_SHIFT)                       /*!< CMT_CGH2: SH Mask                       */
#define CMT_CGH2_SH_SHIFT                        0                                                   /*!< CMT_CGH2: SH Position                   */
#define CMT_CGH2_SH(x)                           (((x)<<CMT_CGH2_SH_SHIFT)&CMT_CGH2_SH_MASK)         /*!< CMT_CGH2                                */

/* ------- CMT_CGL2                                 ------ */
#define CMT_CGL2_SL_MASK                         (0xFFUL << CMT_CGL2_SL_SHIFT)                       /*!< CMT_CGL2: SL Mask                       */
#define CMT_CGL2_SL_SHIFT                        0                                                   /*!< CMT_CGL2: SL Position                   */
#define CMT_CGL2_SL(x)                           (((x)<<CMT_CGL2_SL_SHIFT)&CMT_CGL2_SL_MASK)         /*!< CMT_CGL2                                */

/* ------- CMT_OC                                   ------ */
#define CMT_OC_IROPEN_MASK                       (0x01UL << CMT_OC_IROPEN_SHIFT)                     /*!< CMT_OC: IROPEN Mask                     */
#define CMT_OC_IROPEN_SHIFT                      5                                                   /*!< CMT_OC: IROPEN Position                 */
#define CMT_OC_CMTPOL_MASK                       (0x01UL << CMT_OC_CMTPOL_SHIFT)                     /*!< CMT_OC: CMTPOL Mask                     */
#define CMT_OC_CMTPOL_SHIFT                      6                                                   /*!< CMT_OC: CMTPOL Position                 */
#define CMT_OC_IROL_MASK                         (0x01UL << CMT_OC_IROL_SHIFT)                       /*!< CMT_OC: IROL Mask                       */
#define CMT_OC_IROL_SHIFT                        7                                                   /*!< CMT_OC: IROL Position                   */

/* ------- CMT_MSC                                  ------ */
#define CMT_MSC_MCGEN_MASK                       (0x01UL << CMT_MSC_MCGEN_SHIFT)                     /*!< CMT_MSC: MCGEN Mask                     */
#define CMT_MSC_MCGEN_SHIFT                      0                                                   /*!< CMT_MSC: MCGEN Position                 */
#define CMT_MSC_EOCIE_MASK                       (0x01UL << CMT_MSC_EOCIE_SHIFT)                     /*!< CMT_MSC: EOCIE Mask                     */
#define CMT_MSC_EOCIE_SHIFT                      1                                                   /*!< CMT_MSC: EOCIE Position                 */
#define CMT_MSC_FSK_MASK                         (0x01UL << CMT_MSC_FSK_SHIFT)                       /*!< CMT_MSC: FSK Mask                       */
#define CMT_MSC_FSK_SHIFT                        2                                                   /*!< CMT_MSC: FSK Position                   */
#define CMT_MSC_BASE_MASK                        (0x01UL << CMT_MSC_BASE_SHIFT)                      /*!< CMT_MSC: BASE Mask                      */
#define CMT_MSC_BASE_SHIFT                       3                                                   /*!< CMT_MSC: BASE Position                  */
#define CMT_MSC_EXSPC_MASK                       (0x01UL << CMT_MSC_EXSPC_SHIFT)                     /*!< CMT_MSC: EXSPC Mask                     */
#define CMT_MSC_EXSPC_SHIFT                      4                                                   /*!< CMT_MSC: EXSPC Position                 */
#define CMT_MSC_CMTDIV_MASK                      (0x03UL << CMT_MSC_CMTDIV_SHIFT)                    /*!< CMT_MSC: CMTDIV Mask                    */
#define CMT_MSC_CMTDIV_SHIFT                     5                                                   /*!< CMT_MSC: CMTDIV Position                */
#define CMT_MSC_CMTDIV(x)                        (((x)<<CMT_MSC_CMTDIV_SHIFT)&CMT_MSC_CMTDIV_MASK)   /*!< CMT_MSC                                 */
#define CMT_MSC_EOCF_MASK                        (0x01UL << CMT_MSC_EOCF_SHIFT)                      /*!< CMT_MSC: EOCF Mask                      */
#define CMT_MSC_EOCF_SHIFT                       7                                                   /*!< CMT_MSC: EOCF Position                  */

/* ------- CMT_CMD1                                 ------ */
#define CMT_CMD1_MB_MASK                         (0xFFUL << CMT_CMD1_MB_SHIFT)                       /*!< CMT_CMD1: MB Mask                       */
#define CMT_CMD1_MB_SHIFT                        0                                                   /*!< CMT_CMD1: MB Position                   */
#define CMT_CMD1_MB(x)                           (((x)<<CMT_CMD1_MB_SHIFT)&CMT_CMD1_MB_MASK)         /*!< CMT_CMD1                                */

/* ------- CMT_CMD2                                 ------ */
#define CMT_CMD2_MB_MASK                         (0xFFUL << CMT_CMD2_MB_SHIFT)                       /*!< CMT_CMD2: MB Mask                       */
#define CMT_CMD2_MB_SHIFT                        0                                                   /*!< CMT_CMD2: MB Position                   */
#define CMT_CMD2_MB(x)                           (((x)<<CMT_CMD2_MB_SHIFT)&CMT_CMD2_MB_MASK)         /*!< CMT_CMD2                                */

/* ------- CMT_CMD3                                 ------ */
#define CMT_CMD3_SB_MASK                         (0xFFUL << CMT_CMD3_SB_SHIFT)                       /*!< CMT_CMD3: SB Mask                       */
#define CMT_CMD3_SB_SHIFT                        0                                                   /*!< CMT_CMD3: SB Position                   */
#define CMT_CMD3_SB(x)                           (((x)<<CMT_CMD3_SB_SHIFT)&CMT_CMD3_SB_MASK)         /*!< CMT_CMD3                                */

/* ------- CMT_CMD4                                 ------ */
#define CMT_CMD4_SB_MASK                         (0xFFUL << CMT_CMD4_SB_SHIFT)                       /*!< CMT_CMD4: SB Mask                       */
#define CMT_CMD4_SB_SHIFT                        0                                                   /*!< CMT_CMD4: SB Position                   */
#define CMT_CMD4_SB(x)                           (((x)<<CMT_CMD4_SB_SHIFT)&CMT_CMD4_SB_MASK)         /*!< CMT_CMD4                                */

/* ------- CMT_PPS                                  ------ */
#define CMT_PPS_PPSDIV_MASK                      (0x0FUL << CMT_PPS_PPSDIV_SHIFT)                    /*!< CMT_PPS: PPSDIV Mask                    */
#define CMT_PPS_PPSDIV_SHIFT                     0                                                   /*!< CMT_PPS: PPSDIV Position                */
#define CMT_PPS_PPSDIV(x)                        (((x)<<CMT_PPS_PPSDIV_SHIFT)&CMT_PPS_PPSDIV_MASK)   /*!< CMT_PPS                                 */

/* ------- CMT_DMA                                  ------ */
#define CMT_DMA_DMA_MASK                         (0x01UL << CMT_DMA_DMA_SHIFT)                       /*!< CMT_DMA: DMA Mask                       */
#define CMT_DMA_DMA_SHIFT                        0                                                   /*!< CMT_DMA: DMA Position                   */

/* -------------------------------------------------------------------------------- */
/* -----------     'CMT' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define CMT_CGH1                       (CMT->CGH1)
#define CMT_CGL1                       (CMT->CGL1)
#define CMT_CGH2                       (CMT->CGH2)
#define CMT_CGL2                       (CMT->CGL2)
#define CMT_OC                         (CMT->OC)
#define CMT_MSC                        (CMT->MSC)
#define CMT_CMD1                       (CMT->CMD1)
#define CMT_CMD2                       (CMT->CMD2)
#define CMT_CMD3                       (CMT->CMD3)
#define CMT_CMD4                       (CMT->CMD4)
#define CMT_PPS                        (CMT->PPS)
#define CMT_DMA                        (CMT->DMA)

/* ================================================================================ */
/* ================           CRC (file:CRC)                       ================ */
/* ================================================================================ */

/**
 * @brief Cyclic Redundancy Check
 */
typedef struct {                                /*!<       CRC Structure                                                */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  DATA;                      /*!< 0000: Data register                                                */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAL;               /*!< 0000: DATAL register                                               */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   DATALL;           /*!< 0000: DATALL register                                              */
               __IO uint8_t   DATALU;           /*!< 0001: DATALU register                                              */
            };
         };
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAH;               /*!< 0002: DATAH register                                               */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   DATAHL;           /*!< 0002: DATAHL register                                              */
               __IO uint8_t   DATAHU;           /*!< 0003: DATAHU register                                              */
            };
         };
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  GPOLY;                     /*!< 0004: Polynomial register                                          */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYL;              /*!< 0004: GPOLYL register                                              */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYLL;          /*!< 0004: GPOLYLL register                                             */
               __IO uint8_t   GPOLYLU;          /*!< 0005: GPOLYLU register                                             */
            };
         };
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYH;              /*!< 0006: GPOLYH register                                              */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYHL;          /*!< 0006: GPOLYHL register                                             */
               __IO uint8_t   GPOLYHU;          /*!< 0007: GPOLYHU register                                             */
            };
         };
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  CTRL;                      /*!< 0008: Control register                                             */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __I  uint8_t   RESERVED0[3];           /*!< 0008:                                                              */
         __IO uint8_t   CTRLHU;                 /*!< 000B: Control register (byte access)                               */
      };
   };
} CRC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CRC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- CRC_DATA                                 ------ */
#define CRC_DATA_LL_MASK                         (0xFFUL << CRC_DATA_LL_SHIFT)                       /*!< CRC_DATA: LL Mask                       */
#define CRC_DATA_LL_SHIFT                        0                                                   /*!< CRC_DATA: LL Position                   */
#define CRC_DATA_LL(x)                           (((x)<<CRC_DATA_LL_SHIFT)&CRC_DATA_LL_MASK)         /*!< CRC_DATA                                */
#define CRC_DATA_LU_MASK                         (0xFFUL << CRC_DATA_LU_SHIFT)                       /*!< CRC_DATA: LU Mask                       */
#define CRC_DATA_LU_SHIFT                        8                                                   /*!< CRC_DATA: LU Position                   */
#define CRC_DATA_LU(x)                           (((x)<<CRC_DATA_LU_SHIFT)&CRC_DATA_LU_MASK)         /*!< CRC_DATA                                */
#define CRC_DATA_HL_MASK                         (0xFFUL << CRC_DATA_HL_SHIFT)                       /*!< CRC_DATA: HL Mask                       */
#define CRC_DATA_HL_SHIFT                        16                                                  /*!< CRC_DATA: HL Position                   */
#define CRC_DATA_HL(x)                           (((x)<<CRC_DATA_HL_SHIFT)&CRC_DATA_HL_MASK)         /*!< CRC_DATA                                */
#define CRC_DATA_HU_MASK                         (0xFFUL << CRC_DATA_HU_SHIFT)                       /*!< CRC_DATA: HU Mask                       */
#define CRC_DATA_HU_SHIFT                        24                                                  /*!< CRC_DATA: HU Position                   */
#define CRC_DATA_HU(x)                           (((x)<<CRC_DATA_HU_SHIFT)&CRC_DATA_HU_MASK)         /*!< CRC_DATA                                */

/* ------- CRC_DATAL                                ------ */
#define CRC_DATAL_DATAL_MASK                     (0xFFFFUL << CRC_DATAL_DATAL_SHIFT)                 /*!< CRC_DATAL: DATAL Mask                   */
#define CRC_DATAL_DATAL_SHIFT                    0                                                   /*!< CRC_DATAL: DATAL Position               */
#define CRC_DATAL_DATAL(x)                       (((x)<<CRC_DATAL_DATAL_SHIFT)&CRC_DATAL_DATAL_MASK) /*!< CRC_DATAL                               */

/* ------- CRC_DATALL                               ------ */
#define CRC_DATALL_DATALL_MASK                   (0xFFUL << CRC_DATALL_DATALL_SHIFT)                 /*!< CRC_DATALL: DATALL Mask                 */
#define CRC_DATALL_DATALL_SHIFT                  0                                                   /*!< CRC_DATALL: DATALL Position             */
#define CRC_DATALL_DATALL(x)                     (((x)<<CRC_DATALL_DATALL_SHIFT)&CRC_DATALL_DATALL_MASK) /*!< CRC_DATALL                              */

/* ------- CRC_DATALU                               ------ */
#define CRC_DATALU_DATALU_MASK                   (0xFFUL << CRC_DATALU_DATALU_SHIFT)                 /*!< CRC_DATALU: DATALU Mask                 */
#define CRC_DATALU_DATALU_SHIFT                  0                                                   /*!< CRC_DATALU: DATALU Position             */
#define CRC_DATALU_DATALU(x)                     (((x)<<CRC_DATALU_DATALU_SHIFT)&CRC_DATALU_DATALU_MASK) /*!< CRC_DATALU                              */

/* ------- CRC_DATAH                                ------ */
#define CRC_DATAH_DATAH_MASK                     (0xFFFFUL << CRC_DATAH_DATAH_SHIFT)                 /*!< CRC_DATAH: DATAH Mask                   */
#define CRC_DATAH_DATAH_SHIFT                    0                                                   /*!< CRC_DATAH: DATAH Position               */
#define CRC_DATAH_DATAH(x)                       (((x)<<CRC_DATAH_DATAH_SHIFT)&CRC_DATAH_DATAH_MASK) /*!< CRC_DATAH                               */

/* ------- CRC_DATAHL                               ------ */
#define CRC_DATAHL_DATAHL_MASK                   (0xFFUL << CRC_DATAHL_DATAHL_SHIFT)                 /*!< CRC_DATAHL: DATAHL Mask                 */
#define CRC_DATAHL_DATAHL_SHIFT                  0                                                   /*!< CRC_DATAHL: DATAHL Position             */
#define CRC_DATAHL_DATAHL(x)                     (((x)<<CRC_DATAHL_DATAHL_SHIFT)&CRC_DATAHL_DATAHL_MASK) /*!< CRC_DATAHL                              */

/* ------- CRC_DATAHU                               ------ */
#define CRC_DATAHU_DATAHU_MASK                   (0xFFUL << CRC_DATAHU_DATAHU_SHIFT)                 /*!< CRC_DATAHU: DATAHU Mask                 */
#define CRC_DATAHU_DATAHU_SHIFT                  0                                                   /*!< CRC_DATAHU: DATAHU Position             */
#define CRC_DATAHU_DATAHU(x)                     (((x)<<CRC_DATAHU_DATAHU_SHIFT)&CRC_DATAHU_DATAHU_MASK) /*!< CRC_DATAHU                              */

/* ------- CRC_GPOLY                                ------ */
#define CRC_GPOLY_LOW_MASK                       (0xFFFFUL << CRC_GPOLY_LOW_SHIFT)                   /*!< CRC_GPOLY: LOW Mask                     */
#define CRC_GPOLY_LOW_SHIFT                      0                                                   /*!< CRC_GPOLY: LOW Position                 */
#define CRC_GPOLY_LOW(x)                         (((x)<<CRC_GPOLY_LOW_SHIFT)&CRC_GPOLY_LOW_MASK)     /*!< CRC_GPOLY                               */
#define CRC_GPOLY_HIGH_MASK                      (0xFFFFUL << CRC_GPOLY_HIGH_SHIFT)                  /*!< CRC_GPOLY: HIGH Mask                    */
#define CRC_GPOLY_HIGH_SHIFT                     16                                                  /*!< CRC_GPOLY: HIGH Position                */
#define CRC_GPOLY_HIGH(x)                        (((x)<<CRC_GPOLY_HIGH_SHIFT)&CRC_GPOLY_HIGH_MASK)   /*!< CRC_GPOLY                               */

/* ------- CRC_GPOLYL                               ------ */
#define CRC_GPOLYL_GPOLYL_MASK                   (0xFFFFUL << CRC_GPOLYL_GPOLYL_SHIFT)               /*!< CRC_GPOLYL: GPOLYL Mask                 */
#define CRC_GPOLYL_GPOLYL_SHIFT                  0                                                   /*!< CRC_GPOLYL: GPOLYL Position             */
#define CRC_GPOLYL_GPOLYL(x)                     (((x)<<CRC_GPOLYL_GPOLYL_SHIFT)&CRC_GPOLYL_GPOLYL_MASK) /*!< CRC_GPOLYL                              */

/* ------- CRC_GPOLYLL                              ------ */
#define CRC_GPOLYLL_GPOLYLL_MASK                 (0xFFUL << CRC_GPOLYLL_GPOLYLL_SHIFT)               /*!< CRC_GPOLYLL: GPOLYLL Mask               */
#define CRC_GPOLYLL_GPOLYLL_SHIFT                0                                                   /*!< CRC_GPOLYLL: GPOLYLL Position           */
#define CRC_GPOLYLL_GPOLYLL(x)                   (((x)<<CRC_GPOLYLL_GPOLYLL_SHIFT)&CRC_GPOLYLL_GPOLYLL_MASK) /*!< CRC_GPOLYLL                             */

/* ------- CRC_GPOLYLU                              ------ */
#define CRC_GPOLYLU_GPOLYLU_MASK                 (0xFFUL << CRC_GPOLYLU_GPOLYLU_SHIFT)               /*!< CRC_GPOLYLU: GPOLYLU Mask               */
#define CRC_GPOLYLU_GPOLYLU_SHIFT                0                                                   /*!< CRC_GPOLYLU: GPOLYLU Position           */
#define CRC_GPOLYLU_GPOLYLU(x)                   (((x)<<CRC_GPOLYLU_GPOLYLU_SHIFT)&CRC_GPOLYLU_GPOLYLU_MASK) /*!< CRC_GPOLYLU                             */

/* ------- CRC_GPOLYH                               ------ */
#define CRC_GPOLYH_GPOLYH_MASK                   (0xFFFFUL << CRC_GPOLYH_GPOLYH_SHIFT)               /*!< CRC_GPOLYH: GPOLYH Mask                 */
#define CRC_GPOLYH_GPOLYH_SHIFT                  0                                                   /*!< CRC_GPOLYH: GPOLYH Position             */
#define CRC_GPOLYH_GPOLYH(x)                     (((x)<<CRC_GPOLYH_GPOLYH_SHIFT)&CRC_GPOLYH_GPOLYH_MASK) /*!< CRC_GPOLYH                              */

/* ------- CRC_GPOLYHL                              ------ */
#define CRC_GPOLYHL_GPOLYHL_MASK                 (0xFFUL << CRC_GPOLYHL_GPOLYHL_SHIFT)               /*!< CRC_GPOLYHL: GPOLYHL Mask               */
#define CRC_GPOLYHL_GPOLYHL_SHIFT                0                                                   /*!< CRC_GPOLYHL: GPOLYHL Position           */
#define CRC_GPOLYHL_GPOLYHL(x)                   (((x)<<CRC_GPOLYHL_GPOLYHL_SHIFT)&CRC_GPOLYHL_GPOLYHL_MASK) /*!< CRC_GPOLYHL                             */

/* ------- CRC_GPOLYHU                              ------ */
#define CRC_GPOLYHU_GPOLYHU_MASK                 (0xFFUL << CRC_GPOLYHU_GPOLYHU_SHIFT)               /*!< CRC_GPOLYHU: GPOLYHU Mask               */
#define CRC_GPOLYHU_GPOLYHU_SHIFT                0                                                   /*!< CRC_GPOLYHU: GPOLYHU Position           */
#define CRC_GPOLYHU_GPOLYHU(x)                   (((x)<<CRC_GPOLYHU_GPOLYHU_SHIFT)&CRC_GPOLYHU_GPOLYHU_MASK) /*!< CRC_GPOLYHU                             */

/* ------- CRC_CTRL                                 ------ */
#define CRC_CTRL_TCRC_MASK                       (0x01UL << CRC_CTRL_TCRC_SHIFT)                     /*!< CRC_CTRL: TCRC Mask                     */
#define CRC_CTRL_TCRC_SHIFT                      24                                                  /*!< CRC_CTRL: TCRC Position                 */
#define CRC_CTRL_WAS_MASK                        (0x01UL << CRC_CTRL_WAS_SHIFT)                      /*!< CRC_CTRL: WAS Mask                      */
#define CRC_CTRL_WAS_SHIFT                       25                                                  /*!< CRC_CTRL: WAS Position                  */
#define CRC_CTRL_FXOR_MASK                       (0x01UL << CRC_CTRL_FXOR_SHIFT)                     /*!< CRC_CTRL: FXOR Mask                     */
#define CRC_CTRL_FXOR_SHIFT                      26                                                  /*!< CRC_CTRL: FXOR Position                 */
#define CRC_CTRL_TOTR_MASK                       (0x03UL << CRC_CTRL_TOTR_SHIFT)                     /*!< CRC_CTRL: TOTR Mask                     */
#define CRC_CTRL_TOTR_SHIFT                      28                                                  /*!< CRC_CTRL: TOTR Position                 */
#define CRC_CTRL_TOTR(x)                         (((x)<<CRC_CTRL_TOTR_SHIFT)&CRC_CTRL_TOTR_MASK)     /*!< CRC_CTRL                                */
#define CRC_CTRL_TOT_MASK                        (0x03UL << CRC_CTRL_TOT_SHIFT)                      /*!< CRC_CTRL: TOT Mask                      */
#define CRC_CTRL_TOT_SHIFT                       30                                                  /*!< CRC_CTRL: TOT Position                  */
#define CRC_CTRL_TOT(x)                          (((x)<<CRC_CTRL_TOT_SHIFT)&CRC_CTRL_TOT_MASK)       /*!< CRC_CTRL                                */

/* ------- CRC_CTRLHU                               ------ */
#define CRC_CTRLHU_TCRC_MASK                     (0x01UL << CRC_CTRLHU_TCRC_SHIFT)                   /*!< CRC_CTRLHU: TCRC Mask                   */
#define CRC_CTRLHU_TCRC_SHIFT                    0                                                   /*!< CRC_CTRLHU: TCRC Position               */
#define CRC_CTRLHU_WAS_MASK                      (0x01UL << CRC_CTRLHU_WAS_SHIFT)                    /*!< CRC_CTRLHU: WAS Mask                    */
#define CRC_CTRLHU_WAS_SHIFT                     1                                                   /*!< CRC_CTRLHU: WAS Position                */
#define CRC_CTRLHU_FXOR_MASK                     (0x01UL << CRC_CTRLHU_FXOR_SHIFT)                   /*!< CRC_CTRLHU: FXOR Mask                   */
#define CRC_CTRLHU_FXOR_SHIFT                    2                                                   /*!< CRC_CTRLHU: FXOR Position               */
#define CRC_CTRLHU_TOTR_MASK                     (0x03UL << CRC_CTRLHU_TOTR_SHIFT)                   /*!< CRC_CTRLHU: TOTR Mask                   */
#define CRC_CTRLHU_TOTR_SHIFT                    4                                                   /*!< CRC_CTRLHU: TOTR Position               */
#define CRC_CTRLHU_TOTR(x)                       (((x)<<CRC_CTRLHU_TOTR_SHIFT)&CRC_CTRLHU_TOTR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOT_MASK                      (0x03UL << CRC_CTRLHU_TOT_SHIFT)                    /*!< CRC_CTRLHU: TOT Mask                    */
#define CRC_CTRLHU_TOT_SHIFT                     6                                                   /*!< CRC_CTRLHU: TOT Position                */
#define CRC_CTRLHU_TOT(x)                        (((x)<<CRC_CTRLHU_TOT_SHIFT)&CRC_CTRLHU_TOT_MASK)   /*!< CRC_CTRLHU                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'CRC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define CRC_DATA                       (CRC->DATA)
#define CRC_DATAL                      (CRC->DATAL)
#define CRC_DATALL                     (CRC->DATALL)
#define CRC_DATALU                     (CRC->DATALU)
#define CRC_DATAH                      (CRC->DATAH)
#define CRC_DATAHL                     (CRC->DATAHL)
#define CRC_DATAHU                     (CRC->DATAHU)
#define CRC_GPOLY                      (CRC->GPOLY)
#define CRC_GPOLYL                     (CRC->GPOLYL)
#define CRC_GPOLYLL                    (CRC->GPOLYLL)
#define CRC_GPOLYLU                    (CRC->GPOLYLU)
#define CRC_GPOLYH                     (CRC->GPOLYH)
#define CRC_GPOLYHL                    (CRC->GPOLYHL)
#define CRC_GPOLYHU                    (CRC->GPOLYHU)
#define CRC_CTRL                       (CRC->CTRL)
#define CRC_CTRLHU                     (CRC->CTRLHU)

/* ================================================================================ */
/* ================           DAC0 (file:DAC0_MKD5)                ================ */
/* ================================================================================ */

/**
 * @brief 12-Bit Digital-to-Analog Converter
 */
typedef struct {                                /*!<       DAC0 Structure                                               */
   struct { /* (cluster) */                     /*!< 0000: (size=0x0020, 32)                                            */
      union {                                   /*!< 0000: (size=0002)                                                  */
         __IO uint16_t  DATA;                   /*!< 0000: Data Register                                                */
         struct {                               /*!< 0000: (size=0002)                                                  */
            __IO uint8_t   DATL;                /*!< 0000: Data Low Register                                            */
            __IO uint8_t   DATH;                /*!< 0001: Data High Register                                           */
         };
      };
   } DAT[16];
   __IO uint8_t   SR;                           /*!< 0020: Status Register                                              */
   __IO uint8_t   C0;                           /*!< 0021: Control Register 0                                           */
   __IO uint8_t   C1;                           /*!< 0022: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0023: Control Register 2                                           */
} DAC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DAC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DAC0_DATA                                ------ */
#define DAC_DATA_DATA_MASK                       (0x7FFUL << DAC_DATA_DATA_SHIFT)                    /*!< DAC0_DATA: DATA Mask                    */
#define DAC_DATA_DATA_SHIFT                      0                                                   /*!< DAC0_DATA: DATA Position                */
#define DAC_DATA_DATA(x)                         (((x)<<DAC_DATA_DATA_SHIFT)&DAC_DATA_DATA_MASK)     /*!< DAC0_DATA                               */

/* ------- DAC0_DATL                                ------ */
#define DAC_DATL_DATA_MASK                       (0xFFUL << DAC_DATL_DATA_SHIFT)                     /*!< DAC0_DATL: DATA Mask                    */
#define DAC_DATL_DATA_SHIFT                      0                                                   /*!< DAC0_DATL: DATA Position                */
#define DAC_DATL_DATA(x)                         (((x)<<DAC_DATL_DATA_SHIFT)&DAC_DATL_DATA_MASK)     /*!< DAC0_DATL                               */

/* ------- DAC0_DATH                                ------ */
#define DAC_DATH_DATA_MASK                       (0x0FUL << DAC_DATH_DATA_SHIFT)                     /*!< DAC0_DATH: DATA Mask                    */
#define DAC_DATH_DATA_SHIFT                      0                                                   /*!< DAC0_DATH: DATA Position                */
#define DAC_DATH_DATA(x)                         (((x)<<DAC_DATH_DATA_SHIFT)&DAC_DATH_DATA_MASK)     /*!< DAC0_DATH                               */

/* ------- DAC0_SR                                  ------ */
#define DAC_SR_DACBFRPBF_MASK                    (0x01UL << DAC_SR_DACBFRPBF_SHIFT)                  /*!< DAC0_SR: DACBFRPBF Mask                 */
#define DAC_SR_DACBFRPBF_SHIFT                   0                                                   /*!< DAC0_SR: DACBFRPBF Position             */
#define DAC_SR_DACBFRPTF_MASK                    (0x01UL << DAC_SR_DACBFRPTF_SHIFT)                  /*!< DAC0_SR: DACBFRPTF Mask                 */
#define DAC_SR_DACBFRPTF_SHIFT                   1                                                   /*!< DAC0_SR: DACBFRPTF Position             */
#define DAC_SR_DACBFWMF_MASK                     (0x01UL << DAC_SR_DACBFWMF_SHIFT)                   /*!< DAC0_SR: DACBFWMF Mask                  */
#define DAC_SR_DACBFWMF_SHIFT                    2                                                   /*!< DAC0_SR: DACBFWMF Position              */

/* ------- DAC0_C0                                  ------ */
#define DAC_C0_DACBBIEN_MASK                     (0x01UL << DAC_C0_DACBBIEN_SHIFT)                   /*!< DAC0_C0: DACBBIEN Mask                  */
#define DAC_C0_DACBBIEN_SHIFT                    0                                                   /*!< DAC0_C0: DACBBIEN Position              */
#define DAC_C0_DACBTIEN_MASK                     (0x01UL << DAC_C0_DACBTIEN_SHIFT)                   /*!< DAC0_C0: DACBTIEN Mask                  */
#define DAC_C0_DACBTIEN_SHIFT                    1                                                   /*!< DAC0_C0: DACBTIEN Position              */
#define DAC_C0_DACBWIEN_MASK                     (0x01UL << DAC_C0_DACBWIEN_SHIFT)                   /*!< DAC0_C0: DACBWIEN Mask                  */
#define DAC_C0_DACBWIEN_SHIFT                    2                                                   /*!< DAC0_C0: DACBWIEN Position              */
#define DAC_C0_LPEN_MASK                         (0x01UL << DAC_C0_LPEN_SHIFT)                       /*!< DAC0_C0: LPEN Mask                      */
#define DAC_C0_LPEN_SHIFT                        3                                                   /*!< DAC0_C0: LPEN Position                  */
#define DAC_C0_DACSWTRG_MASK                     (0x01UL << DAC_C0_DACSWTRG_SHIFT)                   /*!< DAC0_C0: DACSWTRG Mask                  */
#define DAC_C0_DACSWTRG_SHIFT                    4                                                   /*!< DAC0_C0: DACSWTRG Position              */
#define DAC_C0_DACTRGSEL_MASK                    (0x01UL << DAC_C0_DACTRGSEL_SHIFT)                  /*!< DAC0_C0: DACTRGSEL Mask                 */
#define DAC_C0_DACTRGSEL_SHIFT                   5                                                   /*!< DAC0_C0: DACTRGSEL Position             */
#define DAC_C0_DACRFS_MASK                       (0x01UL << DAC_C0_DACRFS_SHIFT)                     /*!< DAC0_C0: DACRFS Mask                    */
#define DAC_C0_DACRFS_SHIFT                      6                                                   /*!< DAC0_C0: DACRFS Position                */
#define DAC_C0_DACEN_MASK                        (0x01UL << DAC_C0_DACEN_SHIFT)                      /*!< DAC0_C0: DACEN Mask                     */
#define DAC_C0_DACEN_SHIFT                       7                                                   /*!< DAC0_C0: DACEN Position                 */

/* ------- DAC0_C1                                  ------ */
#define DAC_C1_DACBFEN_MASK                      (0x01UL << DAC_C1_DACBFEN_SHIFT)                    /*!< DAC0_C1: DACBFEN Mask                   */
#define DAC_C1_DACBFEN_SHIFT                     0                                                   /*!< DAC0_C1: DACBFEN Position               */
#define DAC_C1_DACBFMD_MASK                      (0x03UL << DAC_C1_DACBFMD_SHIFT)                    /*!< DAC0_C1: DACBFMD Mask                   */
#define DAC_C1_DACBFMD_SHIFT                     1                                                   /*!< DAC0_C1: DACBFMD Position               */
#define DAC_C1_DACBFMD(x)                        (((x)<<DAC_C1_DACBFMD_SHIFT)&DAC_C1_DACBFMD_MASK)   /*!< DAC0_C1                                 */
#define DAC_C1_DACBFWM_MASK                      (0x03UL << DAC_C1_DACBFWM_SHIFT)                    /*!< DAC0_C1: DACBFWM Mask                   */
#define DAC_C1_DACBFWM_SHIFT                     3                                                   /*!< DAC0_C1: DACBFWM Position               */
#define DAC_C1_DACBFWM(x)                        (((x)<<DAC_C1_DACBFWM_SHIFT)&DAC_C1_DACBFWM_MASK)   /*!< DAC0_C1                                 */
#define DAC_C1_DMAEN_MASK                        (0x01UL << DAC_C1_DMAEN_SHIFT)                      /*!< DAC0_C1: DMAEN Mask                     */
#define DAC_C1_DMAEN_SHIFT                       7                                                   /*!< DAC0_C1: DMAEN Position                 */

/* ------- DAC0_C2                                  ------ */
#define DAC_C2_DACBFUP_MASK                      (0x0FUL << DAC_C2_DACBFUP_SHIFT)                    /*!< DAC0_C2: DACBFUP Mask                   */
#define DAC_C2_DACBFUP_SHIFT                     0                                                   /*!< DAC0_C2: DACBFUP Position               */
#define DAC_C2_DACBFUP(x)                        (((x)<<DAC_C2_DACBFUP_SHIFT)&DAC_C2_DACBFUP_MASK)   /*!< DAC0_C2                                 */
#define DAC_C2_DACBFRP_MASK                      (0x0FUL << DAC_C2_DACBFRP_SHIFT)                    /*!< DAC0_C2: DACBFRP Mask                   */
#define DAC_C2_DACBFRP_SHIFT                     4                                                   /*!< DAC0_C2: DACBFRP Position               */
#define DAC_C2_DACBFRP(x)                        (((x)<<DAC_C2_DACBFRP_SHIFT)&DAC_C2_DACBFRP_MASK)   /*!< DAC0_C2                                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'DAC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define DAC0_DATA0                     (DAC0->DAT[0].DATA)
#define DAC0_DAT0L                     (DAC0->DAT[0].DATL)
#define DAC0_DAT0H                     (DAC0->DAT[0].DATH)
#define DAC0_DATA1                     (DAC0->DAT[1].DATA)
#define DAC0_DAT1L                     (DAC0->DAT[1].DATL)
#define DAC0_DAT1H                     (DAC0->DAT[1].DATH)
#define DAC0_DATA2                     (DAC0->DAT[2].DATA)
#define DAC0_DAT2L                     (DAC0->DAT[2].DATL)
#define DAC0_DAT2H                     (DAC0->DAT[2].DATH)
#define DAC0_DATA3                     (DAC0->DAT[3].DATA)
#define DAC0_DAT3L                     (DAC0->DAT[3].DATL)
#define DAC0_DAT3H                     (DAC0->DAT[3].DATH)
#define DAC0_DATA4                     (DAC0->DAT[4].DATA)
#define DAC0_DAT4L                     (DAC0->DAT[4].DATL)
#define DAC0_DAT4H                     (DAC0->DAT[4].DATH)
#define DAC0_DATA5                     (DAC0->DAT[5].DATA)
#define DAC0_DAT5L                     (DAC0->DAT[5].DATL)
#define DAC0_DAT5H                     (DAC0->DAT[5].DATH)
#define DAC0_DATA6                     (DAC0->DAT[6].DATA)
#define DAC0_DAT6L                     (DAC0->DAT[6].DATL)
#define DAC0_DAT6H                     (DAC0->DAT[6].DATH)
#define DAC0_DATA7                     (DAC0->DAT[7].DATA)
#define DAC0_DAT7L                     (DAC0->DAT[7].DATL)
#define DAC0_DAT7H                     (DAC0->DAT[7].DATH)
#define DAC0_DATA8                     (DAC0->DAT[8].DATA)
#define DAC0_DAT8L                     (DAC0->DAT[8].DATL)
#define DAC0_DAT8H                     (DAC0->DAT[8].DATH)
#define DAC0_DATA9                     (DAC0->DAT[9].DATA)
#define DAC0_DAT9L                     (DAC0->DAT[9].DATL)
#define DAC0_DAT9H                     (DAC0->DAT[9].DATH)
#define DAC0_DATA10                    (DAC0->DAT[10].DATA)
#define DAC0_DATL10                    (DAC0->DAT[10].DATL)
#define DAC0_DATH10                    (DAC0->DAT[10].DATH)
#define DAC0_DATA11                    (DAC0->DAT[11].DATA)
#define DAC0_DATL11                    (DAC0->DAT[11].DATL)
#define DAC0_DATH11                    (DAC0->DAT[11].DATH)
#define DAC0_DATA12                    (DAC0->DAT[12].DATA)
#define DAC0_DATL12                    (DAC0->DAT[12].DATL)
#define DAC0_DATH12                    (DAC0->DAT[12].DATH)
#define DAC0_DATA13                    (DAC0->DAT[13].DATA)
#define DAC0_DATL13                    (DAC0->DAT[13].DATL)
#define DAC0_DATH13                    (DAC0->DAT[13].DATH)
#define DAC0_DATA14                    (DAC0->DAT[14].DATA)
#define DAC0_DATL14                    (DAC0->DAT[14].DATL)
#define DAC0_DATH14                    (DAC0->DAT[14].DATH)
#define DAC0_DATA15                    (DAC0->DAT[15].DATA)
#define DAC0_DATL15                    (DAC0->DAT[15].DATL)
#define DAC0_DATH15                    (DAC0->DAT[15].DATH)
#define DAC0_SR                        (DAC0->SR)
#define DAC0_C0                        (DAC0->C0)
#define DAC0_C1                        (DAC0->C1)
#define DAC0_C2                        (DAC0->C2)

/* ================================================================================ */
/* ================           DMA (file:DMA_MK_16CH)               ================ */
/* ================================================================================ */

/**
 * @brief Enhanced direct memory access controller
 */
typedef struct {                                /*!<       DMA Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: Control Register                                             */
   __I  uint32_t  ES;                           /*!< 0004: Error Status Register                                        */
   __I  uint32_t  RESERVED0;                    /*!< 0008:                                                              */
   __IO uint32_t  ERQ;                          /*!< 000C: Enable Request Register                                      */
   __I  uint32_t  RESERVED1;                    /*!< 0010:                                                              */
   __IO uint32_t  EEI;                          /*!< 0014: Enable Error Interrupt Register                              */
   __IO uint8_t   CEEI;                         /*!< 0018: Clear Enable Error Interrupt Register                        */
   __IO uint8_t   SEEI;                         /*!< 0019: Set Enable Error Interrupt Register                          */
   __IO uint8_t   CERQ;                         /*!< 001A: Clear Enable Request Register                                */
   __IO uint8_t   SERQ;                         /*!< 001B: Set Enable Request Register                                  */
   __IO uint8_t   CDNE;                         /*!< 001C: Clear DONE Status Bit Register                               */
   __IO uint8_t   SSRT;                         /*!< 001D: Set START Bit Register                                       */
   __IO uint8_t   CERR;                         /*!< 001E: Clear Error Register                                         */
   __IO uint8_t   CINT;                         /*!< 001F: Clear Interrupt Request Register                             */
   __I  uint32_t  RESERVED2;                    /*!< 0020:                                                              */
   __IO uint32_t  INT;                          /*!< 0024: Interrupt Request Register                                   */
   __I  uint32_t  RESERVED3;                    /*!< 0028:                                                              */
   __IO uint32_t  ERR;                          /*!< 002C: Error Register                                               */
   __I  uint32_t  RESERVED4;                    /*!< 0030:                                                              */
   __I  uint32_t  HRS;                          /*!< 0034: Hardware Request Status Register                             */
   __I  uint32_t  RESERVED5[50];                /*!< 0038:                                                              */
   __IO uint8_t   DCHPRI3;                      /*!< 0100: Channel 3 Priority Register                                  */
   __IO uint8_t   DCHPRI2;                      /*!< 0101: Channel 2 Priority Register                                  */
   __IO uint8_t   DCHPRI1;                      /*!< 0102: Channel 1 Priority Register                                  */
   __IO uint8_t   DCHPRI0;                      /*!< 0103: Channel 0 Priority Register                                  */
   __IO uint8_t   DCHPRI7;                      /*!< 0104: Channel 7 Priority Register                                  */
   __IO uint8_t   DCHPRI6;                      /*!< 0105: Channel 6 Priority Register                                  */
   __IO uint8_t   DCHPRI5;                      /*!< 0106: Channel 5 Priority Register                                  */
   __IO uint8_t   DCHPRI4;                      /*!< 0107: Channel 4 Priority Register                                  */
   __IO uint8_t   DCHPRI11;                     /*!< 0108: Channel 11 Priority Register                                 */
   __IO uint8_t   DCHPRI10;                     /*!< 0109: Channel 10 Priority Register                                 */
   __IO uint8_t   DCHPRI9;                      /*!< 010A: Channel 9 Priority Register                                  */
   __IO uint8_t   DCHPRI8;                      /*!< 010B: Channel 8 Priority Register                                  */
   __IO uint8_t   DCHPRI15;                     /*!< 010C: Channel 15 Priority Register                                 */
   __IO uint8_t   DCHPRI14;                     /*!< 010D: Channel 14 Priority Register                                 */
   __IO uint8_t   DCHPRI13;                     /*!< 010E: Channel 13 Priority Register                                 */
   __IO uint8_t   DCHPRI12;                     /*!< 010F: Channel 12 Priority Register                                 */
   __I  uint32_t  RESERVED6[956];               /*!< 0110:                                                              */
   struct { /* (cluster) */                     /*!< 1000: (size=0x0200, 512)                                           */
      __IO uint32_t  SADDR;                     /*!< 1000: Source Address                                               */
      __IO uint16_t  SOFF;                      /*!< 1004: Signed Source Address Offset                                 */
      __IO uint16_t  ATTR;                      /*!< 1006: Transfer Attributes                                          */
      union {                                   /*!< 1000: (size=0004)                                                  */
         __IO uint32_t  NBYTES_MLNO;            /*!< 1008: Minor Byte Count (Minor Loop Disabled)                       */
         __IO uint32_t  NBYTES_MLOFFNO;         /*!< 1008: Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
         __IO uint32_t  NBYTES_MLOFFYES;        /*!< 1008: Signed Minor Loop Offset (Minor Loop and Offset Enabled)     */
      };
      __IO uint32_t  SLAST;                     /*!< 100C: Last Source Address Adjustment                               */
      __IO uint32_t  DADDR;                     /*!< 1010: Destination Address                                          */
      __IO uint16_t  DOFF;                      /*!< 1014: Signed Destination Address Offset                            */
      union {                                   /*!< 1000: (size=0002)                                                  */
         __IO uint16_t  CITER_ELINKNO;          /*!< 1016: Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  CITER_ELINKYES;         /*!< 1016: Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
      __IO uint32_t  DLASTSGA;                  /*!< 1018: Last Destination Address Adjustment/Scatter Gather Address   */
      __IO uint16_t  CSR;                       /*!< 101C: Control and Status                                           */
      union {                                   /*!< 1000: (size=0002)                                                  */
         __IO uint16_t  BITER_ELINKNO;          /*!< 101E: Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  BITER_ELINKYES;         /*!< 101E: Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
   } TCD[16];
} DMA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DMA_CR                                   ------ */
#define DMA_CR_EDBG_MASK                         (0x01UL << DMA_CR_EDBG_SHIFT)                       /*!< DMA_CR: EDBG Mask                       */
#define DMA_CR_EDBG_SHIFT                        1                                                   /*!< DMA_CR: EDBG Position                   */
#define DMA_CR_ERCA_MASK                         (0x01UL << DMA_CR_ERCA_SHIFT)                       /*!< DMA_CR: ERCA Mask                       */
#define DMA_CR_ERCA_SHIFT                        2                                                   /*!< DMA_CR: ERCA Position                   */
#define DMA_CR_HOE_MASK                          (0x01UL << DMA_CR_HOE_SHIFT)                        /*!< DMA_CR: HOE Mask                        */
#define DMA_CR_HOE_SHIFT                         4                                                   /*!< DMA_CR: HOE Position                    */
#define DMA_CR_HALT_MASK                         (0x01UL << DMA_CR_HALT_SHIFT)                       /*!< DMA_CR: HALT Mask                       */
#define DMA_CR_HALT_SHIFT                        5                                                   /*!< DMA_CR: HALT Position                   */
#define DMA_CR_CLM_MASK                          (0x01UL << DMA_CR_CLM_SHIFT)                        /*!< DMA_CR: CLM Mask                        */
#define DMA_CR_CLM_SHIFT                         6                                                   /*!< DMA_CR: CLM Position                    */
#define DMA_CR_EMLM_MASK                         (0x01UL << DMA_CR_EMLM_SHIFT)                       /*!< DMA_CR: EMLM Mask                       */
#define DMA_CR_EMLM_SHIFT                        7                                                   /*!< DMA_CR: EMLM Position                   */
#define DMA_CR_ECX_MASK                          (0x01UL << DMA_CR_ECX_SHIFT)                        /*!< DMA_CR: ECX Mask                        */
#define DMA_CR_ECX_SHIFT                         16                                                  /*!< DMA_CR: ECX Position                    */
#define DMA_CR_CX_MASK                           (0x01UL << DMA_CR_CX_SHIFT)                         /*!< DMA_CR: CX Mask                         */
#define DMA_CR_CX_SHIFT                          17                                                  /*!< DMA_CR: CX Position                     */

/* ------- DMA_ES                                   ------ */
#define DMA_ES_DBE_MASK                          (0x01UL << DMA_ES_DBE_SHIFT)                        /*!< DMA_ES: DBE Mask                        */
#define DMA_ES_DBE_SHIFT                         0                                                   /*!< DMA_ES: DBE Position                    */
#define DMA_ES_SBE_MASK                          (0x01UL << DMA_ES_SBE_SHIFT)                        /*!< DMA_ES: SBE Mask                        */
#define DMA_ES_SBE_SHIFT                         1                                                   /*!< DMA_ES: SBE Position                    */
#define DMA_ES_SGE_MASK                          (0x01UL << DMA_ES_SGE_SHIFT)                        /*!< DMA_ES: SGE Mask                        */
#define DMA_ES_SGE_SHIFT                         2                                                   /*!< DMA_ES: SGE Position                    */
#define DMA_ES_NCE_MASK                          (0x01UL << DMA_ES_NCE_SHIFT)                        /*!< DMA_ES: NCE Mask                        */
#define DMA_ES_NCE_SHIFT                         3                                                   /*!< DMA_ES: NCE Position                    */
#define DMA_ES_DOE_MASK                          (0x01UL << DMA_ES_DOE_SHIFT)                        /*!< DMA_ES: DOE Mask                        */
#define DMA_ES_DOE_SHIFT                         4                                                   /*!< DMA_ES: DOE Position                    */
#define DMA_ES_DAE_MASK                          (0x01UL << DMA_ES_DAE_SHIFT)                        /*!< DMA_ES: DAE Mask                        */
#define DMA_ES_DAE_SHIFT                         5                                                   /*!< DMA_ES: DAE Position                    */
#define DMA_ES_SOE_MASK                          (0x01UL << DMA_ES_SOE_SHIFT)                        /*!< DMA_ES: SOE Mask                        */
#define DMA_ES_SOE_SHIFT                         6                                                   /*!< DMA_ES: SOE Position                    */
#define DMA_ES_SAE_MASK                          (0x01UL << DMA_ES_SAE_SHIFT)                        /*!< DMA_ES: SAE Mask                        */
#define DMA_ES_SAE_SHIFT                         7                                                   /*!< DMA_ES: SAE Position                    */
#define DMA_ES_ERRCHN_MASK                       (0x0FUL << DMA_ES_ERRCHN_SHIFT)                     /*!< DMA_ES: ERRCHN Mask                     */
#define DMA_ES_ERRCHN_SHIFT                      8                                                   /*!< DMA_ES: ERRCHN Position                 */
#define DMA_ES_ERRCHN(x)                         (((x)<<DMA_ES_ERRCHN_SHIFT)&DMA_ES_ERRCHN_MASK)     /*!< DMA_ES                                  */
#define DMA_ES_CPE_MASK                          (0x01UL << DMA_ES_CPE_SHIFT)                        /*!< DMA_ES: CPE Mask                        */
#define DMA_ES_CPE_SHIFT                         14                                                  /*!< DMA_ES: CPE Position                    */
#define DMA_ES_ECX_MASK                          (0x01UL << DMA_ES_ECX_SHIFT)                        /*!< DMA_ES: ECX Mask                        */
#define DMA_ES_ECX_SHIFT                         16                                                  /*!< DMA_ES: ECX Position                    */
#define DMA_ES_VLD_MASK                          (0x01UL << DMA_ES_VLD_SHIFT)                        /*!< DMA_ES: VLD Mask                        */
#define DMA_ES_VLD_SHIFT                         31                                                  /*!< DMA_ES: VLD Position                    */

/* ------- DMA_ERQ                                  ------ */
#define DMA_ERQ_ERQ0_MASK                        (0x01UL << DMA_ERQ_ERQ0_SHIFT)                      /*!< DMA_ERQ: ERQ0 Mask                      */
#define DMA_ERQ_ERQ0_SHIFT                       0                                                   /*!< DMA_ERQ: ERQ0 Position                  */
#define DMA_ERQ_ERQ1_MASK                        (0x01UL << DMA_ERQ_ERQ1_SHIFT)                      /*!< DMA_ERQ: ERQ1 Mask                      */
#define DMA_ERQ_ERQ1_SHIFT                       1                                                   /*!< DMA_ERQ: ERQ1 Position                  */
#define DMA_ERQ_ERQ2_MASK                        (0x01UL << DMA_ERQ_ERQ2_SHIFT)                      /*!< DMA_ERQ: ERQ2 Mask                      */
#define DMA_ERQ_ERQ2_SHIFT                       2                                                   /*!< DMA_ERQ: ERQ2 Position                  */
#define DMA_ERQ_ERQ3_MASK                        (0x01UL << DMA_ERQ_ERQ3_SHIFT)                      /*!< DMA_ERQ: ERQ3 Mask                      */
#define DMA_ERQ_ERQ3_SHIFT                       3                                                   /*!< DMA_ERQ: ERQ3 Position                  */
#define DMA_ERQ_ERQ4_MASK                        (0x01UL << DMA_ERQ_ERQ4_SHIFT)                      /*!< DMA_ERQ: ERQ4 Mask                      */
#define DMA_ERQ_ERQ4_SHIFT                       4                                                   /*!< DMA_ERQ: ERQ4 Position                  */
#define DMA_ERQ_ERQ5_MASK                        (0x01UL << DMA_ERQ_ERQ5_SHIFT)                      /*!< DMA_ERQ: ERQ5 Mask                      */
#define DMA_ERQ_ERQ5_SHIFT                       5                                                   /*!< DMA_ERQ: ERQ5 Position                  */
#define DMA_ERQ_ERQ6_MASK                        (0x01UL << DMA_ERQ_ERQ6_SHIFT)                      /*!< DMA_ERQ: ERQ6 Mask                      */
#define DMA_ERQ_ERQ6_SHIFT                       6                                                   /*!< DMA_ERQ: ERQ6 Position                  */
#define DMA_ERQ_ERQ7_MASK                        (0x01UL << DMA_ERQ_ERQ7_SHIFT)                      /*!< DMA_ERQ: ERQ7 Mask                      */
#define DMA_ERQ_ERQ7_SHIFT                       7                                                   /*!< DMA_ERQ: ERQ7 Position                  */
#define DMA_ERQ_ERQ8_MASK                        (0x01UL << DMA_ERQ_ERQ8_SHIFT)                      /*!< DMA_ERQ: ERQ8 Mask                      */
#define DMA_ERQ_ERQ8_SHIFT                       8                                                   /*!< DMA_ERQ: ERQ8 Position                  */
#define DMA_ERQ_ERQ9_MASK                        (0x01UL << DMA_ERQ_ERQ9_SHIFT)                      /*!< DMA_ERQ: ERQ9 Mask                      */
#define DMA_ERQ_ERQ9_SHIFT                       9                                                   /*!< DMA_ERQ: ERQ9 Position                  */
#define DMA_ERQ_ERQ10_MASK                       (0x01UL << DMA_ERQ_ERQ10_SHIFT)                     /*!< DMA_ERQ: ERQ10 Mask                     */
#define DMA_ERQ_ERQ10_SHIFT                      10                                                  /*!< DMA_ERQ: ERQ10 Position                 */
#define DMA_ERQ_ERQ11_MASK                       (0x01UL << DMA_ERQ_ERQ11_SHIFT)                     /*!< DMA_ERQ: ERQ11 Mask                     */
#define DMA_ERQ_ERQ11_SHIFT                      11                                                  /*!< DMA_ERQ: ERQ11 Position                 */
#define DMA_ERQ_ERQ12_MASK                       (0x01UL << DMA_ERQ_ERQ12_SHIFT)                     /*!< DMA_ERQ: ERQ12 Mask                     */
#define DMA_ERQ_ERQ12_SHIFT                      12                                                  /*!< DMA_ERQ: ERQ12 Position                 */
#define DMA_ERQ_ERQ13_MASK                       (0x01UL << DMA_ERQ_ERQ13_SHIFT)                     /*!< DMA_ERQ: ERQ13 Mask                     */
#define DMA_ERQ_ERQ13_SHIFT                      13                                                  /*!< DMA_ERQ: ERQ13 Position                 */
#define DMA_ERQ_ERQ14_MASK                       (0x01UL << DMA_ERQ_ERQ14_SHIFT)                     /*!< DMA_ERQ: ERQ14 Mask                     */
#define DMA_ERQ_ERQ14_SHIFT                      14                                                  /*!< DMA_ERQ: ERQ14 Position                 */
#define DMA_ERQ_ERQ15_MASK                       (0x01UL << DMA_ERQ_ERQ15_SHIFT)                     /*!< DMA_ERQ: ERQ15 Mask                     */
#define DMA_ERQ_ERQ15_SHIFT                      15                                                  /*!< DMA_ERQ: ERQ15 Position                 */

/* ------- DMA_EEI                                  ------ */
#define DMA_EEI_EEI0_MASK                        (0x01UL << DMA_EEI_EEI0_SHIFT)                      /*!< DMA_EEI: EEI0 Mask                      */
#define DMA_EEI_EEI0_SHIFT                       0                                                   /*!< DMA_EEI: EEI0 Position                  */
#define DMA_EEI_EEI1_MASK                        (0x01UL << DMA_EEI_EEI1_SHIFT)                      /*!< DMA_EEI: EEI1 Mask                      */
#define DMA_EEI_EEI1_SHIFT                       1                                                   /*!< DMA_EEI: EEI1 Position                  */
#define DMA_EEI_EEI2_MASK                        (0x01UL << DMA_EEI_EEI2_SHIFT)                      /*!< DMA_EEI: EEI2 Mask                      */
#define DMA_EEI_EEI2_SHIFT                       2                                                   /*!< DMA_EEI: EEI2 Position                  */
#define DMA_EEI_EEI3_MASK                        (0x01UL << DMA_EEI_EEI3_SHIFT)                      /*!< DMA_EEI: EEI3 Mask                      */
#define DMA_EEI_EEI3_SHIFT                       3                                                   /*!< DMA_EEI: EEI3 Position                  */
#define DMA_EEI_EEI4_MASK                        (0x01UL << DMA_EEI_EEI4_SHIFT)                      /*!< DMA_EEI: EEI4 Mask                      */
#define DMA_EEI_EEI4_SHIFT                       4                                                   /*!< DMA_EEI: EEI4 Position                  */
#define DMA_EEI_EEI5_MASK                        (0x01UL << DMA_EEI_EEI5_SHIFT)                      /*!< DMA_EEI: EEI5 Mask                      */
#define DMA_EEI_EEI5_SHIFT                       5                                                   /*!< DMA_EEI: EEI5 Position                  */
#define DMA_EEI_EEI6_MASK                        (0x01UL << DMA_EEI_EEI6_SHIFT)                      /*!< DMA_EEI: EEI6 Mask                      */
#define DMA_EEI_EEI6_SHIFT                       6                                                   /*!< DMA_EEI: EEI6 Position                  */
#define DMA_EEI_EEI7_MASK                        (0x01UL << DMA_EEI_EEI7_SHIFT)                      /*!< DMA_EEI: EEI7 Mask                      */
#define DMA_EEI_EEI7_SHIFT                       7                                                   /*!< DMA_EEI: EEI7 Position                  */
#define DMA_EEI_EEI8_MASK                        (0x01UL << DMA_EEI_EEI8_SHIFT)                      /*!< DMA_EEI: EEI8 Mask                      */
#define DMA_EEI_EEI8_SHIFT                       8                                                   /*!< DMA_EEI: EEI8 Position                  */
#define DMA_EEI_EEI9_MASK                        (0x01UL << DMA_EEI_EEI9_SHIFT)                      /*!< DMA_EEI: EEI9 Mask                      */
#define DMA_EEI_EEI9_SHIFT                       9                                                   /*!< DMA_EEI: EEI9 Position                  */
#define DMA_EEI_EEI10_MASK                       (0x01UL << DMA_EEI_EEI10_SHIFT)                     /*!< DMA_EEI: EEI10 Mask                     */
#define DMA_EEI_EEI10_SHIFT                      10                                                  /*!< DMA_EEI: EEI10 Position                 */
#define DMA_EEI_EEI11_MASK                       (0x01UL << DMA_EEI_EEI11_SHIFT)                     /*!< DMA_EEI: EEI11 Mask                     */
#define DMA_EEI_EEI11_SHIFT                      11                                                  /*!< DMA_EEI: EEI11 Position                 */
#define DMA_EEI_EEI12_MASK                       (0x01UL << DMA_EEI_EEI12_SHIFT)                     /*!< DMA_EEI: EEI12 Mask                     */
#define DMA_EEI_EEI12_SHIFT                      12                                                  /*!< DMA_EEI: EEI12 Position                 */
#define DMA_EEI_EEI13_MASK                       (0x01UL << DMA_EEI_EEI13_SHIFT)                     /*!< DMA_EEI: EEI13 Mask                     */
#define DMA_EEI_EEI13_SHIFT                      13                                                  /*!< DMA_EEI: EEI13 Position                 */
#define DMA_EEI_EEI14_MASK                       (0x01UL << DMA_EEI_EEI14_SHIFT)                     /*!< DMA_EEI: EEI14 Mask                     */
#define DMA_EEI_EEI14_SHIFT                      14                                                  /*!< DMA_EEI: EEI14 Position                 */
#define DMA_EEI_EEI15_MASK                       (0x01UL << DMA_EEI_EEI15_SHIFT)                     /*!< DMA_EEI: EEI15 Mask                     */
#define DMA_EEI_EEI15_SHIFT                      15                                                  /*!< DMA_EEI: EEI15 Position                 */

/* ------- DMA_CEEI                                 ------ */
#define DMA_CEEI_CEEI_MASK                       (0x0FUL << DMA_CEEI_CEEI_SHIFT)                     /*!< DMA_CEEI: CEEI Mask                     */
#define DMA_CEEI_CEEI_SHIFT                      0                                                   /*!< DMA_CEEI: CEEI Position                 */
#define DMA_CEEI_CEEI(x)                         (((x)<<DMA_CEEI_CEEI_SHIFT)&DMA_CEEI_CEEI_MASK)     /*!< DMA_CEEI                                */
#define DMA_CEEI_CAEE_MASK                       (0x01UL << DMA_CEEI_CAEE_SHIFT)                     /*!< DMA_CEEI: CAEE Mask                     */
#define DMA_CEEI_CAEE_SHIFT                      6                                                   /*!< DMA_CEEI: CAEE Position                 */
#define DMA_CEEI_NOP_MASK                        (0x01UL << DMA_CEEI_NOP_SHIFT)                      /*!< DMA_CEEI: NOP Mask                      */
#define DMA_CEEI_NOP_SHIFT                       7                                                   /*!< DMA_CEEI: NOP Position                  */

/* ------- DMA_SEEI                                 ------ */
#define DMA_SEEI_SEEI_MASK                       (0x0FUL << DMA_SEEI_SEEI_SHIFT)                     /*!< DMA_SEEI: SEEI Mask                     */
#define DMA_SEEI_SEEI_SHIFT                      0                                                   /*!< DMA_SEEI: SEEI Position                 */
#define DMA_SEEI_SEEI(x)                         (((x)<<DMA_SEEI_SEEI_SHIFT)&DMA_SEEI_SEEI_MASK)     /*!< DMA_SEEI                                */
#define DMA_SEEI_SAEE_MASK                       (0x01UL << DMA_SEEI_SAEE_SHIFT)                     /*!< DMA_SEEI: SAEE Mask                     */
#define DMA_SEEI_SAEE_SHIFT                      6                                                   /*!< DMA_SEEI: SAEE Position                 */
#define DMA_SEEI_NOP_MASK                        (0x01UL << DMA_SEEI_NOP_SHIFT)                      /*!< DMA_SEEI: NOP Mask                      */
#define DMA_SEEI_NOP_SHIFT                       7                                                   /*!< DMA_SEEI: NOP Position                  */

/* ------- DMA_CERQ                                 ------ */
#define DMA_CERQ_CERQ_MASK                       (0x0FUL << DMA_CERQ_CERQ_SHIFT)                     /*!< DMA_CERQ: CERQ Mask                     */
#define DMA_CERQ_CERQ_SHIFT                      0                                                   /*!< DMA_CERQ: CERQ Position                 */
#define DMA_CERQ_CERQ(x)                         (((x)<<DMA_CERQ_CERQ_SHIFT)&DMA_CERQ_CERQ_MASK)     /*!< DMA_CERQ                                */
#define DMA_CERQ_CAER_MASK                       (0x01UL << DMA_CERQ_CAER_SHIFT)                     /*!< DMA_CERQ: CAER Mask                     */
#define DMA_CERQ_CAER_SHIFT                      6                                                   /*!< DMA_CERQ: CAER Position                 */
#define DMA_CERQ_NOP_MASK                        (0x01UL << DMA_CERQ_NOP_SHIFT)                      /*!< DMA_CERQ: NOP Mask                      */
#define DMA_CERQ_NOP_SHIFT                       7                                                   /*!< DMA_CERQ: NOP Position                  */

/* ------- DMA_SERQ                                 ------ */
#define DMA_SERQ_SERQ_MASK                       (0x0FUL << DMA_SERQ_SERQ_SHIFT)                     /*!< DMA_SERQ: SERQ Mask                     */
#define DMA_SERQ_SERQ_SHIFT                      0                                                   /*!< DMA_SERQ: SERQ Position                 */
#define DMA_SERQ_SERQ(x)                         (((x)<<DMA_SERQ_SERQ_SHIFT)&DMA_SERQ_SERQ_MASK)     /*!< DMA_SERQ                                */
#define DMA_SERQ_SAER_MASK                       (0x01UL << DMA_SERQ_SAER_SHIFT)                     /*!< DMA_SERQ: SAER Mask                     */
#define DMA_SERQ_SAER_SHIFT                      6                                                   /*!< DMA_SERQ: SAER Position                 */
#define DMA_SERQ_NOP_MASK                        (0x01UL << DMA_SERQ_NOP_SHIFT)                      /*!< DMA_SERQ: NOP Mask                      */
#define DMA_SERQ_NOP_SHIFT                       7                                                   /*!< DMA_SERQ: NOP Position                  */

/* ------- DMA_CDNE                                 ------ */
#define DMA_CDNE_CDNE_MASK                       (0x0FUL << DMA_CDNE_CDNE_SHIFT)                     /*!< DMA_CDNE: CDNE Mask                     */
#define DMA_CDNE_CDNE_SHIFT                      0                                                   /*!< DMA_CDNE: CDNE Position                 */
#define DMA_CDNE_CDNE(x)                         (((x)<<DMA_CDNE_CDNE_SHIFT)&DMA_CDNE_CDNE_MASK)     /*!< DMA_CDNE                                */
#define DMA_CDNE_CADN_MASK                       (0x01UL << DMA_CDNE_CADN_SHIFT)                     /*!< DMA_CDNE: CADN Mask                     */
#define DMA_CDNE_CADN_SHIFT                      6                                                   /*!< DMA_CDNE: CADN Position                 */
#define DMA_CDNE_NOP_MASK                        (0x01UL << DMA_CDNE_NOP_SHIFT)                      /*!< DMA_CDNE: NOP Mask                      */
#define DMA_CDNE_NOP_SHIFT                       7                                                   /*!< DMA_CDNE: NOP Position                  */

/* ------- DMA_SSRT                                 ------ */
#define DMA_SSRT_SSRT_MASK                       (0x0FUL << DMA_SSRT_SSRT_SHIFT)                     /*!< DMA_SSRT: SSRT Mask                     */
#define DMA_SSRT_SSRT_SHIFT                      0                                                   /*!< DMA_SSRT: SSRT Position                 */
#define DMA_SSRT_SSRT(x)                         (((x)<<DMA_SSRT_SSRT_SHIFT)&DMA_SSRT_SSRT_MASK)     /*!< DMA_SSRT                                */
#define DMA_SSRT_SAST_MASK                       (0x01UL << DMA_SSRT_SAST_SHIFT)                     /*!< DMA_SSRT: SAST Mask                     */
#define DMA_SSRT_SAST_SHIFT                      6                                                   /*!< DMA_SSRT: SAST Position                 */
#define DMA_SSRT_NOP_MASK                        (0x01UL << DMA_SSRT_NOP_SHIFT)                      /*!< DMA_SSRT: NOP Mask                      */
#define DMA_SSRT_NOP_SHIFT                       7                                                   /*!< DMA_SSRT: NOP Position                  */

/* ------- DMA_CERR                                 ------ */
#define DMA_CERR_CERR_MASK                       (0x0FUL << DMA_CERR_CERR_SHIFT)                     /*!< DMA_CERR: CERR Mask                     */
#define DMA_CERR_CERR_SHIFT                      0                                                   /*!< DMA_CERR: CERR Position                 */
#define DMA_CERR_CERR(x)                         (((x)<<DMA_CERR_CERR_SHIFT)&DMA_CERR_CERR_MASK)     /*!< DMA_CERR                                */
#define DMA_CERR_CAEI_MASK                       (0x01UL << DMA_CERR_CAEI_SHIFT)                     /*!< DMA_CERR: CAEI Mask                     */
#define DMA_CERR_CAEI_SHIFT                      6                                                   /*!< DMA_CERR: CAEI Position                 */
#define DMA_CERR_NOP_MASK                        (0x01UL << DMA_CERR_NOP_SHIFT)                      /*!< DMA_CERR: NOP Mask                      */
#define DMA_CERR_NOP_SHIFT                       7                                                   /*!< DMA_CERR: NOP Position                  */

/* ------- DMA_CINT                                 ------ */
#define DMA_CINT_CINT_MASK                       (0x0FUL << DMA_CINT_CINT_SHIFT)                     /*!< DMA_CINT: CINT Mask                     */
#define DMA_CINT_CINT_SHIFT                      0                                                   /*!< DMA_CINT: CINT Position                 */
#define DMA_CINT_CINT(x)                         (((x)<<DMA_CINT_CINT_SHIFT)&DMA_CINT_CINT_MASK)     /*!< DMA_CINT                                */
#define DMA_CINT_CAIR_MASK                       (0x01UL << DMA_CINT_CAIR_SHIFT)                     /*!< DMA_CINT: CAIR Mask                     */
#define DMA_CINT_CAIR_SHIFT                      6                                                   /*!< DMA_CINT: CAIR Position                 */
#define DMA_CINT_NOP_MASK                        (0x01UL << DMA_CINT_NOP_SHIFT)                      /*!< DMA_CINT: NOP Mask                      */
#define DMA_CINT_NOP_SHIFT                       7                                                   /*!< DMA_CINT: NOP Position                  */

/* ------- DMA_INT                                  ------ */
#define DMA_INT_INT0_MASK                        (0x01UL << DMA_INT_INT0_SHIFT)                      /*!< DMA_INT: INT0 Mask                      */
#define DMA_INT_INT0_SHIFT                       0                                                   /*!< DMA_INT: INT0 Position                  */
#define DMA_INT_INT1_MASK                        (0x01UL << DMA_INT_INT1_SHIFT)                      /*!< DMA_INT: INT1 Mask                      */
#define DMA_INT_INT1_SHIFT                       1                                                   /*!< DMA_INT: INT1 Position                  */
#define DMA_INT_INT2_MASK                        (0x01UL << DMA_INT_INT2_SHIFT)                      /*!< DMA_INT: INT2 Mask                      */
#define DMA_INT_INT2_SHIFT                       2                                                   /*!< DMA_INT: INT2 Position                  */
#define DMA_INT_INT3_MASK                        (0x01UL << DMA_INT_INT3_SHIFT)                      /*!< DMA_INT: INT3 Mask                      */
#define DMA_INT_INT3_SHIFT                       3                                                   /*!< DMA_INT: INT3 Position                  */
#define DMA_INT_INT4_MASK                        (0x01UL << DMA_INT_INT4_SHIFT)                      /*!< DMA_INT: INT4 Mask                      */
#define DMA_INT_INT4_SHIFT                       4                                                   /*!< DMA_INT: INT4 Position                  */
#define DMA_INT_INT5_MASK                        (0x01UL << DMA_INT_INT5_SHIFT)                      /*!< DMA_INT: INT5 Mask                      */
#define DMA_INT_INT5_SHIFT                       5                                                   /*!< DMA_INT: INT5 Position                  */
#define DMA_INT_INT6_MASK                        (0x01UL << DMA_INT_INT6_SHIFT)                      /*!< DMA_INT: INT6 Mask                      */
#define DMA_INT_INT6_SHIFT                       6                                                   /*!< DMA_INT: INT6 Position                  */
#define DMA_INT_INT7_MASK                        (0x01UL << DMA_INT_INT7_SHIFT)                      /*!< DMA_INT: INT7 Mask                      */
#define DMA_INT_INT7_SHIFT                       7                                                   /*!< DMA_INT: INT7 Position                  */
#define DMA_INT_INT8_MASK                        (0x01UL << DMA_INT_INT8_SHIFT)                      /*!< DMA_INT: INT8 Mask                      */
#define DMA_INT_INT8_SHIFT                       8                                                   /*!< DMA_INT: INT8 Position                  */
#define DMA_INT_INT9_MASK                        (0x01UL << DMA_INT_INT9_SHIFT)                      /*!< DMA_INT: INT9 Mask                      */
#define DMA_INT_INT9_SHIFT                       9                                                   /*!< DMA_INT: INT9 Position                  */
#define DMA_INT_INT10_MASK                       (0x01UL << DMA_INT_INT10_SHIFT)                     /*!< DMA_INT: INT10 Mask                     */
#define DMA_INT_INT10_SHIFT                      10                                                  /*!< DMA_INT: INT10 Position                 */
#define DMA_INT_INT11_MASK                       (0x01UL << DMA_INT_INT11_SHIFT)                     /*!< DMA_INT: INT11 Mask                     */
#define DMA_INT_INT11_SHIFT                      11                                                  /*!< DMA_INT: INT11 Position                 */
#define DMA_INT_INT12_MASK                       (0x01UL << DMA_INT_INT12_SHIFT)                     /*!< DMA_INT: INT12 Mask                     */
#define DMA_INT_INT12_SHIFT                      12                                                  /*!< DMA_INT: INT12 Position                 */
#define DMA_INT_INT13_MASK                       (0x01UL << DMA_INT_INT13_SHIFT)                     /*!< DMA_INT: INT13 Mask                     */
#define DMA_INT_INT13_SHIFT                      13                                                  /*!< DMA_INT: INT13 Position                 */
#define DMA_INT_INT14_MASK                       (0x01UL << DMA_INT_INT14_SHIFT)                     /*!< DMA_INT: INT14 Mask                     */
#define DMA_INT_INT14_SHIFT                      14                                                  /*!< DMA_INT: INT14 Position                 */
#define DMA_INT_INT15_MASK                       (0x01UL << DMA_INT_INT15_SHIFT)                     /*!< DMA_INT: INT15 Mask                     */
#define DMA_INT_INT15_SHIFT                      15                                                  /*!< DMA_INT: INT15 Position                 */

/* ------- DMA_ERR                                  ------ */
#define DMA_ERR_ERR0_MASK                        (0x01UL << DMA_ERR_ERR0_SHIFT)                      /*!< DMA_ERR: ERR0 Mask                      */
#define DMA_ERR_ERR0_SHIFT                       0                                                   /*!< DMA_ERR: ERR0 Position                  */
#define DMA_ERR_ERR1_MASK                        (0x01UL << DMA_ERR_ERR1_SHIFT)                      /*!< DMA_ERR: ERR1 Mask                      */
#define DMA_ERR_ERR1_SHIFT                       1                                                   /*!< DMA_ERR: ERR1 Position                  */
#define DMA_ERR_ERR2_MASK                        (0x01UL << DMA_ERR_ERR2_SHIFT)                      /*!< DMA_ERR: ERR2 Mask                      */
#define DMA_ERR_ERR2_SHIFT                       2                                                   /*!< DMA_ERR: ERR2 Position                  */
#define DMA_ERR_ERR3_MASK                        (0x01UL << DMA_ERR_ERR3_SHIFT)                      /*!< DMA_ERR: ERR3 Mask                      */
#define DMA_ERR_ERR3_SHIFT                       3                                                   /*!< DMA_ERR: ERR3 Position                  */
#define DMA_ERR_ERR4_MASK                        (0x01UL << DMA_ERR_ERR4_SHIFT)                      /*!< DMA_ERR: ERR4 Mask                      */
#define DMA_ERR_ERR4_SHIFT                       4                                                   /*!< DMA_ERR: ERR4 Position                  */
#define DMA_ERR_ERR5_MASK                        (0x01UL << DMA_ERR_ERR5_SHIFT)                      /*!< DMA_ERR: ERR5 Mask                      */
#define DMA_ERR_ERR5_SHIFT                       5                                                   /*!< DMA_ERR: ERR5 Position                  */
#define DMA_ERR_ERR6_MASK                        (0x01UL << DMA_ERR_ERR6_SHIFT)                      /*!< DMA_ERR: ERR6 Mask                      */
#define DMA_ERR_ERR6_SHIFT                       6                                                   /*!< DMA_ERR: ERR6 Position                  */
#define DMA_ERR_ERR7_MASK                        (0x01UL << DMA_ERR_ERR7_SHIFT)                      /*!< DMA_ERR: ERR7 Mask                      */
#define DMA_ERR_ERR7_SHIFT                       7                                                   /*!< DMA_ERR: ERR7 Position                  */
#define DMA_ERR_ERR8_MASK                        (0x01UL << DMA_ERR_ERR8_SHIFT)                      /*!< DMA_ERR: ERR8 Mask                      */
#define DMA_ERR_ERR8_SHIFT                       8                                                   /*!< DMA_ERR: ERR8 Position                  */
#define DMA_ERR_ERR9_MASK                        (0x01UL << DMA_ERR_ERR9_SHIFT)                      /*!< DMA_ERR: ERR9 Mask                      */
#define DMA_ERR_ERR9_SHIFT                       9                                                   /*!< DMA_ERR: ERR9 Position                  */
#define DMA_ERR_ERR10_MASK                       (0x01UL << DMA_ERR_ERR10_SHIFT)                     /*!< DMA_ERR: ERR10 Mask                     */
#define DMA_ERR_ERR10_SHIFT                      10                                                  /*!< DMA_ERR: ERR10 Position                 */
#define DMA_ERR_ERR11_MASK                       (0x01UL << DMA_ERR_ERR11_SHIFT)                     /*!< DMA_ERR: ERR11 Mask                     */
#define DMA_ERR_ERR11_SHIFT                      11                                                  /*!< DMA_ERR: ERR11 Position                 */
#define DMA_ERR_ERR12_MASK                       (0x01UL << DMA_ERR_ERR12_SHIFT)                     /*!< DMA_ERR: ERR12 Mask                     */
#define DMA_ERR_ERR12_SHIFT                      12                                                  /*!< DMA_ERR: ERR12 Position                 */
#define DMA_ERR_ERR13_MASK                       (0x01UL << DMA_ERR_ERR13_SHIFT)                     /*!< DMA_ERR: ERR13 Mask                     */
#define DMA_ERR_ERR13_SHIFT                      13                                                  /*!< DMA_ERR: ERR13 Position                 */
#define DMA_ERR_ERR14_MASK                       (0x01UL << DMA_ERR_ERR14_SHIFT)                     /*!< DMA_ERR: ERR14 Mask                     */
#define DMA_ERR_ERR14_SHIFT                      14                                                  /*!< DMA_ERR: ERR14 Position                 */
#define DMA_ERR_ERR15_MASK                       (0x01UL << DMA_ERR_ERR15_SHIFT)                     /*!< DMA_ERR: ERR15 Mask                     */
#define DMA_ERR_ERR15_SHIFT                      15                                                  /*!< DMA_ERR: ERR15 Position                 */

/* ------- DMA_HRS                                  ------ */
#define DMA_HRS_HRS0_MASK                        (0x01UL << DMA_HRS_HRS0_SHIFT)                      /*!< DMA_HRS: HRS0 Mask                      */
#define DMA_HRS_HRS0_SHIFT                       0                                                   /*!< DMA_HRS: HRS0 Position                  */
#define DMA_HRS_HRS1_MASK                        (0x01UL << DMA_HRS_HRS1_SHIFT)                      /*!< DMA_HRS: HRS1 Mask                      */
#define DMA_HRS_HRS1_SHIFT                       1                                                   /*!< DMA_HRS: HRS1 Position                  */
#define DMA_HRS_HRS2_MASK                        (0x01UL << DMA_HRS_HRS2_SHIFT)                      /*!< DMA_HRS: HRS2 Mask                      */
#define DMA_HRS_HRS2_SHIFT                       2                                                   /*!< DMA_HRS: HRS2 Position                  */
#define DMA_HRS_HRS3_MASK                        (0x01UL << DMA_HRS_HRS3_SHIFT)                      /*!< DMA_HRS: HRS3 Mask                      */
#define DMA_HRS_HRS3_SHIFT                       3                                                   /*!< DMA_HRS: HRS3 Position                  */
#define DMA_HRS_HRS4_MASK                        (0x01UL << DMA_HRS_HRS4_SHIFT)                      /*!< DMA_HRS: HRS4 Mask                      */
#define DMA_HRS_HRS4_SHIFT                       4                                                   /*!< DMA_HRS: HRS4 Position                  */
#define DMA_HRS_HRS5_MASK                        (0x01UL << DMA_HRS_HRS5_SHIFT)                      /*!< DMA_HRS: HRS5 Mask                      */
#define DMA_HRS_HRS5_SHIFT                       5                                                   /*!< DMA_HRS: HRS5 Position                  */
#define DMA_HRS_HRS6_MASK                        (0x01UL << DMA_HRS_HRS6_SHIFT)                      /*!< DMA_HRS: HRS6 Mask                      */
#define DMA_HRS_HRS6_SHIFT                       6                                                   /*!< DMA_HRS: HRS6 Position                  */
#define DMA_HRS_HRS7_MASK                        (0x01UL << DMA_HRS_HRS7_SHIFT)                      /*!< DMA_HRS: HRS7 Mask                      */
#define DMA_HRS_HRS7_SHIFT                       7                                                   /*!< DMA_HRS: HRS7 Position                  */
#define DMA_HRS_HRS8_MASK                        (0x01UL << DMA_HRS_HRS8_SHIFT)                      /*!< DMA_HRS: HRS8 Mask                      */
#define DMA_HRS_HRS8_SHIFT                       8                                                   /*!< DMA_HRS: HRS8 Position                  */
#define DMA_HRS_HRS9_MASK                        (0x01UL << DMA_HRS_HRS9_SHIFT)                      /*!< DMA_HRS: HRS9 Mask                      */
#define DMA_HRS_HRS9_SHIFT                       9                                                   /*!< DMA_HRS: HRS9 Position                  */
#define DMA_HRS_HRS10_MASK                       (0x01UL << DMA_HRS_HRS10_SHIFT)                     /*!< DMA_HRS: HRS10 Mask                     */
#define DMA_HRS_HRS10_SHIFT                      10                                                  /*!< DMA_HRS: HRS10 Position                 */
#define DMA_HRS_HRS11_MASK                       (0x01UL << DMA_HRS_HRS11_SHIFT)                     /*!< DMA_HRS: HRS11 Mask                     */
#define DMA_HRS_HRS11_SHIFT                      11                                                  /*!< DMA_HRS: HRS11 Position                 */
#define DMA_HRS_HRS12_MASK                       (0x01UL << DMA_HRS_HRS12_SHIFT)                     /*!< DMA_HRS: HRS12 Mask                     */
#define DMA_HRS_HRS12_SHIFT                      12                                                  /*!< DMA_HRS: HRS12 Position                 */
#define DMA_HRS_HRS13_MASK                       (0x01UL << DMA_HRS_HRS13_SHIFT)                     /*!< DMA_HRS: HRS13 Mask                     */
#define DMA_HRS_HRS13_SHIFT                      13                                                  /*!< DMA_HRS: HRS13 Position                 */
#define DMA_HRS_HRS14_MASK                       (0x01UL << DMA_HRS_HRS14_SHIFT)                     /*!< DMA_HRS: HRS14 Mask                     */
#define DMA_HRS_HRS14_SHIFT                      14                                                  /*!< DMA_HRS: HRS14 Position                 */
#define DMA_HRS_HRS15_MASK                       (0x01UL << DMA_HRS_HRS15_SHIFT)                     /*!< DMA_HRS: HRS15 Mask                     */
#define DMA_HRS_HRS15_SHIFT                      15                                                  /*!< DMA_HRS: HRS15 Position                 */

/* ------- DMA_DCHPRI                               ------ */
#define DMA_DCHPRI_CHPRI_MASK                    (0x0FUL << DMA_DCHPRI_CHPRI_SHIFT)                  /*!< DMA_DCHPRI: CHPRI Mask                  */
#define DMA_DCHPRI_CHPRI_SHIFT                   0                                                   /*!< DMA_DCHPRI: CHPRI Position              */
#define DMA_DCHPRI_CHPRI(x)                      (((x)<<DMA_DCHPRI_CHPRI_SHIFT)&DMA_DCHPRI_CHPRI_MASK) /*!< DMA_DCHPRI                              */
#define DMA_DCHPRI_DPA_MASK                      (0x01UL << DMA_DCHPRI_DPA_SHIFT)                    /*!< DMA_DCHPRI: DPA Mask                    */
#define DMA_DCHPRI_DPA_SHIFT                     6                                                   /*!< DMA_DCHPRI: DPA Position                */
#define DMA_DCHPRI_ECP_MASK                      (0x01UL << DMA_DCHPRI_ECP_SHIFT)                    /*!< DMA_DCHPRI: ECP Mask                    */
#define DMA_DCHPRI_ECP_SHIFT                     7                                                   /*!< DMA_DCHPRI: ECP Position                */

/* ------- DMA_SADDR                                ------ */
#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFUL << DMA_SADDR_SADDR_SHIFT)             /*!< DMA_SADDR: SADDR Mask                   */
#define DMA_SADDR_SADDR_SHIFT                    0                                                   /*!< DMA_SADDR: SADDR Position               */
#define DMA_SADDR_SADDR(x)                       (((x)<<DMA_SADDR_SADDR_SHIFT)&DMA_SADDR_SADDR_MASK) /*!< DMA_SADDR                               */

/* ------- DMA_SOFF                                 ------ */
#define DMA_SOFF_SOFF_MASK                       (0xFFFFUL << DMA_SOFF_SOFF_SHIFT)                   /*!< DMA_SOFF: SOFF Mask                     */
#define DMA_SOFF_SOFF_SHIFT                      0                                                   /*!< DMA_SOFF: SOFF Position                 */
#define DMA_SOFF_SOFF(x)                         (((x)<<DMA_SOFF_SOFF_SHIFT)&DMA_SOFF_SOFF_MASK)     /*!< DMA_SOFF                                */

/* ------- DMA_ATTR                                 ------ */
#define DMA_ATTR_DSIZE_MASK                      (0x07UL << DMA_ATTR_DSIZE_SHIFT)                    /*!< DMA_ATTR: DSIZE Mask                    */
#define DMA_ATTR_DSIZE_SHIFT                     0                                                   /*!< DMA_ATTR: DSIZE Position                */
#define DMA_ATTR_DSIZE(x)                        (((x)<<DMA_ATTR_DSIZE_SHIFT)&DMA_ATTR_DSIZE_MASK)   /*!< DMA_ATTR                                */
#define DMA_ATTR_DMOD_MASK                       (0x1FUL << DMA_ATTR_DMOD_SHIFT)                     /*!< DMA_ATTR: DMOD Mask                     */
#define DMA_ATTR_DMOD_SHIFT                      3                                                   /*!< DMA_ATTR: DMOD Position                 */
#define DMA_ATTR_DMOD(x)                         (((x)<<DMA_ATTR_DMOD_SHIFT)&DMA_ATTR_DMOD_MASK)     /*!< DMA_ATTR                                */
#define DMA_ATTR_SSIZE_MASK                      (0x07UL << DMA_ATTR_SSIZE_SHIFT)                    /*!< DMA_ATTR: SSIZE Mask                    */
#define DMA_ATTR_SSIZE_SHIFT                     8                                                   /*!< DMA_ATTR: SSIZE Position                */
#define DMA_ATTR_SSIZE(x)                        (((x)<<DMA_ATTR_SSIZE_SHIFT)&DMA_ATTR_SSIZE_MASK)   /*!< DMA_ATTR                                */
#define DMA_ATTR_SMOD_MASK                       (0x1FUL << DMA_ATTR_SMOD_SHIFT)                     /*!< DMA_ATTR: SMOD Mask                     */
#define DMA_ATTR_SMOD_SHIFT                      11                                                  /*!< DMA_ATTR: SMOD Position                 */
#define DMA_ATTR_SMOD(x)                         (((x)<<DMA_ATTR_SMOD_SHIFT)&DMA_ATTR_SMOD_MASK)     /*!< DMA_ATTR                                */

/* ------- DMA_NBYTES_MLNO                          ------ */
#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFUL << DMA_NBYTES_MLNO_NBYTES_SHIFT)      /*!< DMA_NBYTES_MLNO: NBYTES Mask            */
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             0                                                   /*!< DMA_NBYTES_MLNO: NBYTES Position        */
#define DMA_NBYTES_MLNO_NBYTES(x)                (((x)<<DMA_NBYTES_MLNO_NBYTES_SHIFT)&DMA_NBYTES_MLNO_NBYTES_MASK) /*!< DMA_NBYTES_MLNO                         */

/* ------- DMA_NBYTES_MLOFFNO                       ------ */
#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFUL << DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)   /*!< DMA_NBYTES_MLOFFNO: NBYTES Mask         */
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          0                                                   /*!< DMA_NBYTES_MLOFFNO: NBYTES Position     */
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((x)<<DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)&DMA_NBYTES_MLOFFNO_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFNO                      */
#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x01UL << DMA_NBYTES_MLOFFNO_DMLOE_SHIFT)          /*!< DMA_NBYTES_MLOFFNO: DMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           30                                                  /*!< DMA_NBYTES_MLOFFNO: DMLOE Position      */
#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x01UL << DMA_NBYTES_MLOFFNO_SMLOE_SHIFT)          /*!< DMA_NBYTES_MLOFFNO: SMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           31                                                  /*!< DMA_NBYTES_MLOFFNO: SMLOE Position      */

/* ------- DMA_NBYTES_MLOFFYES                      ------ */
#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFUL << DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)       /*!< DMA_NBYTES_MLOFFYES: NBYTES Mask        */
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         0                                                   /*!< DMA_NBYTES_MLOFFYES: NBYTES Position    */
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((x)<<DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)&DMA_NBYTES_MLOFFYES_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0xFFFFFUL << DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)      /*!< DMA_NBYTES_MLOFFYES: MLOFF Mask         */
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          10                                                  /*!< DMA_NBYTES_MLOFFYES: MLOFF Position     */
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((x)<<DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)&DMA_NBYTES_MLOFFYES_MLOFF_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x01UL << DMA_NBYTES_MLOFFYES_DMLOE_SHIFT)         /*!< DMA_NBYTES_MLOFFYES: DMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          30                                                  /*!< DMA_NBYTES_MLOFFYES: DMLOE Position     */
#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x01UL << DMA_NBYTES_MLOFFYES_SMLOE_SHIFT)         /*!< DMA_NBYTES_MLOFFYES: SMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          31                                                  /*!< DMA_NBYTES_MLOFFYES: SMLOE Position     */

/* ------- DMA_SLAST                                ------ */
#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFUL << DMA_SLAST_SLAST_SHIFT)             /*!< DMA_SLAST: SLAST Mask                   */
#define DMA_SLAST_SLAST_SHIFT                    0                                                   /*!< DMA_SLAST: SLAST Position               */
#define DMA_SLAST_SLAST(x)                       (((x)<<DMA_SLAST_SLAST_SHIFT)&DMA_SLAST_SLAST_MASK) /*!< DMA_SLAST                               */

/* ------- DMA_DADDR                                ------ */
#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFUL << DMA_DADDR_DADDR_SHIFT)             /*!< DMA_DADDR: DADDR Mask                   */
#define DMA_DADDR_DADDR_SHIFT                    0                                                   /*!< DMA_DADDR: DADDR Position               */
#define DMA_DADDR_DADDR(x)                       (((x)<<DMA_DADDR_DADDR_SHIFT)&DMA_DADDR_DADDR_MASK) /*!< DMA_DADDR                               */

/* ------- DMA_DOFF                                 ------ */
#define DMA_DOFF_DOFF_MASK                       (0xFFFFUL << DMA_DOFF_DOFF_SHIFT)                   /*!< DMA_DOFF: DOFF Mask                     */
#define DMA_DOFF_DOFF_SHIFT                      0                                                   /*!< DMA_DOFF: DOFF Position                 */
#define DMA_DOFF_DOFF(x)                         (((x)<<DMA_DOFF_DOFF_SHIFT)&DMA_DOFF_DOFF_MASK)     /*!< DMA_DOFF                                */

/* ------- DMA_CITER_ELINKNO                        ------ */
#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFUL << DMA_CITER_ELINKNO_CITER_SHIFT)         /*!< DMA_CITER_ELINKNO: CITER Mask           */
#define DMA_CITER_ELINKNO_CITER_SHIFT            0                                                   /*!< DMA_CITER_ELINKNO: CITER Position       */
#define DMA_CITER_ELINKNO_CITER(x)               (((x)<<DMA_CITER_ELINKNO_CITER_SHIFT)&DMA_CITER_ELINKNO_CITER_MASK) /*!< DMA_CITER_ELINKNO                       */
#define DMA_CITER_ELINKNO_ELINK_MASK             (0x01UL << DMA_CITER_ELINKNO_ELINK_SHIFT)           /*!< DMA_CITER_ELINKNO: ELINK Mask           */
#define DMA_CITER_ELINKNO_ELINK_SHIFT            15                                                  /*!< DMA_CITER_ELINKNO: ELINK Position       */

/* ------- DMA_CITER_ELINKYES                       ------ */
#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFUL << DMA_CITER_ELINKYES_CITER_SHIFT)         /*!< DMA_CITER_ELINKYES: CITER Mask          */
#define DMA_CITER_ELINKYES_CITER_SHIFT           0                                                   /*!< DMA_CITER_ELINKYES: CITER Position      */
#define DMA_CITER_ELINKYES_CITER(x)              (((x)<<DMA_CITER_ELINKYES_CITER_SHIFT)&DMA_CITER_ELINKYES_CITER_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_LINKCH_MASK           (0x0FUL << DMA_CITER_ELINKYES_LINKCH_SHIFT)         /*!< DMA_CITER_ELINKYES: LINKCH Mask         */
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          9                                                   /*!< DMA_CITER_ELINKYES: LINKCH Position     */
#define DMA_CITER_ELINKYES_LINKCH(x)             (((x)<<DMA_CITER_ELINKYES_LINKCH_SHIFT)&DMA_CITER_ELINKYES_LINKCH_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_ELINK_MASK            (0x01UL << DMA_CITER_ELINKYES_ELINK_SHIFT)          /*!< DMA_CITER_ELINKYES: ELINK Mask          */
#define DMA_CITER_ELINKYES_ELINK_SHIFT           15                                                  /*!< DMA_CITER_ELINKYES: ELINK Position      */

/* ------- DMA_DLASTSGA                             ------ */
#define DMA_DLASTSGA_DLASTSGA_MASK               (0xFFFFFFFFUL << DMA_DLASTSGA_DLASTSGA_SHIFT)       /*!< DMA_DLASTSGA: DLASTSGA Mask             */
#define DMA_DLASTSGA_DLASTSGA_SHIFT              0                                                   /*!< DMA_DLASTSGA: DLASTSGA Position         */
#define DMA_DLASTSGA_DLASTSGA(x)                 (((x)<<DMA_DLASTSGA_DLASTSGA_SHIFT)&DMA_DLASTSGA_DLASTSGA_MASK) /*!< DMA_DLASTSGA                            */

/* ------- DMA_CSR                                  ------ */
#define DMA_CSR_START_MASK                       (0x01UL << DMA_CSR_START_SHIFT)                     /*!< DMA_CSR: START Mask                     */
#define DMA_CSR_START_SHIFT                      0                                                   /*!< DMA_CSR: START Position                 */
#define DMA_CSR_INTMAJOR_MASK                    (0x01UL << DMA_CSR_INTMAJOR_SHIFT)                  /*!< DMA_CSR: INTMAJOR Mask                  */
#define DMA_CSR_INTMAJOR_SHIFT                   1                                                   /*!< DMA_CSR: INTMAJOR Position              */
#define DMA_CSR_INTHALF_MASK                     (0x01UL << DMA_CSR_INTHALF_SHIFT)                   /*!< DMA_CSR: INTHALF Mask                   */
#define DMA_CSR_INTHALF_SHIFT                    2                                                   /*!< DMA_CSR: INTHALF Position               */
#define DMA_CSR_DREQ_MASK                        (0x01UL << DMA_CSR_DREQ_SHIFT)                      /*!< DMA_CSR: DREQ Mask                      */
#define DMA_CSR_DREQ_SHIFT                       3                                                   /*!< DMA_CSR: DREQ Position                  */
#define DMA_CSR_ESG_MASK                         (0x01UL << DMA_CSR_ESG_SHIFT)                       /*!< DMA_CSR: ESG Mask                       */
#define DMA_CSR_ESG_SHIFT                        4                                                   /*!< DMA_CSR: ESG Position                   */
#define DMA_CSR_MAJORELINK_MASK                  (0x01UL << DMA_CSR_MAJORELINK_SHIFT)                /*!< DMA_CSR: MAJORELINK Mask                */
#define DMA_CSR_MAJORELINK_SHIFT                 5                                                   /*!< DMA_CSR: MAJORELINK Position            */
#define DMA_CSR_ACTIVE_MASK                      (0x01UL << DMA_CSR_ACTIVE_SHIFT)                    /*!< DMA_CSR: ACTIVE Mask                    */
#define DMA_CSR_ACTIVE_SHIFT                     6                                                   /*!< DMA_CSR: ACTIVE Position                */
#define DMA_CSR_DONE_MASK                        (0x01UL << DMA_CSR_DONE_SHIFT)                      /*!< DMA_CSR: DONE Mask                      */
#define DMA_CSR_DONE_SHIFT                       7                                                   /*!< DMA_CSR: DONE Position                  */
#define DMA_CSR_MAJORLINKCH_MASK                 (0x0FUL << DMA_CSR_MAJORLINKCH_SHIFT)               /*!< DMA_CSR: MAJORLINKCH Mask               */
#define DMA_CSR_MAJORLINKCH_SHIFT                8                                                   /*!< DMA_CSR: MAJORLINKCH Position           */
#define DMA_CSR_MAJORLINKCH(x)                   (((x)<<DMA_CSR_MAJORLINKCH_SHIFT)&DMA_CSR_MAJORLINKCH_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_BWC_MASK                         (0x03UL << DMA_CSR_BWC_SHIFT)                       /*!< DMA_CSR: BWC Mask                       */
#define DMA_CSR_BWC_SHIFT                        14                                                  /*!< DMA_CSR: BWC Position                   */
#define DMA_CSR_BWC(x)                           (((x)<<DMA_CSR_BWC_SHIFT)&DMA_CSR_BWC_MASK)         /*!< DMA_CSR                                 */

/* ------- DMA_BITER_ELINKNO                        ------ */
#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFUL << DMA_BITER_ELINKNO_BITER_SHIFT)         /*!< DMA_BITER_ELINKNO: BITER Mask           */
#define DMA_BITER_ELINKNO_BITER_SHIFT            0                                                   /*!< DMA_BITER_ELINKNO: BITER Position       */
#define DMA_BITER_ELINKNO_BITER(x)               (((x)<<DMA_BITER_ELINKNO_BITER_SHIFT)&DMA_BITER_ELINKNO_BITER_MASK) /*!< DMA_BITER_ELINKNO                       */
#define DMA_BITER_ELINKNO_ELINK_MASK             (0x01UL << DMA_BITER_ELINKNO_ELINK_SHIFT)           /*!< DMA_BITER_ELINKNO: ELINK Mask           */
#define DMA_BITER_ELINKNO_ELINK_SHIFT            15                                                  /*!< DMA_BITER_ELINKNO: ELINK Position       */

/* ------- DMA_BITER_ELINKYES                       ------ */
#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFUL << DMA_BITER_ELINKYES_BITER_SHIFT)         /*!< DMA_BITER_ELINKYES: BITER Mask          */
#define DMA_BITER_ELINKYES_BITER_SHIFT           0                                                   /*!< DMA_BITER_ELINKYES: BITER Position      */
#define DMA_BITER_ELINKYES_BITER(x)              (((x)<<DMA_BITER_ELINKYES_BITER_SHIFT)&DMA_BITER_ELINKYES_BITER_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_LINKCH_MASK           (0x0FUL << DMA_BITER_ELINKYES_LINKCH_SHIFT)         /*!< DMA_BITER_ELINKYES: LINKCH Mask         */
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          9                                                   /*!< DMA_BITER_ELINKYES: LINKCH Position     */
#define DMA_BITER_ELINKYES_LINKCH(x)             (((x)<<DMA_BITER_ELINKYES_LINKCH_SHIFT)&DMA_BITER_ELINKYES_LINKCH_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_ELINK_MASK            (0x01UL << DMA_BITER_ELINKYES_ELINK_SHIFT)          /*!< DMA_BITER_ELINKYES: ELINK Mask          */
#define DMA_BITER_ELINKYES_ELINK_SHIFT           15                                                  /*!< DMA_BITER_ELINKYES: ELINK Position      */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define DMA_CR                         (DMA->CR)
#define DMA_ES                         (DMA->ES)
#define DMA_ERQ                        (DMA->ERQ)
#define DMA_EEI                        (DMA->EEI)
#define DMA_CEEI                       (DMA->CEEI)
#define DMA_SEEI                       (DMA->SEEI)
#define DMA_CERQ                       (DMA->CERQ)
#define DMA_SERQ                       (DMA->SERQ)
#define DMA_CDNE                       (DMA->CDNE)
#define DMA_SSRT                       (DMA->SSRT)
#define DMA_CERR                       (DMA->CERR)
#define DMA_CINT                       (DMA->CINT)
#define DMA_INT                        (DMA->INT)
#define DMA_ERR                        (DMA->ERR)
#define DMA_HRS                        (DMA->HRS)
#define DMA_DCHPRI3                    (DMA->DCHPRI3)
#define DMA_DCHPRI2                    (DMA->DCHPRI2)
#define DMA_DCHPRI1                    (DMA->DCHPRI1)
#define DMA_DCHPRI0                    (DMA->DCHPRI0)
#define DMA_DCHPRI7                    (DMA->DCHPRI7)
#define DMA_DCHPRI6                    (DMA->DCHPRI6)
#define DMA_DCHPRI5                    (DMA->DCHPRI5)
#define DMA_DCHPRI4                    (DMA->DCHPRI4)
#define DMA_DCHPRI11                   (DMA->DCHPRI11)
#define DMA_DCHPRI10                   (DMA->DCHPRI10)
#define DMA_DCHPRI9                    (DMA->DCHPRI9)
#define DMA_DCHPRI8                    (DMA->DCHPRI8)
#define DMA_DCHPRI15                   (DMA->DCHPRI15)
#define DMA_DCHPRI14                   (DMA->DCHPRI14)
#define DMA_DCHPRI13                   (DMA->DCHPRI13)
#define DMA_DCHPRI12                   (DMA->DCHPRI12)
#define DMA_TCD0_SADDR                 (DMA->TCD[0].SADDR)
#define DMA_TCD0_SOFF                  (DMA->TCD[0].SOFF)
#define DMA_TCD0_ATTR                  (DMA->TCD[0].ATTR)
#define DMA_TCD0_NBYTES_MLNO           (DMA->TCD[0].NBYTES_MLNO)
#define DMA_TCD0_NBYTES_MLOFFNO        (DMA->TCD[0].NBYTES_MLOFFNO)
#define DMA_TCD0_NBYTES_MLOFFYES       (DMA->TCD[0].NBYTES_MLOFFYES)
#define DMA_TCD0_SLAST                 (DMA->TCD[0].SLAST)
#define DMA_TCD0_DADDR                 (DMA->TCD[0].DADDR)
#define DMA_TCD0_DOFF                  (DMA->TCD[0].DOFF)
#define DMA_TCD0_CITER_ELINKNO         (DMA->TCD[0].CITER_ELINKNO)
#define DMA_TCD0_CITER_ELINKYES        (DMA->TCD[0].CITER_ELINKYES)
#define DMA_TCD0_DLASTSGA              (DMA->TCD[0].DLASTSGA)
#define DMA_TCD0_CSR                   (DMA->TCD[0].CSR)
#define DMA_TCD0_BITER_ELINKNO         (DMA->TCD[0].BITER_ELINKNO)
#define DMA_TCD0_BITER_ELINKYES        (DMA->TCD[0].BITER_ELINKYES)
#define DMA_TCD1_SADDR                 (DMA->TCD[1].SADDR)
#define DMA_TCD1_SOFF                  (DMA->TCD[1].SOFF)
#define DMA_TCD1_ATTR                  (DMA->TCD[1].ATTR)
#define DMA_TCD1_NBYTES_MLNO           (DMA->TCD[1].NBYTES_MLNO)
#define DMA_TCD1_NBYTES_MLOFFNO        (DMA->TCD[1].NBYTES_MLOFFNO)
#define DMA_TCD1_NBYTES_MLOFFYES       (DMA->TCD[1].NBYTES_MLOFFYES)
#define DMA_TCD1_SLAST                 (DMA->TCD[1].SLAST)
#define DMA_TCD1_DADDR                 (DMA->TCD[1].DADDR)
#define DMA_TCD1_DOFF                  (DMA->TCD[1].DOFF)
#define DMA_TCD1_CITER_ELINKNO         (DMA->TCD[1].CITER_ELINKNO)
#define DMA_TCD1_CITER_ELINKYES        (DMA->TCD[1].CITER_ELINKYES)
#define DMA_TCD1_DLASTSGA              (DMA->TCD[1].DLASTSGA)
#define DMA_TCD1_CSR                   (DMA->TCD[1].CSR)
#define DMA_TCD1_BITER_ELINKNO         (DMA->TCD[1].BITER_ELINKNO)
#define DMA_TCD1_BITER_ELINKYES        (DMA->TCD[1].BITER_ELINKYES)
#define DMA_TCD2_SADDR                 (DMA->TCD[2].SADDR)
#define DMA_TCD2_SOFF                  (DMA->TCD[2].SOFF)
#define DMA_TCD2_ATTR                  (DMA->TCD[2].ATTR)
#define DMA_TCD2_NBYTES_MLNO           (DMA->TCD[2].NBYTES_MLNO)
#define DMA_TCD2_NBYTES_MLOFFNO        (DMA->TCD[2].NBYTES_MLOFFNO)
#define DMA_TCD2_NBYTES_MLOFFYES       (DMA->TCD[2].NBYTES_MLOFFYES)
#define DMA_TCD2_SLAST                 (DMA->TCD[2].SLAST)
#define DMA_TCD2_DADDR                 (DMA->TCD[2].DADDR)
#define DMA_TCD2_DOFF                  (DMA->TCD[2].DOFF)
#define DMA_TCD2_CITER_ELINKNO         (DMA->TCD[2].CITER_ELINKNO)
#define DMA_TCD2_CITER_ELINKYES        (DMA->TCD[2].CITER_ELINKYES)
#define DMA_TCD2_DLASTSGA              (DMA->TCD[2].DLASTSGA)
#define DMA_TCD2_CSR                   (DMA->TCD[2].CSR)
#define DMA_TCD2_BITER_ELINKNO         (DMA->TCD[2].BITER_ELINKNO)
#define DMA_TCD2_BITER_ELINKYES        (DMA->TCD[2].BITER_ELINKYES)
#define DMA_TCD3_SADDR                 (DMA->TCD[3].SADDR)
#define DMA_TCD3_SOFF                  (DMA->TCD[3].SOFF)
#define DMA_TCD3_ATTR                  (DMA->TCD[3].ATTR)
#define DMA_TCD3_NBYTES_MLNO           (DMA->TCD[3].NBYTES_MLNO)
#define DMA_TCD3_NBYTES_MLOFFNO        (DMA->TCD[3].NBYTES_MLOFFNO)
#define DMA_TCD3_NBYTES_MLOFFYES       (DMA->TCD[3].NBYTES_MLOFFYES)
#define DMA_TCD3_SLAST                 (DMA->TCD[3].SLAST)
#define DMA_TCD3_DADDR                 (DMA->TCD[3].DADDR)
#define DMA_TCD3_DOFF                  (DMA->TCD[3].DOFF)
#define DMA_TCD3_CITER_ELINKNO         (DMA->TCD[3].CITER_ELINKNO)
#define DMA_TCD3_CITER_ELINKYES        (DMA->TCD[3].CITER_ELINKYES)
#define DMA_TCD3_DLASTSGA              (DMA->TCD[3].DLASTSGA)
#define DMA_TCD3_CSR                   (DMA->TCD[3].CSR)
#define DMA_TCD3_BITER_ELINKNO         (DMA->TCD[3].BITER_ELINKNO)
#define DMA_TCD3_BITER_ELINKYES        (DMA->TCD[3].BITER_ELINKYES)
#define DMA_TCD4_SADDR                 (DMA->TCD[4].SADDR)
#define DMA_TCD4_SOFF                  (DMA->TCD[4].SOFF)
#define DMA_TCD4_ATTR                  (DMA->TCD[4].ATTR)
#define DMA_TCD4_NBYTES_MLNO           (DMA->TCD[4].NBYTES_MLNO)
#define DMA_TCD4_NBYTES_MLOFFNO        (DMA->TCD[4].NBYTES_MLOFFNO)
#define DMA_TCD4_NBYTES_MLOFFYES       (DMA->TCD[4].NBYTES_MLOFFYES)
#define DMA_TCD4_SLAST                 (DMA->TCD[4].SLAST)
#define DMA_TCD4_DADDR                 (DMA->TCD[4].DADDR)
#define DMA_TCD4_DOFF                  (DMA->TCD[4].DOFF)
#define DMA_TCD4_CITER_ELINKNO         (DMA->TCD[4].CITER_ELINKNO)
#define DMA_TCD4_CITER_ELINKYES        (DMA->TCD[4].CITER_ELINKYES)
#define DMA_TCD4_DLASTSGA              (DMA->TCD[4].DLASTSGA)
#define DMA_TCD4_CSR                   (DMA->TCD[4].CSR)
#define DMA_TCD4_BITER_ELINKNO         (DMA->TCD[4].BITER_ELINKNO)
#define DMA_TCD4_BITER_ELINKYES        (DMA->TCD[4].BITER_ELINKYES)
#define DMA_TCD5_SADDR                 (DMA->TCD[5].SADDR)
#define DMA_TCD5_SOFF                  (DMA->TCD[5].SOFF)
#define DMA_TCD5_ATTR                  (DMA->TCD[5].ATTR)
#define DMA_TCD5_NBYTES_MLNO           (DMA->TCD[5].NBYTES_MLNO)
#define DMA_TCD5_NBYTES_MLOFFNO        (DMA->TCD[5].NBYTES_MLOFFNO)
#define DMA_TCD5_NBYTES_MLOFFYES       (DMA->TCD[5].NBYTES_MLOFFYES)
#define DMA_TCD5_SLAST                 (DMA->TCD[5].SLAST)
#define DMA_TCD5_DADDR                 (DMA->TCD[5].DADDR)
#define DMA_TCD5_DOFF                  (DMA->TCD[5].DOFF)
#define DMA_TCD5_CITER_ELINKNO         (DMA->TCD[5].CITER_ELINKNO)
#define DMA_TCD5_CITER_ELINKYES        (DMA->TCD[5].CITER_ELINKYES)
#define DMA_TCD5_DLASTSGA              (DMA->TCD[5].DLASTSGA)
#define DMA_TCD5_CSR                   (DMA->TCD[5].CSR)
#define DMA_TCD5_BITER_ELINKNO         (DMA->TCD[5].BITER_ELINKNO)
#define DMA_TCD5_BITER_ELINKYES        (DMA->TCD[5].BITER_ELINKYES)
#define DMA_TCD6_SADDR                 (DMA->TCD[6].SADDR)
#define DMA_TCD6_SOFF                  (DMA->TCD[6].SOFF)
#define DMA_TCD6_ATTR                  (DMA->TCD[6].ATTR)
#define DMA_TCD6_NBYTES_MLNO           (DMA->TCD[6].NBYTES_MLNO)
#define DMA_TCD6_NBYTES_MLOFFNO        (DMA->TCD[6].NBYTES_MLOFFNO)
#define DMA_TCD6_NBYTES_MLOFFYES       (DMA->TCD[6].NBYTES_MLOFFYES)
#define DMA_TCD6_SLAST                 (DMA->TCD[6].SLAST)
#define DMA_TCD6_DADDR                 (DMA->TCD[6].DADDR)
#define DMA_TCD6_DOFF                  (DMA->TCD[6].DOFF)
#define DMA_TCD6_CITER_ELINKNO         (DMA->TCD[6].CITER_ELINKNO)
#define DMA_TCD6_CITER_ELINKYES        (DMA->TCD[6].CITER_ELINKYES)
#define DMA_TCD6_DLASTSGA              (DMA->TCD[6].DLASTSGA)
#define DMA_TCD6_CSR                   (DMA->TCD[6].CSR)
#define DMA_TCD6_BITER_ELINKNO         (DMA->TCD[6].BITER_ELINKNO)
#define DMA_TCD6_BITER_ELINKYES        (DMA->TCD[6].BITER_ELINKYES)
#define DMA_TCD7_SADDR                 (DMA->TCD[7].SADDR)
#define DMA_TCD7_SOFF                  (DMA->TCD[7].SOFF)
#define DMA_TCD7_ATTR                  (DMA->TCD[7].ATTR)
#define DMA_TCD7_NBYTES_MLNO           (DMA->TCD[7].NBYTES_MLNO)
#define DMA_TCD7_NBYTES_MLOFFNO        (DMA->TCD[7].NBYTES_MLOFFNO)
#define DMA_TCD7_NBYTES_MLOFFYES       (DMA->TCD[7].NBYTES_MLOFFYES)
#define DMA_TCD7_SLAST                 (DMA->TCD[7].SLAST)
#define DMA_TCD7_DADDR                 (DMA->TCD[7].DADDR)
#define DMA_TCD7_DOFF                  (DMA->TCD[7].DOFF)
#define DMA_TCD7_CITER_ELINKNO         (DMA->TCD[7].CITER_ELINKNO)
#define DMA_TCD7_CITER_ELINKYES        (DMA->TCD[7].CITER_ELINKYES)
#define DMA_TCD7_DLASTSGA              (DMA->TCD[7].DLASTSGA)
#define DMA_TCD7_CSR                   (DMA->TCD[7].CSR)
#define DMA_TCD7_BITER_ELINKNO         (DMA->TCD[7].BITER_ELINKNO)
#define DMA_TCD7_BITER_ELINKYES        (DMA->TCD[7].BITER_ELINKYES)
#define DMA_TCD8_SADDR                 (DMA->TCD[8].SADDR)
#define DMA_TCD8_SOFF                  (DMA->TCD[8].SOFF)
#define DMA_TCD8_ATTR                  (DMA->TCD[8].ATTR)
#define DMA_TCD8_NBYTES_MLNO           (DMA->TCD[8].NBYTES_MLNO)
#define DMA_TCD8_NBYTES_MLOFFNO        (DMA->TCD[8].NBYTES_MLOFFNO)
#define DMA_TCD8_NBYTES_MLOFFYES       (DMA->TCD[8].NBYTES_MLOFFYES)
#define DMA_TCD8_SLAST                 (DMA->TCD[8].SLAST)
#define DMA_TCD8_DADDR                 (DMA->TCD[8].DADDR)
#define DMA_TCD8_DOFF                  (DMA->TCD[8].DOFF)
#define DMA_TCD8_CITER_ELINKNO         (DMA->TCD[8].CITER_ELINKNO)
#define DMA_TCD8_CITER_ELINKYES        (DMA->TCD[8].CITER_ELINKYES)
#define DMA_TCD8_DLASTSGA              (DMA->TCD[8].DLASTSGA)
#define DMA_TCD8_CSR                   (DMA->TCD[8].CSR)
#define DMA_TCD8_BITER_ELINKNO         (DMA->TCD[8].BITER_ELINKNO)
#define DMA_TCD8_BITER_ELINKYES        (DMA->TCD[8].BITER_ELINKYES)
#define DMA_TCD9_SADDR                 (DMA->TCD[9].SADDR)
#define DMA_TCD9_SOFF                  (DMA->TCD[9].SOFF)
#define DMA_TCD9_ATTR                  (DMA->TCD[9].ATTR)
#define DMA_TCD9_NBYTES_MLNO           (DMA->TCD[9].NBYTES_MLNO)
#define DMA_TCD9_NBYTES_MLOFFNO        (DMA->TCD[9].NBYTES_MLOFFNO)
#define DMA_TCD9_NBYTES_MLOFFYES       (DMA->TCD[9].NBYTES_MLOFFYES)
#define DMA_TCD9_SLAST                 (DMA->TCD[9].SLAST)
#define DMA_TCD9_DADDR                 (DMA->TCD[9].DADDR)
#define DMA_TCD9_DOFF                  (DMA->TCD[9].DOFF)
#define DMA_TCD9_CITER_ELINKNO         (DMA->TCD[9].CITER_ELINKNO)
#define DMA_TCD9_CITER_ELINKYES        (DMA->TCD[9].CITER_ELINKYES)
#define DMA_TCD9_DLASTSGA              (DMA->TCD[9].DLASTSGA)
#define DMA_TCD9_CSR                   (DMA->TCD[9].CSR)
#define DMA_TCD9_BITER_ELINKNO         (DMA->TCD[9].BITER_ELINKNO)
#define DMA_TCD9_BITER_ELINKYES        (DMA->TCD[9].BITER_ELINKYES)
#define DMA_TCD10_SADDR                (DMA->TCD[10].SADDR)
#define DMA_TCD10_SOFF                 (DMA->TCD[10].SOFF)
#define DMA_TCD10_ATTR                 (DMA->TCD[10].ATTR)
#define DMA_TCD10_NBYTES_MLNO          (DMA->TCD[10].NBYTES_MLNO)
#define DMA_TCD10_NBYTES_MLOFFNO       (DMA->TCD[10].NBYTES_MLOFFNO)
#define DMA_TCD10_NBYTES_MLOFFYES      (DMA->TCD[10].NBYTES_MLOFFYES)
#define DMA_TCD10_SLAST                (DMA->TCD[10].SLAST)
#define DMA_TCD10_DADDR                (DMA->TCD[10].DADDR)
#define DMA_TCD10_DOFF                 (DMA->TCD[10].DOFF)
#define DMA_TCD10_CITER_ELINKNO        (DMA->TCD[10].CITER_ELINKNO)
#define DMA_TCD10_CITER_ELINKYES       (DMA->TCD[10].CITER_ELINKYES)
#define DMA_TCD10_DLASTSGA             (DMA->TCD[10].DLASTSGA)
#define DMA_TCD10_CSR                  (DMA->TCD[10].CSR)
#define DMA_TCD10_BITER_ELINKNO        (DMA->TCD[10].BITER_ELINKNO)
#define DMA_TCD10_BITER_ELINKYES       (DMA->TCD[10].BITER_ELINKYES)
#define DMA_TCD11_SADDR                (DMA->TCD[11].SADDR)
#define DMA_TCD11_SOFF                 (DMA->TCD[11].SOFF)
#define DMA_TCD11_ATTR                 (DMA->TCD[11].ATTR)
#define DMA_TCD11_NBYTES_MLNO          (DMA->TCD[11].NBYTES_MLNO)
#define DMA_TCD11_NBYTES_MLOFFNO       (DMA->TCD[11].NBYTES_MLOFFNO)
#define DMA_TCD11_NBYTES_MLOFFYES      (DMA->TCD[11].NBYTES_MLOFFYES)
#define DMA_TCD11_SLAST                (DMA->TCD[11].SLAST)
#define DMA_TCD11_DADDR                (DMA->TCD[11].DADDR)
#define DMA_TCD11_DOFF                 (DMA->TCD[11].DOFF)
#define DMA_TCD11_CITER_ELINKNO        (DMA->TCD[11].CITER_ELINKNO)
#define DMA_TCD11_CITER_ELINKYES       (DMA->TCD[11].CITER_ELINKYES)
#define DMA_TCD11_DLASTSGA             (DMA->TCD[11].DLASTSGA)
#define DMA_TCD11_CSR                  (DMA->TCD[11].CSR)
#define DMA_TCD11_BITER_ELINKNO        (DMA->TCD[11].BITER_ELINKNO)
#define DMA_TCD11_BITER_ELINKYES       (DMA->TCD[11].BITER_ELINKYES)
#define DMA_TCD12_SADDR                (DMA->TCD[12].SADDR)
#define DMA_TCD12_SOFF                 (DMA->TCD[12].SOFF)
#define DMA_TCD12_ATTR                 (DMA->TCD[12].ATTR)
#define DMA_TCD12_NBYTES_MLNO          (DMA->TCD[12].NBYTES_MLNO)
#define DMA_TCD12_NBYTES_MLOFFNO       (DMA->TCD[12].NBYTES_MLOFFNO)
#define DMA_TCD12_NBYTES_MLOFFYES      (DMA->TCD[12].NBYTES_MLOFFYES)
#define DMA_TCD12_SLAST                (DMA->TCD[12].SLAST)
#define DMA_TCD12_DADDR                (DMA->TCD[12].DADDR)
#define DMA_TCD12_DOFF                 (DMA->TCD[12].DOFF)
#define DMA_TCD12_CITER_ELINKNO        (DMA->TCD[12].CITER_ELINKNO)
#define DMA_TCD12_CITER_ELINKYES       (DMA->TCD[12].CITER_ELINKYES)
#define DMA_TCD12_DLASTSGA             (DMA->TCD[12].DLASTSGA)
#define DMA_TCD12_CSR                  (DMA->TCD[12].CSR)
#define DMA_TCD12_BITER_ELINKNO        (DMA->TCD[12].BITER_ELINKNO)
#define DMA_TCD12_BITER_ELINKYES       (DMA->TCD[12].BITER_ELINKYES)
#define DMA_TCD13_SADDR                (DMA->TCD[13].SADDR)
#define DMA_TCD13_SOFF                 (DMA->TCD[13].SOFF)
#define DMA_TCD13_ATTR                 (DMA->TCD[13].ATTR)
#define DMA_TCD13_NBYTES_MLNO          (DMA->TCD[13].NBYTES_MLNO)
#define DMA_TCD13_NBYTES_MLOFFNO       (DMA->TCD[13].NBYTES_MLOFFNO)
#define DMA_TCD13_NBYTES_MLOFFYES      (DMA->TCD[13].NBYTES_MLOFFYES)
#define DMA_TCD13_SLAST                (DMA->TCD[13].SLAST)
#define DMA_TCD13_DADDR                (DMA->TCD[13].DADDR)
#define DMA_TCD13_DOFF                 (DMA->TCD[13].DOFF)
#define DMA_TCD13_CITER_ELINKNO        (DMA->TCD[13].CITER_ELINKNO)
#define DMA_TCD13_CITER_ELINKYES       (DMA->TCD[13].CITER_ELINKYES)
#define DMA_TCD13_DLASTSGA             (DMA->TCD[13].DLASTSGA)
#define DMA_TCD13_CSR                  (DMA->TCD[13].CSR)
#define DMA_TCD13_BITER_ELINKNO        (DMA->TCD[13].BITER_ELINKNO)
#define DMA_TCD13_BITER_ELINKYES       (DMA->TCD[13].BITER_ELINKYES)
#define DMA_TCD14_SADDR                (DMA->TCD[14].SADDR)
#define DMA_TCD14_SOFF                 (DMA->TCD[14].SOFF)
#define DMA_TCD14_ATTR                 (DMA->TCD[14].ATTR)
#define DMA_TCD14_NBYTES_MLNO          (DMA->TCD[14].NBYTES_MLNO)
#define DMA_TCD14_NBYTES_MLOFFNO       (DMA->TCD[14].NBYTES_MLOFFNO)
#define DMA_TCD14_NBYTES_MLOFFYES      (DMA->TCD[14].NBYTES_MLOFFYES)
#define DMA_TCD14_SLAST                (DMA->TCD[14].SLAST)
#define DMA_TCD14_DADDR                (DMA->TCD[14].DADDR)
#define DMA_TCD14_DOFF                 (DMA->TCD[14].DOFF)
#define DMA_TCD14_CITER_ELINKNO        (DMA->TCD[14].CITER_ELINKNO)
#define DMA_TCD14_CITER_ELINKYES       (DMA->TCD[14].CITER_ELINKYES)
#define DMA_TCD14_DLASTSGA             (DMA->TCD[14].DLASTSGA)
#define DMA_TCD14_CSR                  (DMA->TCD[14].CSR)
#define DMA_TCD14_BITER_ELINKNO        (DMA->TCD[14].BITER_ELINKNO)
#define DMA_TCD14_BITER_ELINKYES       (DMA->TCD[14].BITER_ELINKYES)
#define DMA_TCD15_SADDR                (DMA->TCD[15].SADDR)
#define DMA_TCD15_SOFF                 (DMA->TCD[15].SOFF)
#define DMA_TCD15_ATTR                 (DMA->TCD[15].ATTR)
#define DMA_TCD15_NBYTES_MLNO          (DMA->TCD[15].NBYTES_MLNO)
#define DMA_TCD15_NBYTES_MLOFFNO       (DMA->TCD[15].NBYTES_MLOFFNO)
#define DMA_TCD15_NBYTES_MLOFFYES      (DMA->TCD[15].NBYTES_MLOFFYES)
#define DMA_TCD15_SLAST                (DMA->TCD[15].SLAST)
#define DMA_TCD15_DADDR                (DMA->TCD[15].DADDR)
#define DMA_TCD15_DOFF                 (DMA->TCD[15].DOFF)
#define DMA_TCD15_CITER_ELINKNO        (DMA->TCD[15].CITER_ELINKNO)
#define DMA_TCD15_CITER_ELINKYES       (DMA->TCD[15].CITER_ELINKYES)
#define DMA_TCD15_DLASTSGA             (DMA->TCD[15].DLASTSGA)
#define DMA_TCD15_CSR                  (DMA->TCD[15].CSR)
#define DMA_TCD15_BITER_ELINKNO        (DMA->TCD[15].BITER_ELINKNO)
#define DMA_TCD15_BITER_ELINKYES       (DMA->TCD[15].BITER_ELINKYES)

/* ================================================================================ */
/* ================           DMAMUX (file:DMAMUX_16CH)            ================ */
/* ================================================================================ */

/**
 * @brief DMA channel multiplexor
 */
typedef struct {                                /*!<       DMAMUX Structure                                             */
   __IO uint8_t   CHCFG[16];                    /*!< 0000: Channel Configuration Register                               */
} DMAMUX_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DMAMUX_CHCFG                             ------ */
#define DMAMUX_CHCFG_SOURCE_MASK                 (0x3FUL << DMAMUX_CHCFG_SOURCE_SHIFT)               /*!< DMAMUX_CHCFG: SOURCE Mask               */
#define DMAMUX_CHCFG_SOURCE_SHIFT                0                                                   /*!< DMAMUX_CHCFG: SOURCE Position           */
#define DMAMUX_CHCFG_SOURCE(x)                   (((x)<<DMAMUX_CHCFG_SOURCE_SHIFT)&DMAMUX_CHCFG_SOURCE_MASK) /*!< DMAMUX_CHCFG                            */
#define DMAMUX_CHCFG_TRIG_MASK                   (0x01UL << DMAMUX_CHCFG_TRIG_SHIFT)                 /*!< DMAMUX_CHCFG: TRIG Mask                 */
#define DMAMUX_CHCFG_TRIG_SHIFT                  6                                                   /*!< DMAMUX_CHCFG: TRIG Position             */
#define DMAMUX_CHCFG_ENBL_MASK                   (0x01UL << DMAMUX_CHCFG_ENBL_SHIFT)                 /*!< DMAMUX_CHCFG: ENBL Mask                 */
#define DMAMUX_CHCFG_ENBL_SHIFT                  7                                                   /*!< DMAMUX_CHCFG: ENBL Position             */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define DMAMUX_CHCFG0                  (DMAMUX->CHCFG[0])
#define DMAMUX_CHCFG1                  (DMAMUX->CHCFG[1])
#define DMAMUX_CHCFG2                  (DMAMUX->CHCFG[2])
#define DMAMUX_CHCFG3                  (DMAMUX->CHCFG[3])
#define DMAMUX_CHCFG4                  (DMAMUX->CHCFG[4])
#define DMAMUX_CHCFG5                  (DMAMUX->CHCFG[5])
#define DMAMUX_CHCFG6                  (DMAMUX->CHCFG[6])
#define DMAMUX_CHCFG7                  (DMAMUX->CHCFG[7])
#define DMAMUX_CHCFG8                  (DMAMUX->CHCFG[8])
#define DMAMUX_CHCFG9                  (DMAMUX->CHCFG[9])
#define DMAMUX_CHCFG10                 (DMAMUX->CHCFG[10])
#define DMAMUX_CHCFG11                 (DMAMUX->CHCFG[11])
#define DMAMUX_CHCFG12                 (DMAMUX->CHCFG[12])
#define DMAMUX_CHCFG13                 (DMAMUX->CHCFG[13])
#define DMAMUX_CHCFG14                 (DMAMUX->CHCFG[14])
#define DMAMUX_CHCFG15                 (DMAMUX->CHCFG[15])

/* ================================================================================ */
/* ================           ETF (file:ETF_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Embedded Trace Funnel
 */
typedef struct {                                /*!<       ETF Structure                                                */
   __IO uint32_t  FCR;                          /*!< 0000: Funnel Control Register                                      */
   __IO uint32_t  PCR;                          /*!< 0004: Priority Control Register                                    */
   __I  uint32_t  RESERVED0[953];               /*!< 0008:                                                              */
   __IO uint32_t  ITATBDATA0;                   /*!< 0EEC: Integration Register, ITATBDATA0                             */
   __IO uint32_t  ITATBCTR2;                    /*!< 0EF0: Integration Register, ITATBCTR2                              */
   __IO uint32_t  ITATBCTR1;                    /*!< 0EF4: Integration Register, ITATBCTR1                              */
   __IO uint32_t  ITATBCTR0;                    /*!< 0EF8: Integration Register, ITATBCTR0                              */
   __I  uint32_t  RESERVED1;                    /*!< 0EFC:                                                              */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED2[39];                /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED3[2];                 /*!< 0FA8:                                                              */
   __O  uint32_t  LAR;                          /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LSR;                          /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTATUS;                   /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  RESERVED4[3];                 /*!< 0FBC:                                                              */
   __I  uint32_t  DEVID;                        /*!< 0FC8: Device ID Register                                           */
   __I  uint32_t  DEVTYPE;                      /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PIDR4;                        /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PIDR5;                        /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PIDR6;                        /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PIDR7;                        /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PIDR0;                        /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PIDR1;                        /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PIDR2;                        /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PIDR3;                        /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CIDR0;                        /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CIDR1;                        /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CIDR2;                        /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CIDR3;                        /*!< 0FFC: Component Identification Register 3                          */
} ETF_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ETF' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- ETF_FCR                                  ------ */
#define ETF_FCR_EnS0_MASK                        (0x01UL << ETF_FCR_EnS0_SHIFT)                      /*!< ETF_FCR: EnS0 Mask                      */
#define ETF_FCR_EnS0_SHIFT                       0                                                   /*!< ETF_FCR: EnS0 Position                  */
#define ETF_FCR_EnS1_MASK                        (0x01UL << ETF_FCR_EnS1_SHIFT)                      /*!< ETF_FCR: EnS1 Mask                      */
#define ETF_FCR_EnS1_SHIFT                       1                                                   /*!< ETF_FCR: EnS1 Position                  */
#define ETF_FCR_EnS2_MASK                        (0x01UL << ETF_FCR_EnS2_SHIFT)                      /*!< ETF_FCR: EnS2 Mask                      */
#define ETF_FCR_EnS2_SHIFT                       2                                                   /*!< ETF_FCR: EnS2 Position                  */
#define ETF_FCR_EnS3_MASK                        (0x01UL << ETF_FCR_EnS3_SHIFT)                      /*!< ETF_FCR: EnS3 Mask                      */
#define ETF_FCR_EnS3_SHIFT                       3                                                   /*!< ETF_FCR: EnS3 Position                  */
#define ETF_FCR_EnS4_MASK                        (0x01UL << ETF_FCR_EnS4_SHIFT)                      /*!< ETF_FCR: EnS4 Mask                      */
#define ETF_FCR_EnS4_SHIFT                       4                                                   /*!< ETF_FCR: EnS4 Position                  */
#define ETF_FCR_EnS5_MASK                        (0x01UL << ETF_FCR_EnS5_SHIFT)                      /*!< ETF_FCR: EnS5 Mask                      */
#define ETF_FCR_EnS5_SHIFT                       5                                                   /*!< ETF_FCR: EnS5 Position                  */
#define ETF_FCR_EnS6_MASK                        (0x01UL << ETF_FCR_EnS6_SHIFT)                      /*!< ETF_FCR: EnS6 Mask                      */
#define ETF_FCR_EnS6_SHIFT                       6                                                   /*!< ETF_FCR: EnS6 Position                  */
#define ETF_FCR_EnS7_MASK                        (0x01UL << ETF_FCR_EnS7_SHIFT)                      /*!< ETF_FCR: EnS7 Mask                      */
#define ETF_FCR_EnS7_SHIFT                       7                                                   /*!< ETF_FCR: EnS7 Position                  */
#define ETF_FCR_HT_MASK                          (0x0FUL << ETF_FCR_HT_SHIFT)                        /*!< ETF_FCR: HT Mask                        */
#define ETF_FCR_HT_SHIFT                         8                                                   /*!< ETF_FCR: HT Position                    */
#define ETF_FCR_HT(x)                            (((x)<<ETF_FCR_HT_SHIFT)&ETF_FCR_HT_MASK)           /*!< ETF_FCR                                 */

/* ------- ETF_PCR                                  ------ */
#define ETF_PCR_PriPort0_MASK                    (0x07UL << ETF_PCR_PriPort0_SHIFT)                  /*!< ETF_PCR: PriPort0 Mask                  */
#define ETF_PCR_PriPort0_SHIFT                   0                                                   /*!< ETF_PCR: PriPort0 Position              */
#define ETF_PCR_PriPort0(x)                      (((x)<<ETF_PCR_PriPort0_SHIFT)&ETF_PCR_PriPort0_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort1_MASK                    (0x07UL << ETF_PCR_PriPort1_SHIFT)                  /*!< ETF_PCR: PriPort1 Mask                  */
#define ETF_PCR_PriPort1_SHIFT                   3                                                   /*!< ETF_PCR: PriPort1 Position              */
#define ETF_PCR_PriPort1(x)                      (((x)<<ETF_PCR_PriPort1_SHIFT)&ETF_PCR_PriPort1_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort2_MASK                    (0x07UL << ETF_PCR_PriPort2_SHIFT)                  /*!< ETF_PCR: PriPort2 Mask                  */
#define ETF_PCR_PriPort2_SHIFT                   6                                                   /*!< ETF_PCR: PriPort2 Position              */
#define ETF_PCR_PriPort2(x)                      (((x)<<ETF_PCR_PriPort2_SHIFT)&ETF_PCR_PriPort2_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort3_MASK                    (0x07UL << ETF_PCR_PriPort3_SHIFT)                  /*!< ETF_PCR: PriPort3 Mask                  */
#define ETF_PCR_PriPort3_SHIFT                   9                                                   /*!< ETF_PCR: PriPort3 Position              */
#define ETF_PCR_PriPort3(x)                      (((x)<<ETF_PCR_PriPort3_SHIFT)&ETF_PCR_PriPort3_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort4_MASK                    (0x07UL << ETF_PCR_PriPort4_SHIFT)                  /*!< ETF_PCR: PriPort4 Mask                  */
#define ETF_PCR_PriPort4_SHIFT                   12                                                  /*!< ETF_PCR: PriPort4 Position              */
#define ETF_PCR_PriPort4(x)                      (((x)<<ETF_PCR_PriPort4_SHIFT)&ETF_PCR_PriPort4_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort5_MASK                    (0x07UL << ETF_PCR_PriPort5_SHIFT)                  /*!< ETF_PCR: PriPort5 Mask                  */
#define ETF_PCR_PriPort5_SHIFT                   15                                                  /*!< ETF_PCR: PriPort5 Position              */
#define ETF_PCR_PriPort5(x)                      (((x)<<ETF_PCR_PriPort5_SHIFT)&ETF_PCR_PriPort5_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort6_MASK                    (0x07UL << ETF_PCR_PriPort6_SHIFT)                  /*!< ETF_PCR: PriPort6 Mask                  */
#define ETF_PCR_PriPort6_SHIFT                   18                                                  /*!< ETF_PCR: PriPort6 Position              */
#define ETF_PCR_PriPort6(x)                      (((x)<<ETF_PCR_PriPort6_SHIFT)&ETF_PCR_PriPort6_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort7_MASK                    (0x07UL << ETF_PCR_PriPort7_SHIFT)                  /*!< ETF_PCR: PriPort7 Mask                  */
#define ETF_PCR_PriPort7_SHIFT                   21                                                  /*!< ETF_PCR: PriPort7 Position              */
#define ETF_PCR_PriPort7(x)                      (((x)<<ETF_PCR_PriPort7_SHIFT)&ETF_PCR_PriPort7_MASK) /*!< ETF_PCR                                 */

/* ------- ETF_ITATBDATA0                           ------ */
#define ETF_ITATBDATA0_ATDATA0_MASK              (0x01UL << ETF_ITATBDATA0_ATDATA0_SHIFT)            /*!< ETF_ITATBDATA0: ATDATA0 Mask            */
#define ETF_ITATBDATA0_ATDATA0_SHIFT             0                                                   /*!< ETF_ITATBDATA0: ATDATA0 Position        */
#define ETF_ITATBDATA0_ATDATA7_MASK              (0x01UL << ETF_ITATBDATA0_ATDATA7_SHIFT)            /*!< ETF_ITATBDATA0: ATDATA7 Mask            */
#define ETF_ITATBDATA0_ATDATA7_SHIFT             1                                                   /*!< ETF_ITATBDATA0: ATDATA7 Position        */
#define ETF_ITATBDATA0_ATDATA15_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA15_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA15 Mask           */
#define ETF_ITATBDATA0_ATDATA15_SHIFT            2                                                   /*!< ETF_ITATBDATA0: ATDATA15 Position       */
#define ETF_ITATBDATA0_ATDATA23_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA23_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA23 Mask           */
#define ETF_ITATBDATA0_ATDATA23_SHIFT            3                                                   /*!< ETF_ITATBDATA0: ATDATA23 Position       */
#define ETF_ITATBDATA0_ATDATA31_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA31_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA31 Mask           */
#define ETF_ITATBDATA0_ATDATA31_SHIFT            4                                                   /*!< ETF_ITATBDATA0: ATDATA31 Position       */

/* ------- ETF_ITATBCTR2                            ------ */
#define ETF_ITATBCTR2_ATREADY_MASK               (0x01UL << ETF_ITATBCTR2_ATREADY_SHIFT)             /*!< ETF_ITATBCTR2: ATREADY Mask             */
#define ETF_ITATBCTR2_ATREADY_SHIFT              0                                                   /*!< ETF_ITATBCTR2: ATREADY Position         */
#define ETF_ITATBCTR2_AFVALID_MASK               (0x01UL << ETF_ITATBCTR2_AFVALID_SHIFT)             /*!< ETF_ITATBCTR2: AFVALID Mask             */
#define ETF_ITATBCTR2_AFVALID_SHIFT              1                                                   /*!< ETF_ITATBCTR2: AFVALID Position         */

/* ------- ETF_ITATBCTR1                            ------ */
#define ETF_ITATBCTR1_ATID_MASK                  (0x7FUL << ETF_ITATBCTR1_ATID_SHIFT)                /*!< ETF_ITATBCTR1: ATID Mask                */
#define ETF_ITATBCTR1_ATID_SHIFT                 0                                                   /*!< ETF_ITATBCTR1: ATID Position            */
#define ETF_ITATBCTR1_ATID(x)                    (((x)<<ETF_ITATBCTR1_ATID_SHIFT)&ETF_ITATBCTR1_ATID_MASK) /*!< ETF_ITATBCTR1                           */

/* ------- ETF_ITATBCTR0                            ------ */
#define ETF_ITATBCTR0_ATVALID_MASK               (0x01UL << ETF_ITATBCTR0_ATVALID_SHIFT)             /*!< ETF_ITATBCTR0: ATVALID Mask             */
#define ETF_ITATBCTR0_ATVALID_SHIFT              0                                                   /*!< ETF_ITATBCTR0: ATVALID Position         */
#define ETF_ITATBCTR0_AFREADY_MASK               (0x01UL << ETF_ITATBCTR0_AFREADY_SHIFT)             /*!< ETF_ITATBCTR0: AFREADY Mask             */
#define ETF_ITATBCTR0_AFREADY_SHIFT              1                                                   /*!< ETF_ITATBCTR0: AFREADY Position         */
#define ETF_ITATBCTR0_ATBYTES_MASK               (0x03UL << ETF_ITATBCTR0_ATBYTES_SHIFT)             /*!< ETF_ITATBCTR0: ATBYTES Mask             */
#define ETF_ITATBCTR0_ATBYTES_SHIFT              8                                                   /*!< ETF_ITATBCTR0: ATBYTES Position         */
#define ETF_ITATBCTR0_ATBYTES(x)                 (((x)<<ETF_ITATBCTR0_ATBYTES_SHIFT)&ETF_ITATBCTR0_ATBYTES_MASK) /*!< ETF_ITATBCTR0                           */

/* ------- ETF_ITCTRL                               ------ */
#define ETF_ITCTRL_IntegrationMode_MASK          (0x01UL << ETF_ITCTRL_IntegrationMode_SHIFT)        /*!< ETF_ITCTRL: IntegrationMode Mask        */
#define ETF_ITCTRL_IntegrationMode_SHIFT         0                                                   /*!< ETF_ITCTRL: IntegrationMode Position    */

/* ------- ETF_CLAIMSET                             ------ */
#define ETF_CLAIMSET_CLAIMSET_MASK               (0x0FUL << ETF_CLAIMSET_CLAIMSET_SHIFT)             /*!< ETF_CLAIMSET: CLAIMSET Mask             */
#define ETF_CLAIMSET_CLAIMSET_SHIFT              0                                                   /*!< ETF_CLAIMSET: CLAIMSET Position         */
#define ETF_CLAIMSET_CLAIMSET(x)                 (((x)<<ETF_CLAIMSET_CLAIMSET_SHIFT)&ETF_CLAIMSET_CLAIMSET_MASK) /*!< ETF_CLAIMSET                            */

/* ------- ETF_CLAIMCLR                             ------ */
#define ETF_CLAIMCLR_CLAIMCLR_MASK               (0x0FUL << ETF_CLAIMCLR_CLAIMCLR_SHIFT)             /*!< ETF_CLAIMCLR: CLAIMCLR Mask             */
#define ETF_CLAIMCLR_CLAIMCLR_SHIFT              0                                                   /*!< ETF_CLAIMCLR: CLAIMCLR Position         */
#define ETF_CLAIMCLR_CLAIMCLR(x)                 (((x)<<ETF_CLAIMCLR_CLAIMCLR_SHIFT)&ETF_CLAIMCLR_CLAIMCLR_MASK) /*!< ETF_CLAIMCLR                            */

/* ------- ETF_LAR                                  ------ */
#define ETF_LAR_WriteAccessCode_MASK             (0xFFFFFFFFUL << ETF_LAR_WriteAccessCode_SHIFT)     /*!< ETF_LAR: WriteAccessCode Mask           */
#define ETF_LAR_WriteAccessCode_SHIFT            0                                                   /*!< ETF_LAR: WriteAccessCode Position       */
#define ETF_LAR_WriteAccessCode(x)               (((x)<<ETF_LAR_WriteAccessCode_SHIFT)&ETF_LAR_WriteAccessCode_MASK) /*!< ETF_LAR                                 */

/* ------- ETF_LSR                                  ------ */
#define ETF_LSR_IMP_MASK                         (0x01UL << ETF_LSR_IMP_SHIFT)                       /*!< ETF_LSR: IMP Mask                       */
#define ETF_LSR_IMP_SHIFT                        0                                                   /*!< ETF_LSR: IMP Position                   */
#define ETF_LSR_STATUS_MASK                      (0x01UL << ETF_LSR_STATUS_SHIFT)                    /*!< ETF_LSR: STATUS Mask                    */
#define ETF_LSR_STATUS_SHIFT                     1                                                   /*!< ETF_LSR: STATUS Position                */
#define ETF_LSR_s8BIT_MASK                       (0x01UL << ETF_LSR_s8BIT_SHIFT)                     /*!< ETF_LSR: s8BIT Mask                     */
#define ETF_LSR_s8BIT_SHIFT                      2                                                   /*!< ETF_LSR: s8BIT Position                 */

/* ------- ETF_AUTHSTATUS                           ------ */
#define ETF_AUTHSTATUS_AuthenticationStatus_MASK (0xFFUL << ETF_AUTHSTATUS_AuthenticationStatus_SHIFT) /*!< ETF_AUTHSTATUS: AuthenticationStatus Mask*/
#define ETF_AUTHSTATUS_AuthenticationStatus_SHIFT 0                                                  /*!< ETF_AUTHSTATUS: AuthenticationStatus Position*/
#define ETF_AUTHSTATUS_AuthenticationStatus(x)   (((x)<<ETF_AUTHSTATUS_AuthenticationStatus_SHIFT)&ETF_AUTHSTATUS_AuthenticationStatus_MASK) /*!< ETF_AUTHSTATUS                          */

/* ------- ETF_DEVID                                ------ */
#define ETF_DEVID_PORTCOUNT_MASK                 (0x0FUL << ETF_DEVID_PORTCOUNT_SHIFT)               /*!< ETF_DEVID: PORTCOUNT Mask               */
#define ETF_DEVID_PORTCOUNT_SHIFT                0                                                   /*!< ETF_DEVID: PORTCOUNT Position           */
#define ETF_DEVID_PORTCOUNT(x)                   (((x)<<ETF_DEVID_PORTCOUNT_SHIFT)&ETF_DEVID_PORTCOUNT_MASK) /*!< ETF_DEVID                               */
#define ETF_DEVID_PriorityScheme_MASK            (0x0FUL << ETF_DEVID_PriorityScheme_SHIFT)          /*!< ETF_DEVID: PriorityScheme Mask          */
#define ETF_DEVID_PriorityScheme_SHIFT           4                                                   /*!< ETF_DEVID: PriorityScheme Position      */
#define ETF_DEVID_PriorityScheme(x)              (((x)<<ETF_DEVID_PriorityScheme_SHIFT)&ETF_DEVID_PriorityScheme_MASK) /*!< ETF_DEVID                               */

/* ------- ETF_DEVTYPE                              ------ */
#define ETF_DEVTYPE_MajorType_MASK               (0x0FUL << ETF_DEVTYPE_MajorType_SHIFT)             /*!< ETF_DEVTYPE: MajorType Mask             */
#define ETF_DEVTYPE_MajorType_SHIFT              0                                                   /*!< ETF_DEVTYPE: MajorType Position         */
#define ETF_DEVTYPE_MajorType(x)                 (((x)<<ETF_DEVTYPE_MajorType_SHIFT)&ETF_DEVTYPE_MajorType_MASK) /*!< ETF_DEVTYPE                             */
#define ETF_DEVTYPE_SubType_MASK                 (0x0FUL << ETF_DEVTYPE_SubType_SHIFT)               /*!< ETF_DEVTYPE: SubType Mask               */
#define ETF_DEVTYPE_SubType_SHIFT                4                                                   /*!< ETF_DEVTYPE: SubType Position           */
#define ETF_DEVTYPE_SubType(x)                   (((x)<<ETF_DEVTYPE_SubType_SHIFT)&ETF_DEVTYPE_SubType_MASK) /*!< ETF_DEVTYPE                             */

/* ------- ETF_PIDR4                                ------ */
#define ETF_PIDR4_JEP106_MASK                    (0x0FUL << ETF_PIDR4_JEP106_SHIFT)                  /*!< ETF_PIDR4: JEP106 Mask                  */
#define ETF_PIDR4_JEP106_SHIFT                   0                                                   /*!< ETF_PIDR4: JEP106 Position              */
#define ETF_PIDR4_JEP106(x)                      (((x)<<ETF_PIDR4_JEP106_SHIFT)&ETF_PIDR4_JEP106_MASK) /*!< ETF_PIDR4                               */
#define ETF_PIDR4_c4KB_MASK                      (0x0FUL << ETF_PIDR4_c4KB_SHIFT)                    /*!< ETF_PIDR4: c4KB Mask                    */
#define ETF_PIDR4_c4KB_SHIFT                     4                                                   /*!< ETF_PIDR4: c4KB Position                */
#define ETF_PIDR4_c4KB(x)                        (((x)<<ETF_PIDR4_c4KB_SHIFT)&ETF_PIDR4_c4KB_MASK)   /*!< ETF_PIDR4                               */

/* ------- ETF_PIDR5                                ------ */

/* ------- ETF_PIDR6                                ------ */

/* ------- ETF_PIDR7                                ------ */

/* ------- ETF_PIDR0                                ------ */
#define ETF_PIDR0_PartNumber_MASK                (0xFFUL << ETF_PIDR0_PartNumber_SHIFT)              /*!< ETF_PIDR0: PartNumber Mask              */
#define ETF_PIDR0_PartNumber_SHIFT               0                                                   /*!< ETF_PIDR0: PartNumber Position          */
#define ETF_PIDR0_PartNumber(x)                  (((x)<<ETF_PIDR0_PartNumber_SHIFT)&ETF_PIDR0_PartNumber_MASK) /*!< ETF_PIDR0                               */

/* ------- ETF_PIDR1                                ------ */
#define ETF_PIDR1_PartNumber_MASK                (0x0FUL << ETF_PIDR1_PartNumber_SHIFT)              /*!< ETF_PIDR1: PartNumber Mask              */
#define ETF_PIDR1_PartNumber_SHIFT               0                                                   /*!< ETF_PIDR1: PartNumber Position          */
#define ETF_PIDR1_PartNumber(x)                  (((x)<<ETF_PIDR1_PartNumber_SHIFT)&ETF_PIDR1_PartNumber_MASK) /*!< ETF_PIDR1                               */
#define ETF_PIDR1_JEP106_identity_code_MASK      (0x0FUL << ETF_PIDR1_JEP106_identity_code_SHIFT)    /*!< ETF_PIDR1: JEP106_identity_code Mask    */
#define ETF_PIDR1_JEP106_identity_code_SHIFT     4                                                   /*!< ETF_PIDR1: JEP106_identity_code Position*/
#define ETF_PIDR1_JEP106_identity_code(x)        (((x)<<ETF_PIDR1_JEP106_identity_code_SHIFT)&ETF_PIDR1_JEP106_identity_code_MASK) /*!< ETF_PIDR1                               */

/* ------- ETF_PIDR2                                ------ */
#define ETF_PIDR2_JEP106_identity_code_MASK      (0x07UL << ETF_PIDR2_JEP106_identity_code_SHIFT)    /*!< ETF_PIDR2: JEP106_identity_code Mask    */
#define ETF_PIDR2_JEP106_identity_code_SHIFT     0                                                   /*!< ETF_PIDR2: JEP106_identity_code Position*/
#define ETF_PIDR2_JEP106_identity_code(x)        (((x)<<ETF_PIDR2_JEP106_identity_code_SHIFT)&ETF_PIDR2_JEP106_identity_code_MASK) /*!< ETF_PIDR2                               */
#define ETF_PIDR2_Revision_MASK                  (0x0FUL << ETF_PIDR2_Revision_SHIFT)                /*!< ETF_PIDR2: Revision Mask                */
#define ETF_PIDR2_Revision_SHIFT                 4                                                   /*!< ETF_PIDR2: Revision Position            */
#define ETF_PIDR2_Revision(x)                    (((x)<<ETF_PIDR2_Revision_SHIFT)&ETF_PIDR2_Revision_MASK) /*!< ETF_PIDR2                               */

/* ------- ETF_PIDR3                                ------ */
#define ETF_PIDR3_CustomerModified_MASK          (0x0FUL << ETF_PIDR3_CustomerModified_SHIFT)        /*!< ETF_PIDR3: CustomerModified Mask        */
#define ETF_PIDR3_CustomerModified_SHIFT         0                                                   /*!< ETF_PIDR3: CustomerModified Position    */
#define ETF_PIDR3_CustomerModified(x)            (((x)<<ETF_PIDR3_CustomerModified_SHIFT)&ETF_PIDR3_CustomerModified_MASK) /*!< ETF_PIDR3                               */
#define ETF_PIDR3_RevAnd_MASK                    (0x0FUL << ETF_PIDR3_RevAnd_SHIFT)                  /*!< ETF_PIDR3: RevAnd Mask                  */
#define ETF_PIDR3_RevAnd_SHIFT                   4                                                   /*!< ETF_PIDR3: RevAnd Position              */
#define ETF_PIDR3_RevAnd(x)                      (((x)<<ETF_PIDR3_RevAnd_SHIFT)&ETF_PIDR3_RevAnd_MASK) /*!< ETF_PIDR3                               */

/* ------- ETF_CIDR0                                ------ */
#define ETF_CIDR0_Preamble_MASK                  (0xFFUL << ETF_CIDR0_Preamble_SHIFT)                /*!< ETF_CIDR0: Preamble Mask                */
#define ETF_CIDR0_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR0: Preamble Position            */
#define ETF_CIDR0_Preamble(x)                    (((x)<<ETF_CIDR0_Preamble_SHIFT)&ETF_CIDR0_Preamble_MASK) /*!< ETF_CIDR0                               */

/* ------- ETF_CIDR1                                ------ */
#define ETF_CIDR1_Preamble_MASK                  (0x0FUL << ETF_CIDR1_Preamble_SHIFT)                /*!< ETF_CIDR1: Preamble Mask                */
#define ETF_CIDR1_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR1: Preamble Position            */
#define ETF_CIDR1_Preamble(x)                    (((x)<<ETF_CIDR1_Preamble_SHIFT)&ETF_CIDR1_Preamble_MASK) /*!< ETF_CIDR1                               */
#define ETF_CIDR1_ComponentClass_MASK            (0x0FUL << ETF_CIDR1_ComponentClass_SHIFT)          /*!< ETF_CIDR1: ComponentClass Mask          */
#define ETF_CIDR1_ComponentClass_SHIFT           4                                                   /*!< ETF_CIDR1: ComponentClass Position      */
#define ETF_CIDR1_ComponentClass(x)              (((x)<<ETF_CIDR1_ComponentClass_SHIFT)&ETF_CIDR1_ComponentClass_MASK) /*!< ETF_CIDR1                               */

/* ------- ETF_CIDR2                                ------ */
#define ETF_CIDR2_Preamble_MASK                  (0xFFUL << ETF_CIDR2_Preamble_SHIFT)                /*!< ETF_CIDR2: Preamble Mask                */
#define ETF_CIDR2_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR2: Preamble Position            */
#define ETF_CIDR2_Preamble(x)                    (((x)<<ETF_CIDR2_Preamble_SHIFT)&ETF_CIDR2_Preamble_MASK) /*!< ETF_CIDR2                               */

/* ------- ETF_CIDR3                                ------ */
#define ETF_CIDR3_Preamble_MASK                  (0xFFUL << ETF_CIDR3_Preamble_SHIFT)                /*!< ETF_CIDR3: Preamble Mask                */
#define ETF_CIDR3_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR3: Preamble Position            */
#define ETF_CIDR3_Preamble(x)                    (((x)<<ETF_CIDR3_Preamble_SHIFT)&ETF_CIDR3_Preamble_MASK) /*!< ETF_CIDR3                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'ETF' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define ETF_FCR                        (ETF->FCR)
#define ETF_PCR                        (ETF->PCR)
#define ETF_ITATBDATA0                 (ETF->ITATBDATA0)
#define ETF_ITATBCTR2                  (ETF->ITATBCTR2)
#define ETF_ITATBCTR1                  (ETF->ITATBCTR1)
#define ETF_ITATBCTR0                  (ETF->ITATBCTR0)
#define ETF_ITCTRL                     (ETF->ITCTRL)
#define ETF_CLAIMSET                   (ETF->CLAIMSET)
#define ETF_CLAIMCLR                   (ETF->CLAIMCLR)
#define ETF_LAR                        (ETF->LAR)
#define ETF_LSR                        (ETF->LSR)
#define ETF_AUTHSTATUS                 (ETF->AUTHSTATUS)
#define ETF_DEVID                      (ETF->DEVID)
#define ETF_DEVTYPE                    (ETF->DEVTYPE)
#define ETF_PIDR4                      (ETF->PIDR4)
#define ETF_PIDR5                      (ETF->PIDR5)
#define ETF_PIDR6                      (ETF->PIDR6)
#define ETF_PIDR7                      (ETF->PIDR7)
#define ETF_PIDR0                      (ETF->PIDR0)
#define ETF_PIDR1                      (ETF->PIDR1)
#define ETF_PIDR2                      (ETF->PIDR2)
#define ETF_PIDR3                      (ETF->PIDR3)
#define ETF_CIDR0                      (ETF->CIDR0)
#define ETF_CIDR1                      (ETF->CIDR1)
#define ETF_CIDR2                      (ETF->CIDR2)
#define ETF_CIDR3                      (ETF->CIDR3)

/* ================================================================================ */
/* ================           ETM (file:ETM_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Embedded Trace Macrocell
 */
typedef struct {                                /*!<       ETM Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: Main Control Register                                        */
   __I  uint32_t  CCR;                          /*!< 0004: Configuration Code Register                                  */
   __IO uint32_t  TRIGGER;                      /*!< 0008: Trigger Event Register                                       */
   __I  uint32_t  RESERVED0;                    /*!< 000C:                                                              */
   __IO uint32_t  SR;                           /*!< 0010: ETM Status Register                                          */
   __I  uint32_t  SCR;                          /*!< 0014: System Configuration Register                                */
   __I  uint32_t  RESERVED1[2];                 /*!< 0018:                                                              */
   __IO uint32_t  EEVR;                         /*!< 0020: Trace Enable Event Register                                  */
   __IO uint32_t  TECR1;                        /*!< 0024: Trace Enable Control 1 Register                              */
   __IO uint32_t  FFLR;                         /*!< 0028: FIFOFULL Level Register                                      */
   __I  uint32_t  RESERVED2[69];                /*!< 002C:                                                              */
   __IO uint32_t  CNTRLDVR1;                    /*!< 0140: Free-running counter reload value                            */
   __I  uint32_t  RESERVED3[39];                /*!< 0144:                                                              */
   __I  uint32_t  SYNCFR;                       /*!< 01E0: Synchronization Frequency Register                           */
   __I  uint32_t  IDR;                          /*!< 01E4: ID Register                                                  */
   __I  uint32_t  CCER;                         /*!< 01E8: Configuration Code Extension Register                        */
   __I  uint32_t  RESERVED4;                    /*!< 01EC:                                                              */
   __IO uint32_t  TESSEICR;                     /*!< 01F0: TraceEnable Start/Stop EmbeddedICE Control Register          */
   __I  uint32_t  RESERVED5;                    /*!< 01F4:                                                              */
   __IO uint32_t  TSEVR;                        /*!< 01F8: Timestamp Event Register                                     */
   __I  uint32_t  RESERVED6;                    /*!< 01FC:                                                              */
   __IO uint32_t  TRACEIDR;                     /*!< 0200: CoreSight Trace ID Register                                  */
   __I  uint32_t  RESERVED7;                    /*!< 0204:                                                              */
   __I  uint32_t  IDR2;                         /*!< 0208: ETM ID Register 2                                            */
   __I  uint32_t  RESERVED8[66];                /*!< 020C:                                                              */
   __I  uint32_t  PDSR;                         /*!< 0314: Device Power-Down Status Register                            */
   __I  uint32_t  RESERVED9[754];               /*!< 0318:                                                              */
   __I  uint32_t  _ITMISCIN;                    /*!< 0EE0: Integration Test Miscelaneous Inputs Register                */
   __I  uint32_t  RESERVED10;                   /*!< 0EE4:                                                              */
   __O  uint32_t  _ITTRIGOUT;                   /*!< 0EE8: Integration Test Trigger Out Register                        */
   __I  uint32_t  RESERVED11;                   /*!< 0EEC:                                                              */
   __I  uint32_t  _ITATBCTR2;                   /*!< 0EF0: ETM Integration Test ATB Control 2 Register                  */
   __I  uint32_t  RESERVED12;                   /*!< 0EF4:                                                              */
   __O  uint32_t  _ITATBCTR0;                   /*!< 0EF8: ETM Integration Test ATB Control 0 Register                  */
   __I  uint32_t  RESERVED13;                   /*!< 0EFC:                                                              */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED14[39];               /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED15[2];                /*!< 0FA8:                                                              */
   __IO uint32_t  LAR;                          /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LSR;                          /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTATUS;                   /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  RESERVED16[4];                /*!< 0FBC:                                                              */
   __I  uint32_t  DEVTYPE;                      /*!< 0FCC: CoreSight Device Type Register                               */
   __I  uint32_t  PIDR4;                        /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PIDR5;                        /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PIDR6;                        /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PIDR7;                        /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PIDR0;                        /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PIDR1;                        /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PIDR2;                        /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PIDR3;                        /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CIDR0;                        /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CIDR1;                        /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CIDR2;                        /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CIDR3;                        /*!< 0FFC: Component Identification Register 3                          */
} ETM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ETM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- ETM_CR                                   ------ */
#define ETM_CR_ETMPD_MASK                        (0x01UL << ETM_CR_ETMPD_SHIFT)                      /*!< ETM_CR: ETMPD Mask                      */
#define ETM_CR_ETMPD_SHIFT                       0                                                   /*!< ETM_CR: ETMPD Position                  */
#define ETM_CR_PS_MASK                           (0x07UL << ETM_CR_PS_SHIFT)                         /*!< ETM_CR: PS Mask                         */
#define ETM_CR_PS_SHIFT                          4                                                   /*!< ETM_CR: PS Position                     */
#define ETM_CR_PS(x)                             (((x)<<ETM_CR_PS_SHIFT)&ETM_CR_PS_MASK)             /*!< ETM_CR                                  */
#define ETM_CR_SP_MASK                           (0x01UL << ETM_CR_SP_SHIFT)                         /*!< ETM_CR: SP Mask                         */
#define ETM_CR_SP_SHIFT                          7                                                   /*!< ETM_CR: SP Position                     */
#define ETM_CR_BO_MASK                           (0x01UL << ETM_CR_BO_SHIFT)                         /*!< ETM_CR: BO Mask                         */
#define ETM_CR_BO_SHIFT                          8                                                   /*!< ETM_CR: BO Position                     */
#define ETM_CR_DRC_MASK                          (0x01UL << ETM_CR_DRC_SHIFT)                        /*!< ETM_CR: DRC Mask                        */
#define ETM_CR_DRC_SHIFT                         9                                                   /*!< ETM_CR: DRC Position                    */
#define ETM_CR_ETMP_MASK                         (0x01UL << ETM_CR_ETMP_SHIFT)                       /*!< ETM_CR: ETMP Mask                       */
#define ETM_CR_ETMP_SHIFT                        10                                                  /*!< ETM_CR: ETMP Position                   */
#define ETM_CR_ETMPS_MASK                        (0x01UL << ETM_CR_ETMPS_SHIFT)                      /*!< ETM_CR: ETMPS Mask                      */
#define ETM_CR_ETMPS_SHIFT                       11                                                  /*!< ETM_CR: ETMPS Position                  */
#define ETM_CR_PM2_MASK                          (0x01UL << ETM_CR_PM2_SHIFT)                        /*!< ETM_CR: PM2 Mask                        */
#define ETM_CR_PM2_SHIFT                         13                                                  /*!< ETM_CR: PM2 Position                    */
#define ETM_CR_PM_MASK                           (0x03UL << ETM_CR_PM_SHIFT)                         /*!< ETM_CR: PM Mask                         */
#define ETM_CR_PM_SHIFT                          16                                                  /*!< ETM_CR: PM Position                     */
#define ETM_CR_PM(x)                             (((x)<<ETM_CR_PM_SHIFT)&ETM_CR_PM_MASK)             /*!< ETM_CR                                  */
#define ETM_CR_PS3_MASK                          (0x01UL << ETM_CR_PS3_SHIFT)                        /*!< ETM_CR: PS3 Mask                        */
#define ETM_CR_PS3_SHIFT                         21                                                  /*!< ETM_CR: PS3 Position                    */
#define ETM_CR_TE_MASK                           (0x01UL << ETM_CR_TE_SHIFT)                         /*!< ETM_CR: TE Mask                         */
#define ETM_CR_TE_SHIFT                          28                                                  /*!< ETM_CR: TE Position                     */

/* ------- ETM_CCR                                  ------ */
#define ETM_CCR_NumberOfAddressComparatorPairs_MASK (0x0FUL << ETM_CCR_NumberOfAddressComparatorPairs_SHIFT) /*!< ETM_CCR: NumberOfAddressComparatorPairs Mask*/
#define ETM_CCR_NumberOfAddressComparatorPairs_SHIFT 0                                               /*!< ETM_CCR: NumberOfAddressComparatorPairs Position*/
#define ETM_CCR_NumberOfAddressComparatorPairs(x) (((x)<<ETM_CCR_NumberOfAddressComparatorPairs_SHIFT)&ETM_CCR_NumberOfAddressComparatorPairs_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_NDVC_MASK                        (0x0FUL << ETM_CCR_NDVC_SHIFT)                      /*!< ETM_CCR: NDVC Mask                      */
#define ETM_CCR_NDVC_SHIFT                       4                                                   /*!< ETM_CCR: NDVC Position                  */
#define ETM_CCR_NDVC(x)                          (((x)<<ETM_CCR_NDVC_SHIFT)&ETM_CCR_NDVC_MASK)       /*!< ETM_CCR                                 */
#define ETM_CCR_NMMD_MASK                        (0x1FUL << ETM_CCR_NMMD_SHIFT)                      /*!< ETM_CCR: NMMD Mask                      */
#define ETM_CCR_NMMD_SHIFT                       8                                                   /*!< ETM_CCR: NMMD Position                  */
#define ETM_CCR_NMMD(x)                          (((x)<<ETM_CCR_NMMD_SHIFT)&ETM_CCR_NMMD_MASK)       /*!< ETM_CCR                                 */
#define ETM_CCR_NC_MASK                          (0x07UL << ETM_CCR_NC_SHIFT)                        /*!< ETM_CCR: NC Mask                        */
#define ETM_CCR_NC_SHIFT                         13                                                  /*!< ETM_CCR: NC Position                    */
#define ETM_CCR_NC(x)                            (((x)<<ETM_CCR_NC_SHIFT)&ETM_CCR_NC_MASK)           /*!< ETM_CCR                                 */
#define ETM_CCR_SP_MASK                          (0x01UL << ETM_CCR_SP_SHIFT)                        /*!< ETM_CCR: SP Mask                        */
#define ETM_CCR_SP_SHIFT                         16                                                  /*!< ETM_CCR: SP Position                    */
#define ETM_CCR_NEI_MASK                         (0x07UL << ETM_CCR_NEI_SHIFT)                       /*!< ETM_CCR: NEI Mask                       */
#define ETM_CCR_NEI_SHIFT                        17                                                  /*!< ETM_CCR: NEI Position                   */
#define ETM_CCR_NEI(x)                           (((x)<<ETM_CCR_NEI_SHIFT)&ETM_CCR_NEI_MASK)         /*!< ETM_CCR                                 */
#define ETM_CCR_NEO_MASK                         (0x07UL << ETM_CCR_NEO_SHIFT)                       /*!< ETM_CCR: NEO Mask                       */
#define ETM_CCR_NEO_SHIFT                        20                                                  /*!< ETM_CCR: NEO Position                   */
#define ETM_CCR_NEO(x)                           (((x)<<ETM_CCR_NEO_SHIFT)&ETM_CCR_NEO_MASK)         /*!< ETM_CCR                                 */
#define ETM_CCR_FFLP_MASK                        (0x01UL << ETM_CCR_FFLP_SHIFT)                      /*!< ETM_CCR: FFLP Mask                      */
#define ETM_CCR_FFLP_SHIFT                       23                                                  /*!< ETM_CCR: FFLP Position                  */
#define ETM_CCR_NCIDC_MASK                       (0x03UL << ETM_CCR_NCIDC_SHIFT)                     /*!< ETM_CCR: NCIDC Mask                     */
#define ETM_CCR_NCIDC_SHIFT                      24                                                  /*!< ETM_CCR: NCIDC Position                 */
#define ETM_CCR_NCIDC(x)                         (((x)<<ETM_CCR_NCIDC_SHIFT)&ETM_CCR_NCIDC_MASK)     /*!< ETM_CCR                                 */
#define ETM_CCR_TSSBP_MASK                       (0x01UL << ETM_CCR_TSSBP_SHIFT)                     /*!< ETM_CCR: TSSBP Mask                     */
#define ETM_CCR_TSSBP_SHIFT                      26                                                  /*!< ETM_CCR: TSSBP Position                 */
#define ETM_CCR_CMA_MASK                         (0x01UL << ETM_CCR_CMA_SHIFT)                       /*!< ETM_CCR: CMA Mask                       */
#define ETM_CCR_CMA_SHIFT                        27                                                  /*!< ETM_CCR: CMA Position                   */
#define ETM_CCR_ETMIDRP_MASK                     (0x01UL << ETM_CCR_ETMIDRP_SHIFT)                   /*!< ETM_CCR: ETMIDRP Mask                   */
#define ETM_CCR_ETMIDRP_SHIFT                    31                                                  /*!< ETM_CCR: ETMIDRP Position               */

/* ------- ETM_TRIGGER                              ------ */
#define ETM_TRIGGER_TriggerEvent_MASK            (0x1FFFFUL << ETM_TRIGGER_TriggerEvent_SHIFT)       /*!< ETM_TRIGGER: TriggerEvent Mask          */
#define ETM_TRIGGER_TriggerEvent_SHIFT           0                                                   /*!< ETM_TRIGGER: TriggerEvent Position      */
#define ETM_TRIGGER_TriggerEvent(x)              (((x)<<ETM_TRIGGER_TriggerEvent_SHIFT)&ETM_TRIGGER_TriggerEvent_MASK) /*!< ETM_TRIGGER                             */

/* ------- ETM_SR                                   ------ */
#define ETM_SR_UOF_MASK                          (0x01UL << ETM_SR_UOF_SHIFT)                        /*!< ETM_SR: UOF Mask                        */
#define ETM_SR_UOF_SHIFT                         0                                                   /*!< ETM_SR: UOF Position                    */
#define ETM_SR_Progbit_MASK                      (0x01UL << ETM_SR_Progbit_SHIFT)                    /*!< ETM_SR: Progbit Mask                    */
#define ETM_SR_Progbit_SHIFT                     1                                                   /*!< ETM_SR: Progbit Position                */
#define ETM_SR_Status_MASK                       (0x01UL << ETM_SR_Status_SHIFT)                     /*!< ETM_SR: Status Mask                     */
#define ETM_SR_Status_SHIFT                      2                                                   /*!< ETM_SR: Status Position                 */
#define ETM_SR_Trigger_MASK                      (0x01UL << ETM_SR_Trigger_SHIFT)                    /*!< ETM_SR: Trigger Mask                    */
#define ETM_SR_Trigger_SHIFT                     3                                                   /*!< ETM_SR: Trigger Position                */

/* ------- ETM_SCR                                  ------ */
#define ETM_SCR_MaximumPortSize_MASK             (0x07UL << ETM_SCR_MaximumPortSize_SHIFT)           /*!< ETM_SCR: MaximumPortSize Mask           */
#define ETM_SCR_MaximumPortSize_SHIFT            0                                                   /*!< ETM_SCR: MaximumPortSize Position       */
#define ETM_SCR_MaximumPortSize(x)               (((x)<<ETM_SCR_MaximumPortSize_SHIFT)&ETM_SCR_MaximumPortSize_MASK) /*!< ETM_SCR                                 */
#define ETM_SCR_FIFOFULLsupported_MASK           (0x01UL << ETM_SCR_FIFOFULLsupported_SHIFT)         /*!< ETM_SCR: FIFOFULLsupported Mask         */
#define ETM_SCR_FIFOFULLsupported_SHIFT          8                                                   /*!< ETM_SCR: FIFOFULLsupported Position     */
#define ETM_SCR_MaximumPortSize3_MASK            (0x01UL << ETM_SCR_MaximumPortSize3_SHIFT)          /*!< ETM_SCR: MaximumPortSize3 Mask          */
#define ETM_SCR_MaximumPortSize3_SHIFT           9                                                   /*!< ETM_SCR: MaximumPortSize3 Position      */
#define ETM_SCR_PortSizeSupported_MASK           (0x01UL << ETM_SCR_PortSizeSupported_SHIFT)         /*!< ETM_SCR: PortSizeSupported Mask         */
#define ETM_SCR_PortSizeSupported_SHIFT          10                                                  /*!< ETM_SCR: PortSizeSupported Position     */
#define ETM_SCR_PortModeSupported_MASK           (0x01UL << ETM_SCR_PortModeSupported_SHIFT)         /*!< ETM_SCR: PortModeSupported Mask         */
#define ETM_SCR_PortModeSupported_SHIFT          11                                                  /*!< ETM_SCR: PortModeSupported Position     */
#define ETM_SCR_N_MASK                           (0x07UL << ETM_SCR_N_SHIFT)                         /*!< ETM_SCR: N Mask                         */
#define ETM_SCR_N_SHIFT                          12                                                  /*!< ETM_SCR: N Position                     */
#define ETM_SCR_N(x)                             (((x)<<ETM_SCR_N_SHIFT)&ETM_SCR_N_MASK)             /*!< ETM_SCR                                 */
#define ETM_SCR_NoFetchComparisons_MASK          (0x01UL << ETM_SCR_NoFetchComparisons_SHIFT)        /*!< ETM_SCR: NoFetchComparisons Mask        */
#define ETM_SCR_NoFetchComparisons_SHIFT         17                                                  /*!< ETM_SCR: NoFetchComparisons Position    */

/* ------- ETM_EEVR                                 ------ */
#define ETM_EEVR_TraceEnableEvent_MASK           (0x1FFFFUL << ETM_EEVR_TraceEnableEvent_SHIFT)      /*!< ETM_EEVR: TraceEnableEvent Mask         */
#define ETM_EEVR_TraceEnableEvent_SHIFT          0                                                   /*!< ETM_EEVR: TraceEnableEvent Position     */
#define ETM_EEVR_TraceEnableEvent(x)             (((x)<<ETM_EEVR_TraceEnableEvent_SHIFT)&ETM_EEVR_TraceEnableEvent_MASK) /*!< ETM_EEVR                                */

/* ------- ETM_TECR1                                ------ */
#define ETM_TECR1_TraceControlEnable_MASK        (0x01UL << ETM_TECR1_TraceControlEnable_SHIFT)      /*!< ETM_TECR1: TraceControlEnable Mask      */
#define ETM_TECR1_TraceControlEnable_SHIFT       25                                                  /*!< ETM_TECR1: TraceControlEnable Position  */

/* ------- ETM_FFLR                                 ------ */
#define ETM_FFLR_FIFOFullLevel_MASK              (0xFFUL << ETM_FFLR_FIFOFullLevel_SHIFT)            /*!< ETM_FFLR: FIFOFullLevel Mask            */
#define ETM_FFLR_FIFOFullLevel_SHIFT             0                                                   /*!< ETM_FFLR: FIFOFullLevel Position        */
#define ETM_FFLR_FIFOFullLevel(x)                (((x)<<ETM_FFLR_FIFOFullLevel_SHIFT)&ETM_FFLR_FIFOFullLevel_MASK) /*!< ETM_FFLR                                */

/* ------- ETM_CNTRLDVR1                            ------ */
#define ETM_CNTRLDVR1_IntitialCount_MASK         (0xFFFFUL << ETM_CNTRLDVR1_IntitialCount_SHIFT)     /*!< ETM_CNTRLDVR1: IntitialCount Mask       */
#define ETM_CNTRLDVR1_IntitialCount_SHIFT        0                                                   /*!< ETM_CNTRLDVR1: IntitialCount Position   */
#define ETM_CNTRLDVR1_IntitialCount(x)           (((x)<<ETM_CNTRLDVR1_IntitialCount_SHIFT)&ETM_CNTRLDVR1_IntitialCount_MASK) /*!< ETM_CNTRLDVR1                           */

/* ------- ETM_SYNCFR                               ------ */
#define ETM_SYNCFR_SyncFrequency_MASK            (0xFFFUL << ETM_SYNCFR_SyncFrequency_SHIFT)         /*!< ETM_SYNCFR: SyncFrequency Mask          */
#define ETM_SYNCFR_SyncFrequency_SHIFT           0                                                   /*!< ETM_SYNCFR: SyncFrequency Position      */
#define ETM_SYNCFR_SyncFrequency(x)              (((x)<<ETM_SYNCFR_SyncFrequency_SHIFT)&ETM_SYNCFR_SyncFrequency_MASK) /*!< ETM_SYNCFR                              */

/* ------- ETM_IDR                                  ------ */
#define ETM_IDR_ImplementationRevision_MASK      (0x0FUL << ETM_IDR_ImplementationRevision_SHIFT)    /*!< ETM_IDR: ImplementationRevision Mask    */
#define ETM_IDR_ImplementationRevision_SHIFT     0                                                   /*!< ETM_IDR: ImplementationRevision Position*/
#define ETM_IDR_ImplementationRevision(x)        (((x)<<ETM_IDR_ImplementationRevision_SHIFT)&ETM_IDR_ImplementationRevision_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_MinorETMarchitectureVersion_MASK (0x0FUL << ETM_IDR_MinorETMarchitectureVersion_SHIFT) /*!< ETM_IDR: MinorETMarchitectureVersion Mask*/
#define ETM_IDR_MinorETMarchitectureVersion_SHIFT 4                                                  /*!< ETM_IDR: MinorETMarchitectureVersion Position*/
#define ETM_IDR_MinorETMarchitectureVersion(x)   (((x)<<ETM_IDR_MinorETMarchitectureVersion_SHIFT)&ETM_IDR_MinorETMarchitectureVersion_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_MajorETMarchitectureVersion_MASK (0x0FUL << ETM_IDR_MajorETMarchitectureVersion_SHIFT) /*!< ETM_IDR: MajorETMarchitectureVersion Mask*/
#define ETM_IDR_MajorETMarchitectureVersion_SHIFT 8                                                  /*!< ETM_IDR: MajorETMarchitectureVersion Position*/
#define ETM_IDR_MajorETMarchitectureVersion(x)   (((x)<<ETM_IDR_MajorETMarchitectureVersion_SHIFT)&ETM_IDR_MajorETMarchitectureVersion_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_ProcessorFamily_MASK             (0x0FUL << ETM_IDR_ProcessorFamily_SHIFT)           /*!< ETM_IDR: ProcessorFamily Mask           */
#define ETM_IDR_ProcessorFamily_SHIFT            12                                                  /*!< ETM_IDR: ProcessorFamily Position       */
#define ETM_IDR_ProcessorFamily(x)               (((x)<<ETM_IDR_ProcessorFamily_SHIFT)&ETM_IDR_ProcessorFamily_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_LoadPCfirst_MASK                 (0x01UL << ETM_IDR_LoadPCfirst_SHIFT)               /*!< ETM_IDR: LoadPCfirst Mask               */
#define ETM_IDR_LoadPCfirst_SHIFT                16                                                  /*!< ETM_IDR: LoadPCfirst Position           */
#define ETM_IDR_ThumbInstructionTracing_MASK     (0x01UL << ETM_IDR_ThumbInstructionTracing_SHIFT)   /*!< ETM_IDR: ThumbInstructionTracing Mask   */
#define ETM_IDR_ThumbInstructionTracing_SHIFT    18                                                  /*!< ETM_IDR: ThumbInstructionTracing Position*/
#define ETM_IDR_SecurityExtensionSupport_MASK    (0x01UL << ETM_IDR_SecurityExtensionSupport_SHIFT)  /*!< ETM_IDR: SecurityExtensionSupport Mask  */
#define ETM_IDR_SecurityExtensionSupport_SHIFT   19                                                  /*!< ETM_IDR: SecurityExtensionSupport Position*/
#define ETM_IDR_BranchPacketEncoding_MASK        (0x01UL << ETM_IDR_BranchPacketEncoding_SHIFT)      /*!< ETM_IDR: BranchPacketEncoding Mask      */
#define ETM_IDR_BranchPacketEncoding_SHIFT       20                                                  /*!< ETM_IDR: BranchPacketEncoding Position  */
#define ETM_IDR_ImplementorCode_MASK             (0xFFUL << ETM_IDR_ImplementorCode_SHIFT)           /*!< ETM_IDR: ImplementorCode Mask           */
#define ETM_IDR_ImplementorCode_SHIFT            24                                                  /*!< ETM_IDR: ImplementorCode Position       */
#define ETM_IDR_ImplementorCode(x)               (((x)<<ETM_IDR_ImplementorCode_SHIFT)&ETM_IDR_ImplementorCode_MASK) /*!< ETM_IDR                                 */

/* ------- ETM_CCER                                 ------ */
#define ETM_CCER_ExtendedExternalInputSelectors_MASK (0x07UL << ETM_CCER_ExtendedExternalInputSelectors_SHIFT) /*!< ETM_CCER: ExtendedExternalInputSelectors Mask*/
#define ETM_CCER_ExtendedExternalInputSelectors_SHIFT 0                                              /*!< ETM_CCER: ExtendedExternalInputSelectors Position*/
#define ETM_CCER_ExtendedExternalInputSelectors(x) (((x)<<ETM_CCER_ExtendedExternalInputSelectors_SHIFT)&ETM_CCER_ExtendedExternalInputSelectors_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_ExtendedExternalInputBus_MASK   (0xFFUL << ETM_CCER_ExtendedExternalInputBus_SHIFT) /*!< ETM_CCER: ExtendedExternalInputBus Mask */
#define ETM_CCER_ExtendedExternalInputBus_SHIFT  3                                                   /*!< ETM_CCER: ExtendedExternalInputBus Position*/
#define ETM_CCER_ExtendedExternalInputBus(x)     (((x)<<ETM_CCER_ExtendedExternalInputBus_SHIFT)&ETM_CCER_ExtendedExternalInputBus_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_ReadableRegisters_MASK          (0x01UL << ETM_CCER_ReadableRegisters_SHIFT)        /*!< ETM_CCER: ReadableRegisters Mask        */
#define ETM_CCER_ReadableRegisters_SHIFT         11                                                  /*!< ETM_CCER: ReadableRegisters Position    */
#define ETM_CCER_DataAddressComparisons_MASK     (0x01UL << ETM_CCER_DataAddressComparisons_SHIFT)   /*!< ETM_CCER: DataAddressComparisons Mask   */
#define ETM_CCER_DataAddressComparisons_SHIFT    12                                                  /*!< ETM_CCER: DataAddressComparisons Position*/
#define ETM_CCER_InstrumentationResources_MASK   (0x07UL << ETM_CCER_InstrumentationResources_SHIFT) /*!< ETM_CCER: InstrumentationResources Mask */
#define ETM_CCER_InstrumentationResources_SHIFT  13                                                  /*!< ETM_CCER: InstrumentationResources Position*/
#define ETM_CCER_InstrumentationResources(x)     (((x)<<ETM_CCER_InstrumentationResources_SHIFT)&ETM_CCER_InstrumentationResources_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_EmbeddedICEwatchpointInputs_MASK (0x0FUL << ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT) /*!< ETM_CCER: EmbeddedICEwatchpointInputs Mask*/
#define ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT 16                                                /*!< ETM_CCER: EmbeddedICEwatchpointInputs Position*/
#define ETM_CCER_EmbeddedICEwatchpointInputs(x)  (((x)<<ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT)&ETM_CCER_EmbeddedICEwatchpointInputs_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_MASK (0x01UL << ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_SHIFT) /*!< ETM_CCER: TraceStartStopBlockUsesEmbeddedICEwatchpointInputs Mask*/
#define ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_SHIFT 20                         /*!< ETM_CCER: TraceStartStopBlockUsesEmbeddedICEwatchpointInputs Position*/
#define ETM_CCER_EmbeddedICEbehaviorControlImplemented_MASK (0x01UL << ETM_CCER_EmbeddedICEbehaviorControlImplemented_SHIFT) /*!< ETM_CCER: EmbeddedICEbehaviorControlImplemented Mask*/
#define ETM_CCER_EmbeddedICEbehaviorControlImplemented_SHIFT 21                                      /*!< ETM_CCER: EmbeddedICEbehaviorControlImplemented Position*/
#define ETM_CCER_TimestampingImplemented_MASK    (0x01UL << ETM_CCER_TimestampingImplemented_SHIFT)  /*!< ETM_CCER: TimestampingImplemented Mask  */
#define ETM_CCER_TimestampingImplemented_SHIFT   22                                                  /*!< ETM_CCER: TimestampingImplemented Position*/
#define ETM_CCER_ReducedFunctionCounter_MASK     (0x01UL << ETM_CCER_ReducedFunctionCounter_SHIFT)   /*!< ETM_CCER: ReducedFunctionCounter Mask   */
#define ETM_CCER_ReducedFunctionCounter_SHIFT    27                                                  /*!< ETM_CCER: ReducedFunctionCounter Position*/
#define ETM_CCER_TimestampEncoding_MASK          (0x01UL << ETM_CCER_TimestampEncoding_SHIFT)        /*!< ETM_CCER: TimestampEncoding Mask        */
#define ETM_CCER_TimestampEncoding_SHIFT         28                                                  /*!< ETM_CCER: TimestampEncoding Position    */
#define ETM_CCER_TimestampSize_MASK              (0x01UL << ETM_CCER_TimestampSize_SHIFT)            /*!< ETM_CCER: TimestampSize Mask            */
#define ETM_CCER_TimestampSize_SHIFT             29                                                  /*!< ETM_CCER: TimestampSize Position        */

/* ------- ETM_TESSEICR                             ------ */
#define ETM_TESSEICR_StartResourceSelection_MASK (0x0FUL << ETM_TESSEICR_StartResourceSelection_SHIFT) /*!< ETM_TESSEICR: StartResourceSelection Mask*/
#define ETM_TESSEICR_StartResourceSelection_SHIFT 0                                                  /*!< ETM_TESSEICR: StartResourceSelection Position*/
#define ETM_TESSEICR_StartResourceSelection(x)   (((x)<<ETM_TESSEICR_StartResourceSelection_SHIFT)&ETM_TESSEICR_StartResourceSelection_MASK) /*!< ETM_TESSEICR                            */
#define ETM_TESSEICR_StopResourceSelection_MASK  (0x0FUL << ETM_TESSEICR_StopResourceSelection_SHIFT) /*!< ETM_TESSEICR: StopResourceSelection Mask*/
#define ETM_TESSEICR_StopResourceSelection_SHIFT 16                                                  /*!< ETM_TESSEICR: StopResourceSelection Position*/
#define ETM_TESSEICR_StopResourceSelection(x)    (((x)<<ETM_TESSEICR_StopResourceSelection_SHIFT)&ETM_TESSEICR_StopResourceSelection_MASK) /*!< ETM_TESSEICR                            */

/* ------- ETM_TSEVR                                ------ */
#define ETM_TSEVR_TimestampEvent_MASK            (0xFFFUL << ETM_TSEVR_TimestampEvent_SHIFT)         /*!< ETM_TSEVR: TimestampEvent Mask          */
#define ETM_TSEVR_TimestampEvent_SHIFT           0                                                   /*!< ETM_TSEVR: TimestampEvent Position      */
#define ETM_TSEVR_TimestampEvent(x)              (((x)<<ETM_TSEVR_TimestampEvent_SHIFT)&ETM_TSEVR_TimestampEvent_MASK) /*!< ETM_TSEVR                               */

/* ------- ETM_TRACEIDR                             ------ */
#define ETM_TRACEIDR_TraceID_MASK                (0x7FUL << ETM_TRACEIDR_TraceID_SHIFT)              /*!< ETM_TRACEIDR: TraceID Mask              */
#define ETM_TRACEIDR_TraceID_SHIFT               0                                                   /*!< ETM_TRACEIDR: TraceID Position          */
#define ETM_TRACEIDR_TraceID(x)                  (((x)<<ETM_TRACEIDR_TraceID_SHIFT)&ETM_TRACEIDR_TraceID_MASK) /*!< ETM_TRACEIDR                            */

/* ------- ETM_IDR2                                 ------ */

/* ------- ETM_PDSR                                 ------ */
#define ETM_PDSR_ETMpoweredup_MASK               (0x01UL << ETM_PDSR_ETMpoweredup_SHIFT)             /*!< ETM_PDSR: ETMpoweredup Mask             */
#define ETM_PDSR_ETMpoweredup_SHIFT              0                                                   /*!< ETM_PDSR: ETMpoweredup Position         */

/* ------- ETM__ITMISCIN                            ------ */
#define ETM__ITMISCIN_EXTIN_MASK                 (0x03UL << ETM__ITMISCIN_EXTIN_SHIFT)               /*!< ETM__ITMISCIN: EXTIN Mask               */
#define ETM__ITMISCIN_EXTIN_SHIFT                0                                                   /*!< ETM__ITMISCIN: EXTIN Position           */
#define ETM__ITMISCIN_EXTIN(x)                   (((x)<<ETM__ITMISCIN_EXTIN_SHIFT)&ETM__ITMISCIN_EXTIN_MASK) /*!< ETM__ITMISCIN                           */
#define ETM__ITMISCIN_COREHALT_MASK              (0x01UL << ETM__ITMISCIN_COREHALT_SHIFT)            /*!< ETM__ITMISCIN: COREHALT Mask            */
#define ETM__ITMISCIN_COREHALT_SHIFT             4                                                   /*!< ETM__ITMISCIN: COREHALT Position        */

/* ------- ETM__ITTRIGOUT                           ------ */
#define ETM__ITTRIGOUT_TRIGGER_MASK              (0x01UL << ETM__ITTRIGOUT_TRIGGER_SHIFT)            /*!< ETM__ITTRIGOUT: TRIGGER Mask            */
#define ETM__ITTRIGOUT_TRIGGER_SHIFT             0                                                   /*!< ETM__ITTRIGOUT: TRIGGER Position        */

/* ------- ETM__ITATBCTR2                           ------ */
#define ETM__ITATBCTR2_ATREADY_MASK              (0x01UL << ETM__ITATBCTR2_ATREADY_SHIFT)            /*!< ETM__ITATBCTR2: ATREADY Mask            */
#define ETM__ITATBCTR2_ATREADY_SHIFT             0                                                   /*!< ETM__ITATBCTR2: ATREADY Position        */

/* ------- ETM__ITATBCTR0                           ------ */
#define ETM__ITATBCTR0_ATVALID_MASK              (0x01UL << ETM__ITATBCTR0_ATVALID_SHIFT)            /*!< ETM__ITATBCTR0: ATVALID Mask            */
#define ETM__ITATBCTR0_ATVALID_SHIFT             0                                                   /*!< ETM__ITATBCTR0: ATVALID Position        */

/* ------- ETM_ITCTRL                               ------ */
#define ETM_ITCTRL_Mode_MASK                     (0x01UL << ETM_ITCTRL_Mode_SHIFT)                   /*!< ETM_ITCTRL: Mode Mask                   */
#define ETM_ITCTRL_Mode_SHIFT                    0                                                   /*!< ETM_ITCTRL: Mode Position               */

/* ------- ETM_CLAIMSET                             ------ */
#define ETM_CLAIMSET_CLAIMSET_MASK               (0x0FUL << ETM_CLAIMSET_CLAIMSET_SHIFT)             /*!< ETM_CLAIMSET: CLAIMSET Mask             */
#define ETM_CLAIMSET_CLAIMSET_SHIFT              0                                                   /*!< ETM_CLAIMSET: CLAIMSET Position         */
#define ETM_CLAIMSET_CLAIMSET(x)                 (((x)<<ETM_CLAIMSET_CLAIMSET_SHIFT)&ETM_CLAIMSET_CLAIMSET_MASK) /*!< ETM_CLAIMSET                            */

/* ------- ETM_CLAIMCLR                             ------ */
#define ETM_CLAIMCLR_CLAIMCLR_MASK               (0x0FUL << ETM_CLAIMCLR_CLAIMCLR_SHIFT)             /*!< ETM_CLAIMCLR: CLAIMCLR Mask             */
#define ETM_CLAIMCLR_CLAIMCLR_SHIFT              0                                                   /*!< ETM_CLAIMCLR: CLAIMCLR Position         */
#define ETM_CLAIMCLR_CLAIMCLR(x)                 (((x)<<ETM_CLAIMCLR_CLAIMCLR_SHIFT)&ETM_CLAIMCLR_CLAIMCLR_MASK) /*!< ETM_CLAIMCLR                            */

/* ------- ETM_LAR                                  ------ */
#define ETM_LAR_WriteAccessCode_MASK             (0xFFFFFFFFUL << ETM_LAR_WriteAccessCode_SHIFT)     /*!< ETM_LAR: WriteAccessCode Mask           */
#define ETM_LAR_WriteAccessCode_SHIFT            0                                                   /*!< ETM_LAR: WriteAccessCode Position       */
#define ETM_LAR_WriteAccessCode(x)               (((x)<<ETM_LAR_WriteAccessCode_SHIFT)&ETM_LAR_WriteAccessCode_MASK) /*!< ETM_LAR                                 */

/* ------- ETM_LSR                                  ------ */
#define ETM_LSR_IMP_MASK                         (0x01UL << ETM_LSR_IMP_SHIFT)                       /*!< ETM_LSR: IMP Mask                       */
#define ETM_LSR_IMP_SHIFT                        0                                                   /*!< ETM_LSR: IMP Position                   */
#define ETM_LSR_STATUS_MASK                      (0x01UL << ETM_LSR_STATUS_SHIFT)                    /*!< ETM_LSR: STATUS Mask                    */
#define ETM_LSR_STATUS_SHIFT                     1                                                   /*!< ETM_LSR: STATUS Position                */
#define ETM_LSR_s8BIT_MASK                       (0x01UL << ETM_LSR_s8BIT_SHIFT)                     /*!< ETM_LSR: s8BIT Mask                     */
#define ETM_LSR_s8BIT_SHIFT                      2                                                   /*!< ETM_LSR: s8BIT Position                 */

/* ------- ETM_AUTHSTATUS                           ------ */
#define ETM_AUTHSTATUS_NSID_MASK                 (0x03UL << ETM_AUTHSTATUS_NSID_SHIFT)               /*!< ETM_AUTHSTATUS: NSID Mask               */
#define ETM_AUTHSTATUS_NSID_SHIFT                0                                                   /*!< ETM_AUTHSTATUS: NSID Position           */
#define ETM_AUTHSTATUS_NSID(x)                   (((x)<<ETM_AUTHSTATUS_NSID_SHIFT)&ETM_AUTHSTATUS_NSID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_NSNID_MASK                (0x03UL << ETM_AUTHSTATUS_NSNID_SHIFT)              /*!< ETM_AUTHSTATUS: NSNID Mask              */
#define ETM_AUTHSTATUS_NSNID_SHIFT               2                                                   /*!< ETM_AUTHSTATUS: NSNID Position          */
#define ETM_AUTHSTATUS_NSNID(x)                  (((x)<<ETM_AUTHSTATUS_NSNID_SHIFT)&ETM_AUTHSTATUS_NSNID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_SID_MASK                  (0x03UL << ETM_AUTHSTATUS_SID_SHIFT)                /*!< ETM_AUTHSTATUS: SID Mask                */
#define ETM_AUTHSTATUS_SID_SHIFT                 4                                                   /*!< ETM_AUTHSTATUS: SID Position            */
#define ETM_AUTHSTATUS_SID(x)                    (((x)<<ETM_AUTHSTATUS_SID_SHIFT)&ETM_AUTHSTATUS_SID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_SNID_MASK                 (0x03UL << ETM_AUTHSTATUS_SNID_SHIFT)               /*!< ETM_AUTHSTATUS: SNID Mask               */
#define ETM_AUTHSTATUS_SNID_SHIFT                6                                                   /*!< ETM_AUTHSTATUS: SNID Position           */
#define ETM_AUTHSTATUS_SNID(x)                   (((x)<<ETM_AUTHSTATUS_SNID_SHIFT)&ETM_AUTHSTATUS_SNID_MASK) /*!< ETM_AUTHSTATUS                          */

/* ------- ETM_DEVTYPE                              ------ */
#define ETM_DEVTYPE_MajorType_MASK               (0x0FUL << ETM_DEVTYPE_MajorType_SHIFT)             /*!< ETM_DEVTYPE: MajorType Mask             */
#define ETM_DEVTYPE_MajorType_SHIFT              0                                                   /*!< ETM_DEVTYPE: MajorType Position         */
#define ETM_DEVTYPE_MajorType(x)                 (((x)<<ETM_DEVTYPE_MajorType_SHIFT)&ETM_DEVTYPE_MajorType_MASK) /*!< ETM_DEVTYPE                             */
#define ETM_DEVTYPE_SubType_MASK                 (0x0FUL << ETM_DEVTYPE_SubType_SHIFT)               /*!< ETM_DEVTYPE: SubType Mask               */
#define ETM_DEVTYPE_SubType_SHIFT                4                                                   /*!< ETM_DEVTYPE: SubType Position           */
#define ETM_DEVTYPE_SubType(x)                   (((x)<<ETM_DEVTYPE_SubType_SHIFT)&ETM_DEVTYPE_SubType_MASK) /*!< ETM_DEVTYPE                             */

/* ------- ETM_PIDR4                                ------ */
#define ETM_PIDR4_JEP106_MASK                    (0x0FUL << ETM_PIDR4_JEP106_SHIFT)                  /*!< ETM_PIDR4: JEP106 Mask                  */
#define ETM_PIDR4_JEP106_SHIFT                   0                                                   /*!< ETM_PIDR4: JEP106 Position              */
#define ETM_PIDR4_JEP106(x)                      (((x)<<ETM_PIDR4_JEP106_SHIFT)&ETM_PIDR4_JEP106_MASK) /*!< ETM_PIDR4                               */
#define ETM_PIDR4_c4KB_MASK                      (0x0FUL << ETM_PIDR4_c4KB_SHIFT)                    /*!< ETM_PIDR4: c4KB Mask                    */
#define ETM_PIDR4_c4KB_SHIFT                     4                                                   /*!< ETM_PIDR4: c4KB Position                */
#define ETM_PIDR4_c4KB(x)                        (((x)<<ETM_PIDR4_c4KB_SHIFT)&ETM_PIDR4_c4KB_MASK)   /*!< ETM_PIDR4                               */

/* ------- ETM_PIDR5                                ------ */

/* ------- ETM_PIDR6                                ------ */

/* ------- ETM_PIDR7                                ------ */

/* ------- ETM_PIDR0                                ------ */
#define ETM_PIDR0_PartNumber_MASK                (0xFFUL << ETM_PIDR0_PartNumber_SHIFT)              /*!< ETM_PIDR0: PartNumber Mask              */
#define ETM_PIDR0_PartNumber_SHIFT               0                                                   /*!< ETM_PIDR0: PartNumber Position          */
#define ETM_PIDR0_PartNumber(x)                  (((x)<<ETM_PIDR0_PartNumber_SHIFT)&ETM_PIDR0_PartNumber_MASK) /*!< ETM_PIDR0                               */

/* ------- ETM_PIDR1                                ------ */
#define ETM_PIDR1_PartNumber_MASK                (0x0FUL << ETM_PIDR1_PartNumber_SHIFT)              /*!< ETM_PIDR1: PartNumber Mask              */
#define ETM_PIDR1_PartNumber_SHIFT               0                                                   /*!< ETM_PIDR1: PartNumber Position          */
#define ETM_PIDR1_PartNumber(x)                  (((x)<<ETM_PIDR1_PartNumber_SHIFT)&ETM_PIDR1_PartNumber_MASK) /*!< ETM_PIDR1                               */
#define ETM_PIDR1_JEP106_identity_code_MASK      (0x0FUL << ETM_PIDR1_JEP106_identity_code_SHIFT)    /*!< ETM_PIDR1: JEP106_identity_code Mask    */
#define ETM_PIDR1_JEP106_identity_code_SHIFT     4                                                   /*!< ETM_PIDR1: JEP106_identity_code Position*/
#define ETM_PIDR1_JEP106_identity_code(x)        (((x)<<ETM_PIDR1_JEP106_identity_code_SHIFT)&ETM_PIDR1_JEP106_identity_code_MASK) /*!< ETM_PIDR1                               */

/* ------- ETM_PIDR2                                ------ */
#define ETM_PIDR2_JEP106_identity_code_MASK      (0x07UL << ETM_PIDR2_JEP106_identity_code_SHIFT)    /*!< ETM_PIDR2: JEP106_identity_code Mask    */
#define ETM_PIDR2_JEP106_identity_code_SHIFT     0                                                   /*!< ETM_PIDR2: JEP106_identity_code Position*/
#define ETM_PIDR2_JEP106_identity_code(x)        (((x)<<ETM_PIDR2_JEP106_identity_code_SHIFT)&ETM_PIDR2_JEP106_identity_code_MASK) /*!< ETM_PIDR2                               */
#define ETM_PIDR2_Revision_MASK                  (0x0FUL << ETM_PIDR2_Revision_SHIFT)                /*!< ETM_PIDR2: Revision Mask                */
#define ETM_PIDR2_Revision_SHIFT                 4                                                   /*!< ETM_PIDR2: Revision Position            */
#define ETM_PIDR2_Revision(x)                    (((x)<<ETM_PIDR2_Revision_SHIFT)&ETM_PIDR2_Revision_MASK) /*!< ETM_PIDR2                               */

/* ------- ETM_PIDR3                                ------ */
#define ETM_PIDR3_CustomerModified_MASK          (0x0FUL << ETM_PIDR3_CustomerModified_SHIFT)        /*!< ETM_PIDR3: CustomerModified Mask        */
#define ETM_PIDR3_CustomerModified_SHIFT         0                                                   /*!< ETM_PIDR3: CustomerModified Position    */
#define ETM_PIDR3_CustomerModified(x)            (((x)<<ETM_PIDR3_CustomerModified_SHIFT)&ETM_PIDR3_CustomerModified_MASK) /*!< ETM_PIDR3                               */
#define ETM_PIDR3_RevAnd_MASK                    (0x0FUL << ETM_PIDR3_RevAnd_SHIFT)                  /*!< ETM_PIDR3: RevAnd Mask                  */
#define ETM_PIDR3_RevAnd_SHIFT                   4                                                   /*!< ETM_PIDR3: RevAnd Position              */
#define ETM_PIDR3_RevAnd(x)                      (((x)<<ETM_PIDR3_RevAnd_SHIFT)&ETM_PIDR3_RevAnd_MASK) /*!< ETM_PIDR3                               */

/* ------- ETM_CIDR0                                ------ */
#define ETM_CIDR0_Preamble_MASK                  (0xFFUL << ETM_CIDR0_Preamble_SHIFT)                /*!< ETM_CIDR0: Preamble Mask                */
#define ETM_CIDR0_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR0: Preamble Position            */
#define ETM_CIDR0_Preamble(x)                    (((x)<<ETM_CIDR0_Preamble_SHIFT)&ETM_CIDR0_Preamble_MASK) /*!< ETM_CIDR0                               */

/* ------- ETM_CIDR1                                ------ */
#define ETM_CIDR1_Preamble_MASK                  (0x0FUL << ETM_CIDR1_Preamble_SHIFT)                /*!< ETM_CIDR1: Preamble Mask                */
#define ETM_CIDR1_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR1: Preamble Position            */
#define ETM_CIDR1_Preamble(x)                    (((x)<<ETM_CIDR1_Preamble_SHIFT)&ETM_CIDR1_Preamble_MASK) /*!< ETM_CIDR1                               */
#define ETM_CIDR1_ComponentClass_MASK            (0x0FUL << ETM_CIDR1_ComponentClass_SHIFT)          /*!< ETM_CIDR1: ComponentClass Mask          */
#define ETM_CIDR1_ComponentClass_SHIFT           4                                                   /*!< ETM_CIDR1: ComponentClass Position      */
#define ETM_CIDR1_ComponentClass(x)              (((x)<<ETM_CIDR1_ComponentClass_SHIFT)&ETM_CIDR1_ComponentClass_MASK) /*!< ETM_CIDR1                               */

/* ------- ETM_CIDR2                                ------ */
#define ETM_CIDR2_Preamble_MASK                  (0xFFUL << ETM_CIDR2_Preamble_SHIFT)                /*!< ETM_CIDR2: Preamble Mask                */
#define ETM_CIDR2_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR2: Preamble Position            */
#define ETM_CIDR2_Preamble(x)                    (((x)<<ETM_CIDR2_Preamble_SHIFT)&ETM_CIDR2_Preamble_MASK) /*!< ETM_CIDR2                               */

/* ------- ETM_CIDR3                                ------ */
#define ETM_CIDR3_Preamble_MASK                  (0xFFUL << ETM_CIDR3_Preamble_SHIFT)                /*!< ETM_CIDR3: Preamble Mask                */
#define ETM_CIDR3_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR3: Preamble Position            */
#define ETM_CIDR3_Preamble(x)                    (((x)<<ETM_CIDR3_Preamble_SHIFT)&ETM_CIDR3_Preamble_MASK) /*!< ETM_CIDR3                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'ETM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define ETM_CR                         (ETM->CR)
#define ETM_CCR                        (ETM->CCR)
#define ETM_TRIGGER                    (ETM->TRIGGER)
#define ETM_SR                         (ETM->SR)
#define ETM_SCR                        (ETM->SCR)
#define ETM_EEVR                       (ETM->EEVR)
#define ETM_TECR1                      (ETM->TECR1)
#define ETM_FFLR                       (ETM->FFLR)
#define ETM_CNTRLDVR1                  (ETM->CNTRLDVR1)
#define ETM_SYNCFR                     (ETM->SYNCFR)
#define ETM_IDR                        (ETM->IDR)
#define ETM_CCER                       (ETM->CCER)
#define ETM_TESSEICR                   (ETM->TESSEICR)
#define ETM_TSEVR                      (ETM->TSEVR)
#define ETM_TRACEIDR                   (ETM->TRACEIDR)
#define ETM_IDR2                       (ETM->IDR2)
#define ETM_PDSR                       (ETM->PDSR)
#define ETM__ITMISCIN                  (ETM->_ITMISCIN)
#define ETM__ITTRIGOUT                 (ETM->_ITTRIGOUT)
#define ETM__ITATBCTR2                 (ETM->_ITATBCTR2)
#define ETM__ITATBCTR0                 (ETM->_ITATBCTR0)
#define ETM_ITCTRL                     (ETM->ITCTRL)
#define ETM_CLAIMSET                   (ETM->CLAIMSET)
#define ETM_CLAIMCLR                   (ETM->CLAIMCLR)
#define ETM_LAR                        (ETM->LAR)
#define ETM_LSR                        (ETM->LSR)
#define ETM_AUTHSTATUS                 (ETM->AUTHSTATUS)
#define ETM_DEVTYPE                    (ETM->DEVTYPE)
#define ETM_PIDR4                      (ETM->PIDR4)
#define ETM_PIDR5                      (ETM->PIDR5)
#define ETM_PIDR6                      (ETM->PIDR6)
#define ETM_PIDR7                      (ETM->PIDR7)
#define ETM_PIDR0                      (ETM->PIDR0)
#define ETM_PIDR1                      (ETM->PIDR1)
#define ETM_PIDR2                      (ETM->PIDR2)
#define ETM_PIDR3                      (ETM->PIDR3)
#define ETM_CIDR0                      (ETM->CIDR0)
#define ETM_CIDR1                      (ETM->CIDR1)
#define ETM_CIDR2                      (ETM->CIDR2)
#define ETM_CIDR3                      (ETM->CIDR3)

/* ================================================================================ */
/* ================           EWM (file:EWM_MK_0)                  ================ */
/* ================================================================================ */

/**
 * @brief External Watchdog Monitor
 */
typedef struct {                                /*!<       EWM Structure                                                */
   __IO uint8_t   CTRL;                         /*!< 0000: Control Register                                             */
   __IO uint8_t   SERV;                         /*!< 0001: Service Register                                             */
   __IO uint8_t   CMPL;                         /*!< 0002: Compare Low Register                                         */
   __IO uint8_t   CMPH;                         /*!< 0003: Compare High Register                                        */
} EWM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'EWM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- EWM_CTRL                                 ------ */
#define EWM_CTRL_EWMEN_MASK                      (0x01UL << EWM_CTRL_EWMEN_SHIFT)                    /*!< EWM_CTRL: EWMEN Mask                    */
#define EWM_CTRL_EWMEN_SHIFT                     0                                                   /*!< EWM_CTRL: EWMEN Position                */
#define EWM_CTRL_ASSIN_MASK                      (0x01UL << EWM_CTRL_ASSIN_SHIFT)                    /*!< EWM_CTRL: ASSIN Mask                    */
#define EWM_CTRL_ASSIN_SHIFT                     1                                                   /*!< EWM_CTRL: ASSIN Position                */
#define EWM_CTRL_INEN_MASK                       (0x01UL << EWM_CTRL_INEN_SHIFT)                     /*!< EWM_CTRL: INEN Mask                     */
#define EWM_CTRL_INEN_SHIFT                      2                                                   /*!< EWM_CTRL: INEN Position                 */
#define EWM_CTRL_INTEN_MASK                      (0x01UL << EWM_CTRL_INTEN_SHIFT)                    /*!< EWM_CTRL: INTEN Mask                    */
#define EWM_CTRL_INTEN_SHIFT                     3                                                   /*!< EWM_CTRL: INTEN Position                */

/* ------- EWM_SERV                                 ------ */
#define EWM_SERV_SERVICE_MASK                    (0xFFUL << EWM_SERV_SERVICE_SHIFT)                  /*!< EWM_SERV: SERVICE Mask                  */
#define EWM_SERV_SERVICE_SHIFT                   0                                                   /*!< EWM_SERV: SERVICE Position              */
#define EWM_SERV_SERVICE(x)                      (((x)<<EWM_SERV_SERVICE_SHIFT)&EWM_SERV_SERVICE_MASK) /*!< EWM_SERV                                */

/* ------- EWM_CMPL                                 ------ */
#define EWM_CMPL_COMPAREL_MASK                   (0xFFUL << EWM_CMPL_COMPAREL_SHIFT)                 /*!< EWM_CMPL: COMPAREL Mask                 */
#define EWM_CMPL_COMPAREL_SHIFT                  0                                                   /*!< EWM_CMPL: COMPAREL Position             */
#define EWM_CMPL_COMPAREL(x)                     (((x)<<EWM_CMPL_COMPAREL_SHIFT)&EWM_CMPL_COMPAREL_MASK) /*!< EWM_CMPL                                */

/* ------- EWM_CMPH                                 ------ */
#define EWM_CMPH_COMPAREH_MASK                   (0xFFUL << EWM_CMPH_COMPAREH_SHIFT)                 /*!< EWM_CMPH: COMPAREH Mask                 */
#define EWM_CMPH_COMPAREH_SHIFT                  0                                                   /*!< EWM_CMPH: COMPAREH Position             */
#define EWM_CMPH_COMPAREH(x)                     (((x)<<EWM_CMPH_COMPAREH_SHIFT)&EWM_CMPH_COMPAREH_MASK) /*!< EWM_CMPH                                */

/* -------------------------------------------------------------------------------- */
/* -----------     'EWM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define EWM_CTRL                       (EWM->CTRL)
#define EWM_SERV                       (EWM->SERV)
#define EWM_CMPL                       (EWM->CMPL)
#define EWM_CMPH                       (EWM->CMPH)

/* ================================================================================ */
/* ================           FMC (file:FMC_3)                     ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Controller
 */
typedef struct {                                /*!<       FMC Structure                                                */
   __IO uint32_t  PFAPR;                        /*!< 0000: Flash Access Protection Register                             */
   __IO uint32_t  PFB0CR;                       /*!< 0004: Flash Bank 0 Control Register                                */
   __IO uint32_t  PFB1CR;                       /*!< 0008: Flash Bank 1 Control Register                                */
   __I  uint32_t  RESERVED0[61];                /*!< 000C:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0020, 32)                                            */
      __IO uint32_t  S0;                        /*!< 0100: Cache Tag Storage                                            */
      __IO uint32_t  S1;                        /*!< 0104: Cache Tag Storage                                            */
   } TAGVDW[4];
   __I  uint32_t  RESERVED1[56];                /*!< 0120:                                                              */
   struct { /* (cluster) */                     /*!< 0200: (size=0x0040, 64)                                            */
      __IO uint32_t  S0U;                       /*!< 0200: Cache Data Storage (upper word)                              */
      __IO uint32_t  S0L;                       /*!< 0204: Cache Data Storage (lower word)                              */
      __IO uint32_t  S1U;                       /*!< 0208: Cache Data Storage (upper word)                              */
      __IO uint32_t  S1L;                       /*!< 020C: Cache Data Storage (lower word)                              */
   } DATAW[4];
} FMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FMC_PFAPR                                ------ */
#define FMC_PFAPR_M0AP_MASK                      (0x03UL << FMC_PFAPR_M0AP_SHIFT)                    /*!< FMC_PFAPR: M0AP Mask                    */
#define FMC_PFAPR_M0AP_SHIFT                     0                                                   /*!< FMC_PFAPR: M0AP Position                */
#define FMC_PFAPR_M0AP(x)                        (((x)<<FMC_PFAPR_M0AP_SHIFT)&FMC_PFAPR_M0AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M1AP_MASK                      (0x03UL << FMC_PFAPR_M1AP_SHIFT)                    /*!< FMC_PFAPR: M1AP Mask                    */
#define FMC_PFAPR_M1AP_SHIFT                     2                                                   /*!< FMC_PFAPR: M1AP Position                */
#define FMC_PFAPR_M1AP(x)                        (((x)<<FMC_PFAPR_M1AP_SHIFT)&FMC_PFAPR_M1AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M2AP_MASK                      (0x03UL << FMC_PFAPR_M2AP_SHIFT)                    /*!< FMC_PFAPR: M2AP Mask                    */
#define FMC_PFAPR_M2AP_SHIFT                     4                                                   /*!< FMC_PFAPR: M2AP Position                */
#define FMC_PFAPR_M2AP(x)                        (((x)<<FMC_PFAPR_M2AP_SHIFT)&FMC_PFAPR_M2AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M3AP_MASK                      (0x03UL << FMC_PFAPR_M3AP_SHIFT)                    /*!< FMC_PFAPR: M3AP Mask                    */
#define FMC_PFAPR_M3AP_SHIFT                     6                                                   /*!< FMC_PFAPR: M3AP Position                */
#define FMC_PFAPR_M3AP(x)                        (((x)<<FMC_PFAPR_M3AP_SHIFT)&FMC_PFAPR_M3AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M4AP_MASK                      (0x03UL << FMC_PFAPR_M4AP_SHIFT)                    /*!< FMC_PFAPR: M4AP Mask                    */
#define FMC_PFAPR_M4AP_SHIFT                     8                                                   /*!< FMC_PFAPR: M4AP Position                */
#define FMC_PFAPR_M4AP(x)                        (((x)<<FMC_PFAPR_M4AP_SHIFT)&FMC_PFAPR_M4AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M5AP_MASK                      (0x03UL << FMC_PFAPR_M5AP_SHIFT)                    /*!< FMC_PFAPR: M5AP Mask                    */
#define FMC_PFAPR_M5AP_SHIFT                     10                                                  /*!< FMC_PFAPR: M5AP Position                */
#define FMC_PFAPR_M5AP(x)                        (((x)<<FMC_PFAPR_M5AP_SHIFT)&FMC_PFAPR_M5AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M6AP_MASK                      (0x03UL << FMC_PFAPR_M6AP_SHIFT)                    /*!< FMC_PFAPR: M6AP Mask                    */
#define FMC_PFAPR_M6AP_SHIFT                     12                                                  /*!< FMC_PFAPR: M6AP Position                */
#define FMC_PFAPR_M6AP(x)                        (((x)<<FMC_PFAPR_M6AP_SHIFT)&FMC_PFAPR_M6AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M7AP_MASK                      (0x03UL << FMC_PFAPR_M7AP_SHIFT)                    /*!< FMC_PFAPR: M7AP Mask                    */
#define FMC_PFAPR_M7AP_SHIFT                     14                                                  /*!< FMC_PFAPR: M7AP Position                */
#define FMC_PFAPR_M7AP(x)                        (((x)<<FMC_PFAPR_M7AP_SHIFT)&FMC_PFAPR_M7AP_MASK)   /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M0PFD_MASK                     (0x01UL << FMC_PFAPR_M0PFD_SHIFT)                   /*!< FMC_PFAPR: M0PFD Mask                   */
#define FMC_PFAPR_M0PFD_SHIFT                    16                                                  /*!< FMC_PFAPR: M0PFD Position               */
#define FMC_PFAPR_M1PFD_MASK                     (0x01UL << FMC_PFAPR_M1PFD_SHIFT)                   /*!< FMC_PFAPR: M1PFD Mask                   */
#define FMC_PFAPR_M1PFD_SHIFT                    17                                                  /*!< FMC_PFAPR: M1PFD Position               */
#define FMC_PFAPR_M2PFD_MASK                     (0x01UL << FMC_PFAPR_M2PFD_SHIFT)                   /*!< FMC_PFAPR: M2PFD Mask                   */
#define FMC_PFAPR_M2PFD_SHIFT                    18                                                  /*!< FMC_PFAPR: M2PFD Position               */
#define FMC_PFAPR_M3PFD_MASK                     (0x01UL << FMC_PFAPR_M3PFD_SHIFT)                   /*!< FMC_PFAPR: M3PFD Mask                   */
#define FMC_PFAPR_M3PFD_SHIFT                    19                                                  /*!< FMC_PFAPR: M3PFD Position               */
#define FMC_PFAPR_M4PFD_MASK                     (0x01UL << FMC_PFAPR_M4PFD_SHIFT)                   /*!< FMC_PFAPR: M4PFD Mask                   */
#define FMC_PFAPR_M4PFD_SHIFT                    20                                                  /*!< FMC_PFAPR: M4PFD Position               */
#define FMC_PFAPR_M5PFD_MASK                     (0x01UL << FMC_PFAPR_M5PFD_SHIFT)                   /*!< FMC_PFAPR: M5PFD Mask                   */
#define FMC_PFAPR_M5PFD_SHIFT                    21                                                  /*!< FMC_PFAPR: M5PFD Position               */
#define FMC_PFAPR_M6PFD_MASK                     (0x01UL << FMC_PFAPR_M6PFD_SHIFT)                   /*!< FMC_PFAPR: M6PFD Mask                   */
#define FMC_PFAPR_M6PFD_SHIFT                    22                                                  /*!< FMC_PFAPR: M6PFD Position               */
#define FMC_PFAPR_M7PFD_MASK                     (0x01UL << FMC_PFAPR_M7PFD_SHIFT)                   /*!< FMC_PFAPR: M7PFD Mask                   */
#define FMC_PFAPR_M7PFD_SHIFT                    23                                                  /*!< FMC_PFAPR: M7PFD Position               */

/* ------- FMC_PFB0CR                               ------ */
#define FMC_PFB0CR_B0SEBE_MASK                   (0x01UL << FMC_PFB0CR_B0SEBE_SHIFT)                 /*!< FMC_PFB0CR: B0SEBE Mask                 */
#define FMC_PFB0CR_B0SEBE_SHIFT                  0                                                   /*!< FMC_PFB0CR: B0SEBE Position             */
#define FMC_PFB0CR_B0IPE_MASK                    (0x01UL << FMC_PFB0CR_B0IPE_SHIFT)                  /*!< FMC_PFB0CR: B0IPE Mask                  */
#define FMC_PFB0CR_B0IPE_SHIFT                   1                                                   /*!< FMC_PFB0CR: B0IPE Position              */
#define FMC_PFB0CR_B0DPE_MASK                    (0x01UL << FMC_PFB0CR_B0DPE_SHIFT)                  /*!< FMC_PFB0CR: B0DPE Mask                  */
#define FMC_PFB0CR_B0DPE_SHIFT                   2                                                   /*!< FMC_PFB0CR: B0DPE Position              */
#define FMC_PFB0CR_B0ICE_MASK                    (0x01UL << FMC_PFB0CR_B0ICE_SHIFT)                  /*!< FMC_PFB0CR: B0ICE Mask                  */
#define FMC_PFB0CR_B0ICE_SHIFT                   3                                                   /*!< FMC_PFB0CR: B0ICE Position              */
#define FMC_PFB0CR_B0DCE_MASK                    (0x01UL << FMC_PFB0CR_B0DCE_SHIFT)                  /*!< FMC_PFB0CR: B0DCE Mask                  */
#define FMC_PFB0CR_B0DCE_SHIFT                   4                                                   /*!< FMC_PFB0CR: B0DCE Position              */
#define FMC_PFB0CR_CRC_MASK                      (0x07UL << FMC_PFB0CR_CRC_SHIFT)                    /*!< FMC_PFB0CR: CRC Mask                    */
#define FMC_PFB0CR_CRC_SHIFT                     5                                                   /*!< FMC_PFB0CR: CRC Position                */
#define FMC_PFB0CR_CRC(x)                        (((x)<<FMC_PFB0CR_CRC_SHIFT)&FMC_PFB0CR_CRC_MASK)   /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_B0MW_MASK                     (0x03UL << FMC_PFB0CR_B0MW_SHIFT)                   /*!< FMC_PFB0CR: B0MW Mask                   */
#define FMC_PFB0CR_B0MW_SHIFT                    17                                                  /*!< FMC_PFB0CR: B0MW Position               */
#define FMC_PFB0CR_B0MW(x)                       (((x)<<FMC_PFB0CR_B0MW_SHIFT)&FMC_PFB0CR_B0MW_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_S_B_INV_MASK                  (0x01UL << FMC_PFB0CR_S_B_INV_SHIFT)                /*!< FMC_PFB0CR: S_B_INV Mask                */
#define FMC_PFB0CR_S_B_INV_SHIFT                 19                                                  /*!< FMC_PFB0CR: S_B_INV Position            */
#define FMC_PFB0CR_CINV_WAY_MASK                 (0x0FUL << FMC_PFB0CR_CINV_WAY_SHIFT)               /*!< FMC_PFB0CR: CINV_WAY Mask               */
#define FMC_PFB0CR_CINV_WAY_SHIFT                20                                                  /*!< FMC_PFB0CR: CINV_WAY Position           */
#define FMC_PFB0CR_CINV_WAY(x)                   (((x)<<FMC_PFB0CR_CINV_WAY_SHIFT)&FMC_PFB0CR_CINV_WAY_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_CLCK_WAY_MASK                 (0x0FUL << FMC_PFB0CR_CLCK_WAY_SHIFT)               /*!< FMC_PFB0CR: CLCK_WAY Mask               */
#define FMC_PFB0CR_CLCK_WAY_SHIFT                24                                                  /*!< FMC_PFB0CR: CLCK_WAY Position           */
#define FMC_PFB0CR_CLCK_WAY(x)                   (((x)<<FMC_PFB0CR_CLCK_WAY_SHIFT)&FMC_PFB0CR_CLCK_WAY_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_B0RWSC_MASK                   (0x0FUL << FMC_PFB0CR_B0RWSC_SHIFT)                 /*!< FMC_PFB0CR: B0RWSC Mask                 */
#define FMC_PFB0CR_B0RWSC_SHIFT                  28                                                  /*!< FMC_PFB0CR: B0RWSC Position             */
#define FMC_PFB0CR_B0RWSC(x)                     (((x)<<FMC_PFB0CR_B0RWSC_SHIFT)&FMC_PFB0CR_B0RWSC_MASK) /*!< FMC_PFB0CR                              */

/* ------- FMC_PFB1CR                               ------ */
#define FMC_PFB1CR_B1SEBE_MASK                   (0x01UL << FMC_PFB1CR_B1SEBE_SHIFT)                 /*!< FMC_PFB1CR: B1SEBE Mask                 */
#define FMC_PFB1CR_B1SEBE_SHIFT                  0                                                   /*!< FMC_PFB1CR: B1SEBE Position             */
#define FMC_PFB1CR_B1IPE_MASK                    (0x01UL << FMC_PFB1CR_B1IPE_SHIFT)                  /*!< FMC_PFB1CR: B1IPE Mask                  */
#define FMC_PFB1CR_B1IPE_SHIFT                   1                                                   /*!< FMC_PFB1CR: B1IPE Position              */
#define FMC_PFB1CR_B1DPE_MASK                    (0x01UL << FMC_PFB1CR_B1DPE_SHIFT)                  /*!< FMC_PFB1CR: B1DPE Mask                  */
#define FMC_PFB1CR_B1DPE_SHIFT                   2                                                   /*!< FMC_PFB1CR: B1DPE Position              */
#define FMC_PFB1CR_B1ICE_MASK                    (0x01UL << FMC_PFB1CR_B1ICE_SHIFT)                  /*!< FMC_PFB1CR: B1ICE Mask                  */
#define FMC_PFB1CR_B1ICE_SHIFT                   3                                                   /*!< FMC_PFB1CR: B1ICE Position              */
#define FMC_PFB1CR_B1DCE_MASK                    (0x01UL << FMC_PFB1CR_B1DCE_SHIFT)                  /*!< FMC_PFB1CR: B1DCE Mask                  */
#define FMC_PFB1CR_B1DCE_SHIFT                   4                                                   /*!< FMC_PFB1CR: B1DCE Position              */
#define FMC_PFB1CR_B1MW_MASK                     (0x03UL << FMC_PFB1CR_B1MW_SHIFT)                   /*!< FMC_PFB1CR: B1MW Mask                   */
#define FMC_PFB1CR_B1MW_SHIFT                    17                                                  /*!< FMC_PFB1CR: B1MW Position               */
#define FMC_PFB1CR_B1MW(x)                       (((x)<<FMC_PFB1CR_B1MW_SHIFT)&FMC_PFB1CR_B1MW_MASK) /*!< FMC_PFB1CR                              */
#define FMC_PFB1CR_B1RWSC_MASK                   (0x0FUL << FMC_PFB1CR_B1RWSC_SHIFT)                 /*!< FMC_PFB1CR: B1RWSC Mask                 */
#define FMC_PFB1CR_B1RWSC_SHIFT                  28                                                  /*!< FMC_PFB1CR: B1RWSC Position             */
#define FMC_PFB1CR_B1RWSC(x)                     (((x)<<FMC_PFB1CR_B1RWSC_SHIFT)&FMC_PFB1CR_B1RWSC_MASK) /*!< FMC_PFB1CR                              */

/* ------- FMC_S0                                   ------ */
#define FMC_S0_valid_MASK                        (0x01UL << FMC_S0_valid_SHIFT)                      /*!< FMC_S0: valid Mask                      */
#define FMC_S0_valid_SHIFT                       0                                                   /*!< FMC_S0: valid Position                  */
#define FMC_S0_tag_MASK                          (0x7FFFUL << FMC_S0_tag_SHIFT)                      /*!< FMC_S0: tag Mask                        */
#define FMC_S0_tag_SHIFT                         4                                                   /*!< FMC_S0: tag Position                    */
#define FMC_S0_tag(x)                            (((x)<<FMC_S0_tag_SHIFT)&FMC_S0_tag_MASK)           /*!< FMC_S0                                  */

/* ------- FMC_S0U                                  ------ */
#define FMC_S0U_data_MASK                        (0xFFFFFFFFUL << FMC_S0U_data_SHIFT)                /*!< FMC_S0U: data Mask                      */
#define FMC_S0U_data_SHIFT                       0                                                   /*!< FMC_S0U: data Position                  */
#define FMC_S0U_data(x)                          (((x)<<FMC_S0U_data_SHIFT)&FMC_S0U_data_MASK)       /*!< FMC_S0U                                 */

/* ------- FMC_S0L                                  ------ */
#define FMC_S0L_data_MASK                        (0xFFFFFFFFUL << FMC_S0L_data_SHIFT)                /*!< FMC_S0L: data Mask                      */
#define FMC_S0L_data_SHIFT                       0                                                   /*!< FMC_S0L: data Position                  */
#define FMC_S0L_data(x)                          (((x)<<FMC_S0L_data_SHIFT)&FMC_S0L_data_MASK)       /*!< FMC_S0L                                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FMC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define FMC_PFAPR                      (FMC->PFAPR)
#define FMC_PFB0CR                     (FMC->PFB0CR)
#define FMC_PFB1CR                     (FMC->PFB1CR)
#define FMC_TAGVDW0S0                  (FMC->TAGVDW[0].S0)
#define FMC_TAGVDW0S1                  (FMC->TAGVDW[0].S1)
#define FMC_TAGVDW1S0                  (FMC->TAGVDW[1].S0)
#define FMC_TAGVDW1S1                  (FMC->TAGVDW[1].S1)
#define FMC_TAGVDW2S0                  (FMC->TAGVDW[2].S0)
#define FMC_TAGVDW2S1                  (FMC->TAGVDW[2].S1)
#define FMC_TAGVDW3S0                  (FMC->TAGVDW[3].S0)
#define FMC_TAGVDW3S1                  (FMC->TAGVDW[3].S1)
#define FMC_DATAW0S0U                  (FMC->DATAW[0].S0U)
#define FMC_DATAW0S0L                  (FMC->DATAW[0].S0L)
#define FMC_DATAW0S1U                  (FMC->DATAW[0].S1U)
#define FMC_DATAW0S1L                  (FMC->DATAW[0].S1L)
#define FMC_DATAW1S0U                  (FMC->DATAW[1].S0U)
#define FMC_DATAW1S0L                  (FMC->DATAW[1].S0L)
#define FMC_DATAW1S1U                  (FMC->DATAW[1].S1U)
#define FMC_DATAW1S1L                  (FMC->DATAW[1].S1L)
#define FMC_DATAW2S0U                  (FMC->DATAW[2].S0U)
#define FMC_DATAW2S0L                  (FMC->DATAW[2].S0L)
#define FMC_DATAW2S1U                  (FMC->DATAW[2].S1U)
#define FMC_DATAW2S1L                  (FMC->DATAW[2].S1L)
#define FMC_DATAW3S0U                  (FMC->DATAW[3].S0U)
#define FMC_DATAW3S0L                  (FMC->DATAW[3].S0L)
#define FMC_DATAW3S1U                  (FMC->DATAW[3].S1U)
#define FMC_DATAW3S1L                  (FMC->DATAW[3].S1L)

/* ================================================================================ */
/* ================           FPB (file:FPB)                       ================ */
/* ================================================================================ */

/**
 * @brief Flash Patch and Breakpoint Unit
 */
typedef struct {                                /*!<       FPB Structure                                                */
   __IO uint32_t  CTRL;                         /*!< 0000: FlashPatch Control Register                                  */
   __IO uint32_t  REMAP;                        /*!< 0004: FlashPatch Remap Register                                    */
   __IO uint32_t  COMP[8];                      /*!< 0008: FlashPatch Comparator Register                               */
   __I  uint32_t  RESERVED0[1002];              /*!< 0028:                                                              */
   __I  uint32_t  PID4;                         /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID0;                         /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CID1;                         /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CID2;                         /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CID3;                         /*!< 0FFC: Component Identification Register 3                          */
} FPB_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FPB' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FPB_CTRL                                 ------ */
#define FP_CTRL_ENABLE_MASK                      (0x01UL << FP_CTRL_ENABLE_SHIFT)                    /*!< FP_CTRL: ENABLE Mask                    */
#define FP_CTRL_ENABLE_SHIFT                     0                                                   /*!< FP_CTRL: ENABLE Position                */
#define FP_CTRL_KEY_MASK                         (0x01UL << FP_CTRL_KEY_SHIFT)                       /*!< FP_CTRL: KEY Mask                       */
#define FP_CTRL_KEY_SHIFT                        1                                                   /*!< FP_CTRL: KEY Position                   */
#define FP_CTRL_NUM_CODE_least_MASK              (0x0FUL << FP_CTRL_NUM_CODE_least_SHIFT)            /*!< FP_CTRL: NUM_CODE_least Mask            */
#define FP_CTRL_NUM_CODE_least_SHIFT             4                                                   /*!< FP_CTRL: NUM_CODE_least Position        */
#define FP_CTRL_NUM_CODE_least(x)                (((x)<<FP_CTRL_NUM_CODE_least_SHIFT)&FP_CTRL_NUM_CODE_least_MASK) /*!< FP_CTRL                                 */
#define FP_CTRL_NUM_LIT_MASK                     (0x0FUL << FP_CTRL_NUM_LIT_SHIFT)                   /*!< FP_CTRL: NUM_LIT Mask                   */
#define FP_CTRL_NUM_LIT_SHIFT                    8                                                   /*!< FP_CTRL: NUM_LIT Position               */
#define FP_CTRL_NUM_LIT(x)                       (((x)<<FP_CTRL_NUM_LIT_SHIFT)&FP_CTRL_NUM_LIT_MASK) /*!< FP_CTRL                                 */
#define FP_CTRL_NUM_CODE_most_MASK               (0x07UL << FP_CTRL_NUM_CODE_most_SHIFT)             /*!< FP_CTRL: NUM_CODE_most Mask             */
#define FP_CTRL_NUM_CODE_most_SHIFT              12                                                  /*!< FP_CTRL: NUM_CODE_most Position         */
#define FP_CTRL_NUM_CODE_most(x)                 (((x)<<FP_CTRL_NUM_CODE_most_SHIFT)&FP_CTRL_NUM_CODE_most_MASK) /*!< FP_CTRL                                 */

/* ------- FPB_REMAP                                ------ */
#define FP_REMAP_REMAP_MASK                      (0xFFFFFFUL << FP_REMAP_REMAP_SHIFT)                /*!< FP_REMAP: REMAP Mask                    */
#define FP_REMAP_REMAP_SHIFT                     5                                                   /*!< FP_REMAP: REMAP Position                */
#define FP_REMAP_REMAP(x)                        (((x)<<FP_REMAP_REMAP_SHIFT)&FP_REMAP_REMAP_MASK)   /*!< FP_REMAP                                */
#define FP_REMAP_RMPSPT_MASK                     (0x01UL << FP_REMAP_RMPSPT_SHIFT)                   /*!< FP_REMAP: RMPSPT Mask                   */
#define FP_REMAP_RMPSPT_SHIFT                    29                                                  /*!< FP_REMAP: RMPSPT Position               */

/* ------- FPB_COMP                                 ------ */
#define FP_COMP_ENABLE_MASK                      (0x01UL << FP_COMP_ENABLE_SHIFT)                    /*!< FP_COMP: ENABLE Mask                    */
#define FP_COMP_ENABLE_SHIFT                     0                                                   /*!< FP_COMP: ENABLE Position                */
#define FP_COMP_COMP_MASK                        (0x7FFFFFFUL << FP_COMP_COMP_SHIFT)                 /*!< FP_COMP: COMP Mask                      */
#define FP_COMP_COMP_SHIFT                       2                                                   /*!< FP_COMP: COMP Position                  */
#define FP_COMP_COMP(x)                          (((x)<<FP_COMP_COMP_SHIFT)&FP_COMP_COMP_MASK)       /*!< FP_COMP                                 */
#define FP_COMP_REPLACE_MASK                     (0x03UL << FP_COMP_REPLACE_SHIFT)                   /*!< FP_COMP: REPLACE Mask                   */
#define FP_COMP_REPLACE_SHIFT                    30                                                  /*!< FP_COMP: REPLACE Position               */
#define FP_COMP_REPLACE(x)                       (((x)<<FP_COMP_REPLACE_SHIFT)&FP_COMP_REPLACE_MASK) /*!< FP_COMP                                 */

/* ------- FPB_PID4                                 ------ */
#define FP_PID4_JEP106_MASK                      (0x0FUL << FP_PID4_JEP106_SHIFT)                    /*!< FP_PID4: JEP106 Mask                    */
#define FP_PID4_JEP106_SHIFT                     0                                                   /*!< FP_PID4: JEP106 Position                */
#define FP_PID4_JEP106(x)                        (((x)<<FP_PID4_JEP106_SHIFT)&FP_PID4_JEP106_MASK)   /*!< FP_PID4                                 */
#define FP_PID4_c4KB_MASK                        (0x0FUL << FP_PID4_c4KB_SHIFT)                      /*!< FP_PID4: c4KB Mask                      */
#define FP_PID4_c4KB_SHIFT                       4                                                   /*!< FP_PID4: c4KB Position                  */
#define FP_PID4_c4KB(x)                          (((x)<<FP_PID4_c4KB_SHIFT)&FP_PID4_c4KB_MASK)       /*!< FP_PID4                                 */

/* ------- FPB_PID5                                 ------ */

/* ------- FPB_PID6                                 ------ */

/* ------- FPB_PID7                                 ------ */

/* ------- FPB_PID0                                 ------ */
#define FP_PID0_PartNumber_MASK                  (0xFFUL << FP_PID0_PartNumber_SHIFT)                /*!< FP_PID0: PartNumber Mask                */
#define FP_PID0_PartNumber_SHIFT                 0                                                   /*!< FP_PID0: PartNumber Position            */
#define FP_PID0_PartNumber(x)                    (((x)<<FP_PID0_PartNumber_SHIFT)&FP_PID0_PartNumber_MASK) /*!< FP_PID0                                 */

/* ------- FPB_PID1                                 ------ */
#define FP_PID1_PartNumber_MASK                  (0x0FUL << FP_PID1_PartNumber_SHIFT)                /*!< FP_PID1: PartNumber Mask                */
#define FP_PID1_PartNumber_SHIFT                 0                                                   /*!< FP_PID1: PartNumber Position            */
#define FP_PID1_PartNumber(x)                    (((x)<<FP_PID1_PartNumber_SHIFT)&FP_PID1_PartNumber_MASK) /*!< FP_PID1                                 */
#define FP_PID1_JEP106_identity_code_MASK        (0x0FUL << FP_PID1_JEP106_identity_code_SHIFT)      /*!< FP_PID1: JEP106_identity_code Mask      */
#define FP_PID1_JEP106_identity_code_SHIFT       4                                                   /*!< FP_PID1: JEP106_identity_code Position  */
#define FP_PID1_JEP106_identity_code(x)          (((x)<<FP_PID1_JEP106_identity_code_SHIFT)&FP_PID1_JEP106_identity_code_MASK) /*!< FP_PID1                                 */

/* ------- FPB_PID2                                 ------ */
#define FP_PID2_JEP106_identity_code_MASK        (0x07UL << FP_PID2_JEP106_identity_code_SHIFT)      /*!< FP_PID2: JEP106_identity_code Mask      */
#define FP_PID2_JEP106_identity_code_SHIFT       0                                                   /*!< FP_PID2: JEP106_identity_code Position  */
#define FP_PID2_JEP106_identity_code(x)          (((x)<<FP_PID2_JEP106_identity_code_SHIFT)&FP_PID2_JEP106_identity_code_MASK) /*!< FP_PID2                                 */
#define FP_PID2_Revision_MASK                    (0x0FUL << FP_PID2_Revision_SHIFT)                  /*!< FP_PID2: Revision Mask                  */
#define FP_PID2_Revision_SHIFT                   4                                                   /*!< FP_PID2: Revision Position              */
#define FP_PID2_Revision(x)                      (((x)<<FP_PID2_Revision_SHIFT)&FP_PID2_Revision_MASK) /*!< FP_PID2                                 */

/* ------- FPB_PID3                                 ------ */
#define FP_PID3_CustomerModified_MASK            (0x0FUL << FP_PID3_CustomerModified_SHIFT)          /*!< FP_PID3: CustomerModified Mask          */
#define FP_PID3_CustomerModified_SHIFT           0                                                   /*!< FP_PID3: CustomerModified Position      */
#define FP_PID3_CustomerModified(x)              (((x)<<FP_PID3_CustomerModified_SHIFT)&FP_PID3_CustomerModified_MASK) /*!< FP_PID3                                 */
#define FP_PID3_RevAnd_MASK                      (0x0FUL << FP_PID3_RevAnd_SHIFT)                    /*!< FP_PID3: RevAnd Mask                    */
#define FP_PID3_RevAnd_SHIFT                     4                                                   /*!< FP_PID3: RevAnd Position                */
#define FP_PID3_RevAnd(x)                        (((x)<<FP_PID3_RevAnd_SHIFT)&FP_PID3_RevAnd_MASK)   /*!< FP_PID3                                 */

/* ------- FPB_CID0                                 ------ */
#define FP_CID0_Preamble_MASK                    (0xFFUL << FP_CID0_Preamble_SHIFT)                  /*!< FP_CID0: Preamble Mask                  */
#define FP_CID0_Preamble_SHIFT                   0                                                   /*!< FP_CID0: Preamble Position              */
#define FP_CID0_Preamble(x)                      (((x)<<FP_CID0_Preamble_SHIFT)&FP_CID0_Preamble_MASK) /*!< FP_CID0                                 */

/* ------- FPB_CID1                                 ------ */
#define FP_CID1_Preamble_MASK                    (0x0FUL << FP_CID1_Preamble_SHIFT)                  /*!< FP_CID1: Preamble Mask                  */
#define FP_CID1_Preamble_SHIFT                   0                                                   /*!< FP_CID1: Preamble Position              */
#define FP_CID1_Preamble(x)                      (((x)<<FP_CID1_Preamble_SHIFT)&FP_CID1_Preamble_MASK) /*!< FP_CID1                                 */
#define FP_CID1_ComponentClass_MASK              (0x0FUL << FP_CID1_ComponentClass_SHIFT)            /*!< FP_CID1: ComponentClass Mask            */
#define FP_CID1_ComponentClass_SHIFT             4                                                   /*!< FP_CID1: ComponentClass Position        */
#define FP_CID1_ComponentClass(x)                (((x)<<FP_CID1_ComponentClass_SHIFT)&FP_CID1_ComponentClass_MASK) /*!< FP_CID1                                 */

/* ------- FPB_CID2                                 ------ */
#define FP_CID2_Preamble_MASK                    (0xFFUL << FP_CID2_Preamble_SHIFT)                  /*!< FP_CID2: Preamble Mask                  */
#define FP_CID2_Preamble_SHIFT                   0                                                   /*!< FP_CID2: Preamble Position              */
#define FP_CID2_Preamble(x)                      (((x)<<FP_CID2_Preamble_SHIFT)&FP_CID2_Preamble_MASK) /*!< FP_CID2                                 */

/* ------- FPB_CID3                                 ------ */
#define FP_CID3_Preamble_MASK                    (0xFFUL << FP_CID3_Preamble_SHIFT)                  /*!< FP_CID3: Preamble Mask                  */
#define FP_CID3_Preamble_SHIFT                   0                                                   /*!< FP_CID3: Preamble Position              */
#define FP_CID3_Preamble(x)                      (((x)<<FP_CID3_Preamble_SHIFT)&FP_CID3_Preamble_MASK) /*!< FP_CID3                                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FPB' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define FPB_CTRL                       (FPB->CTRL)
#define FPB_REMAP                      (FPB->REMAP)
#define FPB_COMP0                      (FPB->COMP[0])
#define FPB_COMP1                      (FPB->COMP[1])
#define FPB_COMP2                      (FPB->COMP[2])
#define FPB_COMP3                      (FPB->COMP[3])
#define FPB_COMP4                      (FPB->COMP[4])
#define FPB_COMP5                      (FPB->COMP[5])
#define FPB_COMP6                      (FPB->COMP[6])
#define FPB_COMP7                      (FPB->COMP[7])
#define FPB_PID4                       (FPB->PID4)
#define FPB_PID5                       (FPB->PID5)
#define FPB_PID6                       (FPB->PID6)
#define FPB_PID7                       (FPB->PID7)
#define FPB_PID0                       (FPB->PID0)
#define FPB_PID1                       (FPB->PID1)
#define FPB_PID2                       (FPB->PID2)
#define FPB_PID3                       (FPB->PID3)
#define FPB_CID0                       (FPB->CID0)
#define FPB_CID1                       (FPB->CID1)
#define FPB_CID2                       (FPB->CID2)
#define FPB_CID3                       (FPB->CID3)

/* ================================================================================ */
/* ================           FTFL (file:FTFL)                     ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Interface
 */
typedef struct {                                /*!<       FTFL Structure                                               */
   __IO uint8_t   FSTAT;                        /*!< 0000: Flash Status Register                                        */
   __IO uint8_t   FCNFG;                        /*!< 0001: Flash Configuration Register                                 */
   __I  uint8_t   FSEC;                         /*!< 0002: Flash Security Register                                      */
   __I  uint8_t   FOPT;                         /*!< 0003: Flash Option Register                                        */
   __IO uint8_t   FCCOB3;                       /*!< 0004: FCCOB 3 - Usually Flash address [7..0]                       */
   __IO uint8_t   FCCOB2;                       /*!< 0005: FCCOB 2 - Usually Flash address [15..8]                      */
   __IO uint8_t   FCCOB1;                       /*!< 0006: FCCOB 1 - Usually Flash address [23..16]                     */
   __IO uint8_t   FCCOB0;                       /*!< 0007: FCCOB 0 - Usually FCMD (a code that defines the flash command)  */
   __IO uint8_t   FCCOB7;                       /*!< 0008: FCCOB 7 - Usually Data Byte 3                                */
   __IO uint8_t   FCCOB6;                       /*!< 0009: FCCOB 6 - Usually Data Byte 2                                */
   __IO uint8_t   FCCOB5;                       /*!< 000A: FCCOB 5 - Usually Data Byte 1                                */
   __IO uint8_t   FCCOB4;                       /*!< 000B: FCCOB 4 - Usually Data Byte 0                                */
   __IO uint8_t   FCCOBB;                       /*!< 000C: FCCOB B - Usually Data Byte 7                                */
   __IO uint8_t   FCCOBA;                       /*!< 000D: FCCOB A - Usually Data Byte 6                                */
   __IO uint8_t   FCCOB9;                       /*!< 000E: FCCOB 9 - Usually Data Byte 5                                */
   __IO uint8_t   FCCOB8;                       /*!< 000F: FCCOB 8 - Usually Data Byte 4                                */
   __IO uint8_t   FPROT3;                       /*!< 0010: Program Flash Protection                                     */
   __IO uint8_t   FPROT2;                       /*!< 0011: Program Flash Protection                                     */
   __IO uint8_t   FPROT1;                       /*!< 0012: Program Flash Protection                                     */
   __IO uint8_t   FPROT0;                       /*!< 0013: Program Flash Protection                                     */
   __I  uint16_t  RESERVED0;                    /*!< 0014:                                                              */
   __IO uint8_t   FEPROT;                       /*!< 0016: EEPROM Protection Register                                   */
   __IO uint8_t   FDPROT;                       /*!< 0017: Data Flash Protection Register                               */
} FTFL_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTFL' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FTFL_FSTAT                               ------ */
#define FTFL_FSTAT_MGSTAT0_MASK                  (0x01UL << FTFL_FSTAT_MGSTAT0_SHIFT)                /*!< FTFL_FSTAT: MGSTAT0 Mask                */
#define FTFL_FSTAT_MGSTAT0_SHIFT                 0                                                   /*!< FTFL_FSTAT: MGSTAT0 Position            */
#define FTFL_FSTAT_FPVIOL_MASK                   (0x01UL << FTFL_FSTAT_FPVIOL_SHIFT)                 /*!< FTFL_FSTAT: FPVIOL Mask                 */
#define FTFL_FSTAT_FPVIOL_SHIFT                  4                                                   /*!< FTFL_FSTAT: FPVIOL Position             */
#define FTFL_FSTAT_ACCERR_MASK                   (0x01UL << FTFL_FSTAT_ACCERR_SHIFT)                 /*!< FTFL_FSTAT: ACCERR Mask                 */
#define FTFL_FSTAT_ACCERR_SHIFT                  5                                                   /*!< FTFL_FSTAT: ACCERR Position             */
#define FTFL_FSTAT_RDCOLERR_MASK                 (0x01UL << FTFL_FSTAT_RDCOLERR_SHIFT)               /*!< FTFL_FSTAT: RDCOLERR Mask               */
#define FTFL_FSTAT_RDCOLERR_SHIFT                6                                                   /*!< FTFL_FSTAT: RDCOLERR Position           */
#define FTFL_FSTAT_CCIF_MASK                     (0x01UL << FTFL_FSTAT_CCIF_SHIFT)                   /*!< FTFL_FSTAT: CCIF Mask                   */
#define FTFL_FSTAT_CCIF_SHIFT                    7                                                   /*!< FTFL_FSTAT: CCIF Position               */

/* ------- FTFL_FCNFG                               ------ */
#define FTFL_FCNFG_EEERDY_MASK                   (0x01UL << FTFL_FCNFG_EEERDY_SHIFT)                 /*!< FTFL_FCNFG: EEERDY Mask                 */
#define FTFL_FCNFG_EEERDY_SHIFT                  0                                                   /*!< FTFL_FCNFG: EEERDY Position             */
#define FTFL_FCNFG_RAMRDY_MASK                   (0x01UL << FTFL_FCNFG_RAMRDY_SHIFT)                 /*!< FTFL_FCNFG: RAMRDY Mask                 */
#define FTFL_FCNFG_RAMRDY_SHIFT                  1                                                   /*!< FTFL_FCNFG: RAMRDY Position             */
#define FTFL_FCNFG_PFLSH_MASK                    (0x01UL << FTFL_FCNFG_PFLSH_SHIFT)                  /*!< FTFL_FCNFG: PFLSH Mask                  */
#define FTFL_FCNFG_PFLSH_SHIFT                   2                                                   /*!< FTFL_FCNFG: PFLSH Position              */
#define FTFL_FCNFG_SWAP_MASK                     (0x01UL << FTFL_FCNFG_SWAP_SHIFT)                   /*!< FTFL_FCNFG: SWAP Mask                   */
#define FTFL_FCNFG_SWAP_SHIFT                    3                                                   /*!< FTFL_FCNFG: SWAP Position               */
#define FTFL_FCNFG_ERSSUSP_MASK                  (0x01UL << FTFL_FCNFG_ERSSUSP_SHIFT)                /*!< FTFL_FCNFG: ERSSUSP Mask                */
#define FTFL_FCNFG_ERSSUSP_SHIFT                 4                                                   /*!< FTFL_FCNFG: ERSSUSP Position            */
#define FTFL_FCNFG_ERSAREQ_MASK                  (0x01UL << FTFL_FCNFG_ERSAREQ_SHIFT)                /*!< FTFL_FCNFG: ERSAREQ Mask                */
#define FTFL_FCNFG_ERSAREQ_SHIFT                 5                                                   /*!< FTFL_FCNFG: ERSAREQ Position            */
#define FTFL_FCNFG_RDCOLLIE_MASK                 (0x01UL << FTFL_FCNFG_RDCOLLIE_SHIFT)               /*!< FTFL_FCNFG: RDCOLLIE Mask               */
#define FTFL_FCNFG_RDCOLLIE_SHIFT                6                                                   /*!< FTFL_FCNFG: RDCOLLIE Position           */
#define FTFL_FCNFG_CCIE_MASK                     (0x01UL << FTFL_FCNFG_CCIE_SHIFT)                   /*!< FTFL_FCNFG: CCIE Mask                   */
#define FTFL_FCNFG_CCIE_SHIFT                    7                                                   /*!< FTFL_FCNFG: CCIE Position               */

/* ------- FTFL_FSEC                                ------ */
#define FTFL_FSEC_SEC_MASK                       (0x03UL << FTFL_FSEC_SEC_SHIFT)                     /*!< FTFL_FSEC: SEC Mask                     */
#define FTFL_FSEC_SEC_SHIFT                      0                                                   /*!< FTFL_FSEC: SEC Position                 */
#define FTFL_FSEC_SEC(x)                         (((x)<<FTFL_FSEC_SEC_SHIFT)&FTFL_FSEC_SEC_MASK)     /*!< FTFL_FSEC                               */
#define FTFL_FSEC_FSLACC_MASK                    (0x03UL << FTFL_FSEC_FSLACC_SHIFT)                  /*!< FTFL_FSEC: FSLACC Mask                  */
#define FTFL_FSEC_FSLACC_SHIFT                   2                                                   /*!< FTFL_FSEC: FSLACC Position              */
#define FTFL_FSEC_FSLACC(x)                      (((x)<<FTFL_FSEC_FSLACC_SHIFT)&FTFL_FSEC_FSLACC_MASK) /*!< FTFL_FSEC                               */
#define FTFL_FSEC_MEEN_MASK                      (0x03UL << FTFL_FSEC_MEEN_SHIFT)                    /*!< FTFL_FSEC: MEEN Mask                    */
#define FTFL_FSEC_MEEN_SHIFT                     4                                                   /*!< FTFL_FSEC: MEEN Position                */
#define FTFL_FSEC_MEEN(x)                        (((x)<<FTFL_FSEC_MEEN_SHIFT)&FTFL_FSEC_MEEN_MASK)   /*!< FTFL_FSEC                               */
#define FTFL_FSEC_KEYEN_MASK                     (0x03UL << FTFL_FSEC_KEYEN_SHIFT)                   /*!< FTFL_FSEC: KEYEN Mask                   */
#define FTFL_FSEC_KEYEN_SHIFT                    6                                                   /*!< FTFL_FSEC: KEYEN Position               */
#define FTFL_FSEC_KEYEN(x)                       (((x)<<FTFL_FSEC_KEYEN_SHIFT)&FTFL_FSEC_KEYEN_MASK) /*!< FTFL_FSEC                               */

/* ------- FTFL_FOPT                                ------ */
#define FTFL_FOPT_OPT_MASK                       (0xFFUL << FTFL_FOPT_OPT_SHIFT)                     /*!< FTFL_FOPT: OPT Mask                     */
#define FTFL_FOPT_OPT_SHIFT                      0                                                   /*!< FTFL_FOPT: OPT Position                 */
#define FTFL_FOPT_OPT(x)                         (((x)<<FTFL_FOPT_OPT_SHIFT)&FTFL_FOPT_OPT_MASK)     /*!< FTFL_FOPT                               */

/* ------- FTFL_FCCOB                               ------ */
#define FTFL_FCCOB_CCOBn_MASK                    (0xFFUL << FTFL_FCCOB_CCOBn_SHIFT)                  /*!< FTFL_FCCOB: CCOBn Mask                  */
#define FTFL_FCCOB_CCOBn_SHIFT                   0                                                   /*!< FTFL_FCCOB: CCOBn Position              */
#define FTFL_FCCOB_CCOBn(x)                      (((x)<<FTFL_FCCOB_CCOBn_SHIFT)&FTFL_FCCOB_CCOBn_MASK) /*!< FTFL_FCCOB                              */

/* ------- FTFL_FPROT                               ------ */
#define FTFL_FPROT_PROT_MASK                     (0xFFUL << FTFL_FPROT_PROT_SHIFT)                   /*!< FTFL_FPROT: PROT Mask                   */
#define FTFL_FPROT_PROT_SHIFT                    0                                                   /*!< FTFL_FPROT: PROT Position               */
#define FTFL_FPROT_PROT(x)                       (((x)<<FTFL_FPROT_PROT_SHIFT)&FTFL_FPROT_PROT_MASK) /*!< FTFL_FPROT                              */

/* ------- FTFL_FEPROT                              ------ */
#define FTFL_FEPROT_EPROT_MASK                   (0xFFUL << FTFL_FEPROT_EPROT_SHIFT)                 /*!< FTFL_FEPROT: EPROT Mask                 */
#define FTFL_FEPROT_EPROT_SHIFT                  0                                                   /*!< FTFL_FEPROT: EPROT Position             */
#define FTFL_FEPROT_EPROT(x)                     (((x)<<FTFL_FEPROT_EPROT_SHIFT)&FTFL_FEPROT_EPROT_MASK) /*!< FTFL_FEPROT                             */

/* ------- FTFL_FDPROT                              ------ */
#define FTFL_FDPROT_DPROT_MASK                   (0xFFUL << FTFL_FDPROT_DPROT_SHIFT)                 /*!< FTFL_FDPROT: DPROT Mask                 */
#define FTFL_FDPROT_DPROT_SHIFT                  0                                                   /*!< FTFL_FDPROT: DPROT Position             */
#define FTFL_FDPROT_DPROT(x)                     (((x)<<FTFL_FDPROT_DPROT_SHIFT)&FTFL_FDPROT_DPROT_MASK) /*!< FTFL_FDPROT                             */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTFL' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define FTFL_FSTAT                     (FTFL->FSTAT)
#define FTFL_FCNFG                     (FTFL->FCNFG)
#define FTFL_FSEC                      (FTFL->FSEC)
#define FTFL_FOPT                      (FTFL->FOPT)
#define FTFL_FCCOB3                    (FTFL->FCCOB3)
#define FTFL_FCCOB2                    (FTFL->FCCOB2)
#define FTFL_FCCOB1                    (FTFL->FCCOB1)
#define FTFL_FCCOB0                    (FTFL->FCCOB0)
#define FTFL_FCCOB7                    (FTFL->FCCOB7)
#define FTFL_FCCOB6                    (FTFL->FCCOB6)
#define FTFL_FCCOB5                    (FTFL->FCCOB5)
#define FTFL_FCCOB4                    (FTFL->FCCOB4)
#define FTFL_FCCOBB                    (FTFL->FCCOBB)
#define FTFL_FCCOBA                    (FTFL->FCCOBA)
#define FTFL_FCCOB9                    (FTFL->FCCOB9)
#define FTFL_FCCOB8                    (FTFL->FCCOB8)
#define FTFL_FPROT3                    (FTFL->FPROT3)
#define FTFL_FPROT2                    (FTFL->FPROT2)
#define FTFL_FPROT1                    (FTFL->FPROT1)
#define FTFL_FPROT0                    (FTFL->FPROT0)
#define FTFL_FEPROT                    (FTFL->FEPROT)
#define FTFL_FDPROT                    (FTFL->FDPROT)

/* ================================================================================ */
/* ================           FTM0 (file:FTM0_8CH)                 ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (8 channels)
 */
typedef struct {                                /*!<       FTM0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0040, 64)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /*!< 0010: Channel  Value                                               */
   } CONTROLS[8];
   __IO uint32_t  CNTIN;                        /*!< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /*!< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /*!< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /*!< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /*!< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /*!< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /*!< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /*!< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /*!< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /*!< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /*!< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /*!< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /*!< 0080: Quadrature Decoder Control and Status                        */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /*!< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /*!< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /*!< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /*!< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /*!< 0098: FTM PWM Load                                                 */
} FTM0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FTM0_SC                                  ------ */
#define FTM_SC_PS_MASK                           (0x07UL << FTM_SC_PS_SHIFT)                         /*!< FTM0_SC: PS Mask                        */
#define FTM_SC_PS_SHIFT                          0                                                   /*!< FTM0_SC: PS Position                    */
#define FTM_SC_PS(x)                             (((x)<<FTM_SC_PS_SHIFT)&FTM_SC_PS_MASK)             /*!< FTM0_SC                                 */
#define FTM_SC_CLKS_MASK                         (0x03UL << FTM_SC_CLKS_SHIFT)                       /*!< FTM0_SC: CLKS Mask                      */
#define FTM_SC_CLKS_SHIFT                        3                                                   /*!< FTM0_SC: CLKS Position                  */
#define FTM_SC_CLKS(x)                           (((x)<<FTM_SC_CLKS_SHIFT)&FTM_SC_CLKS_MASK)         /*!< FTM0_SC                                 */
#define FTM_SC_CPWMS_MASK                        (0x01UL << FTM_SC_CPWMS_SHIFT)                      /*!< FTM0_SC: CPWMS Mask                     */
#define FTM_SC_CPWMS_SHIFT                       5                                                   /*!< FTM0_SC: CPWMS Position                 */
#define FTM_SC_TOIE_MASK                         (0x01UL << FTM_SC_TOIE_SHIFT)                       /*!< FTM0_SC: TOIE Mask                      */
#define FTM_SC_TOIE_SHIFT                        6                                                   /*!< FTM0_SC: TOIE Position                  */
#define FTM_SC_TOF_MASK                          (0x01UL << FTM_SC_TOF_SHIFT)                        /*!< FTM0_SC: TOF Mask                       */
#define FTM_SC_TOF_SHIFT                         7                                                   /*!< FTM0_SC: TOF Position                   */

/* ------- FTM0_CNT                                 ------ */
#define FTM_CNT_COUNT_MASK                       (0xFFFFUL << FTM_CNT_COUNT_SHIFT)                   /*!< FTM0_CNT: COUNT Mask                    */
#define FTM_CNT_COUNT_SHIFT                      0                                                   /*!< FTM0_CNT: COUNT Position                */
#define FTM_CNT_COUNT(x)                         (((x)<<FTM_CNT_COUNT_SHIFT)&FTM_CNT_COUNT_MASK)     /*!< FTM0_CNT                                */

/* ------- FTM0_MOD                                 ------ */
#define FTM_MOD_MOD_MASK                         (0xFFFFUL << FTM_MOD_MOD_SHIFT)                     /*!< FTM0_MOD: MOD Mask                      */
#define FTM_MOD_MOD_SHIFT                        0                                                   /*!< FTM0_MOD: MOD Position                  */
#define FTM_MOD_MOD(x)                           (((x)<<FTM_MOD_MOD_SHIFT)&FTM_MOD_MOD_MASK)         /*!< FTM0_MOD                                */

/* ------- FTM0_CnSC                                ------ */
#define FTM_CnSC_DMA_MASK                        (0x01UL << FTM_CnSC_DMA_SHIFT)                      /*!< FTM0_CnSC: DMA Mask                     */
#define FTM_CnSC_DMA_SHIFT                       0                                                   /*!< FTM0_CnSC: DMA Position                 */
#define FTM_CnSC_ELS_MASK                        (0x03UL << FTM_CnSC_ELS_SHIFT)                      /*!< FTM0_CnSC: ELS Mask                     */
#define FTM_CnSC_ELS_SHIFT                       2                                                   /*!< FTM0_CnSC: ELS Position                 */
#define FTM_CnSC_ELS(x)                          (((x)<<FTM_CnSC_ELS_SHIFT)&FTM_CnSC_ELS_MASK)       /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSA_MASK                       (0x01UL << FTM_CnSC_ELSA_SHIFT)                     /*!< FTM0_CnSC: ELSA Mask                    */
#define FTM_CnSC_ELSA_SHIFT                      2                                                   /*!< FTM0_CnSC: ELSA Position                */
#define FTM_CnSC_ELSB_MASK                       (0x01UL << FTM_CnSC_ELSB_SHIFT)                     /*!< FTM0_CnSC: ELSB Mask                    */
#define FTM_CnSC_ELSB_SHIFT                      3                                                   /*!< FTM0_CnSC: ELSB Position                */
#define FTM_CnSC_MS_MASK                         (0x03UL << FTM_CnSC_MS_SHIFT)                       /*!< FTM0_CnSC: MS Mask                      */
#define FTM_CnSC_MS_SHIFT                        4                                                   /*!< FTM0_CnSC: MS Position                  */
#define FTM_CnSC_MS(x)                           (((x)<<FTM_CnSC_MS_SHIFT)&FTM_CnSC_MS_MASK)         /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSA_MASK                        (0x01UL << FTM_CnSC_MSA_SHIFT)                      /*!< FTM0_CnSC: MSA Mask                     */
#define FTM_CnSC_MSA_SHIFT                       4                                                   /*!< FTM0_CnSC: MSA Position                 */
#define FTM_CnSC_MSB_MASK                        (0x01UL << FTM_CnSC_MSB_SHIFT)                      /*!< FTM0_CnSC: MSB Mask                     */
#define FTM_CnSC_MSB_SHIFT                       5                                                   /*!< FTM0_CnSC: MSB Position                 */
#define FTM_CnSC_CHIE_MASK                       (0x01UL << FTM_CnSC_CHIE_SHIFT)                     /*!< FTM0_CnSC: CHIE Mask                    */
#define FTM_CnSC_CHIE_SHIFT                      6                                                   /*!< FTM0_CnSC: CHIE Position                */
#define FTM_CnSC_CHF_MASK                        (0x01UL << FTM_CnSC_CHF_SHIFT)                      /*!< FTM0_CnSC: CHF Mask                     */
#define FTM_CnSC_CHF_SHIFT                       7                                                   /*!< FTM0_CnSC: CHF Position                 */

/* ------- FTM0_CnV                                 ------ */
#define FTM_CnV_VAL_MASK                         (0xFFFFUL << FTM_CnV_VAL_SHIFT)                     /*!< FTM0_CnV: VAL Mask                      */
#define FTM_CnV_VAL_SHIFT                        0                                                   /*!< FTM0_CnV: VAL Position                  */
#define FTM_CnV_VAL(x)                           (((x)<<FTM_CnV_VAL_SHIFT)&FTM_CnV_VAL_MASK)         /*!< FTM0_CnV                                */

/* ------- FTM0_CNTIN                               ------ */
#define FTM_CNTIN_INIT_MASK                      (0xFFFFUL << FTM_CNTIN_INIT_SHIFT)                  /*!< FTM0_CNTIN: INIT Mask                   */
#define FTM_CNTIN_INIT_SHIFT                     0                                                   /*!< FTM0_CNTIN: INIT Position               */
#define FTM_CNTIN_INIT(x)                        (((x)<<FTM_CNTIN_INIT_SHIFT)&FTM_CNTIN_INIT_MASK)   /*!< FTM0_CNTIN                              */

/* ------- FTM0_STATUS                              ------ */
#define FTM_STATUS_CH0F_MASK                     (0x01UL << FTM_STATUS_CH0F_SHIFT)                   /*!< FTM0_STATUS: CH0F Mask                  */
#define FTM_STATUS_CH0F_SHIFT                    0                                                   /*!< FTM0_STATUS: CH0F Position              */
#define FTM_STATUS_CH1F_MASK                     (0x01UL << FTM_STATUS_CH1F_SHIFT)                   /*!< FTM0_STATUS: CH1F Mask                  */
#define FTM_STATUS_CH1F_SHIFT                    1                                                   /*!< FTM0_STATUS: CH1F Position              */
#define FTM_STATUS_CH2F_MASK                     (0x01UL << FTM_STATUS_CH2F_SHIFT)                   /*!< FTM0_STATUS: CH2F Mask                  */
#define FTM_STATUS_CH2F_SHIFT                    2                                                   /*!< FTM0_STATUS: CH2F Position              */
#define FTM_STATUS_CH3F_MASK                     (0x01UL << FTM_STATUS_CH3F_SHIFT)                   /*!< FTM0_STATUS: CH3F Mask                  */
#define FTM_STATUS_CH3F_SHIFT                    3                                                   /*!< FTM0_STATUS: CH3F Position              */
#define FTM_STATUS_CH4F_MASK                     (0x01UL << FTM_STATUS_CH4F_SHIFT)                   /*!< FTM0_STATUS: CH4F Mask                  */
#define FTM_STATUS_CH4F_SHIFT                    4                                                   /*!< FTM0_STATUS: CH4F Position              */
#define FTM_STATUS_CH5F_MASK                     (0x01UL << FTM_STATUS_CH5F_SHIFT)                   /*!< FTM0_STATUS: CH5F Mask                  */
#define FTM_STATUS_CH5F_SHIFT                    5                                                   /*!< FTM0_STATUS: CH5F Position              */
#define FTM_STATUS_CH6F_MASK                     (0x01UL << FTM_STATUS_CH6F_SHIFT)                   /*!< FTM0_STATUS: CH6F Mask                  */
#define FTM_STATUS_CH6F_SHIFT                    6                                                   /*!< FTM0_STATUS: CH6F Position              */
#define FTM_STATUS_CH7F_MASK                     (0x01UL << FTM_STATUS_CH7F_SHIFT)                   /*!< FTM0_STATUS: CH7F Mask                  */
#define FTM_STATUS_CH7F_SHIFT                    7                                                   /*!< FTM0_STATUS: CH7F Position              */

/* ------- FTM0_MODE                                ------ */
#define FTM_MODE_FTMEN_MASK                      (0x01UL << FTM_MODE_FTMEN_SHIFT)                    /*!< FTM0_MODE: FTMEN Mask                   */
#define FTM_MODE_FTMEN_SHIFT                     0                                                   /*!< FTM0_MODE: FTMEN Position               */
#define FTM_MODE_INIT_MASK                       (0x01UL << FTM_MODE_INIT_SHIFT)                     /*!< FTM0_MODE: INIT Mask                    */
#define FTM_MODE_INIT_SHIFT                      1                                                   /*!< FTM0_MODE: INIT Position                */
#define FTM_MODE_WPDIS_MASK                      (0x01UL << FTM_MODE_WPDIS_SHIFT)                    /*!< FTM0_MODE: WPDIS Mask                   */
#define FTM_MODE_WPDIS_SHIFT                     2                                                   /*!< FTM0_MODE: WPDIS Position               */
#define FTM_MODE_PWMSYNC_MASK                    (0x01UL << FTM_MODE_PWMSYNC_SHIFT)                  /*!< FTM0_MODE: PWMSYNC Mask                 */
#define FTM_MODE_PWMSYNC_SHIFT                   3                                                   /*!< FTM0_MODE: PWMSYNC Position             */
#define FTM_MODE_CAPTEST_MASK                    (0x01UL << FTM_MODE_CAPTEST_SHIFT)                  /*!< FTM0_MODE: CAPTEST Mask                 */
#define FTM_MODE_CAPTEST_SHIFT                   4                                                   /*!< FTM0_MODE: CAPTEST Position             */
#define FTM_MODE_FAULTM_MASK                     (0x03UL << FTM_MODE_FAULTM_SHIFT)                   /*!< FTM0_MODE: FAULTM Mask                  */
#define FTM_MODE_FAULTM_SHIFT                    5                                                   /*!< FTM0_MODE: FAULTM Position              */
#define FTM_MODE_FAULTM(x)                       (((x)<<FTM_MODE_FAULTM_SHIFT)&FTM_MODE_FAULTM_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTIE_MASK                    (0x01UL << FTM_MODE_FAULTIE_SHIFT)                  /*!< FTM0_MODE: FAULTIE Mask                 */
#define FTM_MODE_FAULTIE_SHIFT                   7                                                   /*!< FTM0_MODE: FAULTIE Position             */

/* ------- FTM0_SYNC                                ------ */
#define FTM_SYNC_CNTMIN_MASK                     (0x01UL << FTM_SYNC_CNTMIN_SHIFT)                   /*!< FTM0_SYNC: CNTMIN Mask                  */
#define FTM_SYNC_CNTMIN_SHIFT                    0                                                   /*!< FTM0_SYNC: CNTMIN Position              */
#define FTM_SYNC_CNTMAX_MASK                     (0x01UL << FTM_SYNC_CNTMAX_SHIFT)                   /*!< FTM0_SYNC: CNTMAX Mask                  */
#define FTM_SYNC_CNTMAX_SHIFT                    1                                                   /*!< FTM0_SYNC: CNTMAX Position              */
#define FTM_SYNC_REINIT_MASK                     (0x01UL << FTM_SYNC_REINIT_SHIFT)                   /*!< FTM0_SYNC: REINIT Mask                  */
#define FTM_SYNC_REINIT_SHIFT                    2                                                   /*!< FTM0_SYNC: REINIT Position              */
#define FTM_SYNC_SYNCHOM_MASK                    (0x01UL << FTM_SYNC_SYNCHOM_SHIFT)                  /*!< FTM0_SYNC: SYNCHOM Mask                 */
#define FTM_SYNC_SYNCHOM_SHIFT                   3                                                   /*!< FTM0_SYNC: SYNCHOM Position             */
#define FTM_SYNC_TRIG0_MASK                      (0x01UL << FTM_SYNC_TRIG0_SHIFT)                    /*!< FTM0_SYNC: TRIG0 Mask                   */
#define FTM_SYNC_TRIG0_SHIFT                     4                                                   /*!< FTM0_SYNC: TRIG0 Position               */
#define FTM_SYNC_TRIG1_MASK                      (0x01UL << FTM_SYNC_TRIG1_SHIFT)                    /*!< FTM0_SYNC: TRIG1 Mask                   */
#define FTM_SYNC_TRIG1_SHIFT                     5                                                   /*!< FTM0_SYNC: TRIG1 Position               */
#define FTM_SYNC_TRIG2_MASK                      (0x01UL << FTM_SYNC_TRIG2_SHIFT)                    /*!< FTM0_SYNC: TRIG2 Mask                   */
#define FTM_SYNC_TRIG2_SHIFT                     6                                                   /*!< FTM0_SYNC: TRIG2 Position               */
#define FTM_SYNC_SWSYNC_MASK                     (0x01UL << FTM_SYNC_SWSYNC_SHIFT)                   /*!< FTM0_SYNC: SWSYNC Mask                  */
#define FTM_SYNC_SWSYNC_SHIFT                    7                                                   /*!< FTM0_SYNC: SWSYNC Position              */

/* ------- FTM0_OUTINIT                             ------ */
#define FTM_OUTINIT_CH0OI_MASK                   (0x01UL << FTM_OUTINIT_CH0OI_SHIFT)                 /*!< FTM0_OUTINIT: CH0OI Mask                */
#define FTM_OUTINIT_CH0OI_SHIFT                  0                                                   /*!< FTM0_OUTINIT: CH0OI Position            */
#define FTM_OUTINIT_CH1OI_MASK                   (0x01UL << FTM_OUTINIT_CH1OI_SHIFT)                 /*!< FTM0_OUTINIT: CH1OI Mask                */
#define FTM_OUTINIT_CH1OI_SHIFT                  1                                                   /*!< FTM0_OUTINIT: CH1OI Position            */
#define FTM_OUTINIT_CH2OI_MASK                   (0x01UL << FTM_OUTINIT_CH2OI_SHIFT)                 /*!< FTM0_OUTINIT: CH2OI Mask                */
#define FTM_OUTINIT_CH2OI_SHIFT                  2                                                   /*!< FTM0_OUTINIT: CH2OI Position            */
#define FTM_OUTINIT_CH3OI_MASK                   (0x01UL << FTM_OUTINIT_CH3OI_SHIFT)                 /*!< FTM0_OUTINIT: CH3OI Mask                */
#define FTM_OUTINIT_CH3OI_SHIFT                  3                                                   /*!< FTM0_OUTINIT: CH3OI Position            */
#define FTM_OUTINIT_CH4OI_MASK                   (0x01UL << FTM_OUTINIT_CH4OI_SHIFT)                 /*!< FTM0_OUTINIT: CH4OI Mask                */
#define FTM_OUTINIT_CH4OI_SHIFT                  4                                                   /*!< FTM0_OUTINIT: CH4OI Position            */
#define FTM_OUTINIT_CH5OI_MASK                   (0x01UL << FTM_OUTINIT_CH5OI_SHIFT)                 /*!< FTM0_OUTINIT: CH5OI Mask                */
#define FTM_OUTINIT_CH5OI_SHIFT                  5                                                   /*!< FTM0_OUTINIT: CH5OI Position            */
#define FTM_OUTINIT_CH6OI_MASK                   (0x01UL << FTM_OUTINIT_CH6OI_SHIFT)                 /*!< FTM0_OUTINIT: CH6OI Mask                */
#define FTM_OUTINIT_CH6OI_SHIFT                  6                                                   /*!< FTM0_OUTINIT: CH6OI Position            */
#define FTM_OUTINIT_CH7OI_MASK                   (0x01UL << FTM_OUTINIT_CH7OI_SHIFT)                 /*!< FTM0_OUTINIT: CH7OI Mask                */
#define FTM_OUTINIT_CH7OI_SHIFT                  7                                                   /*!< FTM0_OUTINIT: CH7OI Position            */

/* ------- FTM0_OUTMASK                             ------ */
#define FTM_OUTMASK_CH0OM_MASK                   (0x01UL << FTM_OUTMASK_CH0OM_SHIFT)                 /*!< FTM0_OUTMASK: CH0OM Mask                */
#define FTM_OUTMASK_CH0OM_SHIFT                  0                                                   /*!< FTM0_OUTMASK: CH0OM Position            */
#define FTM_OUTMASK_CH1OM_MASK                   (0x01UL << FTM_OUTMASK_CH1OM_SHIFT)                 /*!< FTM0_OUTMASK: CH1OM Mask                */
#define FTM_OUTMASK_CH1OM_SHIFT                  1                                                   /*!< FTM0_OUTMASK: CH1OM Position            */
#define FTM_OUTMASK_CH2OM_MASK                   (0x01UL << FTM_OUTMASK_CH2OM_SHIFT)                 /*!< FTM0_OUTMASK: CH2OM Mask                */
#define FTM_OUTMASK_CH2OM_SHIFT                  2                                                   /*!< FTM0_OUTMASK: CH2OM Position            */
#define FTM_OUTMASK_CH3OM_MASK                   (0x01UL << FTM_OUTMASK_CH3OM_SHIFT)                 /*!< FTM0_OUTMASK: CH3OM Mask                */
#define FTM_OUTMASK_CH3OM_SHIFT                  3                                                   /*!< FTM0_OUTMASK: CH3OM Position            */
#define FTM_OUTMASK_CH4OM_MASK                   (0x01UL << FTM_OUTMASK_CH4OM_SHIFT)                 /*!< FTM0_OUTMASK: CH4OM Mask                */
#define FTM_OUTMASK_CH4OM_SHIFT                  4                                                   /*!< FTM0_OUTMASK: CH4OM Position            */
#define FTM_OUTMASK_CH5OM_MASK                   (0x01UL << FTM_OUTMASK_CH5OM_SHIFT)                 /*!< FTM0_OUTMASK: CH5OM Mask                */
#define FTM_OUTMASK_CH5OM_SHIFT                  5                                                   /*!< FTM0_OUTMASK: CH5OM Position            */
#define FTM_OUTMASK_CH6OM_MASK                   (0x01UL << FTM_OUTMASK_CH6OM_SHIFT)                 /*!< FTM0_OUTMASK: CH6OM Mask                */
#define FTM_OUTMASK_CH6OM_SHIFT                  6                                                   /*!< FTM0_OUTMASK: CH6OM Position            */
#define FTM_OUTMASK_CH7OM_MASK                   (0x01UL << FTM_OUTMASK_CH7OM_SHIFT)                 /*!< FTM0_OUTMASK: CH7OM Mask                */
#define FTM_OUTMASK_CH7OM_SHIFT                  7                                                   /*!< FTM0_OUTMASK: CH7OM Position            */

/* ------- FTM0_COMBINE                             ------ */
#define FTM_COMBINE_COMBINE0_MASK                (0x01UL << FTM_COMBINE_COMBINE0_SHIFT)              /*!< FTM0_COMBINE: COMBINE0 Mask             */
#define FTM_COMBINE_COMBINE0_SHIFT               0                                                   /*!< FTM0_COMBINE: COMBINE0 Position         */
#define FTM_COMBINE_COMP0_MASK                   (0x01UL << FTM_COMBINE_COMP0_SHIFT)                 /*!< FTM0_COMBINE: COMP0 Mask                */
#define FTM_COMBINE_COMP0_SHIFT                  1                                                   /*!< FTM0_COMBINE: COMP0 Position            */
#define FTM_COMBINE_DECAPEN0_MASK                (0x01UL << FTM_COMBINE_DECAPEN0_SHIFT)              /*!< FTM0_COMBINE: DECAPEN0 Mask             */
#define FTM_COMBINE_DECAPEN0_SHIFT               2                                                   /*!< FTM0_COMBINE: DECAPEN0 Position         */
#define FTM_COMBINE_DECAP0_MASK                  (0x01UL << FTM_COMBINE_DECAP0_SHIFT)                /*!< FTM0_COMBINE: DECAP0 Mask               */
#define FTM_COMBINE_DECAP0_SHIFT                 3                                                   /*!< FTM0_COMBINE: DECAP0 Position           */
#define FTM_COMBINE_DTEN0_MASK                   (0x01UL << FTM_COMBINE_DTEN0_SHIFT)                 /*!< FTM0_COMBINE: DTEN0 Mask                */
#define FTM_COMBINE_DTEN0_SHIFT                  4                                                   /*!< FTM0_COMBINE: DTEN0 Position            */
#define FTM_COMBINE_SYNCEN0_MASK                 (0x01UL << FTM_COMBINE_SYNCEN0_SHIFT)               /*!< FTM0_COMBINE: SYNCEN0 Mask              */
#define FTM_COMBINE_SYNCEN0_SHIFT                5                                                   /*!< FTM0_COMBINE: SYNCEN0 Position          */
#define FTM_COMBINE_FAULTEN0_MASK                (0x01UL << FTM_COMBINE_FAULTEN0_SHIFT)              /*!< FTM0_COMBINE: FAULTEN0 Mask             */
#define FTM_COMBINE_FAULTEN0_SHIFT               6                                                   /*!< FTM0_COMBINE: FAULTEN0 Position         */
#define FTM_COMBINE_COMBINE1_MASK                (0x01UL << FTM_COMBINE_COMBINE1_SHIFT)              /*!< FTM0_COMBINE: COMBINE1 Mask             */
#define FTM_COMBINE_COMBINE1_SHIFT               8                                                   /*!< FTM0_COMBINE: COMBINE1 Position         */
#define FTM_COMBINE_COMP1_MASK                   (0x01UL << FTM_COMBINE_COMP1_SHIFT)                 /*!< FTM0_COMBINE: COMP1 Mask                */
#define FTM_COMBINE_COMP1_SHIFT                  9                                                   /*!< FTM0_COMBINE: COMP1 Position            */
#define FTM_COMBINE_DECAPEN1_MASK                (0x01UL << FTM_COMBINE_DECAPEN1_SHIFT)              /*!< FTM0_COMBINE: DECAPEN1 Mask             */
#define FTM_COMBINE_DECAPEN1_SHIFT               10                                                  /*!< FTM0_COMBINE: DECAPEN1 Position         */
#define FTM_COMBINE_DECAP1_MASK                  (0x01UL << FTM_COMBINE_DECAP1_SHIFT)                /*!< FTM0_COMBINE: DECAP1 Mask               */
#define FTM_COMBINE_DECAP1_SHIFT                 11                                                  /*!< FTM0_COMBINE: DECAP1 Position           */
#define FTM_COMBINE_DTEN1_MASK                   (0x01UL << FTM_COMBINE_DTEN1_SHIFT)                 /*!< FTM0_COMBINE: DTEN1 Mask                */
#define FTM_COMBINE_DTEN1_SHIFT                  12                                                  /*!< FTM0_COMBINE: DTEN1 Position            */
#define FTM_COMBINE_SYNCEN1_MASK                 (0x01UL << FTM_COMBINE_SYNCEN1_SHIFT)               /*!< FTM0_COMBINE: SYNCEN1 Mask              */
#define FTM_COMBINE_SYNCEN1_SHIFT                13                                                  /*!< FTM0_COMBINE: SYNCEN1 Position          */
#define FTM_COMBINE_FAULTEN1_MASK                (0x01UL << FTM_COMBINE_FAULTEN1_SHIFT)              /*!< FTM0_COMBINE: FAULTEN1 Mask             */
#define FTM_COMBINE_FAULTEN1_SHIFT               14                                                  /*!< FTM0_COMBINE: FAULTEN1 Position         */
#define FTM_COMBINE_COMBINE2_MASK                (0x01UL << FTM_COMBINE_COMBINE2_SHIFT)              /*!< FTM0_COMBINE: COMBINE2 Mask             */
#define FTM_COMBINE_COMBINE2_SHIFT               16                                                  /*!< FTM0_COMBINE: COMBINE2 Position         */
#define FTM_COMBINE_COMP2_MASK                   (0x01UL << FTM_COMBINE_COMP2_SHIFT)                 /*!< FTM0_COMBINE: COMP2 Mask                */
#define FTM_COMBINE_COMP2_SHIFT                  17                                                  /*!< FTM0_COMBINE: COMP2 Position            */
#define FTM_COMBINE_DECAPEN2_MASK                (0x01UL << FTM_COMBINE_DECAPEN2_SHIFT)              /*!< FTM0_COMBINE: DECAPEN2 Mask             */
#define FTM_COMBINE_DECAPEN2_SHIFT               18                                                  /*!< FTM0_COMBINE: DECAPEN2 Position         */
#define FTM_COMBINE_DECAP2_MASK                  (0x01UL << FTM_COMBINE_DECAP2_SHIFT)                /*!< FTM0_COMBINE: DECAP2 Mask               */
#define FTM_COMBINE_DECAP2_SHIFT                 19                                                  /*!< FTM0_COMBINE: DECAP2 Position           */
#define FTM_COMBINE_DTEN2_MASK                   (0x01UL << FTM_COMBINE_DTEN2_SHIFT)                 /*!< FTM0_COMBINE: DTEN2 Mask                */
#define FTM_COMBINE_DTEN2_SHIFT                  20                                                  /*!< FTM0_COMBINE: DTEN2 Position            */
#define FTM_COMBINE_SYNCEN2_MASK                 (0x01UL << FTM_COMBINE_SYNCEN2_SHIFT)               /*!< FTM0_COMBINE: SYNCEN2 Mask              */
#define FTM_COMBINE_SYNCEN2_SHIFT                21                                                  /*!< FTM0_COMBINE: SYNCEN2 Position          */
#define FTM_COMBINE_FAULTEN2_MASK                (0x01UL << FTM_COMBINE_FAULTEN2_SHIFT)              /*!< FTM0_COMBINE: FAULTEN2 Mask             */
#define FTM_COMBINE_FAULTEN2_SHIFT               22                                                  /*!< FTM0_COMBINE: FAULTEN2 Position         */
#define FTM_COMBINE_COMBINE3_MASK                (0x01UL << FTM_COMBINE_COMBINE3_SHIFT)              /*!< FTM0_COMBINE: COMBINE3 Mask             */
#define FTM_COMBINE_COMBINE3_SHIFT               24                                                  /*!< FTM0_COMBINE: COMBINE3 Position         */
#define FTM_COMBINE_COMP3_MASK                   (0x01UL << FTM_COMBINE_COMP3_SHIFT)                 /*!< FTM0_COMBINE: COMP3 Mask                */
#define FTM_COMBINE_COMP3_SHIFT                  25                                                  /*!< FTM0_COMBINE: COMP3 Position            */
#define FTM_COMBINE_DECAPEN3_MASK                (0x01UL << FTM_COMBINE_DECAPEN3_SHIFT)              /*!< FTM0_COMBINE: DECAPEN3 Mask             */
#define FTM_COMBINE_DECAPEN3_SHIFT               26                                                  /*!< FTM0_COMBINE: DECAPEN3 Position         */
#define FTM_COMBINE_DECAP3_MASK                  (0x01UL << FTM_COMBINE_DECAP3_SHIFT)                /*!< FTM0_COMBINE: DECAP3 Mask               */
#define FTM_COMBINE_DECAP3_SHIFT                 27                                                  /*!< FTM0_COMBINE: DECAP3 Position           */
#define FTM_COMBINE_DTEN3_MASK                   (0x01UL << FTM_COMBINE_DTEN3_SHIFT)                 /*!< FTM0_COMBINE: DTEN3 Mask                */
#define FTM_COMBINE_DTEN3_SHIFT                  28                                                  /*!< FTM0_COMBINE: DTEN3 Position            */
#define FTM_COMBINE_SYNCEN3_MASK                 (0x01UL << FTM_COMBINE_SYNCEN3_SHIFT)               /*!< FTM0_COMBINE: SYNCEN3 Mask              */
#define FTM_COMBINE_SYNCEN3_SHIFT                29                                                  /*!< FTM0_COMBINE: SYNCEN3 Position          */
#define FTM_COMBINE_FAULTEN3_MASK                (0x01UL << FTM_COMBINE_FAULTEN3_SHIFT)              /*!< FTM0_COMBINE: FAULTEN3 Mask             */
#define FTM_COMBINE_FAULTEN3_SHIFT               30                                                  /*!< FTM0_COMBINE: FAULTEN3 Position         */

/* ------- FTM0_DEADTIME                            ------ */
#define FTM_DEADTIME_DTVAL_MASK                  (0x3FUL << FTM_DEADTIME_DTVAL_SHIFT)                /*!< FTM0_DEADTIME: DTVAL Mask               */
#define FTM_DEADTIME_DTVAL_SHIFT                 0                                                   /*!< FTM0_DEADTIME: DTVAL Position           */
#define FTM_DEADTIME_DTVAL(x)                    (((x)<<FTM_DEADTIME_DTVAL_SHIFT)&FTM_DEADTIME_DTVAL_MASK) /*!< FTM0_DEADTIME                           */
#define FTM_DEADTIME_DTPS_MASK                   (0x03UL << FTM_DEADTIME_DTPS_SHIFT)                 /*!< FTM0_DEADTIME: DTPS Mask                */
#define FTM_DEADTIME_DTPS_SHIFT                  6                                                   /*!< FTM0_DEADTIME: DTPS Position            */
#define FTM_DEADTIME_DTPS(x)                     (((x)<<FTM_DEADTIME_DTPS_SHIFT)&FTM_DEADTIME_DTPS_MASK) /*!< FTM0_DEADTIME                           */

/* ------- FTM0_EXTTRIG                             ------ */
#define FTM_EXTTRIG_CH2TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH2TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH2TRIG Mask              */
#define FTM_EXTTRIG_CH2TRIG_SHIFT                0                                                   /*!< FTM0_EXTTRIG: CH2TRIG Position          */
#define FTM_EXTTRIG_CH3TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH3TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH3TRIG Mask              */
#define FTM_EXTTRIG_CH3TRIG_SHIFT                1                                                   /*!< FTM0_EXTTRIG: CH3TRIG Position          */
#define FTM_EXTTRIG_CH4TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH4TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH4TRIG Mask              */
#define FTM_EXTTRIG_CH4TRIG_SHIFT                2                                                   /*!< FTM0_EXTTRIG: CH4TRIG Position          */
#define FTM_EXTTRIG_CH5TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH5TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH5TRIG Mask              */
#define FTM_EXTTRIG_CH5TRIG_SHIFT                3                                                   /*!< FTM0_EXTTRIG: CH5TRIG Position          */
#define FTM_EXTTRIG_CH0TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH0TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH0TRIG Mask              */
#define FTM_EXTTRIG_CH0TRIG_SHIFT                4                                                   /*!< FTM0_EXTTRIG: CH0TRIG Position          */
#define FTM_EXTTRIG_CH1TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH1TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH1TRIG Mask              */
#define FTM_EXTTRIG_CH1TRIG_SHIFT                5                                                   /*!< FTM0_EXTTRIG: CH1TRIG Position          */
#define FTM_EXTTRIG_INITTRIGEN_MASK              (0x01UL << FTM_EXTTRIG_INITTRIGEN_SHIFT)            /*!< FTM0_EXTTRIG: INITTRIGEN Mask           */
#define FTM_EXTTRIG_INITTRIGEN_SHIFT             6                                                   /*!< FTM0_EXTTRIG: INITTRIGEN Position       */
#define FTM_EXTTRIG_TRIGF_MASK                   (0x01UL << FTM_EXTTRIG_TRIGF_SHIFT)                 /*!< FTM0_EXTTRIG: TRIGF Mask                */
#define FTM_EXTTRIG_TRIGF_SHIFT                  7                                                   /*!< FTM0_EXTTRIG: TRIGF Position            */

/* ------- FTM0_POL                                 ------ */
#define FTM_POL_POL0_MASK                        (0x01UL << FTM_POL_POL0_SHIFT)                      /*!< FTM0_POL: POL0 Mask                     */
#define FTM_POL_POL0_SHIFT                       0                                                   /*!< FTM0_POL: POL0 Position                 */
#define FTM_POL_POL1_MASK                        (0x01UL << FTM_POL_POL1_SHIFT)                      /*!< FTM0_POL: POL1 Mask                     */
#define FTM_POL_POL1_SHIFT                       1                                                   /*!< FTM0_POL: POL1 Position                 */
#define FTM_POL_POL2_MASK                        (0x01UL << FTM_POL_POL2_SHIFT)                      /*!< FTM0_POL: POL2 Mask                     */
#define FTM_POL_POL2_SHIFT                       2                                                   /*!< FTM0_POL: POL2 Position                 */
#define FTM_POL_POL3_MASK                        (0x01UL << FTM_POL_POL3_SHIFT)                      /*!< FTM0_POL: POL3 Mask                     */
#define FTM_POL_POL3_SHIFT                       3                                                   /*!< FTM0_POL: POL3 Position                 */
#define FTM_POL_POL4_MASK                        (0x01UL << FTM_POL_POL4_SHIFT)                      /*!< FTM0_POL: POL4 Mask                     */
#define FTM_POL_POL4_SHIFT                       4                                                   /*!< FTM0_POL: POL4 Position                 */
#define FTM_POL_POL5_MASK                        (0x01UL << FTM_POL_POL5_SHIFT)                      /*!< FTM0_POL: POL5 Mask                     */
#define FTM_POL_POL5_SHIFT                       5                                                   /*!< FTM0_POL: POL5 Position                 */
#define FTM_POL_POL6_MASK                        (0x01UL << FTM_POL_POL6_SHIFT)                      /*!< FTM0_POL: POL6 Mask                     */
#define FTM_POL_POL6_SHIFT                       6                                                   /*!< FTM0_POL: POL6 Position                 */
#define FTM_POL_POL7_MASK                        (0x01UL << FTM_POL_POL7_SHIFT)                      /*!< FTM0_POL: POL7 Mask                     */
#define FTM_POL_POL7_SHIFT                       7                                                   /*!< FTM0_POL: POL7 Position                 */

/* ------- FTM0_FMS                                 ------ */
#define FTM_FMS_FAULTF0_MASK                     (0x01UL << FTM_FMS_FAULTF0_SHIFT)                   /*!< FTM0_FMS: FAULTF0 Mask                  */
#define FTM_FMS_FAULTF0_SHIFT                    0                                                   /*!< FTM0_FMS: FAULTF0 Position              */
#define FTM_FMS_FAULTF1_MASK                     (0x01UL << FTM_FMS_FAULTF1_SHIFT)                   /*!< FTM0_FMS: FAULTF1 Mask                  */
#define FTM_FMS_FAULTF1_SHIFT                    1                                                   /*!< FTM0_FMS: FAULTF1 Position              */
#define FTM_FMS_FAULTF2_MASK                     (0x01UL << FTM_FMS_FAULTF2_SHIFT)                   /*!< FTM0_FMS: FAULTF2 Mask                  */
#define FTM_FMS_FAULTF2_SHIFT                    2                                                   /*!< FTM0_FMS: FAULTF2 Position              */
#define FTM_FMS_FAULTF3_MASK                     (0x01UL << FTM_FMS_FAULTF3_SHIFT)                   /*!< FTM0_FMS: FAULTF3 Mask                  */
#define FTM_FMS_FAULTF3_SHIFT                    3                                                   /*!< FTM0_FMS: FAULTF3 Position              */
#define FTM_FMS_FAULTIN_MASK                     (0x01UL << FTM_FMS_FAULTIN_SHIFT)                   /*!< FTM0_FMS: FAULTIN Mask                  */
#define FTM_FMS_FAULTIN_SHIFT                    5                                                   /*!< FTM0_FMS: FAULTIN Position              */
#define FTM_FMS_WPEN_MASK                        (0x01UL << FTM_FMS_WPEN_SHIFT)                      /*!< FTM0_FMS: WPEN Mask                     */
#define FTM_FMS_WPEN_SHIFT                       6                                                   /*!< FTM0_FMS: WPEN Position                 */
#define FTM_FMS_FAULTF_MASK                      (0x01UL << FTM_FMS_FAULTF_SHIFT)                    /*!< FTM0_FMS: FAULTF Mask                   */
#define FTM_FMS_FAULTF_SHIFT                     7                                                   /*!< FTM0_FMS: FAULTF Position               */

/* ------- FTM0_FILTER                              ------ */
#define FTM_FILTER_CH0FVAL_MASK                  (0x0FUL << FTM_FILTER_CH0FVAL_SHIFT)                /*!< FTM0_FILTER: CH0FVAL Mask               */
#define FTM_FILTER_CH0FVAL_SHIFT                 0                                                   /*!< FTM0_FILTER: CH0FVAL Position           */
#define FTM_FILTER_CH0FVAL(x)                    (((x)<<FTM_FILTER_CH0FVAL_SHIFT)&FTM_FILTER_CH0FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH1FVAL_MASK                  (0x0FUL << FTM_FILTER_CH1FVAL_SHIFT)                /*!< FTM0_FILTER: CH1FVAL Mask               */
#define FTM_FILTER_CH1FVAL_SHIFT                 4                                                   /*!< FTM0_FILTER: CH1FVAL Position           */
#define FTM_FILTER_CH1FVAL(x)                    (((x)<<FTM_FILTER_CH1FVAL_SHIFT)&FTM_FILTER_CH1FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH2FVAL_MASK                  (0x0FUL << FTM_FILTER_CH2FVAL_SHIFT)                /*!< FTM0_FILTER: CH2FVAL Mask               */
#define FTM_FILTER_CH2FVAL_SHIFT                 8                                                   /*!< FTM0_FILTER: CH2FVAL Position           */
#define FTM_FILTER_CH2FVAL(x)                    (((x)<<FTM_FILTER_CH2FVAL_SHIFT)&FTM_FILTER_CH2FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH3FVAL_MASK                  (0x0FUL << FTM_FILTER_CH3FVAL_SHIFT)                /*!< FTM0_FILTER: CH3FVAL Mask               */
#define FTM_FILTER_CH3FVAL_SHIFT                 12                                                  /*!< FTM0_FILTER: CH3FVAL Position           */
#define FTM_FILTER_CH3FVAL(x)                    (((x)<<FTM_FILTER_CH3FVAL_SHIFT)&FTM_FILTER_CH3FVAL_MASK) /*!< FTM0_FILTER                             */

/* ------- FTM0_FLTCTRL                             ------ */
#define FTM_FLTCTRL_FAULT0EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT0EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT0EN Mask             */
#define FTM_FLTCTRL_FAULT0EN_SHIFT               0                                                   /*!< FTM0_FLTCTRL: FAULT0EN Position         */
#define FTM_FLTCTRL_FAULT1EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT1EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT1EN Mask             */
#define FTM_FLTCTRL_FAULT1EN_SHIFT               1                                                   /*!< FTM0_FLTCTRL: FAULT1EN Position         */
#define FTM_FLTCTRL_FAULT2EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT2EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT2EN Mask             */
#define FTM_FLTCTRL_FAULT2EN_SHIFT               2                                                   /*!< FTM0_FLTCTRL: FAULT2EN Position         */
#define FTM_FLTCTRL_FAULT3EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT3EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT3EN Mask             */
#define FTM_FLTCTRL_FAULT3EN_SHIFT               3                                                   /*!< FTM0_FLTCTRL: FAULT3EN Position         */
#define FTM_FLTCTRL_FFLTR0EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR0EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR0EN Mask             */
#define FTM_FLTCTRL_FFLTR0EN_SHIFT               4                                                   /*!< FTM0_FLTCTRL: FFLTR0EN Position         */
#define FTM_FLTCTRL_FFLTR1EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR1EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR1EN Mask             */
#define FTM_FLTCTRL_FFLTR1EN_SHIFT               5                                                   /*!< FTM0_FLTCTRL: FFLTR1EN Position         */
#define FTM_FLTCTRL_FFLTR2EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR2EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR2EN Mask             */
#define FTM_FLTCTRL_FFLTR2EN_SHIFT               6                                                   /*!< FTM0_FLTCTRL: FFLTR2EN Position         */
#define FTM_FLTCTRL_FFLTR3EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR3EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR3EN Mask             */
#define FTM_FLTCTRL_FFLTR3EN_SHIFT               7                                                   /*!< FTM0_FLTCTRL: FFLTR3EN Position         */
#define FTM_FLTCTRL_FFVAL_MASK                   (0x0FUL << FTM_FLTCTRL_FFVAL_SHIFT)                 /*!< FTM0_FLTCTRL: FFVAL Mask                */
#define FTM_FLTCTRL_FFVAL_SHIFT                  8                                                   /*!< FTM0_FLTCTRL: FFVAL Position            */
#define FTM_FLTCTRL_FFVAL(x)                     (((x)<<FTM_FLTCTRL_FFVAL_SHIFT)&FTM_FLTCTRL_FFVAL_MASK) /*!< FTM0_FLTCTRL                            */

/* ------- FTM0_QDCTRL                              ------ */
#define FTM_QDCTRL_QUADEN_MASK                   (0x01UL << FTM_QDCTRL_QUADEN_SHIFT)                 /*!< FTM0_QDCTRL: QUADEN Mask                */
#define FTM_QDCTRL_QUADEN_SHIFT                  0                                                   /*!< FTM0_QDCTRL: QUADEN Position            */
#define FTM_QDCTRL_TOFDIR_MASK                   (0x01UL << FTM_QDCTRL_TOFDIR_SHIFT)                 /*!< FTM0_QDCTRL: TOFDIR Mask                */
#define FTM_QDCTRL_TOFDIR_SHIFT                  1                                                   /*!< FTM0_QDCTRL: TOFDIR Position            */
#define FTM_QDCTRL_QUADIR_MASK                   (0x01UL << FTM_QDCTRL_QUADIR_SHIFT)                 /*!< FTM0_QDCTRL: QUADIR Mask                */
#define FTM_QDCTRL_QUADIR_SHIFT                  2                                                   /*!< FTM0_QDCTRL: QUADIR Position            */
#define FTM_QDCTRL_QUADMODE_MASK                 (0x01UL << FTM_QDCTRL_QUADMODE_SHIFT)               /*!< FTM0_QDCTRL: QUADMODE Mask              */
#define FTM_QDCTRL_QUADMODE_SHIFT                3                                                   /*!< FTM0_QDCTRL: QUADMODE Position          */
#define FTM_QDCTRL_PHBPOL_MASK                   (0x01UL << FTM_QDCTRL_PHBPOL_SHIFT)                 /*!< FTM0_QDCTRL: PHBPOL Mask                */
#define FTM_QDCTRL_PHBPOL_SHIFT                  4                                                   /*!< FTM0_QDCTRL: PHBPOL Position            */
#define FTM_QDCTRL_PHAPOL_MASK                   (0x01UL << FTM_QDCTRL_PHAPOL_SHIFT)                 /*!< FTM0_QDCTRL: PHAPOL Mask                */
#define FTM_QDCTRL_PHAPOL_SHIFT                  5                                                   /*!< FTM0_QDCTRL: PHAPOL Position            */
#define FTM_QDCTRL_PHBFLTREN_MASK                (0x01UL << FTM_QDCTRL_PHBFLTREN_SHIFT)              /*!< FTM0_QDCTRL: PHBFLTREN Mask             */
#define FTM_QDCTRL_PHBFLTREN_SHIFT               6                                                   /*!< FTM0_QDCTRL: PHBFLTREN Position         */
#define FTM_QDCTRL_PHAFLTREN_MASK                (0x01UL << FTM_QDCTRL_PHAFLTREN_SHIFT)              /*!< FTM0_QDCTRL: PHAFLTREN Mask             */
#define FTM_QDCTRL_PHAFLTREN_SHIFT               7                                                   /*!< FTM0_QDCTRL: PHAFLTREN Position         */

/* ------- FTM0_CONF                                ------ */
#define FTM_CONF_NUMTOF_MASK                     (0x1FUL << FTM_CONF_NUMTOF_SHIFT)                   /*!< FTM0_CONF: NUMTOF Mask                  */
#define FTM_CONF_NUMTOF_SHIFT                    0                                                   /*!< FTM0_CONF: NUMTOF Position              */
#define FTM_CONF_NUMTOF(x)                       (((x)<<FTM_CONF_NUMTOF_SHIFT)&FTM_CONF_NUMTOF_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_BDMMODE_MASK                    (0x03UL << FTM_CONF_BDMMODE_SHIFT)                  /*!< FTM0_CONF: BDMMODE Mask                 */
#define FTM_CONF_BDMMODE_SHIFT                   6                                                   /*!< FTM0_CONF: BDMMODE Position             */
#define FTM_CONF_BDMMODE(x)                      (((x)<<FTM_CONF_BDMMODE_SHIFT)&FTM_CONF_BDMMODE_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEEN_MASK                     (0x01UL << FTM_CONF_GTBEEN_SHIFT)                   /*!< FTM0_CONF: GTBEEN Mask                  */
#define FTM_CONF_GTBEEN_SHIFT                    9                                                   /*!< FTM0_CONF: GTBEEN Position              */
#define FTM_CONF_GTBEOUT_MASK                    (0x01UL << FTM_CONF_GTBEOUT_SHIFT)                  /*!< FTM0_CONF: GTBEOUT Mask                 */
#define FTM_CONF_GTBEOUT_SHIFT                   10                                                  /*!< FTM0_CONF: GTBEOUT Position             */

/* ------- FTM0_FLTPOL                              ------ */
#define FTM_FLTPOL_FLT0POL_MASK                  (0x01UL << FTM_FLTPOL_FLT0POL_SHIFT)                /*!< FTM0_FLTPOL: FLT0POL Mask               */
#define FTM_FLTPOL_FLT0POL_SHIFT                 0                                                   /*!< FTM0_FLTPOL: FLT0POL Position           */
#define FTM_FLTPOL_FLT1POL_MASK                  (0x01UL << FTM_FLTPOL_FLT1POL_SHIFT)                /*!< FTM0_FLTPOL: FLT1POL Mask               */
#define FTM_FLTPOL_FLT1POL_SHIFT                 1                                                   /*!< FTM0_FLTPOL: FLT1POL Position           */
#define FTM_FLTPOL_FLT2POL_MASK                  (0x01UL << FTM_FLTPOL_FLT2POL_SHIFT)                /*!< FTM0_FLTPOL: FLT2POL Mask               */
#define FTM_FLTPOL_FLT2POL_SHIFT                 2                                                   /*!< FTM0_FLTPOL: FLT2POL Position           */
#define FTM_FLTPOL_FLT3POL_MASK                  (0x01UL << FTM_FLTPOL_FLT3POL_SHIFT)                /*!< FTM0_FLTPOL: FLT3POL Mask               */
#define FTM_FLTPOL_FLT3POL_SHIFT                 3                                                   /*!< FTM0_FLTPOL: FLT3POL Position           */

/* ------- FTM0_SYNCONF                             ------ */
#define FTM_SYNCONF_HWTRIGMODE_MASK              (0x01UL << FTM_SYNCONF_HWTRIGMODE_SHIFT)            /*!< FTM0_SYNCONF: HWTRIGMODE Mask           */
#define FTM_SYNCONF_HWTRIGMODE_SHIFT             0                                                   /*!< FTM0_SYNCONF: HWTRIGMODE Position       */
#define FTM_SYNCONF_CNTINC_MASK                  (0x01UL << FTM_SYNCONF_CNTINC_SHIFT)                /*!< FTM0_SYNCONF: CNTINC Mask               */
#define FTM_SYNCONF_CNTINC_SHIFT                 2                                                   /*!< FTM0_SYNCONF: CNTINC Position           */
#define FTM_SYNCONF_INVC_MASK                    (0x01UL << FTM_SYNCONF_INVC_SHIFT)                  /*!< FTM0_SYNCONF: INVC Mask                 */
#define FTM_SYNCONF_INVC_SHIFT                   4                                                   /*!< FTM0_SYNCONF: INVC Position             */
#define FTM_SYNCONF_SWOC_MASK                    (0x01UL << FTM_SYNCONF_SWOC_SHIFT)                  /*!< FTM0_SYNCONF: SWOC Mask                 */
#define FTM_SYNCONF_SWOC_SHIFT                   5                                                   /*!< FTM0_SYNCONF: SWOC Position             */
#define FTM_SYNCONF_SYNCMODE_MASK                (0x01UL << FTM_SYNCONF_SYNCMODE_SHIFT)              /*!< FTM0_SYNCONF: SYNCMODE Mask             */
#define FTM_SYNCONF_SYNCMODE_SHIFT               7                                                   /*!< FTM0_SYNCONF: SYNCMODE Position         */
#define FTM_SYNCONF_SWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_SWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: SWRSTCNT Mask             */
#define FTM_SYNCONF_SWRSTCNT_SHIFT               8                                                   /*!< FTM0_SYNCONF: SWRSTCNT Position         */
#define FTM_SYNCONF_SWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_SWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: SWWRBUF Mask              */
#define FTM_SYNCONF_SWWRBUF_SHIFT                9                                                   /*!< FTM0_SYNCONF: SWWRBUF Position          */
#define FTM_SYNCONF_SWOM_MASK                    (0x01UL << FTM_SYNCONF_SWOM_SHIFT)                  /*!< FTM0_SYNCONF: SWOM Mask                 */
#define FTM_SYNCONF_SWOM_SHIFT                   10                                                  /*!< FTM0_SYNCONF: SWOM Position             */
#define FTM_SYNCONF_SWINVC_MASK                  (0x01UL << FTM_SYNCONF_SWINVC_SHIFT)                /*!< FTM0_SYNCONF: SWINVC Mask               */
#define FTM_SYNCONF_SWINVC_SHIFT                 11                                                  /*!< FTM0_SYNCONF: SWINVC Position           */
#define FTM_SYNCONF_SWSOC_MASK                   (0x01UL << FTM_SYNCONF_SWSOC_SHIFT)                 /*!< FTM0_SYNCONF: SWSOC Mask                */
#define FTM_SYNCONF_SWSOC_SHIFT                  12                                                  /*!< FTM0_SYNCONF: SWSOC Position            */
#define FTM_SYNCONF_HWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_HWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: HWRSTCNT Mask             */
#define FTM_SYNCONF_HWRSTCNT_SHIFT               16                                                  /*!< FTM0_SYNCONF: HWRSTCNT Position         */
#define FTM_SYNCONF_HWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_HWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: HWWRBUF Mask              */
#define FTM_SYNCONF_HWWRBUF_SHIFT                17                                                  /*!< FTM0_SYNCONF: HWWRBUF Position          */
#define FTM_SYNCONF_HWOM_MASK                    (0x01UL << FTM_SYNCONF_HWOM_SHIFT)                  /*!< FTM0_SYNCONF: HWOM Mask                 */
#define FTM_SYNCONF_HWOM_SHIFT                   18                                                  /*!< FTM0_SYNCONF: HWOM Position             */
#define FTM_SYNCONF_HWINVC_MASK                  (0x01UL << FTM_SYNCONF_HWINVC_SHIFT)                /*!< FTM0_SYNCONF: HWINVC Mask               */
#define FTM_SYNCONF_HWINVC_SHIFT                 19                                                  /*!< FTM0_SYNCONF: HWINVC Position           */
#define FTM_SYNCONF_HWSOC_MASK                   (0x01UL << FTM_SYNCONF_HWSOC_SHIFT)                 /*!< FTM0_SYNCONF: HWSOC Mask                */
#define FTM_SYNCONF_HWSOC_SHIFT                  20                                                  /*!< FTM0_SYNCONF: HWSOC Position            */

/* ------- FTM0_INVCTRL                             ------ */
#define FTM_INVCTRL_INV0EN_MASK                  (0x01UL << FTM_INVCTRL_INV0EN_SHIFT)                /*!< FTM0_INVCTRL: INV0EN Mask               */
#define FTM_INVCTRL_INV0EN_SHIFT                 0                                                   /*!< FTM0_INVCTRL: INV0EN Position           */
#define FTM_INVCTRL_INV1EN_MASK                  (0x01UL << FTM_INVCTRL_INV1EN_SHIFT)                /*!< FTM0_INVCTRL: INV1EN Mask               */
#define FTM_INVCTRL_INV1EN_SHIFT                 1                                                   /*!< FTM0_INVCTRL: INV1EN Position           */
#define FTM_INVCTRL_INV2EN_MASK                  (0x01UL << FTM_INVCTRL_INV2EN_SHIFT)                /*!< FTM0_INVCTRL: INV2EN Mask               */
#define FTM_INVCTRL_INV2EN_SHIFT                 2                                                   /*!< FTM0_INVCTRL: INV2EN Position           */
#define FTM_INVCTRL_INV3EN_MASK                  (0x01UL << FTM_INVCTRL_INV3EN_SHIFT)                /*!< FTM0_INVCTRL: INV3EN Mask               */
#define FTM_INVCTRL_INV3EN_SHIFT                 3                                                   /*!< FTM0_INVCTRL: INV3EN Position           */

/* ------- FTM0_SWOCTRL                             ------ */
#define FTM_SWOCTRL_CH0OC_MASK                   (0x01UL << FTM_SWOCTRL_CH0OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH0OC Mask                */
#define FTM_SWOCTRL_CH0OC_SHIFT                  0                                                   /*!< FTM0_SWOCTRL: CH0OC Position            */
#define FTM_SWOCTRL_CH1OC_MASK                   (0x01UL << FTM_SWOCTRL_CH1OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH1OC Mask                */
#define FTM_SWOCTRL_CH1OC_SHIFT                  1                                                   /*!< FTM0_SWOCTRL: CH1OC Position            */
#define FTM_SWOCTRL_CH2OC_MASK                   (0x01UL << FTM_SWOCTRL_CH2OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH2OC Mask                */
#define FTM_SWOCTRL_CH2OC_SHIFT                  2                                                   /*!< FTM0_SWOCTRL: CH2OC Position            */
#define FTM_SWOCTRL_CH3OC_MASK                   (0x01UL << FTM_SWOCTRL_CH3OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH3OC Mask                */
#define FTM_SWOCTRL_CH3OC_SHIFT                  3                                                   /*!< FTM0_SWOCTRL: CH3OC Position            */
#define FTM_SWOCTRL_CH4OC_MASK                   (0x01UL << FTM_SWOCTRL_CH4OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH4OC Mask                */
#define FTM_SWOCTRL_CH4OC_SHIFT                  4                                                   /*!< FTM0_SWOCTRL: CH4OC Position            */
#define FTM_SWOCTRL_CH5OC_MASK                   (0x01UL << FTM_SWOCTRL_CH5OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH5OC Mask                */
#define FTM_SWOCTRL_CH5OC_SHIFT                  5                                                   /*!< FTM0_SWOCTRL: CH5OC Position            */
#define FTM_SWOCTRL_CH6OC_MASK                   (0x01UL << FTM_SWOCTRL_CH6OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH6OC Mask                */
#define FTM_SWOCTRL_CH6OC_SHIFT                  6                                                   /*!< FTM0_SWOCTRL: CH6OC Position            */
#define FTM_SWOCTRL_CH7OC_MASK                   (0x01UL << FTM_SWOCTRL_CH7OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH7OC Mask                */
#define FTM_SWOCTRL_CH7OC_SHIFT                  7                                                   /*!< FTM0_SWOCTRL: CH7OC Position            */
#define FTM_SWOCTRL_CH0OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH0OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH0OCV Mask               */
#define FTM_SWOCTRL_CH0OCV_SHIFT                 8                                                   /*!< FTM0_SWOCTRL: CH0OCV Position           */
#define FTM_SWOCTRL_CH1OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH1OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH1OCV Mask               */
#define FTM_SWOCTRL_CH1OCV_SHIFT                 9                                                   /*!< FTM0_SWOCTRL: CH1OCV Position           */
#define FTM_SWOCTRL_CH2OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH2OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH2OCV Mask               */
#define FTM_SWOCTRL_CH2OCV_SHIFT                 10                                                  /*!< FTM0_SWOCTRL: CH2OCV Position           */
#define FTM_SWOCTRL_CH3OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH3OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH3OCV Mask               */
#define FTM_SWOCTRL_CH3OCV_SHIFT                 11                                                  /*!< FTM0_SWOCTRL: CH3OCV Position           */
#define FTM_SWOCTRL_CH4OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH4OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH4OCV Mask               */
#define FTM_SWOCTRL_CH4OCV_SHIFT                 12                                                  /*!< FTM0_SWOCTRL: CH4OCV Position           */
#define FTM_SWOCTRL_CH5OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH5OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH5OCV Mask               */
#define FTM_SWOCTRL_CH5OCV_SHIFT                 13                                                  /*!< FTM0_SWOCTRL: CH5OCV Position           */
#define FTM_SWOCTRL_CH6OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH6OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH6OCV Mask               */
#define FTM_SWOCTRL_CH6OCV_SHIFT                 14                                                  /*!< FTM0_SWOCTRL: CH6OCV Position           */
#define FTM_SWOCTRL_CH7OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH7OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH7OCV Mask               */
#define FTM_SWOCTRL_CH7OCV_SHIFT                 15                                                  /*!< FTM0_SWOCTRL: CH7OCV Position           */

/* ------- FTM0_PWMLOAD                             ------ */
#define FTM_PWMLOAD_CH0SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH0SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH0SEL Mask               */
#define FTM_PWMLOAD_CH0SEL_SHIFT                 0                                                   /*!< FTM0_PWMLOAD: CH0SEL Position           */
#define FTM_PWMLOAD_CH1SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH1SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH1SEL Mask               */
#define FTM_PWMLOAD_CH1SEL_SHIFT                 1                                                   /*!< FTM0_PWMLOAD: CH1SEL Position           */
#define FTM_PWMLOAD_CH2SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH2SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH2SEL Mask               */
#define FTM_PWMLOAD_CH2SEL_SHIFT                 2                                                   /*!< FTM0_PWMLOAD: CH2SEL Position           */
#define FTM_PWMLOAD_CH3SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH3SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH3SEL Mask               */
#define FTM_PWMLOAD_CH3SEL_SHIFT                 3                                                   /*!< FTM0_PWMLOAD: CH3SEL Position           */
#define FTM_PWMLOAD_CH4SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH4SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH4SEL Mask               */
#define FTM_PWMLOAD_CH4SEL_SHIFT                 4                                                   /*!< FTM0_PWMLOAD: CH4SEL Position           */
#define FTM_PWMLOAD_CH5SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH5SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH5SEL Mask               */
#define FTM_PWMLOAD_CH5SEL_SHIFT                 5                                                   /*!< FTM0_PWMLOAD: CH5SEL Position           */
#define FTM_PWMLOAD_CH6SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH6SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH6SEL Mask               */
#define FTM_PWMLOAD_CH6SEL_SHIFT                 6                                                   /*!< FTM0_PWMLOAD: CH6SEL Position           */
#define FTM_PWMLOAD_CH7SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH7SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH7SEL Mask               */
#define FTM_PWMLOAD_CH7SEL_SHIFT                 7                                                   /*!< FTM0_PWMLOAD: CH7SEL Position           */
#define FTM_PWMLOAD_LDOK_MASK                    (0x01UL << FTM_PWMLOAD_LDOK_SHIFT)                  /*!< FTM0_PWMLOAD: LDOK Mask                 */
#define FTM_PWMLOAD_LDOK_SHIFT                   9                                                   /*!< FTM0_PWMLOAD: LDOK Position             */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define FTM0_SC                        (FTM0->SC)
#define FTM0_CNT                       (FTM0->CNT)
#define FTM0_MOD                       (FTM0->MOD)
#define FTM0_C0SC                      (FTM0->CONTROLS[0].CnSC)
#define FTM0_C0V                       (FTM0->CONTROLS[0].CnV)
#define FTM0_C1SC                      (FTM0->CONTROLS[1].CnSC)
#define FTM0_C1V                       (FTM0->CONTROLS[1].CnV)
#define FTM0_C2SC                      (FTM0->CONTROLS[2].CnSC)
#define FTM0_C2V                       (FTM0->CONTROLS[2].CnV)
#define FTM0_C3SC                      (FTM0->CONTROLS[3].CnSC)
#define FTM0_C3V                       (FTM0->CONTROLS[3].CnV)
#define FTM0_C4SC                      (FTM0->CONTROLS[4].CnSC)
#define FTM0_C4V                       (FTM0->CONTROLS[4].CnV)
#define FTM0_C5SC                      (FTM0->CONTROLS[5].CnSC)
#define FTM0_C5V                       (FTM0->CONTROLS[5].CnV)
#define FTM0_C6SC                      (FTM0->CONTROLS[6].CnSC)
#define FTM0_C6V                       (FTM0->CONTROLS[6].CnV)
#define FTM0_C7SC                      (FTM0->CONTROLS[7].CnSC)
#define FTM0_C7V                       (FTM0->CONTROLS[7].CnV)
#define FTM0_CNTIN                     (FTM0->CNTIN)
#define FTM0_STATUS                    (FTM0->STATUS)
#define FTM0_MODE                      (FTM0->MODE)
#define FTM0_SYNC                      (FTM0->SYNC)
#define FTM0_OUTINIT                   (FTM0->OUTINIT)
#define FTM0_OUTMASK                   (FTM0->OUTMASK)
#define FTM0_COMBINE                   (FTM0->COMBINE)
#define FTM0_DEADTIME                  (FTM0->DEADTIME)
#define FTM0_EXTTRIG                   (FTM0->EXTTRIG)
#define FTM0_POL                       (FTM0->POL)
#define FTM0_FMS                       (FTM0->FMS)
#define FTM0_FILTER                    (FTM0->FILTER)
#define FTM0_FLTCTRL                   (FTM0->FLTCTRL)
#define FTM0_QDCTRL                    (FTM0->QDCTRL)
#define FTM0_CONF                      (FTM0->CONF)
#define FTM0_FLTPOL                    (FTM0->FLTPOL)
#define FTM0_SYNCONF                   (FTM0->SYNCONF)
#define FTM0_INVCTRL                   (FTM0->INVCTRL)
#define FTM0_SWOCTRL                   (FTM0->SWOCTRL)
#define FTM0_PWMLOAD                   (FTM0->PWMLOAD)

/* ================================================================================ */
/* ================           FTM1 (file:FTM1_2CH)                 ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (2 channels)
 */
typedef struct {                                /*!<       FTM1 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0010, 16)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /*!< 0010: Channel  Value                                               */
   } CONTROLS[2];
   __I  uint32_t  RESERVED0[12];                /*!< 001C:                                                              */
   __IO uint32_t  CNTIN;                        /*!< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /*!< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /*!< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /*!< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /*!< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /*!< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /*!< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /*!< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /*!< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /*!< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /*!< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /*!< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /*!< 0080: Quadrature Decoder Control and Status                        */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /*!< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /*!< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /*!< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /*!< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /*!< 0098: FTM PWM Load                                                 */
} FTM1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTM1' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FTM1_SC                                  ------ */

/* ------- FTM1_CNT                                 ------ */

/* ------- FTM1_MOD                                 ------ */

/* ------- FTM1_CnSC                                ------ */

/* ------- FTM1_CnV                                 ------ */

/* ------- FTM1_CNTIN                               ------ */

/* ------- FTM1_STATUS                              ------ */

/* ------- FTM1_MODE                                ------ */

/* ------- FTM1_SYNC                                ------ */

/* ------- FTM1_OUTINIT                             ------ */

/* ------- FTM1_OUTMASK                             ------ */

/* ------- FTM1_COMBINE                             ------ */

/* ------- FTM1_DEADTIME                            ------ */

/* ------- FTM1_EXTTRIG                             ------ */

/* ------- FTM1_POL                                 ------ */

/* ------- FTM1_FMS                                 ------ */

/* ------- FTM1_FILTER                              ------ */

/* ------- FTM1_FLTCTRL                             ------ */

/* ------- FTM1_QDCTRL                              ------ */

/* ------- FTM1_CONF                                ------ */

/* ------- FTM1_FLTPOL                              ------ */

/* ------- FTM1_SYNCONF                             ------ */

/* ------- FTM1_INVCTRL                             ------ */

/* ------- FTM1_SWOCTRL                             ------ */

/* ------- FTM1_PWMLOAD                             ------ */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define FTM1_SC                        (FTM1->SC)
#define FTM1_CNT                       (FTM1->CNT)
#define FTM1_MOD                       (FTM1->MOD)
#define FTM1_C0SC                      (FTM1->CONTROLS[0].CnSC)
#define FTM1_C0V                       (FTM1->CONTROLS[0].CnV)
#define FTM1_C1SC                      (FTM1->CONTROLS[1].CnSC)
#define FTM1_C1V                       (FTM1->CONTROLS[1].CnV)
#define FTM1_CNTIN                     (FTM1->CNTIN)
#define FTM1_STATUS                    (FTM1->STATUS)
#define FTM1_MODE                      (FTM1->MODE)
#define FTM1_SYNC                      (FTM1->SYNC)
#define FTM1_OUTINIT                   (FTM1->OUTINIT)
#define FTM1_OUTMASK                   (FTM1->OUTMASK)
#define FTM1_COMBINE                   (FTM1->COMBINE)
#define FTM1_DEADTIME                  (FTM1->DEADTIME)
#define FTM1_EXTTRIG                   (FTM1->EXTTRIG)
#define FTM1_POL                       (FTM1->POL)
#define FTM1_FMS                       (FTM1->FMS)
#define FTM1_FILTER                    (FTM1->FILTER)
#define FTM1_FLTCTRL                   (FTM1->FLTCTRL)
#define FTM1_QDCTRL                    (FTM1->QDCTRL)
#define FTM1_CONF                      (FTM1->CONF)
#define FTM1_FLTPOL                    (FTM1->FLTPOL)
#define FTM1_SYNCONF                   (FTM1->SYNCONF)
#define FTM1_INVCTRL                   (FTM1->INVCTRL)
#define FTM1_SWOCTRL                   (FTM1->SWOCTRL)
#define FTM1_PWMLOAD                   (FTM1->PWMLOAD)

/* ================================================================================ */
/* ================           FTM2 (derived from FTM1)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (2 channels)
 */
typedef FTM1_Type FTM2_Type;  /*!< FTM2 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'FTM2' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define FTM2_SC                        (FTM2->SC)
#define FTM2_CNT                       (FTM2->CNT)
#define FTM2_MOD                       (FTM2->MOD)
#define FTM2_C0SC                      (FTM2->CONTROLS[0].CnSC)
#define FTM2_C0V                       (FTM2->CONTROLS[0].CnV)
#define FTM2_C1SC                      (FTM2->CONTROLS[1].CnSC)
#define FTM2_C1V                       (FTM2->CONTROLS[1].CnV)
#define FTM2_CNTIN                     (FTM2->CNTIN)
#define FTM2_STATUS                    (FTM2->STATUS)
#define FTM2_MODE                      (FTM2->MODE)
#define FTM2_SYNC                      (FTM2->SYNC)
#define FTM2_OUTINIT                   (FTM2->OUTINIT)
#define FTM2_OUTMASK                   (FTM2->OUTMASK)
#define FTM2_COMBINE                   (FTM2->COMBINE)
#define FTM2_DEADTIME                  (FTM2->DEADTIME)
#define FTM2_EXTTRIG                   (FTM2->EXTTRIG)
#define FTM2_POL                       (FTM2->POL)
#define FTM2_FMS                       (FTM2->FMS)
#define FTM2_FILTER                    (FTM2->FILTER)
#define FTM2_FLTCTRL                   (FTM2->FLTCTRL)
#define FTM2_QDCTRL                    (FTM2->QDCTRL)
#define FTM2_CONF                      (FTM2->CONF)
#define FTM2_FLTPOL                    (FTM2->FLTPOL)
#define FTM2_SYNCONF                   (FTM2->SYNCONF)
#define FTM2_INVCTRL                   (FTM2->INVCTRL)
#define FTM2_SWOCTRL                   (FTM2->SWOCTRL)
#define FTM2_PWMLOAD                   (FTM2->PWMLOAD)

/* ================================================================================ */
/* ================           GPIOA (file:GPIOA_0)                 ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef struct {                                /*!<       GPIOA Structure                                              */
   __IO uint32_t  PDOR;                         /*!< 0000: Port Data Output Register                                    */
   __O  uint32_t  PSOR;                         /*!< 0004: Port Set Output Register                                     */
   __O  uint32_t  PCOR;                         /*!< 0008: Port Clear Output Register                                   */
   __O  uint32_t  PTOR;                         /*!< 000C: Port Toggle Output Register                                  */
   __I  uint32_t  PDIR;                         /*!< 0010: Port Data Input Register                                     */
   __IO uint32_t  PDDR;                         /*!< 0014: Port Data Direction Register                                 */
} GPIOA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- GPIOA_PDOR                               ------ */
#define GPIO_PDOR_PDO0_MASK                      (0x01UL << GPIO_PDOR_PDO0_SHIFT)                    /*!< GPIOA_PDOR: PDO0 Mask                   */
#define GPIO_PDOR_PDO0_SHIFT                     0                                                   /*!< GPIOA_PDOR: PDO0 Position               */
#define GPIO_PDOR_PDO1_MASK                      (0x01UL << GPIO_PDOR_PDO1_SHIFT)                    /*!< GPIOA_PDOR: PDO1 Mask                   */
#define GPIO_PDOR_PDO1_SHIFT                     1                                                   /*!< GPIOA_PDOR: PDO1 Position               */
#define GPIO_PDOR_PDO2_MASK                      (0x01UL << GPIO_PDOR_PDO2_SHIFT)                    /*!< GPIOA_PDOR: PDO2 Mask                   */
#define GPIO_PDOR_PDO2_SHIFT                     2                                                   /*!< GPIOA_PDOR: PDO2 Position               */
#define GPIO_PDOR_PDO3_MASK                      (0x01UL << GPIO_PDOR_PDO3_SHIFT)                    /*!< GPIOA_PDOR: PDO3 Mask                   */
#define GPIO_PDOR_PDO3_SHIFT                     3                                                   /*!< GPIOA_PDOR: PDO3 Position               */
#define GPIO_PDOR_PDO4_MASK                      (0x01UL << GPIO_PDOR_PDO4_SHIFT)                    /*!< GPIOA_PDOR: PDO4 Mask                   */
#define GPIO_PDOR_PDO4_SHIFT                     4                                                   /*!< GPIOA_PDOR: PDO4 Position               */
#define GPIO_PDOR_PDO5_MASK                      (0x01UL << GPIO_PDOR_PDO5_SHIFT)                    /*!< GPIOA_PDOR: PDO5 Mask                   */
#define GPIO_PDOR_PDO5_SHIFT                     5                                                   /*!< GPIOA_PDOR: PDO5 Position               */
#define GPIO_PDOR_PDO6_MASK                      (0x01UL << GPIO_PDOR_PDO6_SHIFT)                    /*!< GPIOA_PDOR: PDO6 Mask                   */
#define GPIO_PDOR_PDO6_SHIFT                     6                                                   /*!< GPIOA_PDOR: PDO6 Position               */
#define GPIO_PDOR_PDO7_MASK                      (0x01UL << GPIO_PDOR_PDO7_SHIFT)                    /*!< GPIOA_PDOR: PDO7 Mask                   */
#define GPIO_PDOR_PDO7_SHIFT                     7                                                   /*!< GPIOA_PDOR: PDO7 Position               */
#define GPIO_PDOR_PDO8_MASK                      (0x01UL << GPIO_PDOR_PDO8_SHIFT)                    /*!< GPIOA_PDOR: PDO8 Mask                   */
#define GPIO_PDOR_PDO8_SHIFT                     8                                                   /*!< GPIOA_PDOR: PDO8 Position               */
#define GPIO_PDOR_PDO9_MASK                      (0x01UL << GPIO_PDOR_PDO9_SHIFT)                    /*!< GPIOA_PDOR: PDO9 Mask                   */
#define GPIO_PDOR_PDO9_SHIFT                     9                                                   /*!< GPIOA_PDOR: PDO9 Position               */
#define GPIO_PDOR_PDO10_MASK                     (0x01UL << GPIO_PDOR_PDO10_SHIFT)                   /*!< GPIOA_PDOR: PDO10 Mask                  */
#define GPIO_PDOR_PDO10_SHIFT                    10                                                  /*!< GPIOA_PDOR: PDO10 Position              */
#define GPIO_PDOR_PDO11_MASK                     (0x01UL << GPIO_PDOR_PDO11_SHIFT)                   /*!< GPIOA_PDOR: PDO11 Mask                  */
#define GPIO_PDOR_PDO11_SHIFT                    11                                                  /*!< GPIOA_PDOR: PDO11 Position              */
#define GPIO_PDOR_PDO12_MASK                     (0x01UL << GPIO_PDOR_PDO12_SHIFT)                   /*!< GPIOA_PDOR: PDO12 Mask                  */
#define GPIO_PDOR_PDO12_SHIFT                    12                                                  /*!< GPIOA_PDOR: PDO12 Position              */
#define GPIO_PDOR_PDO13_MASK                     (0x01UL << GPIO_PDOR_PDO13_SHIFT)                   /*!< GPIOA_PDOR: PDO13 Mask                  */
#define GPIO_PDOR_PDO13_SHIFT                    13                                                  /*!< GPIOA_PDOR: PDO13 Position              */
#define GPIO_PDOR_PDO14_MASK                     (0x01UL << GPIO_PDOR_PDO14_SHIFT)                   /*!< GPIOA_PDOR: PDO14 Mask                  */
#define GPIO_PDOR_PDO14_SHIFT                    14                                                  /*!< GPIOA_PDOR: PDO14 Position              */
#define GPIO_PDOR_PDO15_MASK                     (0x01UL << GPIO_PDOR_PDO15_SHIFT)                   /*!< GPIOA_PDOR: PDO15 Mask                  */
#define GPIO_PDOR_PDO15_SHIFT                    15                                                  /*!< GPIOA_PDOR: PDO15 Position              */
#define GPIO_PDOR_PDO16_MASK                     (0x01UL << GPIO_PDOR_PDO16_SHIFT)                   /*!< GPIOA_PDOR: PDO16 Mask                  */
#define GPIO_PDOR_PDO16_SHIFT                    16                                                  /*!< GPIOA_PDOR: PDO16 Position              */
#define GPIO_PDOR_PDO17_MASK                     (0x01UL << GPIO_PDOR_PDO17_SHIFT)                   /*!< GPIOA_PDOR: PDO17 Mask                  */
#define GPIO_PDOR_PDO17_SHIFT                    17                                                  /*!< GPIOA_PDOR: PDO17 Position              */
#define GPIO_PDOR_PDO18_MASK                     (0x01UL << GPIO_PDOR_PDO18_SHIFT)                   /*!< GPIOA_PDOR: PDO18 Mask                  */
#define GPIO_PDOR_PDO18_SHIFT                    18                                                  /*!< GPIOA_PDOR: PDO18 Position              */
#define GPIO_PDOR_PDO19_MASK                     (0x01UL << GPIO_PDOR_PDO19_SHIFT)                   /*!< GPIOA_PDOR: PDO19 Mask                  */
#define GPIO_PDOR_PDO19_SHIFT                    19                                                  /*!< GPIOA_PDOR: PDO19 Position              */
#define GPIO_PDOR_PDO20_MASK                     (0x01UL << GPIO_PDOR_PDO20_SHIFT)                   /*!< GPIOA_PDOR: PDO20 Mask                  */
#define GPIO_PDOR_PDO20_SHIFT                    20                                                  /*!< GPIOA_PDOR: PDO20 Position              */
#define GPIO_PDOR_PDO21_MASK                     (0x01UL << GPIO_PDOR_PDO21_SHIFT)                   /*!< GPIOA_PDOR: PDO21 Mask                  */
#define GPIO_PDOR_PDO21_SHIFT                    21                                                  /*!< GPIOA_PDOR: PDO21 Position              */
#define GPIO_PDOR_PDO22_MASK                     (0x01UL << GPIO_PDOR_PDO22_SHIFT)                   /*!< GPIOA_PDOR: PDO22 Mask                  */
#define GPIO_PDOR_PDO22_SHIFT                    22                                                  /*!< GPIOA_PDOR: PDO22 Position              */
#define GPIO_PDOR_PDO23_MASK                     (0x01UL << GPIO_PDOR_PDO23_SHIFT)                   /*!< GPIOA_PDOR: PDO23 Mask                  */
#define GPIO_PDOR_PDO23_SHIFT                    23                                                  /*!< GPIOA_PDOR: PDO23 Position              */
#define GPIO_PDOR_PDO24_MASK                     (0x01UL << GPIO_PDOR_PDO24_SHIFT)                   /*!< GPIOA_PDOR: PDO24 Mask                  */
#define GPIO_PDOR_PDO24_SHIFT                    24                                                  /*!< GPIOA_PDOR: PDO24 Position              */
#define GPIO_PDOR_PDO25_MASK                     (0x01UL << GPIO_PDOR_PDO25_SHIFT)                   /*!< GPIOA_PDOR: PDO25 Mask                  */
#define GPIO_PDOR_PDO25_SHIFT                    25                                                  /*!< GPIOA_PDOR: PDO25 Position              */
#define GPIO_PDOR_PDO26_MASK                     (0x01UL << GPIO_PDOR_PDO26_SHIFT)                   /*!< GPIOA_PDOR: PDO26 Mask                  */
#define GPIO_PDOR_PDO26_SHIFT                    26                                                  /*!< GPIOA_PDOR: PDO26 Position              */
#define GPIO_PDOR_PDO27_MASK                     (0x01UL << GPIO_PDOR_PDO27_SHIFT)                   /*!< GPIOA_PDOR: PDO27 Mask                  */
#define GPIO_PDOR_PDO27_SHIFT                    27                                                  /*!< GPIOA_PDOR: PDO27 Position              */
#define GPIO_PDOR_PDO28_MASK                     (0x01UL << GPIO_PDOR_PDO28_SHIFT)                   /*!< GPIOA_PDOR: PDO28 Mask                  */
#define GPIO_PDOR_PDO28_SHIFT                    28                                                  /*!< GPIOA_PDOR: PDO28 Position              */
#define GPIO_PDOR_PDO29_MASK                     (0x01UL << GPIO_PDOR_PDO29_SHIFT)                   /*!< GPIOA_PDOR: PDO29 Mask                  */
#define GPIO_PDOR_PDO29_SHIFT                    29                                                  /*!< GPIOA_PDOR: PDO29 Position              */
#define GPIO_PDOR_PDO30_MASK                     (0x01UL << GPIO_PDOR_PDO30_SHIFT)                   /*!< GPIOA_PDOR: PDO30 Mask                  */
#define GPIO_PDOR_PDO30_SHIFT                    30                                                  /*!< GPIOA_PDOR: PDO30 Position              */
#define GPIO_PDOR_PDO31_MASK                     (0x01UL << GPIO_PDOR_PDO31_SHIFT)                   /*!< GPIOA_PDOR: PDO31 Mask                  */
#define GPIO_PDOR_PDO31_SHIFT                    31                                                  /*!< GPIOA_PDOR: PDO31 Position              */

/* ------- GPIOA_PSOR                               ------ */
#define GPIO_PSOR_PTSO0_MASK                     (0x01UL << GPIO_PSOR_PTSO0_SHIFT)                   /*!< GPIOA_PSOR: PTSO0 Mask                  */
#define GPIO_PSOR_PTSO0_SHIFT                    0                                                   /*!< GPIOA_PSOR: PTSO0 Position              */
#define GPIO_PSOR_PTSO1_MASK                     (0x01UL << GPIO_PSOR_PTSO1_SHIFT)                   /*!< GPIOA_PSOR: PTSO1 Mask                  */
#define GPIO_PSOR_PTSO1_SHIFT                    1                                                   /*!< GPIOA_PSOR: PTSO1 Position              */
#define GPIO_PSOR_PTSO2_MASK                     (0x01UL << GPIO_PSOR_PTSO2_SHIFT)                   /*!< GPIOA_PSOR: PTSO2 Mask                  */
#define GPIO_PSOR_PTSO2_SHIFT                    2                                                   /*!< GPIOA_PSOR: PTSO2 Position              */
#define GPIO_PSOR_PTSO3_MASK                     (0x01UL << GPIO_PSOR_PTSO3_SHIFT)                   /*!< GPIOA_PSOR: PTSO3 Mask                  */
#define GPIO_PSOR_PTSO3_SHIFT                    3                                                   /*!< GPIOA_PSOR: PTSO3 Position              */
#define GPIO_PSOR_PTSO4_MASK                     (0x01UL << GPIO_PSOR_PTSO4_SHIFT)                   /*!< GPIOA_PSOR: PTSO4 Mask                  */
#define GPIO_PSOR_PTSO4_SHIFT                    4                                                   /*!< GPIOA_PSOR: PTSO4 Position              */
#define GPIO_PSOR_PTSO5_MASK                     (0x01UL << GPIO_PSOR_PTSO5_SHIFT)                   /*!< GPIOA_PSOR: PTSO5 Mask                  */
#define GPIO_PSOR_PTSO5_SHIFT                    5                                                   /*!< GPIOA_PSOR: PTSO5 Position              */
#define GPIO_PSOR_PTSO6_MASK                     (0x01UL << GPIO_PSOR_PTSO6_SHIFT)                   /*!< GPIOA_PSOR: PTSO6 Mask                  */
#define GPIO_PSOR_PTSO6_SHIFT                    6                                                   /*!< GPIOA_PSOR: PTSO6 Position              */
#define GPIO_PSOR_PTSO7_MASK                     (0x01UL << GPIO_PSOR_PTSO7_SHIFT)                   /*!< GPIOA_PSOR: PTSO7 Mask                  */
#define GPIO_PSOR_PTSO7_SHIFT                    7                                                   /*!< GPIOA_PSOR: PTSO7 Position              */
#define GPIO_PSOR_PTSO8_MASK                     (0x01UL << GPIO_PSOR_PTSO8_SHIFT)                   /*!< GPIOA_PSOR: PTSO8 Mask                  */
#define GPIO_PSOR_PTSO8_SHIFT                    8                                                   /*!< GPIOA_PSOR: PTSO8 Position              */
#define GPIO_PSOR_PTSO9_MASK                     (0x01UL << GPIO_PSOR_PTSO9_SHIFT)                   /*!< GPIOA_PSOR: PTSO9 Mask                  */
#define GPIO_PSOR_PTSO9_SHIFT                    9                                                   /*!< GPIOA_PSOR: PTSO9 Position              */
#define GPIO_PSOR_PTSO10_MASK                    (0x01UL << GPIO_PSOR_PTSO10_SHIFT)                  /*!< GPIOA_PSOR: PTSO10 Mask                 */
#define GPIO_PSOR_PTSO10_SHIFT                   10                                                  /*!< GPIOA_PSOR: PTSO10 Position             */
#define GPIO_PSOR_PTSO11_MASK                    (0x01UL << GPIO_PSOR_PTSO11_SHIFT)                  /*!< GPIOA_PSOR: PTSO11 Mask                 */
#define GPIO_PSOR_PTSO11_SHIFT                   11                                                  /*!< GPIOA_PSOR: PTSO11 Position             */
#define GPIO_PSOR_PTSO12_MASK                    (0x01UL << GPIO_PSOR_PTSO12_SHIFT)                  /*!< GPIOA_PSOR: PTSO12 Mask                 */
#define GPIO_PSOR_PTSO12_SHIFT                   12                                                  /*!< GPIOA_PSOR: PTSO12 Position             */
#define GPIO_PSOR_PTSO13_MASK                    (0x01UL << GPIO_PSOR_PTSO13_SHIFT)                  /*!< GPIOA_PSOR: PTSO13 Mask                 */
#define GPIO_PSOR_PTSO13_SHIFT                   13                                                  /*!< GPIOA_PSOR: PTSO13 Position             */
#define GPIO_PSOR_PTSO14_MASK                    (0x01UL << GPIO_PSOR_PTSO14_SHIFT)                  /*!< GPIOA_PSOR: PTSO14 Mask                 */
#define GPIO_PSOR_PTSO14_SHIFT                   14                                                  /*!< GPIOA_PSOR: PTSO14 Position             */
#define GPIO_PSOR_PTSO15_MASK                    (0x01UL << GPIO_PSOR_PTSO15_SHIFT)                  /*!< GPIOA_PSOR: PTSO15 Mask                 */
#define GPIO_PSOR_PTSO15_SHIFT                   15                                                  /*!< GPIOA_PSOR: PTSO15 Position             */
#define GPIO_PSOR_PTSO16_MASK                    (0x01UL << GPIO_PSOR_PTSO16_SHIFT)                  /*!< GPIOA_PSOR: PTSO16 Mask                 */
#define GPIO_PSOR_PTSO16_SHIFT                   16                                                  /*!< GPIOA_PSOR: PTSO16 Position             */
#define GPIO_PSOR_PTSO17_MASK                    (0x01UL << GPIO_PSOR_PTSO17_SHIFT)                  /*!< GPIOA_PSOR: PTSO17 Mask                 */
#define GPIO_PSOR_PTSO17_SHIFT                   17                                                  /*!< GPIOA_PSOR: PTSO17 Position             */
#define GPIO_PSOR_PTSO18_MASK                    (0x01UL << GPIO_PSOR_PTSO18_SHIFT)                  /*!< GPIOA_PSOR: PTSO18 Mask                 */
#define GPIO_PSOR_PTSO18_SHIFT                   18                                                  /*!< GPIOA_PSOR: PTSO18 Position             */
#define GPIO_PSOR_PTSO19_MASK                    (0x01UL << GPIO_PSOR_PTSO19_SHIFT)                  /*!< GPIOA_PSOR: PTSO19 Mask                 */
#define GPIO_PSOR_PTSO19_SHIFT                   19                                                  /*!< GPIOA_PSOR: PTSO19 Position             */
#define GPIO_PSOR_PTSO20_MASK                    (0x01UL << GPIO_PSOR_PTSO20_SHIFT)                  /*!< GPIOA_PSOR: PTSO20 Mask                 */
#define GPIO_PSOR_PTSO20_SHIFT                   20                                                  /*!< GPIOA_PSOR: PTSO20 Position             */
#define GPIO_PSOR_PTSO21_MASK                    (0x01UL << GPIO_PSOR_PTSO21_SHIFT)                  /*!< GPIOA_PSOR: PTSO21 Mask                 */
#define GPIO_PSOR_PTSO21_SHIFT                   21                                                  /*!< GPIOA_PSOR: PTSO21 Position             */
#define GPIO_PSOR_PTSO22_MASK                    (0x01UL << GPIO_PSOR_PTSO22_SHIFT)                  /*!< GPIOA_PSOR: PTSO22 Mask                 */
#define GPIO_PSOR_PTSO22_SHIFT                   22                                                  /*!< GPIOA_PSOR: PTSO22 Position             */
#define GPIO_PSOR_PTSO23_MASK                    (0x01UL << GPIO_PSOR_PTSO23_SHIFT)                  /*!< GPIOA_PSOR: PTSO23 Mask                 */
#define GPIO_PSOR_PTSO23_SHIFT                   23                                                  /*!< GPIOA_PSOR: PTSO23 Position             */
#define GPIO_PSOR_PTSO24_MASK                    (0x01UL << GPIO_PSOR_PTSO24_SHIFT)                  /*!< GPIOA_PSOR: PTSO24 Mask                 */
#define GPIO_PSOR_PTSO24_SHIFT                   24                                                  /*!< GPIOA_PSOR: PTSO24 Position             */
#define GPIO_PSOR_PTSO25_MASK                    (0x01UL << GPIO_PSOR_PTSO25_SHIFT)                  /*!< GPIOA_PSOR: PTSO25 Mask                 */
#define GPIO_PSOR_PTSO25_SHIFT                   25                                                  /*!< GPIOA_PSOR: PTSO25 Position             */
#define GPIO_PSOR_PTSO26_MASK                    (0x01UL << GPIO_PSOR_PTSO26_SHIFT)                  /*!< GPIOA_PSOR: PTSO26 Mask                 */
#define GPIO_PSOR_PTSO26_SHIFT                   26                                                  /*!< GPIOA_PSOR: PTSO26 Position             */
#define GPIO_PSOR_PTSO27_MASK                    (0x01UL << GPIO_PSOR_PTSO27_SHIFT)                  /*!< GPIOA_PSOR: PTSO27 Mask                 */
#define GPIO_PSOR_PTSO27_SHIFT                   27                                                  /*!< GPIOA_PSOR: PTSO27 Position             */
#define GPIO_PSOR_PTSO28_MASK                    (0x01UL << GPIO_PSOR_PTSO28_SHIFT)                  /*!< GPIOA_PSOR: PTSO28 Mask                 */
#define GPIO_PSOR_PTSO28_SHIFT                   28                                                  /*!< GPIOA_PSOR: PTSO28 Position             */
#define GPIO_PSOR_PTSO29_MASK                    (0x01UL << GPIO_PSOR_PTSO29_SHIFT)                  /*!< GPIOA_PSOR: PTSO29 Mask                 */
#define GPIO_PSOR_PTSO29_SHIFT                   29                                                  /*!< GPIOA_PSOR: PTSO29 Position             */
#define GPIO_PSOR_PTSO30_MASK                    (0x01UL << GPIO_PSOR_PTSO30_SHIFT)                  /*!< GPIOA_PSOR: PTSO30 Mask                 */
#define GPIO_PSOR_PTSO30_SHIFT                   30                                                  /*!< GPIOA_PSOR: PTSO30 Position             */
#define GPIO_PSOR_PTSO31_MASK                    (0x01UL << GPIO_PSOR_PTSO31_SHIFT)                  /*!< GPIOA_PSOR: PTSO31 Mask                 */
#define GPIO_PSOR_PTSO31_SHIFT                   31                                                  /*!< GPIOA_PSOR: PTSO31 Position             */

/* ------- GPIOA_PCOR                               ------ */
#define GPIO_PCOR_PTCO0_MASK                     (0x01UL << GPIO_PCOR_PTCO0_SHIFT)                   /*!< GPIOA_PCOR: PTCO0 Mask                  */
#define GPIO_PCOR_PTCO0_SHIFT                    0                                                   /*!< GPIOA_PCOR: PTCO0 Position              */
#define GPIO_PCOR_PTCO1_MASK                     (0x01UL << GPIO_PCOR_PTCO1_SHIFT)                   /*!< GPIOA_PCOR: PTCO1 Mask                  */
#define GPIO_PCOR_PTCO1_SHIFT                    1                                                   /*!< GPIOA_PCOR: PTCO1 Position              */
#define GPIO_PCOR_PTCO2_MASK                     (0x01UL << GPIO_PCOR_PTCO2_SHIFT)                   /*!< GPIOA_PCOR: PTCO2 Mask                  */
#define GPIO_PCOR_PTCO2_SHIFT                    2                                                   /*!< GPIOA_PCOR: PTCO2 Position              */
#define GPIO_PCOR_PTCO3_MASK                     (0x01UL << GPIO_PCOR_PTCO3_SHIFT)                   /*!< GPIOA_PCOR: PTCO3 Mask                  */
#define GPIO_PCOR_PTCO3_SHIFT                    3                                                   /*!< GPIOA_PCOR: PTCO3 Position              */
#define GPIO_PCOR_PTCO4_MASK                     (0x01UL << GPIO_PCOR_PTCO4_SHIFT)                   /*!< GPIOA_PCOR: PTCO4 Mask                  */
#define GPIO_PCOR_PTCO4_SHIFT                    4                                                   /*!< GPIOA_PCOR: PTCO4 Position              */
#define GPIO_PCOR_PTCO5_MASK                     (0x01UL << GPIO_PCOR_PTCO5_SHIFT)                   /*!< GPIOA_PCOR: PTCO5 Mask                  */
#define GPIO_PCOR_PTCO5_SHIFT                    5                                                   /*!< GPIOA_PCOR: PTCO5 Position              */
#define GPIO_PCOR_PTCO6_MASK                     (0x01UL << GPIO_PCOR_PTCO6_SHIFT)                   /*!< GPIOA_PCOR: PTCO6 Mask                  */
#define GPIO_PCOR_PTCO6_SHIFT                    6                                                   /*!< GPIOA_PCOR: PTCO6 Position              */
#define GPIO_PCOR_PTCO7_MASK                     (0x01UL << GPIO_PCOR_PTCO7_SHIFT)                   /*!< GPIOA_PCOR: PTCO7 Mask                  */
#define GPIO_PCOR_PTCO7_SHIFT                    7                                                   /*!< GPIOA_PCOR: PTCO7 Position              */
#define GPIO_PCOR_PTCO8_MASK                     (0x01UL << GPIO_PCOR_PTCO8_SHIFT)                   /*!< GPIOA_PCOR: PTCO8 Mask                  */
#define GPIO_PCOR_PTCO8_SHIFT                    8                                                   /*!< GPIOA_PCOR: PTCO8 Position              */
#define GPIO_PCOR_PTCO9_MASK                     (0x01UL << GPIO_PCOR_PTCO9_SHIFT)                   /*!< GPIOA_PCOR: PTCO9 Mask                  */
#define GPIO_PCOR_PTCO9_SHIFT                    9                                                   /*!< GPIOA_PCOR: PTCO9 Position              */
#define GPIO_PCOR_PTCO10_MASK                    (0x01UL << GPIO_PCOR_PTCO10_SHIFT)                  /*!< GPIOA_PCOR: PTCO10 Mask                 */
#define GPIO_PCOR_PTCO10_SHIFT                   10                                                  /*!< GPIOA_PCOR: PTCO10 Position             */
#define GPIO_PCOR_PTCO11_MASK                    (0x01UL << GPIO_PCOR_PTCO11_SHIFT)                  /*!< GPIOA_PCOR: PTCO11 Mask                 */
#define GPIO_PCOR_PTCO11_SHIFT                   11                                                  /*!< GPIOA_PCOR: PTCO11 Position             */
#define GPIO_PCOR_PTCO12_MASK                    (0x01UL << GPIO_PCOR_PTCO12_SHIFT)                  /*!< GPIOA_PCOR: PTCO12 Mask                 */
#define GPIO_PCOR_PTCO12_SHIFT                   12                                                  /*!< GPIOA_PCOR: PTCO12 Position             */
#define GPIO_PCOR_PTCO13_MASK                    (0x01UL << GPIO_PCOR_PTCO13_SHIFT)                  /*!< GPIOA_PCOR: PTCO13 Mask                 */
#define GPIO_PCOR_PTCO13_SHIFT                   13                                                  /*!< GPIOA_PCOR: PTCO13 Position             */
#define GPIO_PCOR_PTCO14_MASK                    (0x01UL << GPIO_PCOR_PTCO14_SHIFT)                  /*!< GPIOA_PCOR: PTCO14 Mask                 */
#define GPIO_PCOR_PTCO14_SHIFT                   14                                                  /*!< GPIOA_PCOR: PTCO14 Position             */
#define GPIO_PCOR_PTCO15_MASK                    (0x01UL << GPIO_PCOR_PTCO15_SHIFT)                  /*!< GPIOA_PCOR: PTCO15 Mask                 */
#define GPIO_PCOR_PTCO15_SHIFT                   15                                                  /*!< GPIOA_PCOR: PTCO15 Position             */
#define GPIO_PCOR_PTCO16_MASK                    (0x01UL << GPIO_PCOR_PTCO16_SHIFT)                  /*!< GPIOA_PCOR: PTCO16 Mask                 */
#define GPIO_PCOR_PTCO16_SHIFT                   16                                                  /*!< GPIOA_PCOR: PTCO16 Position             */
#define GPIO_PCOR_PTCO17_MASK                    (0x01UL << GPIO_PCOR_PTCO17_SHIFT)                  /*!< GPIOA_PCOR: PTCO17 Mask                 */
#define GPIO_PCOR_PTCO17_SHIFT                   17                                                  /*!< GPIOA_PCOR: PTCO17 Position             */
#define GPIO_PCOR_PTCO18_MASK                    (0x01UL << GPIO_PCOR_PTCO18_SHIFT)                  /*!< GPIOA_PCOR: PTCO18 Mask                 */
#define GPIO_PCOR_PTCO18_SHIFT                   18                                                  /*!< GPIOA_PCOR: PTCO18 Position             */
#define GPIO_PCOR_PTCO19_MASK                    (0x01UL << GPIO_PCOR_PTCO19_SHIFT)                  /*!< GPIOA_PCOR: PTCO19 Mask                 */
#define GPIO_PCOR_PTCO19_SHIFT                   19                                                  /*!< GPIOA_PCOR: PTCO19 Position             */
#define GPIO_PCOR_PTCO20_MASK                    (0x01UL << GPIO_PCOR_PTCO20_SHIFT)                  /*!< GPIOA_PCOR: PTCO20 Mask                 */
#define GPIO_PCOR_PTCO20_SHIFT                   20                                                  /*!< GPIOA_PCOR: PTCO20 Position             */
#define GPIO_PCOR_PTCO21_MASK                    (0x01UL << GPIO_PCOR_PTCO21_SHIFT)                  /*!< GPIOA_PCOR: PTCO21 Mask                 */
#define GPIO_PCOR_PTCO21_SHIFT                   21                                                  /*!< GPIOA_PCOR: PTCO21 Position             */
#define GPIO_PCOR_PTCO22_MASK                    (0x01UL << GPIO_PCOR_PTCO22_SHIFT)                  /*!< GPIOA_PCOR: PTCO22 Mask                 */
#define GPIO_PCOR_PTCO22_SHIFT                   22                                                  /*!< GPIOA_PCOR: PTCO22 Position             */
#define GPIO_PCOR_PTCO23_MASK                    (0x01UL << GPIO_PCOR_PTCO23_SHIFT)                  /*!< GPIOA_PCOR: PTCO23 Mask                 */
#define GPIO_PCOR_PTCO23_SHIFT                   23                                                  /*!< GPIOA_PCOR: PTCO23 Position             */
#define GPIO_PCOR_PTCO24_MASK                    (0x01UL << GPIO_PCOR_PTCO24_SHIFT)                  /*!< GPIOA_PCOR: PTCO24 Mask                 */
#define GPIO_PCOR_PTCO24_SHIFT                   24                                                  /*!< GPIOA_PCOR: PTCO24 Position             */
#define GPIO_PCOR_PTCO25_MASK                    (0x01UL << GPIO_PCOR_PTCO25_SHIFT)                  /*!< GPIOA_PCOR: PTCO25 Mask                 */
#define GPIO_PCOR_PTCO25_SHIFT                   25                                                  /*!< GPIOA_PCOR: PTCO25 Position             */
#define GPIO_PCOR_PTCO26_MASK                    (0x01UL << GPIO_PCOR_PTCO26_SHIFT)                  /*!< GPIOA_PCOR: PTCO26 Mask                 */
#define GPIO_PCOR_PTCO26_SHIFT                   26                                                  /*!< GPIOA_PCOR: PTCO26 Position             */
#define GPIO_PCOR_PTCO27_MASK                    (0x01UL << GPIO_PCOR_PTCO27_SHIFT)                  /*!< GPIOA_PCOR: PTCO27 Mask                 */
#define GPIO_PCOR_PTCO27_SHIFT                   27                                                  /*!< GPIOA_PCOR: PTCO27 Position             */
#define GPIO_PCOR_PTCO28_MASK                    (0x01UL << GPIO_PCOR_PTCO28_SHIFT)                  /*!< GPIOA_PCOR: PTCO28 Mask                 */
#define GPIO_PCOR_PTCO28_SHIFT                   28                                                  /*!< GPIOA_PCOR: PTCO28 Position             */
#define GPIO_PCOR_PTCO29_MASK                    (0x01UL << GPIO_PCOR_PTCO29_SHIFT)                  /*!< GPIOA_PCOR: PTCO29 Mask                 */
#define GPIO_PCOR_PTCO29_SHIFT                   29                                                  /*!< GPIOA_PCOR: PTCO29 Position             */
#define GPIO_PCOR_PTCO30_MASK                    (0x01UL << GPIO_PCOR_PTCO30_SHIFT)                  /*!< GPIOA_PCOR: PTCO30 Mask                 */
#define GPIO_PCOR_PTCO30_SHIFT                   30                                                  /*!< GPIOA_PCOR: PTCO30 Position             */
#define GPIO_PCOR_PTCO31_MASK                    (0x01UL << GPIO_PCOR_PTCO31_SHIFT)                  /*!< GPIOA_PCOR: PTCO31 Mask                 */
#define GPIO_PCOR_PTCO31_SHIFT                   31                                                  /*!< GPIOA_PCOR: PTCO31 Position             */

/* ------- GPIOA_PTOR                               ------ */
#define GPIO_PTOR_PTTO0_MASK                     (0x01UL << GPIO_PTOR_PTTO0_SHIFT)                   /*!< GPIOA_PTOR: PTTO0 Mask                  */
#define GPIO_PTOR_PTTO0_SHIFT                    0                                                   /*!< GPIOA_PTOR: PTTO0 Position              */
#define GPIO_PTOR_PTTO1_MASK                     (0x01UL << GPIO_PTOR_PTTO1_SHIFT)                   /*!< GPIOA_PTOR: PTTO1 Mask                  */
#define GPIO_PTOR_PTTO1_SHIFT                    1                                                   /*!< GPIOA_PTOR: PTTO1 Position              */
#define GPIO_PTOR_PTTO2_MASK                     (0x01UL << GPIO_PTOR_PTTO2_SHIFT)                   /*!< GPIOA_PTOR: PTTO2 Mask                  */
#define GPIO_PTOR_PTTO2_SHIFT                    2                                                   /*!< GPIOA_PTOR: PTTO2 Position              */
#define GPIO_PTOR_PTTO3_MASK                     (0x01UL << GPIO_PTOR_PTTO3_SHIFT)                   /*!< GPIOA_PTOR: PTTO3 Mask                  */
#define GPIO_PTOR_PTTO3_SHIFT                    3                                                   /*!< GPIOA_PTOR: PTTO3 Position              */
#define GPIO_PTOR_PTTO4_MASK                     (0x01UL << GPIO_PTOR_PTTO4_SHIFT)                   /*!< GPIOA_PTOR: PTTO4 Mask                  */
#define GPIO_PTOR_PTTO4_SHIFT                    4                                                   /*!< GPIOA_PTOR: PTTO4 Position              */
#define GPIO_PTOR_PTTO5_MASK                     (0x01UL << GPIO_PTOR_PTTO5_SHIFT)                   /*!< GPIOA_PTOR: PTTO5 Mask                  */
#define GPIO_PTOR_PTTO5_SHIFT                    5                                                   /*!< GPIOA_PTOR: PTTO5 Position              */
#define GPIO_PTOR_PTTO6_MASK                     (0x01UL << GPIO_PTOR_PTTO6_SHIFT)                   /*!< GPIOA_PTOR: PTTO6 Mask                  */
#define GPIO_PTOR_PTTO6_SHIFT                    6                                                   /*!< GPIOA_PTOR: PTTO6 Position              */
#define GPIO_PTOR_PTTO7_MASK                     (0x01UL << GPIO_PTOR_PTTO7_SHIFT)                   /*!< GPIOA_PTOR: PTTO7 Mask                  */
#define GPIO_PTOR_PTTO7_SHIFT                    7                                                   /*!< GPIOA_PTOR: PTTO7 Position              */
#define GPIO_PTOR_PTTO8_MASK                     (0x01UL << GPIO_PTOR_PTTO8_SHIFT)                   /*!< GPIOA_PTOR: PTTO8 Mask                  */
#define GPIO_PTOR_PTTO8_SHIFT                    8                                                   /*!< GPIOA_PTOR: PTTO8 Position              */
#define GPIO_PTOR_PTTO9_MASK                     (0x01UL << GPIO_PTOR_PTTO9_SHIFT)                   /*!< GPIOA_PTOR: PTTO9 Mask                  */
#define GPIO_PTOR_PTTO9_SHIFT                    9                                                   /*!< GPIOA_PTOR: PTTO9 Position              */
#define GPIO_PTOR_PTTO10_MASK                    (0x01UL << GPIO_PTOR_PTTO10_SHIFT)                  /*!< GPIOA_PTOR: PTTO10 Mask                 */
#define GPIO_PTOR_PTTO10_SHIFT                   10                                                  /*!< GPIOA_PTOR: PTTO10 Position             */
#define GPIO_PTOR_PTTO11_MASK                    (0x01UL << GPIO_PTOR_PTTO11_SHIFT)                  /*!< GPIOA_PTOR: PTTO11 Mask                 */
#define GPIO_PTOR_PTTO11_SHIFT                   11                                                  /*!< GPIOA_PTOR: PTTO11 Position             */
#define GPIO_PTOR_PTTO12_MASK                    (0x01UL << GPIO_PTOR_PTTO12_SHIFT)                  /*!< GPIOA_PTOR: PTTO12 Mask                 */
#define GPIO_PTOR_PTTO12_SHIFT                   12                                                  /*!< GPIOA_PTOR: PTTO12 Position             */
#define GPIO_PTOR_PTTO13_MASK                    (0x01UL << GPIO_PTOR_PTTO13_SHIFT)                  /*!< GPIOA_PTOR: PTTO13 Mask                 */
#define GPIO_PTOR_PTTO13_SHIFT                   13                                                  /*!< GPIOA_PTOR: PTTO13 Position             */
#define GPIO_PTOR_PTTO14_MASK                    (0x01UL << GPIO_PTOR_PTTO14_SHIFT)                  /*!< GPIOA_PTOR: PTTO14 Mask                 */
#define GPIO_PTOR_PTTO14_SHIFT                   14                                                  /*!< GPIOA_PTOR: PTTO14 Position             */
#define GPIO_PTOR_PTTO15_MASK                    (0x01UL << GPIO_PTOR_PTTO15_SHIFT)                  /*!< GPIOA_PTOR: PTTO15 Mask                 */
#define GPIO_PTOR_PTTO15_SHIFT                   15                                                  /*!< GPIOA_PTOR: PTTO15 Position             */
#define GPIO_PTOR_PTTO16_MASK                    (0x01UL << GPIO_PTOR_PTTO16_SHIFT)                  /*!< GPIOA_PTOR: PTTO16 Mask                 */
#define GPIO_PTOR_PTTO16_SHIFT                   16                                                  /*!< GPIOA_PTOR: PTTO16 Position             */
#define GPIO_PTOR_PTTO17_MASK                    (0x01UL << GPIO_PTOR_PTTO17_SHIFT)                  /*!< GPIOA_PTOR: PTTO17 Mask                 */
#define GPIO_PTOR_PTTO17_SHIFT                   17                                                  /*!< GPIOA_PTOR: PTTO17 Position             */
#define GPIO_PTOR_PTTO18_MASK                    (0x01UL << GPIO_PTOR_PTTO18_SHIFT)                  /*!< GPIOA_PTOR: PTTO18 Mask                 */
#define GPIO_PTOR_PTTO18_SHIFT                   18                                                  /*!< GPIOA_PTOR: PTTO18 Position             */
#define GPIO_PTOR_PTTO19_MASK                    (0x01UL << GPIO_PTOR_PTTO19_SHIFT)                  /*!< GPIOA_PTOR: PTTO19 Mask                 */
#define GPIO_PTOR_PTTO19_SHIFT                   19                                                  /*!< GPIOA_PTOR: PTTO19 Position             */
#define GPIO_PTOR_PTTO20_MASK                    (0x01UL << GPIO_PTOR_PTTO20_SHIFT)                  /*!< GPIOA_PTOR: PTTO20 Mask                 */
#define GPIO_PTOR_PTTO20_SHIFT                   20                                                  /*!< GPIOA_PTOR: PTTO20 Position             */
#define GPIO_PTOR_PTTO21_MASK                    (0x01UL << GPIO_PTOR_PTTO21_SHIFT)                  /*!< GPIOA_PTOR: PTTO21 Mask                 */
#define GPIO_PTOR_PTTO21_SHIFT                   21                                                  /*!< GPIOA_PTOR: PTTO21 Position             */
#define GPIO_PTOR_PTTO22_MASK                    (0x01UL << GPIO_PTOR_PTTO22_SHIFT)                  /*!< GPIOA_PTOR: PTTO22 Mask                 */
#define GPIO_PTOR_PTTO22_SHIFT                   22                                                  /*!< GPIOA_PTOR: PTTO22 Position             */
#define GPIO_PTOR_PTTO23_MASK                    (0x01UL << GPIO_PTOR_PTTO23_SHIFT)                  /*!< GPIOA_PTOR: PTTO23 Mask                 */
#define GPIO_PTOR_PTTO23_SHIFT                   23                                                  /*!< GPIOA_PTOR: PTTO23 Position             */
#define GPIO_PTOR_PTTO24_MASK                    (0x01UL << GPIO_PTOR_PTTO24_SHIFT)                  /*!< GPIOA_PTOR: PTTO24 Mask                 */
#define GPIO_PTOR_PTTO24_SHIFT                   24                                                  /*!< GPIOA_PTOR: PTTO24 Position             */
#define GPIO_PTOR_PTTO25_MASK                    (0x01UL << GPIO_PTOR_PTTO25_SHIFT)                  /*!< GPIOA_PTOR: PTTO25 Mask                 */
#define GPIO_PTOR_PTTO25_SHIFT                   25                                                  /*!< GPIOA_PTOR: PTTO25 Position             */
#define GPIO_PTOR_PTTO26_MASK                    (0x01UL << GPIO_PTOR_PTTO26_SHIFT)                  /*!< GPIOA_PTOR: PTTO26 Mask                 */
#define GPIO_PTOR_PTTO26_SHIFT                   26                                                  /*!< GPIOA_PTOR: PTTO26 Position             */
#define GPIO_PTOR_PTTO27_MASK                    (0x01UL << GPIO_PTOR_PTTO27_SHIFT)                  /*!< GPIOA_PTOR: PTTO27 Mask                 */
#define GPIO_PTOR_PTTO27_SHIFT                   27                                                  /*!< GPIOA_PTOR: PTTO27 Position             */
#define GPIO_PTOR_PTTO28_MASK                    (0x01UL << GPIO_PTOR_PTTO28_SHIFT)                  /*!< GPIOA_PTOR: PTTO28 Mask                 */
#define GPIO_PTOR_PTTO28_SHIFT                   28                                                  /*!< GPIOA_PTOR: PTTO28 Position             */
#define GPIO_PTOR_PTTO29_MASK                    (0x01UL << GPIO_PTOR_PTTO29_SHIFT)                  /*!< GPIOA_PTOR: PTTO29 Mask                 */
#define GPIO_PTOR_PTTO29_SHIFT                   29                                                  /*!< GPIOA_PTOR: PTTO29 Position             */
#define GPIO_PTOR_PTTO30_MASK                    (0x01UL << GPIO_PTOR_PTTO30_SHIFT)                  /*!< GPIOA_PTOR: PTTO30 Mask                 */
#define GPIO_PTOR_PTTO30_SHIFT                   30                                                  /*!< GPIOA_PTOR: PTTO30 Position             */
#define GPIO_PTOR_PTTO31_MASK                    (0x01UL << GPIO_PTOR_PTTO31_SHIFT)                  /*!< GPIOA_PTOR: PTTO31 Mask                 */
#define GPIO_PTOR_PTTO31_SHIFT                   31                                                  /*!< GPIOA_PTOR: PTTO31 Position             */

/* ------- GPIOA_PDIR                               ------ */
#define GPIO_PDIR_PDI0_MASK                      (0x01UL << GPIO_PDIR_PDI0_SHIFT)                    /*!< GPIOA_PDIR: PDI0 Mask                   */
#define GPIO_PDIR_PDI0_SHIFT                     0                                                   /*!< GPIOA_PDIR: PDI0 Position               */
#define GPIO_PDIR_PDI1_MASK                      (0x01UL << GPIO_PDIR_PDI1_SHIFT)                    /*!< GPIOA_PDIR: PDI1 Mask                   */
#define GPIO_PDIR_PDI1_SHIFT                     1                                                   /*!< GPIOA_PDIR: PDI1 Position               */
#define GPIO_PDIR_PDI2_MASK                      (0x01UL << GPIO_PDIR_PDI2_SHIFT)                    /*!< GPIOA_PDIR: PDI2 Mask                   */
#define GPIO_PDIR_PDI2_SHIFT                     2                                                   /*!< GPIOA_PDIR: PDI2 Position               */
#define GPIO_PDIR_PDI3_MASK                      (0x01UL << GPIO_PDIR_PDI3_SHIFT)                    /*!< GPIOA_PDIR: PDI3 Mask                   */
#define GPIO_PDIR_PDI3_SHIFT                     3                                                   /*!< GPIOA_PDIR: PDI3 Position               */
#define GPIO_PDIR_PDI4_MASK                      (0x01UL << GPIO_PDIR_PDI4_SHIFT)                    /*!< GPIOA_PDIR: PDI4 Mask                   */
#define GPIO_PDIR_PDI4_SHIFT                     4                                                   /*!< GPIOA_PDIR: PDI4 Position               */
#define GPIO_PDIR_PDI5_MASK                      (0x01UL << GPIO_PDIR_PDI5_SHIFT)                    /*!< GPIOA_PDIR: PDI5 Mask                   */
#define GPIO_PDIR_PDI5_SHIFT                     5                                                   /*!< GPIOA_PDIR: PDI5 Position               */
#define GPIO_PDIR_PDI6_MASK                      (0x01UL << GPIO_PDIR_PDI6_SHIFT)                    /*!< GPIOA_PDIR: PDI6 Mask                   */
#define GPIO_PDIR_PDI6_SHIFT                     6                                                   /*!< GPIOA_PDIR: PDI6 Position               */
#define GPIO_PDIR_PDI7_MASK                      (0x01UL << GPIO_PDIR_PDI7_SHIFT)                    /*!< GPIOA_PDIR: PDI7 Mask                   */
#define GPIO_PDIR_PDI7_SHIFT                     7                                                   /*!< GPIOA_PDIR: PDI7 Position               */
#define GPIO_PDIR_PDI8_MASK                      (0x01UL << GPIO_PDIR_PDI8_SHIFT)                    /*!< GPIOA_PDIR: PDI8 Mask                   */
#define GPIO_PDIR_PDI8_SHIFT                     8                                                   /*!< GPIOA_PDIR: PDI8 Position               */
#define GPIO_PDIR_PDI9_MASK                      (0x01UL << GPIO_PDIR_PDI9_SHIFT)                    /*!< GPIOA_PDIR: PDI9 Mask                   */
#define GPIO_PDIR_PDI9_SHIFT                     9                                                   /*!< GPIOA_PDIR: PDI9 Position               */
#define GPIO_PDIR_PDI10_MASK                     (0x01UL << GPIO_PDIR_PDI10_SHIFT)                   /*!< GPIOA_PDIR: PDI10 Mask                  */
#define GPIO_PDIR_PDI10_SHIFT                    10                                                  /*!< GPIOA_PDIR: PDI10 Position              */
#define GPIO_PDIR_PDI11_MASK                     (0x01UL << GPIO_PDIR_PDI11_SHIFT)                   /*!< GPIOA_PDIR: PDI11 Mask                  */
#define GPIO_PDIR_PDI11_SHIFT                    11                                                  /*!< GPIOA_PDIR: PDI11 Position              */
#define GPIO_PDIR_PDI12_MASK                     (0x01UL << GPIO_PDIR_PDI12_SHIFT)                   /*!< GPIOA_PDIR: PDI12 Mask                  */
#define GPIO_PDIR_PDI12_SHIFT                    12                                                  /*!< GPIOA_PDIR: PDI12 Position              */
#define GPIO_PDIR_PDI13_MASK                     (0x01UL << GPIO_PDIR_PDI13_SHIFT)                   /*!< GPIOA_PDIR: PDI13 Mask                  */
#define GPIO_PDIR_PDI13_SHIFT                    13                                                  /*!< GPIOA_PDIR: PDI13 Position              */
#define GPIO_PDIR_PDI14_MASK                     (0x01UL << GPIO_PDIR_PDI14_SHIFT)                   /*!< GPIOA_PDIR: PDI14 Mask                  */
#define GPIO_PDIR_PDI14_SHIFT                    14                                                  /*!< GPIOA_PDIR: PDI14 Position              */
#define GPIO_PDIR_PDI15_MASK                     (0x01UL << GPIO_PDIR_PDI15_SHIFT)                   /*!< GPIOA_PDIR: PDI15 Mask                  */
#define GPIO_PDIR_PDI15_SHIFT                    15                                                  /*!< GPIOA_PDIR: PDI15 Position              */
#define GPIO_PDIR_PDI16_MASK                     (0x01UL << GPIO_PDIR_PDI16_SHIFT)                   /*!< GPIOA_PDIR: PDI16 Mask                  */
#define GPIO_PDIR_PDI16_SHIFT                    16                                                  /*!< GPIOA_PDIR: PDI16 Position              */
#define GPIO_PDIR_PDI17_MASK                     (0x01UL << GPIO_PDIR_PDI17_SHIFT)                   /*!< GPIOA_PDIR: PDI17 Mask                  */
#define GPIO_PDIR_PDI17_SHIFT                    17                                                  /*!< GPIOA_PDIR: PDI17 Position              */
#define GPIO_PDIR_PDI18_MASK                     (0x01UL << GPIO_PDIR_PDI18_SHIFT)                   /*!< GPIOA_PDIR: PDI18 Mask                  */
#define GPIO_PDIR_PDI18_SHIFT                    18                                                  /*!< GPIOA_PDIR: PDI18 Position              */
#define GPIO_PDIR_PDI19_MASK                     (0x01UL << GPIO_PDIR_PDI19_SHIFT)                   /*!< GPIOA_PDIR: PDI19 Mask                  */
#define GPIO_PDIR_PDI19_SHIFT                    19                                                  /*!< GPIOA_PDIR: PDI19 Position              */
#define GPIO_PDIR_PDI20_MASK                     (0x01UL << GPIO_PDIR_PDI20_SHIFT)                   /*!< GPIOA_PDIR: PDI20 Mask                  */
#define GPIO_PDIR_PDI20_SHIFT                    20                                                  /*!< GPIOA_PDIR: PDI20 Position              */
#define GPIO_PDIR_PDI21_MASK                     (0x01UL << GPIO_PDIR_PDI21_SHIFT)                   /*!< GPIOA_PDIR: PDI21 Mask                  */
#define GPIO_PDIR_PDI21_SHIFT                    21                                                  /*!< GPIOA_PDIR: PDI21 Position              */
#define GPIO_PDIR_PDI22_MASK                     (0x01UL << GPIO_PDIR_PDI22_SHIFT)                   /*!< GPIOA_PDIR: PDI22 Mask                  */
#define GPIO_PDIR_PDI22_SHIFT                    22                                                  /*!< GPIOA_PDIR: PDI22 Position              */
#define GPIO_PDIR_PDI23_MASK                     (0x01UL << GPIO_PDIR_PDI23_SHIFT)                   /*!< GPIOA_PDIR: PDI23 Mask                  */
#define GPIO_PDIR_PDI23_SHIFT                    23                                                  /*!< GPIOA_PDIR: PDI23 Position              */
#define GPIO_PDIR_PDI24_MASK                     (0x01UL << GPIO_PDIR_PDI24_SHIFT)                   /*!< GPIOA_PDIR: PDI24 Mask                  */
#define GPIO_PDIR_PDI24_SHIFT                    24                                                  /*!< GPIOA_PDIR: PDI24 Position              */
#define GPIO_PDIR_PDI25_MASK                     (0x01UL << GPIO_PDIR_PDI25_SHIFT)                   /*!< GPIOA_PDIR: PDI25 Mask                  */
#define GPIO_PDIR_PDI25_SHIFT                    25                                                  /*!< GPIOA_PDIR: PDI25 Position              */
#define GPIO_PDIR_PDI26_MASK                     (0x01UL << GPIO_PDIR_PDI26_SHIFT)                   /*!< GPIOA_PDIR: PDI26 Mask                  */
#define GPIO_PDIR_PDI26_SHIFT                    26                                                  /*!< GPIOA_PDIR: PDI26 Position              */
#define GPIO_PDIR_PDI27_MASK                     (0x01UL << GPIO_PDIR_PDI27_SHIFT)                   /*!< GPIOA_PDIR: PDI27 Mask                  */
#define GPIO_PDIR_PDI27_SHIFT                    27                                                  /*!< GPIOA_PDIR: PDI27 Position              */
#define GPIO_PDIR_PDI28_MASK                     (0x01UL << GPIO_PDIR_PDI28_SHIFT)                   /*!< GPIOA_PDIR: PDI28 Mask                  */
#define GPIO_PDIR_PDI28_SHIFT                    28                                                  /*!< GPIOA_PDIR: PDI28 Position              */
#define GPIO_PDIR_PDI29_MASK                     (0x01UL << GPIO_PDIR_PDI29_SHIFT)                   /*!< GPIOA_PDIR: PDI29 Mask                  */
#define GPIO_PDIR_PDI29_SHIFT                    29                                                  /*!< GPIOA_PDIR: PDI29 Position              */
#define GPIO_PDIR_PDI30_MASK                     (0x01UL << GPIO_PDIR_PDI30_SHIFT)                   /*!< GPIOA_PDIR: PDI30 Mask                  */
#define GPIO_PDIR_PDI30_SHIFT                    30                                                  /*!< GPIOA_PDIR: PDI30 Position              */
#define GPIO_PDIR_PDI31_MASK                     (0x01UL << GPIO_PDIR_PDI31_SHIFT)                   /*!< GPIOA_PDIR: PDI31 Mask                  */
#define GPIO_PDIR_PDI31_SHIFT                    31                                                  /*!< GPIOA_PDIR: PDI31 Position              */

/* ------- GPIOA_PDDR                               ------ */
#define GPIO_PDDR_PDD0_MASK                      (0x01UL << GPIO_PDDR_PDD0_SHIFT)                    /*!< GPIOA_PDDR: PDD0 Mask                   */
#define GPIO_PDDR_PDD0_SHIFT                     0                                                   /*!< GPIOA_PDDR: PDD0 Position               */
#define GPIO_PDDR_PDD1_MASK                      (0x01UL << GPIO_PDDR_PDD1_SHIFT)                    /*!< GPIOA_PDDR: PDD1 Mask                   */
#define GPIO_PDDR_PDD1_SHIFT                     1                                                   /*!< GPIOA_PDDR: PDD1 Position               */
#define GPIO_PDDR_PDD2_MASK                      (0x01UL << GPIO_PDDR_PDD2_SHIFT)                    /*!< GPIOA_PDDR: PDD2 Mask                   */
#define GPIO_PDDR_PDD2_SHIFT                     2                                                   /*!< GPIOA_PDDR: PDD2 Position               */
#define GPIO_PDDR_PDD3_MASK                      (0x01UL << GPIO_PDDR_PDD3_SHIFT)                    /*!< GPIOA_PDDR: PDD3 Mask                   */
#define GPIO_PDDR_PDD3_SHIFT                     3                                                   /*!< GPIOA_PDDR: PDD3 Position               */
#define GPIO_PDDR_PDD4_MASK                      (0x01UL << GPIO_PDDR_PDD4_SHIFT)                    /*!< GPIOA_PDDR: PDD4 Mask                   */
#define GPIO_PDDR_PDD4_SHIFT                     4                                                   /*!< GPIOA_PDDR: PDD4 Position               */
#define GPIO_PDDR_PDD5_MASK                      (0x01UL << GPIO_PDDR_PDD5_SHIFT)                    /*!< GPIOA_PDDR: PDD5 Mask                   */
#define GPIO_PDDR_PDD5_SHIFT                     5                                                   /*!< GPIOA_PDDR: PDD5 Position               */
#define GPIO_PDDR_PDD6_MASK                      (0x01UL << GPIO_PDDR_PDD6_SHIFT)                    /*!< GPIOA_PDDR: PDD6 Mask                   */
#define GPIO_PDDR_PDD6_SHIFT                     6                                                   /*!< GPIOA_PDDR: PDD6 Position               */
#define GPIO_PDDR_PDD7_MASK                      (0x01UL << GPIO_PDDR_PDD7_SHIFT)                    /*!< GPIOA_PDDR: PDD7 Mask                   */
#define GPIO_PDDR_PDD7_SHIFT                     7                                                   /*!< GPIOA_PDDR: PDD7 Position               */
#define GPIO_PDDR_PDD8_MASK                      (0x01UL << GPIO_PDDR_PDD8_SHIFT)                    /*!< GPIOA_PDDR: PDD8 Mask                   */
#define GPIO_PDDR_PDD8_SHIFT                     8                                                   /*!< GPIOA_PDDR: PDD8 Position               */
#define GPIO_PDDR_PDD9_MASK                      (0x01UL << GPIO_PDDR_PDD9_SHIFT)                    /*!< GPIOA_PDDR: PDD9 Mask                   */
#define GPIO_PDDR_PDD9_SHIFT                     9                                                   /*!< GPIOA_PDDR: PDD9 Position               */
#define GPIO_PDDR_PDD10_MASK                     (0x01UL << GPIO_PDDR_PDD10_SHIFT)                   /*!< GPIOA_PDDR: PDD10 Mask                  */
#define GPIO_PDDR_PDD10_SHIFT                    10                                                  /*!< GPIOA_PDDR: PDD10 Position              */
#define GPIO_PDDR_PDD11_MASK                     (0x01UL << GPIO_PDDR_PDD11_SHIFT)                   /*!< GPIOA_PDDR: PDD11 Mask                  */
#define GPIO_PDDR_PDD11_SHIFT                    11                                                  /*!< GPIOA_PDDR: PDD11 Position              */
#define GPIO_PDDR_PDD12_MASK                     (0x01UL << GPIO_PDDR_PDD12_SHIFT)                   /*!< GPIOA_PDDR: PDD12 Mask                  */
#define GPIO_PDDR_PDD12_SHIFT                    12                                                  /*!< GPIOA_PDDR: PDD12 Position              */
#define GPIO_PDDR_PDD13_MASK                     (0x01UL << GPIO_PDDR_PDD13_SHIFT)                   /*!< GPIOA_PDDR: PDD13 Mask                  */
#define GPIO_PDDR_PDD13_SHIFT                    13                                                  /*!< GPIOA_PDDR: PDD13 Position              */
#define GPIO_PDDR_PDD14_MASK                     (0x01UL << GPIO_PDDR_PDD14_SHIFT)                   /*!< GPIOA_PDDR: PDD14 Mask                  */
#define GPIO_PDDR_PDD14_SHIFT                    14                                                  /*!< GPIOA_PDDR: PDD14 Position              */
#define GPIO_PDDR_PDD15_MASK                     (0x01UL << GPIO_PDDR_PDD15_SHIFT)                   /*!< GPIOA_PDDR: PDD15 Mask                  */
#define GPIO_PDDR_PDD15_SHIFT                    15                                                  /*!< GPIOA_PDDR: PDD15 Position              */
#define GPIO_PDDR_PDD16_MASK                     (0x01UL << GPIO_PDDR_PDD16_SHIFT)                   /*!< GPIOA_PDDR: PDD16 Mask                  */
#define GPIO_PDDR_PDD16_SHIFT                    16                                                  /*!< GPIOA_PDDR: PDD16 Position              */
#define GPIO_PDDR_PDD17_MASK                     (0x01UL << GPIO_PDDR_PDD17_SHIFT)                   /*!< GPIOA_PDDR: PDD17 Mask                  */
#define GPIO_PDDR_PDD17_SHIFT                    17                                                  /*!< GPIOA_PDDR: PDD17 Position              */
#define GPIO_PDDR_PDD18_MASK                     (0x01UL << GPIO_PDDR_PDD18_SHIFT)                   /*!< GPIOA_PDDR: PDD18 Mask                  */
#define GPIO_PDDR_PDD18_SHIFT                    18                                                  /*!< GPIOA_PDDR: PDD18 Position              */
#define GPIO_PDDR_PDD19_MASK                     (0x01UL << GPIO_PDDR_PDD19_SHIFT)                   /*!< GPIOA_PDDR: PDD19 Mask                  */
#define GPIO_PDDR_PDD19_SHIFT                    19                                                  /*!< GPIOA_PDDR: PDD19 Position              */
#define GPIO_PDDR_PDD20_MASK                     (0x01UL << GPIO_PDDR_PDD20_SHIFT)                   /*!< GPIOA_PDDR: PDD20 Mask                  */
#define GPIO_PDDR_PDD20_SHIFT                    20                                                  /*!< GPIOA_PDDR: PDD20 Position              */
#define GPIO_PDDR_PDD21_MASK                     (0x01UL << GPIO_PDDR_PDD21_SHIFT)                   /*!< GPIOA_PDDR: PDD21 Mask                  */
#define GPIO_PDDR_PDD21_SHIFT                    21                                                  /*!< GPIOA_PDDR: PDD21 Position              */
#define GPIO_PDDR_PDD22_MASK                     (0x01UL << GPIO_PDDR_PDD22_SHIFT)                   /*!< GPIOA_PDDR: PDD22 Mask                  */
#define GPIO_PDDR_PDD22_SHIFT                    22                                                  /*!< GPIOA_PDDR: PDD22 Position              */
#define GPIO_PDDR_PDD23_MASK                     (0x01UL << GPIO_PDDR_PDD23_SHIFT)                   /*!< GPIOA_PDDR: PDD23 Mask                  */
#define GPIO_PDDR_PDD23_SHIFT                    23                                                  /*!< GPIOA_PDDR: PDD23 Position              */
#define GPIO_PDDR_PDD24_MASK                     (0x01UL << GPIO_PDDR_PDD24_SHIFT)                   /*!< GPIOA_PDDR: PDD24 Mask                  */
#define GPIO_PDDR_PDD24_SHIFT                    24                                                  /*!< GPIOA_PDDR: PDD24 Position              */
#define GPIO_PDDR_PDD25_MASK                     (0x01UL << GPIO_PDDR_PDD25_SHIFT)                   /*!< GPIOA_PDDR: PDD25 Mask                  */
#define GPIO_PDDR_PDD25_SHIFT                    25                                                  /*!< GPIOA_PDDR: PDD25 Position              */
#define GPIO_PDDR_PDD26_MASK                     (0x01UL << GPIO_PDDR_PDD26_SHIFT)                   /*!< GPIOA_PDDR: PDD26 Mask                  */
#define GPIO_PDDR_PDD26_SHIFT                    26                                                  /*!< GPIOA_PDDR: PDD26 Position              */
#define GPIO_PDDR_PDD27_MASK                     (0x01UL << GPIO_PDDR_PDD27_SHIFT)                   /*!< GPIOA_PDDR: PDD27 Mask                  */
#define GPIO_PDDR_PDD27_SHIFT                    27                                                  /*!< GPIOA_PDDR: PDD27 Position              */
#define GPIO_PDDR_PDD28_MASK                     (0x01UL << GPIO_PDDR_PDD28_SHIFT)                   /*!< GPIOA_PDDR: PDD28 Mask                  */
#define GPIO_PDDR_PDD28_SHIFT                    28                                                  /*!< GPIOA_PDDR: PDD28 Position              */
#define GPIO_PDDR_PDD29_MASK                     (0x01UL << GPIO_PDDR_PDD29_SHIFT)                   /*!< GPIOA_PDDR: PDD29 Mask                  */
#define GPIO_PDDR_PDD29_SHIFT                    29                                                  /*!< GPIOA_PDDR: PDD29 Position              */
#define GPIO_PDDR_PDD30_MASK                     (0x01UL << GPIO_PDDR_PDD30_SHIFT)                   /*!< GPIOA_PDDR: PDD30 Mask                  */
#define GPIO_PDDR_PDD30_SHIFT                    30                                                  /*!< GPIOA_PDDR: PDD30 Position              */
#define GPIO_PDDR_PDD31_MASK                     (0x01UL << GPIO_PDDR_PDD31_SHIFT)                   /*!< GPIOA_PDDR: PDD31 Mask                  */
#define GPIO_PDDR_PDD31_SHIFT                    31                                                  /*!< GPIOA_PDDR: PDD31 Position              */

/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOA' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOA_PDOR                     (GPIOA->PDOR)
#define GPIOA_PSOR                     (GPIOA->PSOR)
#define GPIOA_PCOR                     (GPIOA->PCOR)
#define GPIOA_PTOR                     (GPIOA->PTOR)
#define GPIOA_PDIR                     (GPIOA->PDIR)
#define GPIOA_PDDR                     (GPIOA->PDDR)

/* ================================================================================ */
/* ================           GPIOB (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef GPIOA_Type GPIOB_Type;  /*!< GPIOB Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOB' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOB_PDOR                     (GPIOB->PDOR)
#define GPIOB_PSOR                     (GPIOB->PSOR)
#define GPIOB_PCOR                     (GPIOB->PCOR)
#define GPIOB_PTOR                     (GPIOB->PTOR)
#define GPIOB_PDIR                     (GPIOB->PDIR)
#define GPIOB_PDDR                     (GPIOB->PDDR)

/* ================================================================================ */
/* ================           GPIOC (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef GPIOA_Type GPIOC_Type;  /*!< GPIOC Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOC' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOC_PDOR                     (GPIOC->PDOR)
#define GPIOC_PSOR                     (GPIOC->PSOR)
#define GPIOC_PCOR                     (GPIOC->PCOR)
#define GPIOC_PTOR                     (GPIOC->PTOR)
#define GPIOC_PDIR                     (GPIOC->PDIR)
#define GPIOC_PDDR                     (GPIOC->PDDR)

/* ================================================================================ */
/* ================           GPIOD (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef GPIOA_Type GPIOD_Type;  /*!< GPIOD Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOD' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOD_PDOR                     (GPIOD->PDOR)
#define GPIOD_PSOR                     (GPIOD->PSOR)
#define GPIOD_PCOR                     (GPIOD->PCOR)
#define GPIOD_PTOR                     (GPIOD->PTOR)
#define GPIOD_PDIR                     (GPIOD->PDIR)
#define GPIOD_PDDR                     (GPIOD->PDDR)

/* ================================================================================ */
/* ================           GPIOE (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef GPIOA_Type GPIOE_Type;  /*!< GPIOE Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOE' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOE_PDOR                     (GPIOE->PDOR)
#define GPIOE_PSOR                     (GPIOE->PSOR)
#define GPIOE_PCOR                     (GPIOE->PCOR)
#define GPIOE_PTOR                     (GPIOE->PTOR)
#define GPIOE_PDIR                     (GPIOE->PDIR)
#define GPIOE_PDDR                     (GPIOE->PDDR)

/* ================================================================================ */
/* ================           I2C0 (file:I2C0_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit
 */
typedef struct {                                /*!<       I2C0 Structure                                               */
   __IO uint8_t   A1;                           /*!< 0000: Address Register 1                                           */
   __IO uint8_t   F;                            /*!< 0001: Frequency Divider register                                   */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   S;                            /*!< 0003: Status Register                                              */
   __IO uint8_t   D;                            /*!< 0004: Data I/O register                                            */
   __IO uint8_t   C2;                           /*!< 0005: Control Register 2                                           */
   __IO uint8_t   FLT;                          /*!< 0006: Programmable Input Glitch Filter register                    */
   __IO uint8_t   RA;                           /*!< 0007: Range Address register                                       */
   __IO uint8_t   SMB;                          /*!< 0008: SMBus Control and Status register                            */
   __IO uint8_t   A2;                           /*!< 0009: Address Register 2                                           */
   __IO uint8_t   SLTH;                         /*!< 000A: SCL Low Timeout Register High                                */
   __IO uint8_t   SLTL;                         /*!< 000B: SCL Low Timeout Register Low                                 */
} I2C0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- I2C0_A1                                  ------ */
#define I2C_A1_AD_MASK                           (0x7FUL << I2C_A1_AD_SHIFT)                         /*!< I2C0_A1: AD Mask                        */
#define I2C_A1_AD_SHIFT                          1                                                   /*!< I2C0_A1: AD Position                    */
#define I2C_A1_AD(x)                             (((x)<<I2C_A1_AD_SHIFT)&I2C_A1_AD_MASK)             /*!< I2C0_A1                                 */

/* ------- I2C0_F                                   ------ */
#define I2C_F_ICR_MASK                           (0x3FUL << I2C_F_ICR_SHIFT)                         /*!< I2C0_F: ICR Mask                        */
#define I2C_F_ICR_SHIFT                          0                                                   /*!< I2C0_F: ICR Position                    */
#define I2C_F_ICR(x)                             (((x)<<I2C_F_ICR_SHIFT)&I2C_F_ICR_MASK)             /*!< I2C0_F                                  */
#define I2C_F_MULT_MASK                          (0x03UL << I2C_F_MULT_SHIFT)                        /*!< I2C0_F: MULT Mask                       */
#define I2C_F_MULT_SHIFT                         6                                                   /*!< I2C0_F: MULT Position                   */
#define I2C_F_MULT(x)                            (((x)<<I2C_F_MULT_SHIFT)&I2C_F_MULT_MASK)           /*!< I2C0_F                                  */

/* ------- I2C0_C1                                  ------ */
#define I2C_C1_DMAEN_MASK                        (0x01UL << I2C_C1_DMAEN_SHIFT)                      /*!< I2C0_C1: DMAEN Mask                     */
#define I2C_C1_DMAEN_SHIFT                       0                                                   /*!< I2C0_C1: DMAEN Position                 */
#define I2C_C1_WUEN_MASK                         (0x01UL << I2C_C1_WUEN_SHIFT)                       /*!< I2C0_C1: WUEN Mask                      */
#define I2C_C1_WUEN_SHIFT                        1                                                   /*!< I2C0_C1: WUEN Position                  */
#define I2C_C1_RSTA_MASK                         (0x01UL << I2C_C1_RSTA_SHIFT)                       /*!< I2C0_C1: RSTA Mask                      */
#define I2C_C1_RSTA_SHIFT                        2                                                   /*!< I2C0_C1: RSTA Position                  */
#define I2C_C1_TXAK_MASK                         (0x01UL << I2C_C1_TXAK_SHIFT)                       /*!< I2C0_C1: TXAK Mask                      */
#define I2C_C1_TXAK_SHIFT                        3                                                   /*!< I2C0_C1: TXAK Position                  */
#define I2C_C1_TX_MASK                           (0x01UL << I2C_C1_TX_SHIFT)                         /*!< I2C0_C1: TX Mask                        */
#define I2C_C1_TX_SHIFT                          4                                                   /*!< I2C0_C1: TX Position                    */
#define I2C_C1_MST_MASK                          (0x01UL << I2C_C1_MST_SHIFT)                        /*!< I2C0_C1: MST Mask                       */
#define I2C_C1_MST_SHIFT                         5                                                   /*!< I2C0_C1: MST Position                   */
#define I2C_C1_IICIE_MASK                        (0x01UL << I2C_C1_IICIE_SHIFT)                      /*!< I2C0_C1: IICIE Mask                     */
#define I2C_C1_IICIE_SHIFT                       6                                                   /*!< I2C0_C1: IICIE Position                 */
#define I2C_C1_IICEN_MASK                        (0x01UL << I2C_C1_IICEN_SHIFT)                      /*!< I2C0_C1: IICEN Mask                     */
#define I2C_C1_IICEN_SHIFT                       7                                                   /*!< I2C0_C1: IICEN Position                 */

/* ------- I2C0_S                                   ------ */
#define I2C_S_RXAK_MASK                          (0x01UL << I2C_S_RXAK_SHIFT)                        /*!< I2C0_S: RXAK Mask                       */
#define I2C_S_RXAK_SHIFT                         0                                                   /*!< I2C0_S: RXAK Position                   */
#define I2C_S_IICIF_MASK                         (0x01UL << I2C_S_IICIF_SHIFT)                       /*!< I2C0_S: IICIF Mask                      */
#define I2C_S_IICIF_SHIFT                        1                                                   /*!< I2C0_S: IICIF Position                  */
#define I2C_S_SRW_MASK                           (0x01UL << I2C_S_SRW_SHIFT)                         /*!< I2C0_S: SRW Mask                        */
#define I2C_S_SRW_SHIFT                          2                                                   /*!< I2C0_S: SRW Position                    */
#define I2C_S_RAM_MASK                           (0x01UL << I2C_S_RAM_SHIFT)                         /*!< I2C0_S: RAM Mask                        */
#define I2C_S_RAM_SHIFT                          3                                                   /*!< I2C0_S: RAM Position                    */
#define I2C_S_ARBL_MASK                          (0x01UL << I2C_S_ARBL_SHIFT)                        /*!< I2C0_S: ARBL Mask                       */
#define I2C_S_ARBL_SHIFT                         4                                                   /*!< I2C0_S: ARBL Position                   */
#define I2C_S_BUSY_MASK                          (0x01UL << I2C_S_BUSY_SHIFT)                        /*!< I2C0_S: BUSY Mask                       */
#define I2C_S_BUSY_SHIFT                         5                                                   /*!< I2C0_S: BUSY Position                   */
#define I2C_S_IAAS_MASK                          (0x01UL << I2C_S_IAAS_SHIFT)                        /*!< I2C0_S: IAAS Mask                       */
#define I2C_S_IAAS_SHIFT                         6                                                   /*!< I2C0_S: IAAS Position                   */
#define I2C_S_TCF_MASK                           (0x01UL << I2C_S_TCF_SHIFT)                         /*!< I2C0_S: TCF Mask                        */
#define I2C_S_TCF_SHIFT                          7                                                   /*!< I2C0_S: TCF Position                    */

/* ------- I2C0_D                                   ------ */
#define I2C_D_DATA_MASK                          (0xFFUL << I2C_D_DATA_SHIFT)                        /*!< I2C0_D: DATA Mask                       */
#define I2C_D_DATA_SHIFT                         0                                                   /*!< I2C0_D: DATA Position                   */
#define I2C_D_DATA(x)                            (((x)<<I2C_D_DATA_SHIFT)&I2C_D_DATA_MASK)           /*!< I2C0_D                                  */

/* ------- I2C0_C2                                  ------ */
#define I2C_C2_AD_MASK                           (0x07UL << I2C_C2_AD_SHIFT)                         /*!< I2C0_C2: AD Mask                        */
#define I2C_C2_AD_SHIFT                          0                                                   /*!< I2C0_C2: AD Position                    */
#define I2C_C2_AD(x)                             (((x)<<I2C_C2_AD_SHIFT)&I2C_C2_AD_MASK)             /*!< I2C0_C2                                 */
#define I2C_C2_RMEN_MASK                         (0x01UL << I2C_C2_RMEN_SHIFT)                       /*!< I2C0_C2: RMEN Mask                      */
#define I2C_C2_RMEN_SHIFT                        3                                                   /*!< I2C0_C2: RMEN Position                  */
#define I2C_C2_SBRC_MASK                         (0x01UL << I2C_C2_SBRC_SHIFT)                       /*!< I2C0_C2: SBRC Mask                      */
#define I2C_C2_SBRC_SHIFT                        4                                                   /*!< I2C0_C2: SBRC Position                  */
#define I2C_C2_HDRS_MASK                         (0x01UL << I2C_C2_HDRS_SHIFT)                       /*!< I2C0_C2: HDRS Mask                      */
#define I2C_C2_HDRS_SHIFT                        5                                                   /*!< I2C0_C2: HDRS Position                  */
#define I2C_C2_ADEXT_MASK                        (0x01UL << I2C_C2_ADEXT_SHIFT)                      /*!< I2C0_C2: ADEXT Mask                     */
#define I2C_C2_ADEXT_SHIFT                       6                                                   /*!< I2C0_C2: ADEXT Position                 */
#define I2C_C2_GCAEN_MASK                        (0x01UL << I2C_C2_GCAEN_SHIFT)                      /*!< I2C0_C2: GCAEN Mask                     */
#define I2C_C2_GCAEN_SHIFT                       7                                                   /*!< I2C0_C2: GCAEN Position                 */

/* ------- I2C0_FLT                                 ------ */
#define I2C_FLT_FLT_MASK                         (0x1FUL << I2C_FLT_FLT_SHIFT)                       /*!< I2C0_FLT: FLT Mask                      */
#define I2C_FLT_FLT_SHIFT                        0                                                   /*!< I2C0_FLT: FLT Position                  */
#define I2C_FLT_FLT(x)                           (((x)<<I2C_FLT_FLT_SHIFT)&I2C_FLT_FLT_MASK)         /*!< I2C0_FLT                                */

/* ------- I2C0_RA                                  ------ */
#define I2C_RA_RAD_MASK                          (0x7FUL << I2C_RA_RAD_SHIFT)                        /*!< I2C0_RA: RAD Mask                       */
#define I2C_RA_RAD_SHIFT                         1                                                   /*!< I2C0_RA: RAD Position                   */
#define I2C_RA_RAD(x)                            (((x)<<I2C_RA_RAD_SHIFT)&I2C_RA_RAD_MASK)           /*!< I2C0_RA                                 */

/* ------- I2C0_SMB                                 ------ */
#define I2C_SMB_SHTF2IE_MASK                     (0x01UL << I2C_SMB_SHTF2IE_SHIFT)                   /*!< I2C0_SMB: SHTF2IE Mask                  */
#define I2C_SMB_SHTF2IE_SHIFT                    0                                                   /*!< I2C0_SMB: SHTF2IE Position              */
#define I2C_SMB_SHTF2_MASK                       (0x01UL << I2C_SMB_SHTF2_SHIFT)                     /*!< I2C0_SMB: SHTF2 Mask                    */
#define I2C_SMB_SHTF2_SHIFT                      1                                                   /*!< I2C0_SMB: SHTF2 Position                */
#define I2C_SMB_SHTF1_MASK                       (0x01UL << I2C_SMB_SHTF1_SHIFT)                     /*!< I2C0_SMB: SHTF1 Mask                    */
#define I2C_SMB_SHTF1_SHIFT                      2                                                   /*!< I2C0_SMB: SHTF1 Position                */
#define I2C_SMB_SLTF_MASK                        (0x01UL << I2C_SMB_SLTF_SHIFT)                      /*!< I2C0_SMB: SLTF Mask                     */
#define I2C_SMB_SLTF_SHIFT                       3                                                   /*!< I2C0_SMB: SLTF Position                 */
#define I2C_SMB_TCKSEL_MASK                      (0x01UL << I2C_SMB_TCKSEL_SHIFT)                    /*!< I2C0_SMB: TCKSEL Mask                   */
#define I2C_SMB_TCKSEL_SHIFT                     4                                                   /*!< I2C0_SMB: TCKSEL Position               */
#define I2C_SMB_SIICAEN_MASK                     (0x01UL << I2C_SMB_SIICAEN_SHIFT)                   /*!< I2C0_SMB: SIICAEN Mask                  */
#define I2C_SMB_SIICAEN_SHIFT                    5                                                   /*!< I2C0_SMB: SIICAEN Position              */
#define I2C_SMB_ALERTEN_MASK                     (0x01UL << I2C_SMB_ALERTEN_SHIFT)                   /*!< I2C0_SMB: ALERTEN Mask                  */
#define I2C_SMB_ALERTEN_SHIFT                    6                                                   /*!< I2C0_SMB: ALERTEN Position              */
#define I2C_SMB_FACK_MASK                        (0x01UL << I2C_SMB_FACK_SHIFT)                      /*!< I2C0_SMB: FACK Mask                     */
#define I2C_SMB_FACK_SHIFT                       7                                                   /*!< I2C0_SMB: FACK Position                 */

/* ------- I2C0_A2                                  ------ */
#define I2C_A2_SAD_MASK                          (0x7FUL << I2C_A2_SAD_SHIFT)                        /*!< I2C0_A2: SAD Mask                       */
#define I2C_A2_SAD_SHIFT                         1                                                   /*!< I2C0_A2: SAD Position                   */
#define I2C_A2_SAD(x)                            (((x)<<I2C_A2_SAD_SHIFT)&I2C_A2_SAD_MASK)           /*!< I2C0_A2                                 */

/* ------- I2C0_SLTH                                ------ */
#define I2C_SLTH_SSLT_MASK                       (0xFFUL << I2C_SLTH_SSLT_SHIFT)                     /*!< I2C0_SLTH: SSLT Mask                    */
#define I2C_SLTH_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTH: SSLT Position                */
#define I2C_SLTH_SSLT(x)                         (((x)<<I2C_SLTH_SSLT_SHIFT)&I2C_SLTH_SSLT_MASK)     /*!< I2C0_SLTH                               */

/* ------- I2C0_SLTL                                ------ */
#define I2C_SLTL_SSLT_MASK                       (0xFFUL << I2C_SLTL_SSLT_SHIFT)                     /*!< I2C0_SLTL: SSLT Mask                    */
#define I2C_SLTL_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTL: SSLT Position                */
#define I2C_SLTL_SSLT(x)                         (((x)<<I2C_SLTL_SSLT_SHIFT)&I2C_SLTL_SSLT_MASK)     /*!< I2C0_SLTL                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2C0_A1                        (I2C0->A1)
#define I2C0_F                         (I2C0->F)
#define I2C0_C1                        (I2C0->C1)
#define I2C0_S                         (I2C0->S)
#define I2C0_D                         (I2C0->D)
#define I2C0_C2                        (I2C0->C2)
#define I2C0_FLT                       (I2C0->FLT)
#define I2C0_RA                        (I2C0->RA)
#define I2C0_SMB                       (I2C0->SMB)
#define I2C0_A2                        (I2C0->A2)
#define I2C0_SLTH                      (I2C0->SLTH)
#define I2C0_SLTL                      (I2C0->SLTL)

/* ================================================================================ */
/* ================           I2C1 (derived from I2C0)             ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit
 */
typedef I2C0_Type I2C1_Type;  /*!< I2C1 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'I2C1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2C1_A1                        (I2C1->A1)
#define I2C1_F                         (I2C1->F)
#define I2C1_C1                        (I2C1->C1)
#define I2C1_S                         (I2C1->S)
#define I2C1_D                         (I2C1->D)
#define I2C1_C2                        (I2C1->C2)
#define I2C1_FLT                       (I2C1->FLT)
#define I2C1_RA                        (I2C1->RA)
#define I2C1_SMB                       (I2C1->SMB)
#define I2C1_A2                        (I2C1->A2)
#define I2C1_SLTH                      (I2C1->SLTH)
#define I2C1_SLTL                      (I2C1->SLTL)

/* ================================================================================ */
/* ================           I2S0 (file:I2S0_MKD5)                ================ */
/* ================================================================================ */

/**
 * @brief Inter-IC Sound / Synchronous Audio Interface
 */
typedef struct {                                /*!<       I2S0 Structure                                               */
   __IO uint32_t  TCSR;                         /*!< 0000: SAI Transmit Control Register                                */
   __IO uint32_t  TCR1;                         /*!< 0004: SAI Transmit Configuration 1 Register                        */
   __IO uint32_t  TCR2;                         /*!< 0008: SAI Transmit Configuration 2 Register                        */
   __IO uint32_t  TCR3;                         /*!< 000C: SAI Transmit Configuration 3 Register                        */
   __IO uint32_t  TCR4;                         /*!< 0010: SAI Transmit Configuration 4 Register                        */
   __IO uint32_t  TCR5;                         /*!< 0014: SAI Transmit Configuration 5 Register                        */
   __I  uint32_t  RESERVED0[2];                 /*!< 0018:                                                              */
   __O  uint32_t  TDR[1];                       /*!< 0020: Transmit Data Register                                       */
   __I  uint32_t  RESERVED1[7];                 /*!< 0024:                                                              */
   __I  uint32_t  TFR[1];                       /*!< 0040: SAI Transmit FIFO Register                                   */
   __I  uint32_t  RESERVED2[7];                 /*!< 0044:                                                              */
   __IO uint32_t  TMR;                          /*!< 0060: SAI Transmit Mask Register                                   */
   __I  uint32_t  RESERVED3[7];                 /*!< 0064:                                                              */
   __IO uint32_t  RCSR;                         /*!< 0080: SAI Receive Control Register                                 */
   __IO uint32_t  RCR1;                         /*!< 0084: SAI Receive Configuration 1 Register                         */
   __IO uint32_t  RCR2;                         /*!< 0088: SAI Receive Configuration 2 Register                         */
   __IO uint32_t  RCR3;                         /*!< 008C: SAI Receive Configuration 3 Register                         */
   __IO uint32_t  RCR4;                         /*!< 0090: SAI Receive Configuration 4 Register                         */
   __IO uint32_t  RCR5;                         /*!< 0094: SAI Receive Configuration 5 Register                         */
   __I  uint32_t  RESERVED4[2];                 /*!< 0098:                                                              */
   __I  uint32_t  RDR[1];                       /*!< 00A0: SAI Receive Data Register                                    */
   __I  uint32_t  RESERVED5[7];                 /*!< 00A4:                                                              */
   __I  uint32_t  RFR[1];                       /*!< 00C0: SAI Receive FIFO Register                                    */
   __I  uint32_t  RESERVED6[7];                 /*!< 00C4:                                                              */
   __IO uint32_t  RMR;                          /*!< 00E0: SAI Receive Mask Register                                    */
   __I  uint32_t  RESERVED7[7];                 /*!< 00E4:                                                              */
   __IO uint32_t  MCR;                          /*!< 0100: SAI MCLK Control Register                                    */
   __IO uint32_t  MDR;                          /*!< 0104: SAI MCLK Divide Register                                     */
} I2S0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2S0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- I2S0_TCSR                                ------ */
#define I2S_TCSR_FRDE_MASK                       (0x01UL << I2S_TCSR_FRDE_SHIFT)                     /*!< I2S0_TCSR: FRDE Mask                    */
#define I2S_TCSR_FRDE_SHIFT                      0                                                   /*!< I2S0_TCSR: FRDE Position                */
#define I2S_TCSR_FWDE_MASK                       (0x01UL << I2S_TCSR_FWDE_SHIFT)                     /*!< I2S0_TCSR: FWDE Mask                    */
#define I2S_TCSR_FWDE_SHIFT                      1                                                   /*!< I2S0_TCSR: FWDE Position                */
#define I2S_TCSR_FRIE_MASK                       (0x01UL << I2S_TCSR_FRIE_SHIFT)                     /*!< I2S0_TCSR: FRIE Mask                    */
#define I2S_TCSR_FRIE_SHIFT                      8                                                   /*!< I2S0_TCSR: FRIE Position                */
#define I2S_TCSR_FWIE_MASK                       (0x01UL << I2S_TCSR_FWIE_SHIFT)                     /*!< I2S0_TCSR: FWIE Mask                    */
#define I2S_TCSR_FWIE_SHIFT                      9                                                   /*!< I2S0_TCSR: FWIE Position                */
#define I2S_TCSR_FEIE_MASK                       (0x01UL << I2S_TCSR_FEIE_SHIFT)                     /*!< I2S0_TCSR: FEIE Mask                    */
#define I2S_TCSR_FEIE_SHIFT                      10                                                  /*!< I2S0_TCSR: FEIE Position                */
#define I2S_TCSR_SEIE_MASK                       (0x01UL << I2S_TCSR_SEIE_SHIFT)                     /*!< I2S0_TCSR: SEIE Mask                    */
#define I2S_TCSR_SEIE_SHIFT                      11                                                  /*!< I2S0_TCSR: SEIE Position                */
#define I2S_TCSR_WSIE_MASK                       (0x01UL << I2S_TCSR_WSIE_SHIFT)                     /*!< I2S0_TCSR: WSIE Mask                    */
#define I2S_TCSR_WSIE_SHIFT                      12                                                  /*!< I2S0_TCSR: WSIE Position                */
#define I2S_TCSR_FRF_MASK                        (0x01UL << I2S_TCSR_FRF_SHIFT)                      /*!< I2S0_TCSR: FRF Mask                     */
#define I2S_TCSR_FRF_SHIFT                       16                                                  /*!< I2S0_TCSR: FRF Position                 */
#define I2S_TCSR_FWF_MASK                        (0x01UL << I2S_TCSR_FWF_SHIFT)                      /*!< I2S0_TCSR: FWF Mask                     */
#define I2S_TCSR_FWF_SHIFT                       17                                                  /*!< I2S0_TCSR: FWF Position                 */
#define I2S_TCSR_FEF_MASK                        (0x01UL << I2S_TCSR_FEF_SHIFT)                      /*!< I2S0_TCSR: FEF Mask                     */
#define I2S_TCSR_FEF_SHIFT                       18                                                  /*!< I2S0_TCSR: FEF Position                 */
#define I2S_TCSR_SEF_MASK                        (0x01UL << I2S_TCSR_SEF_SHIFT)                      /*!< I2S0_TCSR: SEF Mask                     */
#define I2S_TCSR_SEF_SHIFT                       19                                                  /*!< I2S0_TCSR: SEF Position                 */
#define I2S_TCSR_WSF_MASK                        (0x01UL << I2S_TCSR_WSF_SHIFT)                      /*!< I2S0_TCSR: WSF Mask                     */
#define I2S_TCSR_WSF_SHIFT                       20                                                  /*!< I2S0_TCSR: WSF Position                 */
#define I2S_TCSR_SR_MASK                         (0x01UL << I2S_TCSR_SR_SHIFT)                       /*!< I2S0_TCSR: SR Mask                      */
#define I2S_TCSR_SR_SHIFT                        24                                                  /*!< I2S0_TCSR: SR Position                  */
#define I2S_TCSR_FR_MASK                         (0x01UL << I2S_TCSR_FR_SHIFT)                       /*!< I2S0_TCSR: FR Mask                      */
#define I2S_TCSR_FR_SHIFT                        25                                                  /*!< I2S0_TCSR: FR Position                  */
#define I2S_TCSR_BCE_MASK                        (0x01UL << I2S_TCSR_BCE_SHIFT)                      /*!< I2S0_TCSR: BCE Mask                     */
#define I2S_TCSR_BCE_SHIFT                       28                                                  /*!< I2S0_TCSR: BCE Position                 */
#define I2S_TCSR_DBGE_MASK                       (0x01UL << I2S_TCSR_DBGE_SHIFT)                     /*!< I2S0_TCSR: DBGE Mask                    */
#define I2S_TCSR_DBGE_SHIFT                      29                                                  /*!< I2S0_TCSR: DBGE Position                */
#define I2S_TCSR_STOPE_MASK                      (0x01UL << I2S_TCSR_STOPE_SHIFT)                    /*!< I2S0_TCSR: STOPE Mask                   */
#define I2S_TCSR_STOPE_SHIFT                     30                                                  /*!< I2S0_TCSR: STOPE Position               */
#define I2S_TCSR_TE_MASK                         (0x01UL << I2S_TCSR_TE_SHIFT)                       /*!< I2S0_TCSR: TE Mask                      */
#define I2S_TCSR_TE_SHIFT                        31                                                  /*!< I2S0_TCSR: TE Position                  */

/* ------- I2S0_TCR1                                ------ */
#define I2S_TCR1_TFW_MASK                        (0x03UL << I2S_TCR1_TFW_SHIFT)                      /*!< I2S0_TCR1: TFW Mask                     */
#define I2S_TCR1_TFW_SHIFT                       0                                                   /*!< I2S0_TCR1: TFW Position                 */
#define I2S_TCR1_TFW(x)                          (((x)<<I2S_TCR1_TFW_SHIFT)&I2S_TCR1_TFW_MASK)       /*!< I2S0_TCR1                               */

/* ------- I2S0_TCR2                                ------ */
#define I2S_TCR2_DIV_MASK                        (0xFFUL << I2S_TCR2_DIV_SHIFT)                      /*!< I2S0_TCR2: DIV Mask                     */
#define I2S_TCR2_DIV_SHIFT                       0                                                   /*!< I2S0_TCR2: DIV Position                 */
#define I2S_TCR2_DIV(x)                          (((x)<<I2S_TCR2_DIV_SHIFT)&I2S_TCR2_DIV_MASK)       /*!< I2S0_TCR2                               */
#define I2S_TCR2_BCD_MASK                        (0x01UL << I2S_TCR2_BCD_SHIFT)                      /*!< I2S0_TCR2: BCD Mask                     */
#define I2S_TCR2_BCD_SHIFT                       24                                                  /*!< I2S0_TCR2: BCD Position                 */
#define I2S_TCR2_BCP_MASK                        (0x01UL << I2S_TCR2_BCP_SHIFT)                      /*!< I2S0_TCR2: BCP Mask                     */
#define I2S_TCR2_BCP_SHIFT                       25                                                  /*!< I2S0_TCR2: BCP Position                 */
#define I2S_TCR2_MSEL_MASK                       (0x03UL << I2S_TCR2_MSEL_SHIFT)                     /*!< I2S0_TCR2: MSEL Mask                    */
#define I2S_TCR2_MSEL_SHIFT                      26                                                  /*!< I2S0_TCR2: MSEL Position                */
#define I2S_TCR2_MSEL(x)                         (((x)<<I2S_TCR2_MSEL_SHIFT)&I2S_TCR2_MSEL_MASK)     /*!< I2S0_TCR2                               */
#define I2S_TCR2_BCI_MASK                        (0x01UL << I2S_TCR2_BCI_SHIFT)                      /*!< I2S0_TCR2: BCI Mask                     */
#define I2S_TCR2_BCI_SHIFT                       28                                                  /*!< I2S0_TCR2: BCI Position                 */
#define I2S_TCR2_BCS_MASK                        (0x01UL << I2S_TCR2_BCS_SHIFT)                      /*!< I2S0_TCR2: BCS Mask                     */
#define I2S_TCR2_BCS_SHIFT                       29                                                  /*!< I2S0_TCR2: BCS Position                 */
#define I2S_TCR2_SYNC_MASK                       (0x03UL << I2S_TCR2_SYNC_SHIFT)                     /*!< I2S0_TCR2: SYNC Mask                    */
#define I2S_TCR2_SYNC_SHIFT                      30                                                  /*!< I2S0_TCR2: SYNC Position                */
#define I2S_TCR2_SYNC(x)                         (((x)<<I2S_TCR2_SYNC_SHIFT)&I2S_TCR2_SYNC_MASK)     /*!< I2S0_TCR2                               */

/* ------- I2S0_TCR3                                ------ */
#define I2S_TCR3_WDFL_MASK                       (0x0FUL << I2S_TCR3_WDFL_SHIFT)                     /*!< I2S0_TCR3: WDFL Mask                    */
#define I2S_TCR3_WDFL_SHIFT                      0                                                   /*!< I2S0_TCR3: WDFL Position                */
#define I2S_TCR3_WDFL(x)                         (((x)<<I2S_TCR3_WDFL_SHIFT)&I2S_TCR3_WDFL_MASK)     /*!< I2S0_TCR3                               */
#define I2S_TCR3_TCE_MASK                        (0x01UL << I2S_TCR3_TCE_SHIFT)                      /*!< I2S0_TCR3: TCE Mask                     */
#define I2S_TCR3_TCE_SHIFT                       16                                                  /*!< I2S0_TCR3: TCE Position                 */

/* ------- I2S0_TCR4                                ------ */
#define I2S_TCR4_FSD_MASK                        (0x01UL << I2S_TCR4_FSD_SHIFT)                      /*!< I2S0_TCR4: FSD Mask                     */
#define I2S_TCR4_FSD_SHIFT                       0                                                   /*!< I2S0_TCR4: FSD Position                 */
#define I2S_TCR4_FSP_MASK                        (0x01UL << I2S_TCR4_FSP_SHIFT)                      /*!< I2S0_TCR4: FSP Mask                     */
#define I2S_TCR4_FSP_SHIFT                       1                                                   /*!< I2S0_TCR4: FSP Position                 */
#define I2S_TCR4_FSE_MASK                        (0x01UL << I2S_TCR4_FSE_SHIFT)                      /*!< I2S0_TCR4: FSE Mask                     */
#define I2S_TCR4_FSE_SHIFT                       3                                                   /*!< I2S0_TCR4: FSE Position                 */
#define I2S_TCR4_MF_MASK                         (0x01UL << I2S_TCR4_MF_SHIFT)                       /*!< I2S0_TCR4: MF Mask                      */
#define I2S_TCR4_MF_SHIFT                        4                                                   /*!< I2S0_TCR4: MF Position                  */
#define I2S_TCR4_SYWD_MASK                       (0x1FUL << I2S_TCR4_SYWD_SHIFT)                     /*!< I2S0_TCR4: SYWD Mask                    */
#define I2S_TCR4_SYWD_SHIFT                      8                                                   /*!< I2S0_TCR4: SYWD Position                */
#define I2S_TCR4_SYWD(x)                         (((x)<<I2S_TCR4_SYWD_SHIFT)&I2S_TCR4_SYWD_MASK)     /*!< I2S0_TCR4                               */
#define I2S_TCR4_FRSZ_MASK                       (0x0FUL << I2S_TCR4_FRSZ_SHIFT)                     /*!< I2S0_TCR4: FRSZ Mask                    */
#define I2S_TCR4_FRSZ_SHIFT                      16                                                  /*!< I2S0_TCR4: FRSZ Position                */
#define I2S_TCR4_FRSZ(x)                         (((x)<<I2S_TCR4_FRSZ_SHIFT)&I2S_TCR4_FRSZ_MASK)     /*!< I2S0_TCR4                               */

/* ------- I2S0_TCR5                                ------ */
#define I2S_TCR5_FBT_MASK                        (0x1FUL << I2S_TCR5_FBT_SHIFT)                      /*!< I2S0_TCR5: FBT Mask                     */
#define I2S_TCR5_FBT_SHIFT                       8                                                   /*!< I2S0_TCR5: FBT Position                 */
#define I2S_TCR5_FBT(x)                          (((x)<<I2S_TCR5_FBT_SHIFT)&I2S_TCR5_FBT_MASK)       /*!< I2S0_TCR5                               */
#define I2S_TCR5_W0W_MASK                        (0x1FUL << I2S_TCR5_W0W_SHIFT)                      /*!< I2S0_TCR5: W0W Mask                     */
#define I2S_TCR5_W0W_SHIFT                       16                                                  /*!< I2S0_TCR5: W0W Position                 */
#define I2S_TCR5_W0W(x)                          (((x)<<I2S_TCR5_W0W_SHIFT)&I2S_TCR5_W0W_MASK)       /*!< I2S0_TCR5                               */
#define I2S_TCR5_WNW_MASK                        (0x1FUL << I2S_TCR5_WNW_SHIFT)                      /*!< I2S0_TCR5: WNW Mask                     */
#define I2S_TCR5_WNW_SHIFT                       24                                                  /*!< I2S0_TCR5: WNW Position                 */
#define I2S_TCR5_WNW(x)                          (((x)<<I2S_TCR5_WNW_SHIFT)&I2S_TCR5_WNW_MASK)       /*!< I2S0_TCR5                               */

/* ------- I2S0_TDR                                 ------ */
#define I2S_TDR_TDR_MASK                         (0xFFFFFFFFUL << I2S_TDR_TDR_SHIFT)                 /*!< I2S0_TDR: TDR Mask                      */
#define I2S_TDR_TDR_SHIFT                        0                                                   /*!< I2S0_TDR: TDR Position                  */
#define I2S_TDR_TDR(x)                           (((x)<<I2S_TDR_TDR_SHIFT)&I2S_TDR_TDR_MASK)         /*!< I2S0_TDR                                */

/* ------- I2S0_TFR                                 ------ */
#define I2S_TFR_RFP_MASK                         (0x0FUL << I2S_TFR_RFP_SHIFT)                       /*!< I2S0_TFR: RFP Mask                      */
#define I2S_TFR_RFP_SHIFT                        0                                                   /*!< I2S0_TFR: RFP Position                  */
#define I2S_TFR_RFP(x)                           (((x)<<I2S_TFR_RFP_SHIFT)&I2S_TFR_RFP_MASK)         /*!< I2S0_TFR                                */
#define I2S_TFR_WFP_MASK                         (0x0FUL << I2S_TFR_WFP_SHIFT)                       /*!< I2S0_TFR: WFP Mask                      */
#define I2S_TFR_WFP_SHIFT                        16                                                  /*!< I2S0_TFR: WFP Position                  */
#define I2S_TFR_WFP(x)                           (((x)<<I2S_TFR_WFP_SHIFT)&I2S_TFR_WFP_MASK)         /*!< I2S0_TFR                                */

/* ------- I2S0_TMR                                 ------ */
#define I2S_TMR_TWM_MASK                         (0xFFFFUL << I2S_TMR_TWM_SHIFT)                     /*!< I2S0_TMR: TWM Mask                      */
#define I2S_TMR_TWM_SHIFT                        0                                                   /*!< I2S0_TMR: TWM Position                  */
#define I2S_TMR_TWM(x)                           (((x)<<I2S_TMR_TWM_SHIFT)&I2S_TMR_TWM_MASK)         /*!< I2S0_TMR                                */

/* ------- I2S0_RCSR                                ------ */
#define I2S_RCSR_FRDE_MASK                       (0x01UL << I2S_RCSR_FRDE_SHIFT)                     /*!< I2S0_RCSR: FRDE Mask                    */
#define I2S_RCSR_FRDE_SHIFT                      0                                                   /*!< I2S0_RCSR: FRDE Position                */
#define I2S_RCSR_FWDE_MASK                       (0x01UL << I2S_RCSR_FWDE_SHIFT)                     /*!< I2S0_RCSR: FWDE Mask                    */
#define I2S_RCSR_FWDE_SHIFT                      1                                                   /*!< I2S0_RCSR: FWDE Position                */
#define I2S_RCSR_FRIE_MASK                       (0x01UL << I2S_RCSR_FRIE_SHIFT)                     /*!< I2S0_RCSR: FRIE Mask                    */
#define I2S_RCSR_FRIE_SHIFT                      8                                                   /*!< I2S0_RCSR: FRIE Position                */
#define I2S_RCSR_FWIE_MASK                       (0x01UL << I2S_RCSR_FWIE_SHIFT)                     /*!< I2S0_RCSR: FWIE Mask                    */
#define I2S_RCSR_FWIE_SHIFT                      9                                                   /*!< I2S0_RCSR: FWIE Position                */
#define I2S_RCSR_FEIE_MASK                       (0x01UL << I2S_RCSR_FEIE_SHIFT)                     /*!< I2S0_RCSR: FEIE Mask                    */
#define I2S_RCSR_FEIE_SHIFT                      10                                                  /*!< I2S0_RCSR: FEIE Position                */
#define I2S_RCSR_SEIE_MASK                       (0x01UL << I2S_RCSR_SEIE_SHIFT)                     /*!< I2S0_RCSR: SEIE Mask                    */
#define I2S_RCSR_SEIE_SHIFT                      11                                                  /*!< I2S0_RCSR: SEIE Position                */
#define I2S_RCSR_WSIE_MASK                       (0x01UL << I2S_RCSR_WSIE_SHIFT)                     /*!< I2S0_RCSR: WSIE Mask                    */
#define I2S_RCSR_WSIE_SHIFT                      12                                                  /*!< I2S0_RCSR: WSIE Position                */
#define I2S_RCSR_FRF_MASK                        (0x01UL << I2S_RCSR_FRF_SHIFT)                      /*!< I2S0_RCSR: FRF Mask                     */
#define I2S_RCSR_FRF_SHIFT                       16                                                  /*!< I2S0_RCSR: FRF Position                 */
#define I2S_RCSR_FWF_MASK                        (0x01UL << I2S_RCSR_FWF_SHIFT)                      /*!< I2S0_RCSR: FWF Mask                     */
#define I2S_RCSR_FWF_SHIFT                       17                                                  /*!< I2S0_RCSR: FWF Position                 */
#define I2S_RCSR_FEF_MASK                        (0x01UL << I2S_RCSR_FEF_SHIFT)                      /*!< I2S0_RCSR: FEF Mask                     */
#define I2S_RCSR_FEF_SHIFT                       18                                                  /*!< I2S0_RCSR: FEF Position                 */
#define I2S_RCSR_SEF_MASK                        (0x01UL << I2S_RCSR_SEF_SHIFT)                      /*!< I2S0_RCSR: SEF Mask                     */
#define I2S_RCSR_SEF_SHIFT                       19                                                  /*!< I2S0_RCSR: SEF Position                 */
#define I2S_RCSR_WSF_MASK                        (0x01UL << I2S_RCSR_WSF_SHIFT)                      /*!< I2S0_RCSR: WSF Mask                     */
#define I2S_RCSR_WSF_SHIFT                       20                                                  /*!< I2S0_RCSR: WSF Position                 */
#define I2S_RCSR_SR_MASK                         (0x01UL << I2S_RCSR_SR_SHIFT)                       /*!< I2S0_RCSR: SR Mask                      */
#define I2S_RCSR_SR_SHIFT                        24                                                  /*!< I2S0_RCSR: SR Position                  */
#define I2S_RCSR_FR_MASK                         (0x01UL << I2S_RCSR_FR_SHIFT)                       /*!< I2S0_RCSR: FR Mask                      */
#define I2S_RCSR_FR_SHIFT                        25                                                  /*!< I2S0_RCSR: FR Position                  */
#define I2S_RCSR_BCE_MASK                        (0x01UL << I2S_RCSR_BCE_SHIFT)                      /*!< I2S0_RCSR: BCE Mask                     */
#define I2S_RCSR_BCE_SHIFT                       28                                                  /*!< I2S0_RCSR: BCE Position                 */
#define I2S_RCSR_DBGE_MASK                       (0x01UL << I2S_RCSR_DBGE_SHIFT)                     /*!< I2S0_RCSR: DBGE Mask                    */
#define I2S_RCSR_DBGE_SHIFT                      29                                                  /*!< I2S0_RCSR: DBGE Position                */
#define I2S_RCSR_STOPE_MASK                      (0x01UL << I2S_RCSR_STOPE_SHIFT)                    /*!< I2S0_RCSR: STOPE Mask                   */
#define I2S_RCSR_STOPE_SHIFT                     30                                                  /*!< I2S0_RCSR: STOPE Position               */
#define I2S_RCSR_RE_MASK                         (0x01UL << I2S_RCSR_RE_SHIFT)                       /*!< I2S0_RCSR: RE Mask                      */
#define I2S_RCSR_RE_SHIFT                        31                                                  /*!< I2S0_RCSR: RE Position                  */

/* ------- I2S0_RCR1                                ------ */
#define I2S_RCR1_RFW_MASK                        (0x07UL << I2S_RCR1_RFW_SHIFT)                      /*!< I2S0_RCR1: RFW Mask                     */
#define I2S_RCR1_RFW_SHIFT                       0                                                   /*!< I2S0_RCR1: RFW Position                 */
#define I2S_RCR1_RFW(x)                          (((x)<<I2S_RCR1_RFW_SHIFT)&I2S_RCR1_RFW_MASK)       /*!< I2S0_RCR1                               */

/* ------- I2S0_RCR2                                ------ */
#define I2S_RCR2_DIV_MASK                        (0xFFUL << I2S_RCR2_DIV_SHIFT)                      /*!< I2S0_RCR2: DIV Mask                     */
#define I2S_RCR2_DIV_SHIFT                       0                                                   /*!< I2S0_RCR2: DIV Position                 */
#define I2S_RCR2_DIV(x)                          (((x)<<I2S_RCR2_DIV_SHIFT)&I2S_RCR2_DIV_MASK)       /*!< I2S0_RCR2                               */
#define I2S_RCR2_BCD_MASK                        (0x01UL << I2S_RCR2_BCD_SHIFT)                      /*!< I2S0_RCR2: BCD Mask                     */
#define I2S_RCR2_BCD_SHIFT                       24                                                  /*!< I2S0_RCR2: BCD Position                 */
#define I2S_RCR2_BCP_MASK                        (0x01UL << I2S_RCR2_BCP_SHIFT)                      /*!< I2S0_RCR2: BCP Mask                     */
#define I2S_RCR2_BCP_SHIFT                       25                                                  /*!< I2S0_RCR2: BCP Position                 */
#define I2S_RCR2_MSEL_MASK                       (0x03UL << I2S_RCR2_MSEL_SHIFT)                     /*!< I2S0_RCR2: MSEL Mask                    */
#define I2S_RCR2_MSEL_SHIFT                      26                                                  /*!< I2S0_RCR2: MSEL Position                */
#define I2S_RCR2_MSEL(x)                         (((x)<<I2S_RCR2_MSEL_SHIFT)&I2S_RCR2_MSEL_MASK)     /*!< I2S0_RCR2                               */
#define I2S_RCR2_BCI_MASK                        (0x01UL << I2S_RCR2_BCI_SHIFT)                      /*!< I2S0_RCR2: BCI Mask                     */
#define I2S_RCR2_BCI_SHIFT                       28                                                  /*!< I2S0_RCR2: BCI Position                 */
#define I2S_RCR2_BCS_MASK                        (0x01UL << I2S_RCR2_BCS_SHIFT)                      /*!< I2S0_RCR2: BCS Mask                     */
#define I2S_RCR2_BCS_SHIFT                       29                                                  /*!< I2S0_RCR2: BCS Position                 */
#define I2S_RCR2_SYNC_MASK                       (0x03UL << I2S_RCR2_SYNC_SHIFT)                     /*!< I2S0_RCR2: SYNC Mask                    */
#define I2S_RCR2_SYNC_SHIFT                      30                                                  /*!< I2S0_RCR2: SYNC Position                */
#define I2S_RCR2_SYNC(x)                         (((x)<<I2S_RCR2_SYNC_SHIFT)&I2S_RCR2_SYNC_MASK)     /*!< I2S0_RCR2                               */

/* ------- I2S0_RCR3                                ------ */
#define I2S_RCR3_WDFL_MASK                       (0x0FUL << I2S_RCR3_WDFL_SHIFT)                     /*!< I2S0_RCR3: WDFL Mask                    */
#define I2S_RCR3_WDFL_SHIFT                      0                                                   /*!< I2S0_RCR3: WDFL Position                */
#define I2S_RCR3_WDFL(x)                         (((x)<<I2S_RCR3_WDFL_SHIFT)&I2S_RCR3_WDFL_MASK)     /*!< I2S0_RCR3                               */
#define I2S_RCR3_RCE_MASK                        (0x01UL << I2S_RCR3_RCE_SHIFT)                      /*!< I2S0_RCR3: RCE Mask                     */
#define I2S_RCR3_RCE_SHIFT                       16                                                  /*!< I2S0_RCR3: RCE Position                 */

/* ------- I2S0_RCR4                                ------ */
#define I2S_RCR4_FSD_MASK                        (0x01UL << I2S_RCR4_FSD_SHIFT)                      /*!< I2S0_RCR4: FSD Mask                     */
#define I2S_RCR4_FSD_SHIFT                       0                                                   /*!< I2S0_RCR4: FSD Position                 */
#define I2S_RCR4_FSP_MASK                        (0x01UL << I2S_RCR4_FSP_SHIFT)                      /*!< I2S0_RCR4: FSP Mask                     */
#define I2S_RCR4_FSP_SHIFT                       1                                                   /*!< I2S0_RCR4: FSP Position                 */
#define I2S_RCR4_FSE_MASK                        (0x01UL << I2S_RCR4_FSE_SHIFT)                      /*!< I2S0_RCR4: FSE Mask                     */
#define I2S_RCR4_FSE_SHIFT                       3                                                   /*!< I2S0_RCR4: FSE Position                 */
#define I2S_RCR4_MF_MASK                         (0x01UL << I2S_RCR4_MF_SHIFT)                       /*!< I2S0_RCR4: MF Mask                      */
#define I2S_RCR4_MF_SHIFT                        4                                                   /*!< I2S0_RCR4: MF Position                  */
#define I2S_RCR4_SYWD_MASK                       (0x1FUL << I2S_RCR4_SYWD_SHIFT)                     /*!< I2S0_RCR4: SYWD Mask                    */
#define I2S_RCR4_SYWD_SHIFT                      8                                                   /*!< I2S0_RCR4: SYWD Position                */
#define I2S_RCR4_SYWD(x)                         (((x)<<I2S_RCR4_SYWD_SHIFT)&I2S_RCR4_SYWD_MASK)     /*!< I2S0_RCR4                               */
#define I2S_RCR4_FRSZ_MASK                       (0x0FUL << I2S_RCR4_FRSZ_SHIFT)                     /*!< I2S0_RCR4: FRSZ Mask                    */
#define I2S_RCR4_FRSZ_SHIFT                      16                                                  /*!< I2S0_RCR4: FRSZ Position                */
#define I2S_RCR4_FRSZ(x)                         (((x)<<I2S_RCR4_FRSZ_SHIFT)&I2S_RCR4_FRSZ_MASK)     /*!< I2S0_RCR4                               */

/* ------- I2S0_RCR5                                ------ */
#define I2S_RCR5_FBT_MASK                        (0x1FUL << I2S_RCR5_FBT_SHIFT)                      /*!< I2S0_RCR5: FBT Mask                     */
#define I2S_RCR5_FBT_SHIFT                       8                                                   /*!< I2S0_RCR5: FBT Position                 */
#define I2S_RCR5_FBT(x)                          (((x)<<I2S_RCR5_FBT_SHIFT)&I2S_RCR5_FBT_MASK)       /*!< I2S0_RCR5                               */
#define I2S_RCR5_W0W_MASK                        (0x1FUL << I2S_RCR5_W0W_SHIFT)                      /*!< I2S0_RCR5: W0W Mask                     */
#define I2S_RCR5_W0W_SHIFT                       16                                                  /*!< I2S0_RCR5: W0W Position                 */
#define I2S_RCR5_W0W(x)                          (((x)<<I2S_RCR5_W0W_SHIFT)&I2S_RCR5_W0W_MASK)       /*!< I2S0_RCR5                               */
#define I2S_RCR5_WNW_MASK                        (0x1FUL << I2S_RCR5_WNW_SHIFT)                      /*!< I2S0_RCR5: WNW Mask                     */
#define I2S_RCR5_WNW_SHIFT                       24                                                  /*!< I2S0_RCR5: WNW Position                 */
#define I2S_RCR5_WNW(x)                          (((x)<<I2S_RCR5_WNW_SHIFT)&I2S_RCR5_WNW_MASK)       /*!< I2S0_RCR5                               */

/* ------- I2S0_RDR                                 ------ */
#define I2S_RDR_RDR_MASK                         (0xFFFFFFFFUL << I2S_RDR_RDR_SHIFT)                 /*!< I2S0_RDR: RDR Mask                      */
#define I2S_RDR_RDR_SHIFT                        0                                                   /*!< I2S0_RDR: RDR Position                  */
#define I2S_RDR_RDR(x)                           (((x)<<I2S_RDR_RDR_SHIFT)&I2S_RDR_RDR_MASK)         /*!< I2S0_RDR                                */

/* ------- I2S0_RFR                                 ------ */
#define I2S_RFR_RFP_MASK                         (0x0FUL << I2S_RFR_RFP_SHIFT)                       /*!< I2S0_RFR: RFP Mask                      */
#define I2S_RFR_RFP_SHIFT                        0                                                   /*!< I2S0_RFR: RFP Position                  */
#define I2S_RFR_RFP(x)                           (((x)<<I2S_RFR_RFP_SHIFT)&I2S_RFR_RFP_MASK)         /*!< I2S0_RFR                                */
#define I2S_RFR_WFP_MASK                         (0x0FUL << I2S_RFR_WFP_SHIFT)                       /*!< I2S0_RFR: WFP Mask                      */
#define I2S_RFR_WFP_SHIFT                        16                                                  /*!< I2S0_RFR: WFP Position                  */
#define I2S_RFR_WFP(x)                           (((x)<<I2S_RFR_WFP_SHIFT)&I2S_RFR_WFP_MASK)         /*!< I2S0_RFR                                */

/* ------- I2S0_RMR                                 ------ */
#define I2S_RMR_RWM_MASK                         (0xFFFFUL << I2S_RMR_RWM_SHIFT)                     /*!< I2S0_RMR: RWM Mask                      */
#define I2S_RMR_RWM_SHIFT                        0                                                   /*!< I2S0_RMR: RWM Position                  */
#define I2S_RMR_RWM(x)                           (((x)<<I2S_RMR_RWM_SHIFT)&I2S_RMR_RWM_MASK)         /*!< I2S0_RMR                                */

/* ------- I2S0_MCR                                 ------ */
#define I2S_MCR_MICS_MASK                        (0x03UL << I2S_MCR_MICS_SHIFT)                      /*!< I2S0_MCR: MICS Mask                     */
#define I2S_MCR_MICS_SHIFT                       24                                                  /*!< I2S0_MCR: MICS Position                 */
#define I2S_MCR_MICS(x)                          (((x)<<I2S_MCR_MICS_SHIFT)&I2S_MCR_MICS_MASK)       /*!< I2S0_MCR                                */
#define I2S_MCR_MOE_MASK                         (0x01UL << I2S_MCR_MOE_SHIFT)                       /*!< I2S0_MCR: MOE Mask                      */
#define I2S_MCR_MOE_SHIFT                        30                                                  /*!< I2S0_MCR: MOE Position                  */
#define I2S_MCR_DUF_MASK                         (0x01UL << I2S_MCR_DUF_SHIFT)                       /*!< I2S0_MCR: DUF Mask                      */
#define I2S_MCR_DUF_SHIFT                        31                                                  /*!< I2S0_MCR: DUF Position                  */

/* ------- I2S0_MDR                                 ------ */
#define I2S_MDR_DIVIDE_MASK                      (0xFFFUL << I2S_MDR_DIVIDE_SHIFT)                   /*!< I2S0_MDR: DIVIDE Mask                   */
#define I2S_MDR_DIVIDE_SHIFT                     0                                                   /*!< I2S0_MDR: DIVIDE Position               */
#define I2S_MDR_DIVIDE(x)                        (((x)<<I2S_MDR_DIVIDE_SHIFT)&I2S_MDR_DIVIDE_MASK)   /*!< I2S0_MDR                                */
#define I2S_MDR_FRACT_MASK                       (0xFFUL << I2S_MDR_FRACT_SHIFT)                     /*!< I2S0_MDR: FRACT Mask                    */
#define I2S_MDR_FRACT_SHIFT                      12                                                  /*!< I2S0_MDR: FRACT Position                */
#define I2S_MDR_FRACT(x)                         (((x)<<I2S_MDR_FRACT_SHIFT)&I2S_MDR_FRACT_MASK)     /*!< I2S0_MDR                                */

/* -------------------------------------------------------------------------------- */
/* -----------     'I2S0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2S0_TCSR                      (I2S0->TCSR)
#define I2S0_TCR1                      (I2S0->TCR1)
#define I2S0_TCR2                      (I2S0->TCR2)
#define I2S0_TCR3                      (I2S0->TCR3)
#define I2S0_TCR4                      (I2S0->TCR4)
#define I2S0_TCR5                      (I2S0->TCR5)
#define I2S0_TDR0                      (I2S0->TDR[0])
#define I2S0_TFR0                      (I2S0->TFR[0])
#define I2S0_TMR                       (I2S0->TMR)
#define I2S0_RCSR                      (I2S0->RCSR)
#define I2S0_RCR1                      (I2S0->RCR1)
#define I2S0_RCR2                      (I2S0->RCR2)
#define I2S0_RCR3                      (I2S0->RCR3)
#define I2S0_RCR4                      (I2S0->RCR4)
#define I2S0_RCR5                      (I2S0->RCR5)
#define I2S0_RDR0                      (I2S0->RDR[0])
#define I2S0_RFR0                      (I2S0->RFR[0])
#define I2S0_RMR                       (I2S0->RMR)
#define I2S0_MCR                       (I2S0->MCR)
#define I2S0_MDR                       (I2S0->MDR)

/* ================================================================================ */
/* ================           LLWU (file:LLWU_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Low leakage wakeup unit
 */
typedef struct {                                /*!<       LLWU Structure                                               */
   __IO uint8_t   PE1;                          /*!< 0000: Pin Enable 1 Register                                        */
   __IO uint8_t   PE2;                          /*!< 0001: Pin Enable 2 Register                                        */
   __IO uint8_t   PE3;                          /*!< 0002: Pin Enable 3 Register                                        */
   __IO uint8_t   PE4;                          /*!< 0003: Pin Enable 4 Register                                        */
   __IO uint8_t   ME;                           /*!< 0004: Module Enable Register                                       */
   __IO uint8_t   F1;                           /*!< 0005: Flag 1 Register                                              */
   __IO uint8_t   F2;                           /*!< 0006: Flag 2 Register                                              */
   __IO uint8_t   F3;                           /*!< 0007: Flag 3 Register                                              */
   __IO uint8_t   FILT1;                        /*!< 0008: Pin Filter 1 register                                        */
   __IO uint8_t   FILT2;                        /*!< 0009: Pin Filter 2 register                                        */
   __IO uint8_t   RST;                          /*!< 000A: Reset Enable Register                                        */
} LLWU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LLWU' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- LLWU_PE1                                 ------ */
#define LLWU_PE1_WUPE0_MASK                      (0x03UL << LLWU_PE1_WUPE0_SHIFT)                    /*!< LLWU_PE1: WUPE0 Mask                    */
#define LLWU_PE1_WUPE0_SHIFT                     0                                                   /*!< LLWU_PE1: WUPE0 Position                */
#define LLWU_PE1_WUPE0(x)                        (((x)<<LLWU_PE1_WUPE0_SHIFT)&LLWU_PE1_WUPE0_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE1_MASK                      (0x03UL << LLWU_PE1_WUPE1_SHIFT)                    /*!< LLWU_PE1: WUPE1 Mask                    */
#define LLWU_PE1_WUPE1_SHIFT                     2                                                   /*!< LLWU_PE1: WUPE1 Position                */
#define LLWU_PE1_WUPE1(x)                        (((x)<<LLWU_PE1_WUPE1_SHIFT)&LLWU_PE1_WUPE1_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE2_MASK                      (0x03UL << LLWU_PE1_WUPE2_SHIFT)                    /*!< LLWU_PE1: WUPE2 Mask                    */
#define LLWU_PE1_WUPE2_SHIFT                     4                                                   /*!< LLWU_PE1: WUPE2 Position                */
#define LLWU_PE1_WUPE2(x)                        (((x)<<LLWU_PE1_WUPE2_SHIFT)&LLWU_PE1_WUPE2_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE3_MASK                      (0x03UL << LLWU_PE1_WUPE3_SHIFT)                    /*!< LLWU_PE1: WUPE3 Mask                    */
#define LLWU_PE1_WUPE3_SHIFT                     6                                                   /*!< LLWU_PE1: WUPE3 Position                */
#define LLWU_PE1_WUPE3(x)                        (((x)<<LLWU_PE1_WUPE3_SHIFT)&LLWU_PE1_WUPE3_MASK)   /*!< LLWU_PE1                                */

/* ------- LLWU_PE2                                 ------ */
#define LLWU_PE2_WUPE4_MASK                      (0x03UL << LLWU_PE2_WUPE4_SHIFT)                    /*!< LLWU_PE2: WUPE4 Mask                    */
#define LLWU_PE2_WUPE4_SHIFT                     0                                                   /*!< LLWU_PE2: WUPE4 Position                */
#define LLWU_PE2_WUPE4(x)                        (((x)<<LLWU_PE2_WUPE4_SHIFT)&LLWU_PE2_WUPE4_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE5_MASK                      (0x03UL << LLWU_PE2_WUPE5_SHIFT)                    /*!< LLWU_PE2: WUPE5 Mask                    */
#define LLWU_PE2_WUPE5_SHIFT                     2                                                   /*!< LLWU_PE2: WUPE5 Position                */
#define LLWU_PE2_WUPE5(x)                        (((x)<<LLWU_PE2_WUPE5_SHIFT)&LLWU_PE2_WUPE5_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE6_MASK                      (0x03UL << LLWU_PE2_WUPE6_SHIFT)                    /*!< LLWU_PE2: WUPE6 Mask                    */
#define LLWU_PE2_WUPE6_SHIFT                     4                                                   /*!< LLWU_PE2: WUPE6 Position                */
#define LLWU_PE2_WUPE6(x)                        (((x)<<LLWU_PE2_WUPE6_SHIFT)&LLWU_PE2_WUPE6_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE7_MASK                      (0x03UL << LLWU_PE2_WUPE7_SHIFT)                    /*!< LLWU_PE2: WUPE7 Mask                    */
#define LLWU_PE2_WUPE7_SHIFT                     6                                                   /*!< LLWU_PE2: WUPE7 Position                */
#define LLWU_PE2_WUPE7(x)                        (((x)<<LLWU_PE2_WUPE7_SHIFT)&LLWU_PE2_WUPE7_MASK)   /*!< LLWU_PE2                                */

/* ------- LLWU_PE3                                 ------ */
#define LLWU_PE3_WUPE8_MASK                      (0x03UL << LLWU_PE3_WUPE8_SHIFT)                    /*!< LLWU_PE3: WUPE8 Mask                    */
#define LLWU_PE3_WUPE8_SHIFT                     0                                                   /*!< LLWU_PE3: WUPE8 Position                */
#define LLWU_PE3_WUPE8(x)                        (((x)<<LLWU_PE3_WUPE8_SHIFT)&LLWU_PE3_WUPE8_MASK)   /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE9_MASK                      (0x03UL << LLWU_PE3_WUPE9_SHIFT)                    /*!< LLWU_PE3: WUPE9 Mask                    */
#define LLWU_PE3_WUPE9_SHIFT                     2                                                   /*!< LLWU_PE3: WUPE9 Position                */
#define LLWU_PE3_WUPE9(x)                        (((x)<<LLWU_PE3_WUPE9_SHIFT)&LLWU_PE3_WUPE9_MASK)   /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE10_MASK                     (0x03UL << LLWU_PE3_WUPE10_SHIFT)                   /*!< LLWU_PE3: WUPE10 Mask                   */
#define LLWU_PE3_WUPE10_SHIFT                    4                                                   /*!< LLWU_PE3: WUPE10 Position               */
#define LLWU_PE3_WUPE10(x)                       (((x)<<LLWU_PE3_WUPE10_SHIFT)&LLWU_PE3_WUPE10_MASK) /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE11_MASK                     (0x03UL << LLWU_PE3_WUPE11_SHIFT)                   /*!< LLWU_PE3: WUPE11 Mask                   */
#define LLWU_PE3_WUPE11_SHIFT                    6                                                   /*!< LLWU_PE3: WUPE11 Position               */
#define LLWU_PE3_WUPE11(x)                       (((x)<<LLWU_PE3_WUPE11_SHIFT)&LLWU_PE3_WUPE11_MASK) /*!< LLWU_PE3                                */

/* ------- LLWU_PE4                                 ------ */
#define LLWU_PE4_WUPE12_MASK                     (0x03UL << LLWU_PE4_WUPE12_SHIFT)                   /*!< LLWU_PE4: WUPE12 Mask                   */
#define LLWU_PE4_WUPE12_SHIFT                    0                                                   /*!< LLWU_PE4: WUPE12 Position               */
#define LLWU_PE4_WUPE12(x)                       (((x)<<LLWU_PE4_WUPE12_SHIFT)&LLWU_PE4_WUPE12_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE13_MASK                     (0x03UL << LLWU_PE4_WUPE13_SHIFT)                   /*!< LLWU_PE4: WUPE13 Mask                   */
#define LLWU_PE4_WUPE13_SHIFT                    2                                                   /*!< LLWU_PE4: WUPE13 Position               */
#define LLWU_PE4_WUPE13(x)                       (((x)<<LLWU_PE4_WUPE13_SHIFT)&LLWU_PE4_WUPE13_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE14_MASK                     (0x03UL << LLWU_PE4_WUPE14_SHIFT)                   /*!< LLWU_PE4: WUPE14 Mask                   */
#define LLWU_PE4_WUPE14_SHIFT                    4                                                   /*!< LLWU_PE4: WUPE14 Position               */
#define LLWU_PE4_WUPE14(x)                       (((x)<<LLWU_PE4_WUPE14_SHIFT)&LLWU_PE4_WUPE14_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE15_MASK                     (0x03UL << LLWU_PE4_WUPE15_SHIFT)                   /*!< LLWU_PE4: WUPE15 Mask                   */
#define LLWU_PE4_WUPE15_SHIFT                    6                                                   /*!< LLWU_PE4: WUPE15 Position               */
#define LLWU_PE4_WUPE15(x)                       (((x)<<LLWU_PE4_WUPE15_SHIFT)&LLWU_PE4_WUPE15_MASK) /*!< LLWU_PE4                                */

/* ------- LLWU_ME                                  ------ */
#define LLWU_ME_WUME0_MASK                       (0x01UL << LLWU_ME_WUME0_SHIFT)                     /*!< LLWU_ME: WUME0 Mask                     */
#define LLWU_ME_WUME0_SHIFT                      0                                                   /*!< LLWU_ME: WUME0 Position                 */
#define LLWU_ME_WUME1_MASK                       (0x01UL << LLWU_ME_WUME1_SHIFT)                     /*!< LLWU_ME: WUME1 Mask                     */
#define LLWU_ME_WUME1_SHIFT                      1                                                   /*!< LLWU_ME: WUME1 Position                 */
#define LLWU_ME_WUME2_MASK                       (0x01UL << LLWU_ME_WUME2_SHIFT)                     /*!< LLWU_ME: WUME2 Mask                     */
#define LLWU_ME_WUME2_SHIFT                      2                                                   /*!< LLWU_ME: WUME2 Position                 */
#define LLWU_ME_WUME3_MASK                       (0x01UL << LLWU_ME_WUME3_SHIFT)                     /*!< LLWU_ME: WUME3 Mask                     */
#define LLWU_ME_WUME3_SHIFT                      3                                                   /*!< LLWU_ME: WUME3 Position                 */
#define LLWU_ME_WUME4_MASK                       (0x01UL << LLWU_ME_WUME4_SHIFT)                     /*!< LLWU_ME: WUME4 Mask                     */
#define LLWU_ME_WUME4_SHIFT                      4                                                   /*!< LLWU_ME: WUME4 Position                 */
#define LLWU_ME_WUME5_MASK                       (0x01UL << LLWU_ME_WUME5_SHIFT)                     /*!< LLWU_ME: WUME5 Mask                     */
#define LLWU_ME_WUME5_SHIFT                      5                                                   /*!< LLWU_ME: WUME5 Position                 */
#define LLWU_ME_WUME6_MASK                       (0x01UL << LLWU_ME_WUME6_SHIFT)                     /*!< LLWU_ME: WUME6 Mask                     */
#define LLWU_ME_WUME6_SHIFT                      6                                                   /*!< LLWU_ME: WUME6 Position                 */
#define LLWU_ME_WUME7_MASK                       (0x01UL << LLWU_ME_WUME7_SHIFT)                     /*!< LLWU_ME: WUME7 Mask                     */
#define LLWU_ME_WUME7_SHIFT                      7                                                   /*!< LLWU_ME: WUME7 Position                 */

/* ------- LLWU_F1                                  ------ */
#define LLWU_F1_WUF0_MASK                        (0x01UL << LLWU_F1_WUF0_SHIFT)                      /*!< LLWU_F1: WUF0 Mask                      */
#define LLWU_F1_WUF0_SHIFT                       0                                                   /*!< LLWU_F1: WUF0 Position                  */
#define LLWU_F1_WUF1_MASK                        (0x01UL << LLWU_F1_WUF1_SHIFT)                      /*!< LLWU_F1: WUF1 Mask                      */
#define LLWU_F1_WUF1_SHIFT                       1                                                   /*!< LLWU_F1: WUF1 Position                  */
#define LLWU_F1_WUF2_MASK                        (0x01UL << LLWU_F1_WUF2_SHIFT)                      /*!< LLWU_F1: WUF2 Mask                      */
#define LLWU_F1_WUF2_SHIFT                       2                                                   /*!< LLWU_F1: WUF2 Position                  */
#define LLWU_F1_WUF3_MASK                        (0x01UL << LLWU_F1_WUF3_SHIFT)                      /*!< LLWU_F1: WUF3 Mask                      */
#define LLWU_F1_WUF3_SHIFT                       3                                                   /*!< LLWU_F1: WUF3 Position                  */
#define LLWU_F1_WUF4_MASK                        (0x01UL << LLWU_F1_WUF4_SHIFT)                      /*!< LLWU_F1: WUF4 Mask                      */
#define LLWU_F1_WUF4_SHIFT                       4                                                   /*!< LLWU_F1: WUF4 Position                  */
#define LLWU_F1_WUF5_MASK                        (0x01UL << LLWU_F1_WUF5_SHIFT)                      /*!< LLWU_F1: WUF5 Mask                      */
#define LLWU_F1_WUF5_SHIFT                       5                                                   /*!< LLWU_F1: WUF5 Position                  */
#define LLWU_F1_WUF6_MASK                        (0x01UL << LLWU_F1_WUF6_SHIFT)                      /*!< LLWU_F1: WUF6 Mask                      */
#define LLWU_F1_WUF6_SHIFT                       6                                                   /*!< LLWU_F1: WUF6 Position                  */
#define LLWU_F1_WUF7_MASK                        (0x01UL << LLWU_F1_WUF7_SHIFT)                      /*!< LLWU_F1: WUF7 Mask                      */
#define LLWU_F1_WUF7_SHIFT                       7                                                   /*!< LLWU_F1: WUF7 Position                  */

/* ------- LLWU_F2                                  ------ */
#define LLWU_F2_WUF8_MASK                        (0x01UL << LLWU_F2_WUF8_SHIFT)                      /*!< LLWU_F2: WUF8 Mask                      */
#define LLWU_F2_WUF8_SHIFT                       0                                                   /*!< LLWU_F2: WUF8 Position                  */
#define LLWU_F2_WUF9_MASK                        (0x01UL << LLWU_F2_WUF9_SHIFT)                      /*!< LLWU_F2: WUF9 Mask                      */
#define LLWU_F2_WUF9_SHIFT                       1                                                   /*!< LLWU_F2: WUF9 Position                  */
#define LLWU_F2_WUF10_MASK                       (0x01UL << LLWU_F2_WUF10_SHIFT)                     /*!< LLWU_F2: WUF10 Mask                     */
#define LLWU_F2_WUF10_SHIFT                      2                                                   /*!< LLWU_F2: WUF10 Position                 */
#define LLWU_F2_WUF11_MASK                       (0x01UL << LLWU_F2_WUF11_SHIFT)                     /*!< LLWU_F2: WUF11 Mask                     */
#define LLWU_F2_WUF11_SHIFT                      3                                                   /*!< LLWU_F2: WUF11 Position                 */
#define LLWU_F2_WUF12_MASK                       (0x01UL << LLWU_F2_WUF12_SHIFT)                     /*!< LLWU_F2: WUF12 Mask                     */
#define LLWU_F2_WUF12_SHIFT                      4                                                   /*!< LLWU_F2: WUF12 Position                 */
#define LLWU_F2_WUF13_MASK                       (0x01UL << LLWU_F2_WUF13_SHIFT)                     /*!< LLWU_F2: WUF13 Mask                     */
#define LLWU_F2_WUF13_SHIFT                      5                                                   /*!< LLWU_F2: WUF13 Position                 */
#define LLWU_F2_WUF14_MASK                       (0x01UL << LLWU_F2_WUF14_SHIFT)                     /*!< LLWU_F2: WUF14 Mask                     */
#define LLWU_F2_WUF14_SHIFT                      6                                                   /*!< LLWU_F2: WUF14 Position                 */
#define LLWU_F2_WUF15_MASK                       (0x01UL << LLWU_F2_WUF15_SHIFT)                     /*!< LLWU_F2: WUF15 Mask                     */
#define LLWU_F2_WUF15_SHIFT                      7                                                   /*!< LLWU_F2: WUF15 Position                 */

/* ------- LLWU_F3                                  ------ */
#define LLWU_F3_MWUF0_MASK                       (0x01UL << LLWU_F3_MWUF0_SHIFT)                     /*!< LLWU_F3: MWUF0 Mask                     */
#define LLWU_F3_MWUF0_SHIFT                      0                                                   /*!< LLWU_F3: MWUF0 Position                 */
#define LLWU_F3_MWUF1_MASK                       (0x01UL << LLWU_F3_MWUF1_SHIFT)                     /*!< LLWU_F3: MWUF1 Mask                     */
#define LLWU_F3_MWUF1_SHIFT                      1                                                   /*!< LLWU_F3: MWUF1 Position                 */
#define LLWU_F3_MWUF2_MASK                       (0x01UL << LLWU_F3_MWUF2_SHIFT)                     /*!< LLWU_F3: MWUF2 Mask                     */
#define LLWU_F3_MWUF2_SHIFT                      2                                                   /*!< LLWU_F3: MWUF2 Position                 */
#define LLWU_F3_MWUF3_MASK                       (0x01UL << LLWU_F3_MWUF3_SHIFT)                     /*!< LLWU_F3: MWUF3 Mask                     */
#define LLWU_F3_MWUF3_SHIFT                      3                                                   /*!< LLWU_F3: MWUF3 Position                 */
#define LLWU_F3_MWUF4_MASK                       (0x01UL << LLWU_F3_MWUF4_SHIFT)                     /*!< LLWU_F3: MWUF4 Mask                     */
#define LLWU_F3_MWUF4_SHIFT                      4                                                   /*!< LLWU_F3: MWUF4 Position                 */
#define LLWU_F3_MWUF5_MASK                       (0x01UL << LLWU_F3_MWUF5_SHIFT)                     /*!< LLWU_F3: MWUF5 Mask                     */
#define LLWU_F3_MWUF5_SHIFT                      5                                                   /*!< LLWU_F3: MWUF5 Position                 */
#define LLWU_F3_MWUF6_MASK                       (0x01UL << LLWU_F3_MWUF6_SHIFT)                     /*!< LLWU_F3: MWUF6 Mask                     */
#define LLWU_F3_MWUF6_SHIFT                      6                                                   /*!< LLWU_F3: MWUF6 Position                 */
#define LLWU_F3_MWUF7_MASK                       (0x01UL << LLWU_F3_MWUF7_SHIFT)                     /*!< LLWU_F3: MWUF7 Mask                     */
#define LLWU_F3_MWUF7_SHIFT                      7                                                   /*!< LLWU_F3: MWUF7 Position                 */

/* ------- LLWU_FILT                                ------ */
#define LLWU_FILT_FILTSEL_MASK                   (0x0FUL << LLWU_FILT_FILTSEL_SHIFT)                 /*!< LLWU_FILT: FILTSEL Mask                 */
#define LLWU_FILT_FILTSEL_SHIFT                  0                                                   /*!< LLWU_FILT: FILTSEL Position             */
#define LLWU_FILT_FILTSEL(x)                     (((x)<<LLWU_FILT_FILTSEL_SHIFT)&LLWU_FILT_FILTSEL_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTE_MASK                     (0x03UL << LLWU_FILT_FILTE_SHIFT)                   /*!< LLWU_FILT: FILTE Mask                   */
#define LLWU_FILT_FILTE_SHIFT                    5                                                   /*!< LLWU_FILT: FILTE Position               */
#define LLWU_FILT_FILTE(x)                       (((x)<<LLWU_FILT_FILTE_SHIFT)&LLWU_FILT_FILTE_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTF_MASK                     (0x01UL << LLWU_FILT_FILTF_SHIFT)                   /*!< LLWU_FILT: FILTF Mask                   */
#define LLWU_FILT_FILTF_SHIFT                    7                                                   /*!< LLWU_FILT: FILTF Position               */

/* ------- LLWU_RST                                 ------ */
#define LLWU_RST_RSTFILT_MASK                    (0x01UL << LLWU_RST_RSTFILT_SHIFT)                  /*!< LLWU_RST: RSTFILT Mask                  */
#define LLWU_RST_RSTFILT_SHIFT                   0                                                   /*!< LLWU_RST: RSTFILT Position              */
#define LLWU_RST_LLRSTE_MASK                     (0x01UL << LLWU_RST_LLRSTE_SHIFT)                   /*!< LLWU_RST: LLRSTE Mask                   */
#define LLWU_RST_LLRSTE_SHIFT                    1                                                   /*!< LLWU_RST: LLRSTE Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'LLWU' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define LLWU_PE1                       (LLWU->PE1)
#define LLWU_PE2                       (LLWU->PE2)
#define LLWU_PE3                       (LLWU->PE3)
#define LLWU_PE4                       (LLWU->PE4)
#define LLWU_ME                        (LLWU->ME)
#define LLWU_F1                        (LLWU->F1)
#define LLWU_F2                        (LLWU->F2)
#define LLWU_F3                        (LLWU->F3)
#define LLWU_FILT1                     (LLWU->FILT1)
#define LLWU_FILT2                     (LLWU->FILT2)
#define LLWU_RST                       (LLWU->RST)

/* ================================================================================ */
/* ================           LPTMR0 (file:LPTMR0_0)               ================ */
/* ================================================================================ */

/**
 * @brief Low Power Timer
 */
typedef struct {                                /*!<       LPTMR0 Structure                                             */
   __IO uint32_t  CSR;                          /*!< 0000: Control Status Register                                      */
   __IO uint32_t  PSR;                          /*!< 0004: Prescale Register                                            */
   __IO uint32_t  CMR;                          /*!< 0008: Compare Register                                             */
   __I  uint32_t  CNR;                          /*!< 000C: Counter Register                                             */
} LPTMR0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- LPTMR0_CSR                               ------ */
#define LPTMR_CSR_TEN_MASK                       (0x01UL << LPTMR_CSR_TEN_SHIFT)                     /*!< LPTMR0_CSR: TEN Mask                    */
#define LPTMR_CSR_TEN_SHIFT                      0                                                   /*!< LPTMR0_CSR: TEN Position                */
#define LPTMR_CSR_TMS_MASK                       (0x01UL << LPTMR_CSR_TMS_SHIFT)                     /*!< LPTMR0_CSR: TMS Mask                    */
#define LPTMR_CSR_TMS_SHIFT                      1                                                   /*!< LPTMR0_CSR: TMS Position                */
#define LPTMR_CSR_TFC_MASK                       (0x01UL << LPTMR_CSR_TFC_SHIFT)                     /*!< LPTMR0_CSR: TFC Mask                    */
#define LPTMR_CSR_TFC_SHIFT                      2                                                   /*!< LPTMR0_CSR: TFC Position                */
#define LPTMR_CSR_TPP_MASK                       (0x01UL << LPTMR_CSR_TPP_SHIFT)                     /*!< LPTMR0_CSR: TPP Mask                    */
#define LPTMR_CSR_TPP_SHIFT                      3                                                   /*!< LPTMR0_CSR: TPP Position                */
#define LPTMR_CSR_TPS_MASK                       (0x03UL << LPTMR_CSR_TPS_SHIFT)                     /*!< LPTMR0_CSR: TPS Mask                    */
#define LPTMR_CSR_TPS_SHIFT                      4                                                   /*!< LPTMR0_CSR: TPS Position                */
#define LPTMR_CSR_TPS(x)                         (((x)<<LPTMR_CSR_TPS_SHIFT)&LPTMR_CSR_TPS_MASK)     /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TIE_MASK                       (0x01UL << LPTMR_CSR_TIE_SHIFT)                     /*!< LPTMR0_CSR: TIE Mask                    */
#define LPTMR_CSR_TIE_SHIFT                      6                                                   /*!< LPTMR0_CSR: TIE Position                */
#define LPTMR_CSR_TCF_MASK                       (0x01UL << LPTMR_CSR_TCF_SHIFT)                     /*!< LPTMR0_CSR: TCF Mask                    */
#define LPTMR_CSR_TCF_SHIFT                      7                                                   /*!< LPTMR0_CSR: TCF Position                */

/* ------- LPTMR0_PSR                               ------ */
#define LPTMR_PSR_PCS_MASK                       (0x03UL << LPTMR_PSR_PCS_SHIFT)                     /*!< LPTMR0_PSR: PCS Mask                    */
#define LPTMR_PSR_PCS_SHIFT                      0                                                   /*!< LPTMR0_PSR: PCS Position                */
#define LPTMR_PSR_PCS(x)                         (((x)<<LPTMR_PSR_PCS_SHIFT)&LPTMR_PSR_PCS_MASK)     /*!< LPTMR0_PSR                              */
#define LPTMR_PSR_PBYP_MASK                      (0x01UL << LPTMR_PSR_PBYP_SHIFT)                    /*!< LPTMR0_PSR: PBYP Mask                   */
#define LPTMR_PSR_PBYP_SHIFT                     2                                                   /*!< LPTMR0_PSR: PBYP Position               */
#define LPTMR_PSR_PRESCALE_MASK                  (0x0FUL << LPTMR_PSR_PRESCALE_SHIFT)                /*!< LPTMR0_PSR: PRESCALE Mask               */
#define LPTMR_PSR_PRESCALE_SHIFT                 3                                                   /*!< LPTMR0_PSR: PRESCALE Position           */
#define LPTMR_PSR_PRESCALE(x)                    (((x)<<LPTMR_PSR_PRESCALE_SHIFT)&LPTMR_PSR_PRESCALE_MASK) /*!< LPTMR0_PSR                              */

/* ------- LPTMR0_CMR                               ------ */
#define LPTMR_CMR_COMPARE_MASK                   (0xFFFFUL << LPTMR_CMR_COMPARE_SHIFT)               /*!< LPTMR0_CMR: COMPARE Mask                */
#define LPTMR_CMR_COMPARE_SHIFT                  0                                                   /*!< LPTMR0_CMR: COMPARE Position            */
#define LPTMR_CMR_COMPARE(x)                     (((x)<<LPTMR_CMR_COMPARE_SHIFT)&LPTMR_CMR_COMPARE_MASK) /*!< LPTMR0_CMR                              */

/* ------- LPTMR0_CNR                               ------ */
#define LPTMR_CNR_COUNTER_MASK                   (0xFFFFUL << LPTMR_CNR_COUNTER_SHIFT)               /*!< LPTMR0_CNR: COUNTER Mask                */
#define LPTMR_CNR_COUNTER_SHIFT                  0                                                   /*!< LPTMR0_CNR: COUNTER Position            */
#define LPTMR_CNR_COUNTER(x)                     (((x)<<LPTMR_CNR_COUNTER_SHIFT)&LPTMR_CNR_COUNTER_MASK) /*!< LPTMR0_CNR                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define LPTMR0_CSR                     (LPTMR0->CSR)
#define LPTMR0_PSR                     (LPTMR0->PSR)
#define LPTMR0_CMR                     (LPTMR0->CMR)
#define LPTMR0_CNR                     (LPTMR0->CNR)

/* ================================================================================ */
/* ================           MCG (file:MCG_MK_0)                  ================ */
/* ================================================================================ */

/**
 * @brief Multipurpose Clock Generator module
 */
typedef struct {                                /*!<       MCG Structure                                                */
   __IO uint8_t   C1;                           /*!< 0000: Control 1 Register                                           */
   __IO uint8_t   C2;                           /*!< 0001: Control 2 Register                                           */
   __IO uint8_t   C3;                           /*!< 0002: Control 3 Register                                           */
   __IO uint8_t   C4;                           /*!< 0003: Control 4 Register                                           */
   __IO uint8_t   C5;                           /*!< 0004: Control 5 Register                                           */
   __IO uint8_t   C6;                           /*!< 0005: Control 6 Register                                           */
   __IO uint8_t   S;                            /*!< 0006: Status Register                                              */
   __I  uint8_t   RESERVED0;                    /*!< 0007:                                                              */
   __IO uint8_t   SC;                           /*!< 0008: Status and Control Register                                  */
   __I  uint8_t   RESERVED1;                    /*!< 0009:                                                              */
   __IO uint8_t   ATCVH;                        /*!< 000A: ATM Compare Value High                                       */
   __IO uint8_t   ATCVL;                        /*!< 000B: ATM Compare Value Low                                        */
   __IO uint8_t   C7;                           /*!< 000C: Control 7 Register                                           */
   __IO uint8_t   C8;                           /*!< 000D: Control 8 Register                                           */
} MCG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MCG_C1                                   ------ */
#define MCG_C1_IREFSTEN_MASK                     (0x01UL << MCG_C1_IREFSTEN_SHIFT)                   /*!< MCG_C1: IREFSTEN Mask                   */
#define MCG_C1_IREFSTEN_SHIFT                    0                                                   /*!< MCG_C1: IREFSTEN Position               */
#define MCG_C1_IRCLKEN_MASK                      (0x01UL << MCG_C1_IRCLKEN_SHIFT)                    /*!< MCG_C1: IRCLKEN Mask                    */
#define MCG_C1_IRCLKEN_SHIFT                     1                                                   /*!< MCG_C1: IRCLKEN Position                */
#define MCG_C1_IREFS_MASK                        (0x01UL << MCG_C1_IREFS_SHIFT)                      /*!< MCG_C1: IREFS Mask                      */
#define MCG_C1_IREFS_SHIFT                       2                                                   /*!< MCG_C1: IREFS Position                  */
#define MCG_C1_FRDIV_MASK                        (0x07UL << MCG_C1_FRDIV_SHIFT)                      /*!< MCG_C1: FRDIV Mask                      */
#define MCG_C1_FRDIV_SHIFT                       3                                                   /*!< MCG_C1: FRDIV Position                  */
#define MCG_C1_FRDIV(x)                          (((x)<<MCG_C1_FRDIV_SHIFT)&MCG_C1_FRDIV_MASK)       /*!< MCG_C1                                  */
#define MCG_C1_CLKS_MASK                         (0x03UL << MCG_C1_CLKS_SHIFT)                       /*!< MCG_C1: CLKS Mask                       */
#define MCG_C1_CLKS_SHIFT                        6                                                   /*!< MCG_C1: CLKS Position                   */
#define MCG_C1_CLKS(x)                           (((x)<<MCG_C1_CLKS_SHIFT)&MCG_C1_CLKS_MASK)         /*!< MCG_C1                                  */

/* ------- MCG_C2                                   ------ */
#define MCG_C2_IRCS_MASK                         (0x01UL << MCG_C2_IRCS_SHIFT)                       /*!< MCG_C2: IRCS Mask                       */
#define MCG_C2_IRCS_SHIFT                        0                                                   /*!< MCG_C2: IRCS Position                   */
#define MCG_C2_LP_MASK                           (0x01UL << MCG_C2_LP_SHIFT)                         /*!< MCG_C2: LP Mask                         */
#define MCG_C2_LP_SHIFT                          1                                                   /*!< MCG_C2: LP Position                     */
#define MCG_C2_EREFS0_MASK                       (0x01UL << MCG_C2_EREFS0_SHIFT)                     /*!< MCG_C2: EREFS0 Mask                     */
#define MCG_C2_EREFS0_SHIFT                      2                                                   /*!< MCG_C2: EREFS0 Position                 */
#define MCG_C2_HGO0_MASK                         (0x01UL << MCG_C2_HGO0_SHIFT)                       /*!< MCG_C2: HGO0 Mask                       */
#define MCG_C2_HGO0_SHIFT                        3                                                   /*!< MCG_C2: HGO0 Position                   */
#define MCG_C2_RANGE0_MASK                       (0x03UL << MCG_C2_RANGE0_SHIFT)                     /*!< MCG_C2: RANGE0 Mask                     */
#define MCG_C2_RANGE0_SHIFT                      4                                                   /*!< MCG_C2: RANGE0 Position                 */
#define MCG_C2_RANGE0(x)                         (((x)<<MCG_C2_RANGE0_SHIFT)&MCG_C2_RANGE0_MASK)     /*!< MCG_C2                                  */
#define MCG_C2_LOCRE0_MASK                       (0x01UL << MCG_C2_LOCRE0_SHIFT)                     /*!< MCG_C2: LOCRE0 Mask                     */
#define MCG_C2_LOCRE0_SHIFT                      7                                                   /*!< MCG_C2: LOCRE0 Position                 */

/* ------- MCG_C3                                   ------ */
#define MCG_C3_SCTRIM_MASK                       (0xFFUL << MCG_C3_SCTRIM_SHIFT)                     /*!< MCG_C3: SCTRIM Mask                     */
#define MCG_C3_SCTRIM_SHIFT                      0                                                   /*!< MCG_C3: SCTRIM Position                 */
#define MCG_C3_SCTRIM(x)                         (((x)<<MCG_C3_SCTRIM_SHIFT)&MCG_C3_SCTRIM_MASK)     /*!< MCG_C3                                  */

/* ------- MCG_C4                                   ------ */
#define MCG_C4_SCFTRIM_MASK                      (0x01UL << MCG_C4_SCFTRIM_SHIFT)                    /*!< MCG_C4: SCFTRIM Mask                    */
#define MCG_C4_SCFTRIM_SHIFT                     0                                                   /*!< MCG_C4: SCFTRIM Position                */
#define MCG_C4_FCTRIM_MASK                       (0x0FUL << MCG_C4_FCTRIM_SHIFT)                     /*!< MCG_C4: FCTRIM Mask                     */
#define MCG_C4_FCTRIM_SHIFT                      1                                                   /*!< MCG_C4: FCTRIM Position                 */
#define MCG_C4_FCTRIM(x)                         (((x)<<MCG_C4_FCTRIM_SHIFT)&MCG_C4_FCTRIM_MASK)     /*!< MCG_C4                                  */
#define MCG_C4_DRST_DRS_MASK                     (0x03UL << MCG_C4_DRST_DRS_SHIFT)                   /*!< MCG_C4: DRST_DRS Mask                   */
#define MCG_C4_DRST_DRS_SHIFT                    5                                                   /*!< MCG_C4: DRST_DRS Position               */
#define MCG_C4_DRST_DRS(x)                       (((x)<<MCG_C4_DRST_DRS_SHIFT)&MCG_C4_DRST_DRS_MASK) /*!< MCG_C4                                  */
#define MCG_C4_DMX32_MASK                        (0x01UL << MCG_C4_DMX32_SHIFT)                      /*!< MCG_C4: DMX32 Mask                      */
#define MCG_C4_DMX32_SHIFT                       7                                                   /*!< MCG_C4: DMX32 Position                  */

/* ------- MCG_C5                                   ------ */
#define MCG_C5_PRDIV0_MASK                       (0x1FUL << MCG_C5_PRDIV0_SHIFT)                     /*!< MCG_C5: PRDIV0 Mask                     */
#define MCG_C5_PRDIV0_SHIFT                      0                                                   /*!< MCG_C5: PRDIV0 Position                 */
#define MCG_C5_PRDIV0(x)                         (((x)<<MCG_C5_PRDIV0_SHIFT)&MCG_C5_PRDIV0_MASK)     /*!< MCG_C5                                  */
#define MCG_C5_PLLSTEN0_MASK                     (0x01UL << MCG_C5_PLLSTEN0_SHIFT)                   /*!< MCG_C5: PLLSTEN0 Mask                   */
#define MCG_C5_PLLSTEN0_SHIFT                    5                                                   /*!< MCG_C5: PLLSTEN0 Position               */
#define MCG_C5_PLLCLKEN0_MASK                    (0x01UL << MCG_C5_PLLCLKEN0_SHIFT)                  /*!< MCG_C5: PLLCLKEN0 Mask                  */
#define MCG_C5_PLLCLKEN0_SHIFT                   6                                                   /*!< MCG_C5: PLLCLKEN0 Position              */

/* ------- MCG_C6                                   ------ */
#define MCG_C6_VDIV0_MASK                        (0x1FUL << MCG_C6_VDIV0_SHIFT)                      /*!< MCG_C6: VDIV0 Mask                      */
#define MCG_C6_VDIV0_SHIFT                       0                                                   /*!< MCG_C6: VDIV0 Position                  */
#define MCG_C6_VDIV0(x)                          (((x)<<MCG_C6_VDIV0_SHIFT)&MCG_C6_VDIV0_MASK)       /*!< MCG_C6                                  */
#define MCG_C6_CME0_MASK                         (0x01UL << MCG_C6_CME0_SHIFT)                       /*!< MCG_C6: CME0 Mask                       */
#define MCG_C6_CME0_SHIFT                        5                                                   /*!< MCG_C6: CME0 Position                   */
#define MCG_C6_PLLS_MASK                         (0x01UL << MCG_C6_PLLS_SHIFT)                       /*!< MCG_C6: PLLS Mask                       */
#define MCG_C6_PLLS_SHIFT                        6                                                   /*!< MCG_C6: PLLS Position                   */
#define MCG_C6_LOLIE0_MASK                       (0x01UL << MCG_C6_LOLIE0_SHIFT)                     /*!< MCG_C6: LOLIE0 Mask                     */
#define MCG_C6_LOLIE0_SHIFT                      7                                                   /*!< MCG_C6: LOLIE0 Position                 */

/* ------- MCG_S                                    ------ */
#define MCG_S_IRCST_MASK                         (0x01UL << MCG_S_IRCST_SHIFT)                       /*!< MCG_S: IRCST Mask                       */
#define MCG_S_IRCST_SHIFT                        0                                                   /*!< MCG_S: IRCST Position                   */
#define MCG_S_OSCINIT0_MASK                      (0x01UL << MCG_S_OSCINIT0_SHIFT)                    /*!< MCG_S: OSCINIT0 Mask                    */
#define MCG_S_OSCINIT0_SHIFT                     1                                                   /*!< MCG_S: OSCINIT0 Position                */
#define MCG_S_CLKST_MASK                         (0x03UL << MCG_S_CLKST_SHIFT)                       /*!< MCG_S: CLKST Mask                       */
#define MCG_S_CLKST_SHIFT                        2                                                   /*!< MCG_S: CLKST Position                   */
#define MCG_S_CLKST(x)                           (((x)<<MCG_S_CLKST_SHIFT)&MCG_S_CLKST_MASK)         /*!< MCG_S                                   */
#define MCG_S_IREFST_MASK                        (0x01UL << MCG_S_IREFST_SHIFT)                      /*!< MCG_S: IREFST Mask                      */
#define MCG_S_IREFST_SHIFT                       4                                                   /*!< MCG_S: IREFST Position                  */
#define MCG_S_PLLST_MASK                         (0x01UL << MCG_S_PLLST_SHIFT)                       /*!< MCG_S: PLLST Mask                       */
#define MCG_S_PLLST_SHIFT                        5                                                   /*!< MCG_S: PLLST Position                   */
#define MCG_S_LOCK0_MASK                         (0x01UL << MCG_S_LOCK0_SHIFT)                       /*!< MCG_S: LOCK0 Mask                       */
#define MCG_S_LOCK0_SHIFT                        6                                                   /*!< MCG_S: LOCK0 Position                   */
#define MCG_S_LOLS0_MASK                         (0x01UL << MCG_S_LOLS0_SHIFT)                       /*!< MCG_S: LOLS0 Mask                       */
#define MCG_S_LOLS0_SHIFT                        7                                                   /*!< MCG_S: LOLS0 Position                   */

/* ------- MCG_SC                                   ------ */
#define MCG_SC_LOCS0_MASK                        (0x01UL << MCG_SC_LOCS0_SHIFT)                      /*!< MCG_SC: LOCS0 Mask                      */
#define MCG_SC_LOCS0_SHIFT                       0                                                   /*!< MCG_SC: LOCS0 Position                  */
#define MCG_SC_FCRDIV_MASK                       (0x07UL << MCG_SC_FCRDIV_SHIFT)                     /*!< MCG_SC: FCRDIV Mask                     */
#define MCG_SC_FCRDIV_SHIFT                      1                                                   /*!< MCG_SC: FCRDIV Position                 */
#define MCG_SC_FCRDIV(x)                         (((x)<<MCG_SC_FCRDIV_SHIFT)&MCG_SC_FCRDIV_MASK)     /*!< MCG_SC                                  */
#define MCG_SC_FLTPRSRV_MASK                     (0x01UL << MCG_SC_FLTPRSRV_SHIFT)                   /*!< MCG_SC: FLTPRSRV Mask                   */
#define MCG_SC_FLTPRSRV_SHIFT                    4                                                   /*!< MCG_SC: FLTPRSRV Position               */
#define MCG_SC_ATMF_MASK                         (0x01UL << MCG_SC_ATMF_SHIFT)                       /*!< MCG_SC: ATMF Mask                       */
#define MCG_SC_ATMF_SHIFT                        5                                                   /*!< MCG_SC: ATMF Position                   */
#define MCG_SC_ATMS_MASK                         (0x01UL << MCG_SC_ATMS_SHIFT)                       /*!< MCG_SC: ATMS Mask                       */
#define MCG_SC_ATMS_SHIFT                        6                                                   /*!< MCG_SC: ATMS Position                   */
#define MCG_SC_ATME_MASK                         (0x01UL << MCG_SC_ATME_SHIFT)                       /*!< MCG_SC: ATME Mask                       */
#define MCG_SC_ATME_SHIFT                        7                                                   /*!< MCG_SC: ATME Position                   */

/* ------- MCG_ATCVH                                ------ */
#define MCG_ATCVH_ATCVH_MASK                     (0xFFUL << MCG_ATCVH_ATCVH_SHIFT)                   /*!< MCG_ATCVH: ATCVH Mask                   */
#define MCG_ATCVH_ATCVH_SHIFT                    0                                                   /*!< MCG_ATCVH: ATCVH Position               */
#define MCG_ATCVH_ATCVH(x)                       (((x)<<MCG_ATCVH_ATCVH_SHIFT)&MCG_ATCVH_ATCVH_MASK) /*!< MCG_ATCVH                               */

/* ------- MCG_ATCVL                                ------ */
#define MCG_ATCVL_ATCVL_MASK                     (0xFFUL << MCG_ATCVL_ATCVL_SHIFT)                   /*!< MCG_ATCVL: ATCVL Mask                   */
#define MCG_ATCVL_ATCVL_SHIFT                    0                                                   /*!< MCG_ATCVL: ATCVL Position               */
#define MCG_ATCVL_ATCVL(x)                       (((x)<<MCG_ATCVL_ATCVL_SHIFT)&MCG_ATCVL_ATCVL_MASK) /*!< MCG_ATCVL                               */

/* ------- MCG_C7                                   ------ */
#define MCG_C7_OSCSEL_MASK                       (0x01UL << MCG_C7_OSCSEL_SHIFT)                     /*!< MCG_C7: OSCSEL Mask                     */
#define MCG_C7_OSCSEL_SHIFT                      0                                                   /*!< MCG_C7: OSCSEL Position                 */

/* ------- MCG_C8                                   ------ */
#define MCG_C8_LOCS1_MASK                        (0x01UL << MCG_C8_LOCS1_SHIFT)                      /*!< MCG_C8: LOCS1 Mask                      */
#define MCG_C8_LOCS1_SHIFT                       0                                                   /*!< MCG_C8: LOCS1 Position                  */
#define MCG_C8_CME1_MASK                         (0x01UL << MCG_C8_CME1_SHIFT)                       /*!< MCG_C8: CME1 Mask                       */
#define MCG_C8_CME1_SHIFT                        5                                                   /*!< MCG_C8: CME1 Position                   */
#define MCG_C8_LOLRE_MASK                        (0x01UL << MCG_C8_LOLRE_SHIFT)                      /*!< MCG_C8: LOLRE Mask                      */
#define MCG_C8_LOLRE_SHIFT                       6                                                   /*!< MCG_C8: LOLRE Position                  */
#define MCG_C8_LOCRE1_MASK                       (0x01UL << MCG_C8_LOCRE1_SHIFT)                     /*!< MCG_C8: LOCRE1 Mask                     */
#define MCG_C8_LOCRE1_SHIFT                      7                                                   /*!< MCG_C8: LOCRE1 Position                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define MCG_C1                         (MCG->C1)
#define MCG_C2                         (MCG->C2)
#define MCG_C3                         (MCG->C3)
#define MCG_C4                         (MCG->C4)
#define MCG_C5                         (MCG->C5)
#define MCG_C6                         (MCG->C6)
#define MCG_S                          (MCG->S)
#define MCG_SC                         (MCG->SC)
#define MCG_ATCVH                      (MCG->ATCVH)
#define MCG_ATCVL                      (MCG->ATCVL)
#define MCG_C7                         (MCG->C7)
#define MCG_C8                         (MCG->C8)

/* ================================================================================ */
/* ================           MCM (file:MCM_4)                     ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module
 */
typedef struct {                                /*!<       MCM Structure                                                */
   __I  uint32_t  RESERVED0[2];                 /*!< 0000:                                                              */
   __I  uint16_t  PLASC;                        /*!< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /*!< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /*!< 000C: Crossbar Switch (AXBS) Control Register                      */
} MCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MCM_PLASC                                ------ */
#define MCM_PLASC_ASC_MASK                       (0xFFUL << MCM_PLASC_ASC_SHIFT)                     /*!< MCM_PLASC: ASC Mask                     */
#define MCM_PLASC_ASC_SHIFT                      0                                                   /*!< MCM_PLASC: ASC Position                 */
#define MCM_PLASC_ASC(x)                         (((x)<<MCM_PLASC_ASC_SHIFT)&MCM_PLASC_ASC_MASK)     /*!< MCM_PLASC                               */

/* ------- MCM_PLAMC                                ------ */
#define MCM_PLAMC_AMC_MASK                       (0xFFUL << MCM_PLAMC_AMC_SHIFT)                     /*!< MCM_PLAMC: AMC Mask                     */
#define MCM_PLAMC_AMC_SHIFT                      0                                                   /*!< MCM_PLAMC: AMC Position                 */
#define MCM_PLAMC_AMC(x)                         (((x)<<MCM_PLAMC_AMC_SHIFT)&MCM_PLAMC_AMC_MASK)     /*!< MCM_PLAMC                               */

/* ------- MCM_PLACR                                ------ */
#define MCM_PLACR_ARB_MASK                       (0x01UL << MCM_PLACR_ARB_SHIFT)                     /*!< MCM_PLACR: ARB Mask                     */
#define MCM_PLACR_ARB_SHIFT                      9                                                   /*!< MCM_PLACR: ARB Position                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define MCM_PLASC                      (MCM->PLASC)
#define MCM_PLAMC                      (MCM->PLAMC)
#define MCM_PLACR                      (MCM->PLACR)

/* ================================================================================ */
/* ================           NV (file:NV_FTFE)                    ================ */
/* ================================================================================ */

/**
 * @brief Flash configuration field
 */
typedef struct {                                /*!<       NV Structure                                                 */
   __I  uint8_t   BACKKEY3;                     /*!< 0000: Backdoor Comparison Key 3                                    */
   __I  uint8_t   BACKKEY2;                     /*!< 0001: Backdoor Comparison Key 2                                    */
   __I  uint8_t   BACKKEY1;                     /*!< 0002: Backdoor Comparison Key 1                                    */
   __I  uint8_t   BACKKEY0;                     /*!< 0003: Backdoor Comparison Key 0                                    */
   __I  uint8_t   BACKKEY7;                     /*!< 0004: Backdoor Comparison Key 7                                    */
   __I  uint8_t   BACKKEY6;                     /*!< 0005: Backdoor Comparison Key 6                                    */
   __I  uint8_t   BACKKEY5;                     /*!< 0006: Backdoor Comparison Key 5                                    */
   __I  uint8_t   BACKKEY4;                     /*!< 0007: Backdoor Comparison Key 4                                    */
   __I  uint8_t   FPROT3;                       /*!< 0008: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT2;                       /*!< 0009: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT1;                       /*!< 000A: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT0;                       /*!< 000B: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FSEC;                         /*!< 000C: Non-volatile Flash Security Register                         */
   __I  uint8_t   FOPT;                         /*!< 000D: Non-volatile Flash Option Register                           */
   __I  uint8_t   FEPROT;                       /*!< 000E: Non-volatile EERAM Protection Register                       */
   __I  uint8_t   FDPROT;                       /*!< 000F: Non-volatile D-Flash Protection Register                     */
} NV_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- NV_BACKKEY                               ------ */
#define NV_BACKKEY_KEY_MASK                      (0xFFUL << NV_BACKKEY_KEY_SHIFT)                    /*!< NV_BACKKEY: KEY Mask                    */
#define NV_BACKKEY_KEY_SHIFT                     0                                                   /*!< NV_BACKKEY: KEY Position                */
#define NV_BACKKEY_KEY(x)                        (((x)<<NV_BACKKEY_KEY_SHIFT)&NV_BACKKEY_KEY_MASK)   /*!< NV_BACKKEY                              */

/* ------- NV_FPROT                                 ------ */
#define NV_FPROT_PROT_MASK                       (0xFFUL << NV_FPROT_PROT_SHIFT)                     /*!< NV_FPROT: PROT Mask                     */
#define NV_FPROT_PROT_SHIFT                      0                                                   /*!< NV_FPROT: PROT Position                 */
#define NV_FPROT_PROT(x)                         (((x)<<NV_FPROT_PROT_SHIFT)&NV_FPROT_PROT_MASK)     /*!< NV_FPROT                                */

/* ------- NV_FSEC                                  ------ */
#define NV_FSEC_SEC_MASK                         (0x03UL << NV_FSEC_SEC_SHIFT)                       /*!< NV_FSEC: SEC Mask                       */
#define NV_FSEC_SEC_SHIFT                        0                                                   /*!< NV_FSEC: SEC Position                   */
#define NV_FSEC_SEC(x)                           (((x)<<NV_FSEC_SEC_SHIFT)&NV_FSEC_SEC_MASK)         /*!< NV_FSEC                                 */
#define NV_FSEC_FSLACC_MASK                      (0x03UL << NV_FSEC_FSLACC_SHIFT)                    /*!< NV_FSEC: FSLACC Mask                    */
#define NV_FSEC_FSLACC_SHIFT                     2                                                   /*!< NV_FSEC: FSLACC Position                */
#define NV_FSEC_FSLACC(x)                        (((x)<<NV_FSEC_FSLACC_SHIFT)&NV_FSEC_FSLACC_MASK)   /*!< NV_FSEC                                 */
#define NV_FSEC_MEEN_MASK                        (0x03UL << NV_FSEC_MEEN_SHIFT)                      /*!< NV_FSEC: MEEN Mask                      */
#define NV_FSEC_MEEN_SHIFT                       4                                                   /*!< NV_FSEC: MEEN Position                  */
#define NV_FSEC_MEEN(x)                          (((x)<<NV_FSEC_MEEN_SHIFT)&NV_FSEC_MEEN_MASK)       /*!< NV_FSEC                                 */
#define NV_FSEC_KEYEN_MASK                       (0x03UL << NV_FSEC_KEYEN_SHIFT)                     /*!< NV_FSEC: KEYEN Mask                     */
#define NV_FSEC_KEYEN_SHIFT                      6                                                   /*!< NV_FSEC: KEYEN Position                 */
#define NV_FSEC_KEYEN(x)                         (((x)<<NV_FSEC_KEYEN_SHIFT)&NV_FSEC_KEYEN_MASK)     /*!< NV_FSEC                                 */

/* ------- NV_FOPT                                  ------ */
#define NV_FOPT_LPBOOT_MASK                      (0x01UL << NV_FOPT_LPBOOT_SHIFT)                    /*!< NV_FOPT: LPBOOT Mask                    */
#define NV_FOPT_LPBOOT_SHIFT                     0                                                   /*!< NV_FOPT: LPBOOT Position                */
#define NV_FOPT_EZPORT_DIS_MASK                  (0x01UL << NV_FOPT_EZPORT_DIS_SHIFT)                /*!< NV_FOPT: EZPORT_DIS Mask                */
#define NV_FOPT_EZPORT_DIS_SHIFT                 1                                                   /*!< NV_FOPT: EZPORT_DIS Position            */
#define NV_FOPT_NMI_DIS_MASK                     (0x01UL << NV_FOPT_NMI_DIS_SHIFT)                   /*!< NV_FOPT: NMI_DIS Mask                   */
#define NV_FOPT_NMI_DIS_SHIFT                    2                                                   /*!< NV_FOPT: NMI_DIS Position               */

/* ------- NV_FEPROT                                ------ */
#define NV_FEPROT_EPROT_MASK                     (0xFFUL << NV_FEPROT_EPROT_SHIFT)                   /*!< NV_FEPROT: EPROT Mask                   */
#define NV_FEPROT_EPROT_SHIFT                    0                                                   /*!< NV_FEPROT: EPROT Position               */
#define NV_FEPROT_EPROT(x)                       (((x)<<NV_FEPROT_EPROT_SHIFT)&NV_FEPROT_EPROT_MASK) /*!< NV_FEPROT                               */

/* ------- NV_FDPROT                                ------ */
#define NV_FDPROT_DPROT_MASK                     (0xFFUL << NV_FDPROT_DPROT_SHIFT)                   /*!< NV_FDPROT: DPROT Mask                   */
#define NV_FDPROT_DPROT_SHIFT                    0                                                   /*!< NV_FDPROT: DPROT Position               */
#define NV_FDPROT_DPROT(x)                       (((x)<<NV_FDPROT_DPROT_SHIFT)&NV_FDPROT_DPROT_MASK) /*!< NV_FDPROT                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Register Access macros                          ----------- */
/* -------------------------------------------------------------------------------- */

#define NV_BACKKEY3                    (NV->BACKKEY3)
#define NV_BACKKEY2                    (NV->BACKKEY2)
#define NV_BACKKEY1                    (NV->BACKKEY1)
#define NV_BACKKEY0                    (NV->BACKKEY0)
#define NV_BACKKEY7                    (NV->BACKKEY7)
#define NV_BACKKEY6                    (NV->BACKKEY6)
#define NV_BACKKEY5                    (NV->BACKKEY5)
#define NV_BACKKEY4                    (NV->BACKKEY4)
#define NV_FPROT3                      (NV->FPROT3)
#define NV_FPROT2                      (NV->FPROT2)
#define NV_FPROT1                      (NV->FPROT1)
#define NV_FPROT0                      (NV->FPROT0)
#define NV_FSEC                        (NV->FSEC)
#define NV_FOPT                        (NV->FOPT)
#define NV_FEPROT                      (NV->FEPROT)
#define NV_FDPROT                      (NV->FDPROT)

/* ================================================================================ */
/* ================           OSC0 (file:OSC_0)                    ================ */
/* ================================================================================ */

/**
 * @brief System Oscillator
 */
typedef struct {                                /*!<       OSC0 Structure                                               */
   __IO uint8_t   CR;                           /*!< 0000: Control Register                                             */
} OSC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'OSC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- OSC0_CR                                  ------ */
#define OSC_CR_SC16P_MASK                        (0x01UL << OSC_CR_SC16P_SHIFT)                      /*!< OSC0_CR: SC16P Mask                     */
#define OSC_CR_SC16P_SHIFT                       0                                                   /*!< OSC0_CR: SC16P Position                 */
#define OSC_CR_SC8P_MASK                         (0x01UL << OSC_CR_SC8P_SHIFT)                       /*!< OSC0_CR: SC8P Mask                      */
#define OSC_CR_SC8P_SHIFT                        1                                                   /*!< OSC0_CR: SC8P Position                  */
#define OSC_CR_SC4P_MASK                         (0x01UL << OSC_CR_SC4P_SHIFT)                       /*!< OSC0_CR: SC4P Mask                      */
#define OSC_CR_SC4P_SHIFT                        2                                                   /*!< OSC0_CR: SC4P Position                  */
#define OSC_CR_SC2P_MASK                         (0x01UL << OSC_CR_SC2P_SHIFT)                       /*!< OSC0_CR: SC2P Mask                      */
#define OSC_CR_SC2P_SHIFT                        3                                                   /*!< OSC0_CR: SC2P Position                  */
#define OSC_CR_EREFSTEN_MASK                     (0x01UL << OSC_CR_EREFSTEN_SHIFT)                   /*!< OSC0_CR: EREFSTEN Mask                  */
#define OSC_CR_EREFSTEN_SHIFT                    5                                                   /*!< OSC0_CR: EREFSTEN Position              */
#define OSC_CR_ERCLKEN_MASK                      (0x01UL << OSC_CR_ERCLKEN_SHIFT)                    /*!< OSC0_CR: ERCLKEN Mask                   */
#define OSC_CR_ERCLKEN_SHIFT                     7                                                   /*!< OSC0_CR: ERCLKEN Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'OSC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define OSC0_CR                        (OSC0->CR)

/* ================================================================================ */
/* ================           PDB0 (file:PDB0_2CH_1TRIG_2PO)       ================ */
/* ================================================================================ */

/**
 * @brief Programmable Delay Block (2 channels, 1 trigger, 2 pulse outputs)
 */
typedef struct {                                /*!<       PDB0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control Register                                  */
   __IO uint32_t  MOD;                          /*!< 0004: Modulus Register                                             */
   __I  uint32_t  CNT;                          /*!< 0008: Counter Register                                             */
   __IO uint32_t  IDLY;                         /*!< 000C: Interrupt Delay Register                                     */
   struct { /* (cluster) */                     /*!< 0010: (size=0x0050, 80)                                            */
      __IO uint32_t  C1;                        /*!< 0010: Channel  Control Register 1                                  */
      __IO uint32_t  S;                         /*!< 0014: Channel  Status Register                                     */
      __IO uint32_t  DLY[2];                    /*!< 0018: Channel n Delay  Register                                    */
      __I  uint32_t  RESERVED0[6];              /*!< 0020:                                                              */
   } CH[2];
   __I  uint32_t  RESERVED0[60];                /*!< 0060:                                                              */
   struct { /* (cluster) */                     /*!< 0150: (size=0x0008, 8)                                             */
      __IO uint32_t  INTC;                      /*!< 0150: DAC Interval Trigger n Control Register                      */
      __IO uint32_t  INT;                       /*!< 0154: DAC Interval n Register                                      */
   } DAC[1];
   __I  uint32_t  RESERVED1[14];                /*!< 0158:                                                              */
   __IO uint32_t  POEN;                         /*!< 0190: Pulse-Out Enable Register                                    */
   __IO uint32_t  PODLY[2];                     /*!< 0194: Pulse-Out  Delay Register                                    */
} PDB0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PDB0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PDB0_SC                                  ------ */
#define PDB0_SC_LDOK_MASK                        (0x01UL << PDB0_SC_LDOK_SHIFT)                      /*!< PDB0_SC: LDOK Mask                      */
#define PDB0_SC_LDOK_SHIFT                       0                                                   /*!< PDB0_SC: LDOK Position                  */
#define PDB0_SC_CONT_MASK                        (0x01UL << PDB0_SC_CONT_SHIFT)                      /*!< PDB0_SC: CONT Mask                      */
#define PDB0_SC_CONT_SHIFT                       1                                                   /*!< PDB0_SC: CONT Position                  */
#define PDB0_SC_MULT_MASK                        (0x03UL << PDB0_SC_MULT_SHIFT)                      /*!< PDB0_SC: MULT Mask                      */
#define PDB0_SC_MULT_SHIFT                       2                                                   /*!< PDB0_SC: MULT Position                  */
#define PDB0_SC_MULT(x)                          (((x)<<PDB0_SC_MULT_SHIFT)&PDB0_SC_MULT_MASK)       /*!< PDB0_SC                                 */
#define PDB0_SC_PDBIE_MASK                       (0x01UL << PDB0_SC_PDBIE_SHIFT)                     /*!< PDB0_SC: PDBIE Mask                     */
#define PDB0_SC_PDBIE_SHIFT                      5                                                   /*!< PDB0_SC: PDBIE Position                 */
#define PDB0_SC_PDBIF_MASK                       (0x01UL << PDB0_SC_PDBIF_SHIFT)                     /*!< PDB0_SC: PDBIF Mask                     */
#define PDB0_SC_PDBIF_SHIFT                      6                                                   /*!< PDB0_SC: PDBIF Position                 */
#define PDB0_SC_PDBEN_MASK                       (0x01UL << PDB0_SC_PDBEN_SHIFT)                     /*!< PDB0_SC: PDBEN Mask                     */
#define PDB0_SC_PDBEN_SHIFT                      7                                                   /*!< PDB0_SC: PDBEN Position                 */
#define PDB0_SC_TRGSEL_MASK                      (0x0FUL << PDB0_SC_TRGSEL_SHIFT)                    /*!< PDB0_SC: TRGSEL Mask                    */
#define PDB0_SC_TRGSEL_SHIFT                     8                                                   /*!< PDB0_SC: TRGSEL Position                */
#define PDB0_SC_TRGSEL(x)                        (((x)<<PDB0_SC_TRGSEL_SHIFT)&PDB0_SC_TRGSEL_MASK)   /*!< PDB0_SC                                 */
#define PDB0_SC_PRESCALER_MASK                   (0x07UL << PDB0_SC_PRESCALER_SHIFT)                 /*!< PDB0_SC: PRESCALER Mask                 */
#define PDB0_SC_PRESCALER_SHIFT                  12                                                  /*!< PDB0_SC: PRESCALER Position             */
#define PDB0_SC_PRESCALER(x)                     (((x)<<PDB0_SC_PRESCALER_SHIFT)&PDB0_SC_PRESCALER_MASK) /*!< PDB0_SC                                 */
#define PDB0_SC_DMAEN_MASK                       (0x01UL << PDB0_SC_DMAEN_SHIFT)                     /*!< PDB0_SC: DMAEN Mask                     */
#define PDB0_SC_DMAEN_SHIFT                      15                                                  /*!< PDB0_SC: DMAEN Position                 */
#define PDB0_SC_SWTRIG_MASK                      (0x01UL << PDB0_SC_SWTRIG_SHIFT)                    /*!< PDB0_SC: SWTRIG Mask                    */
#define PDB0_SC_SWTRIG_SHIFT                     16                                                  /*!< PDB0_SC: SWTRIG Position                */
#define PDB0_SC_PDBEIE_MASK                      (0x01UL << PDB0_SC_PDBEIE_SHIFT)                    /*!< PDB0_SC: PDBEIE Mask                    */
#define PDB0_SC_PDBEIE_SHIFT                     17                                                  /*!< PDB0_SC: PDBEIE Position                */
#define PDB0_SC_LDMOD_MASK                       (0x03UL << PDB0_SC_LDMOD_SHIFT)                     /*!< PDB0_SC: LDMOD Mask                     */
#define PDB0_SC_LDMOD_SHIFT                      18                                                  /*!< PDB0_SC: LDMOD Position                 */
#define PDB0_SC_LDMOD(x)                         (((x)<<PDB0_SC_LDMOD_SHIFT)&PDB0_SC_LDMOD_MASK)     /*!< PDB0_SC                                 */

/* ------- PDB0_MOD                                 ------ */
#define PDB0_MOD_MOD_MASK                        (0xFFFFUL << PDB0_MOD_MOD_SHIFT)                    /*!< PDB0_MOD: MOD Mask                      */
#define PDB0_MOD_MOD_SHIFT                       0                                                   /*!< PDB0_MOD: MOD Position                  */
#define PDB0_MOD_MOD(x)                          (((x)<<PDB0_MOD_MOD_SHIFT)&PDB0_MOD_MOD_MASK)       /*!< PDB0_MOD                                */

/* ------- PDB0_CNT                                 ------ */
#define PDB0_CNT_CNT_MASK                        (0xFFFFUL << PDB0_CNT_CNT_SHIFT)                    /*!< PDB0_CNT: CNT Mask                      */
#define PDB0_CNT_CNT_SHIFT                       0                                                   /*!< PDB0_CNT: CNT Position                  */
#define PDB0_CNT_CNT(x)                          (((x)<<PDB0_CNT_CNT_SHIFT)&PDB0_CNT_CNT_MASK)       /*!< PDB0_CNT                                */

/* ------- PDB0_IDLY                                ------ */
#define PDB0_IDLY_IDLY_MASK                      (0xFFFFUL << PDB0_IDLY_IDLY_SHIFT)                  /*!< PDB0_IDLY: IDLY Mask                    */
#define PDB0_IDLY_IDLY_SHIFT                     0                                                   /*!< PDB0_IDLY: IDLY Position                */
#define PDB0_IDLY_IDLY(x)                        (((x)<<PDB0_IDLY_IDLY_SHIFT)&PDB0_IDLY_IDLY_MASK)   /*!< PDB0_IDLY                               */

/* ------- PDB0_C1                                  ------ */
#define PDB0_C1_EN_MASK                          (0xFFUL << PDB0_C1_EN_SHIFT)                        /*!< PDB0_C1: EN Mask                        */
#define PDB0_C1_EN_SHIFT                         0                                                   /*!< PDB0_C1: EN Position                    */
#define PDB0_C1_EN(x)                            (((x)<<PDB0_C1_EN_SHIFT)&PDB0_C1_EN_MASK)           /*!< PDB0_C1                                 */
#define PDB0_C1_TOS_MASK                         (0xFFUL << PDB0_C1_TOS_SHIFT)                       /*!< PDB0_C1: TOS Mask                       */
#define PDB0_C1_TOS_SHIFT                        8                                                   /*!< PDB0_C1: TOS Position                   */
#define PDB0_C1_TOS(x)                           (((x)<<PDB0_C1_TOS_SHIFT)&PDB0_C1_TOS_MASK)         /*!< PDB0_C1                                 */
#define PDB0_C1_BB_MASK                          (0xFFUL << PDB0_C1_BB_SHIFT)                        /*!< PDB0_C1: BB Mask                        */
#define PDB0_C1_BB_SHIFT                         16                                                  /*!< PDB0_C1: BB Position                    */
#define PDB0_C1_BB(x)                            (((x)<<PDB0_C1_BB_SHIFT)&PDB0_C1_BB_MASK)           /*!< PDB0_C1                                 */

/* ------- PDB0_S                                   ------ */
#define PDB0_S_ERR_MASK                          (0xFFUL << PDB0_S_ERR_SHIFT)                        /*!< PDB0_S: ERR Mask                        */
#define PDB0_S_ERR_SHIFT                         0                                                   /*!< PDB0_S: ERR Position                    */
#define PDB0_S_ERR(x)                            (((x)<<PDB0_S_ERR_SHIFT)&PDB0_S_ERR_MASK)           /*!< PDB0_S                                  */
#define PDB0_S_CF_MASK                           (0xFFUL << PDB0_S_CF_SHIFT)                         /*!< PDB0_S: CF Mask                         */
#define PDB0_S_CF_SHIFT                          16                                                  /*!< PDB0_S: CF Position                     */
#define PDB0_S_CF(x)                             (((x)<<PDB0_S_CF_SHIFT)&PDB0_S_CF_MASK)             /*!< PDB0_S                                  */

/* ------- PDB0_DLY                                 ------ */
#define PDB0_DLY_DLY_MASK                        (0xFFFFUL << PDB0_DLY_DLY_SHIFT)                    /*!< PDB0_DLY: DLY Mask                      */
#define PDB0_DLY_DLY_SHIFT                       0                                                   /*!< PDB0_DLY: DLY Position                  */
#define PDB0_DLY_DLY(x)                          (((x)<<PDB0_DLY_DLY_SHIFT)&PDB0_DLY_DLY_MASK)       /*!< PDB0_DLY                                */

/* ------- PDB0_INTC                                ------ */
#define PDB0_INTC_TOE_MASK                       (0x01UL << PDB0_INTC_TOE_SHIFT)                     /*!< PDB0_INTC: TOE Mask                     */
#define PDB0_INTC_TOE_SHIFT                      0                                                   /*!< PDB0_INTC: TOE Position                 */
#define PDB0_INTC_EXT_MASK                       (0x01UL << PDB0_INTC_EXT_SHIFT)                     /*!< PDB0_INTC: EXT Mask                     */
#define PDB0_INTC_EXT_SHIFT                      1                                                   /*!< PDB0_INTC: EXT Position                 */

/* ------- PDB0_INT                                 ------ */
#define PDB0_INT_INT_MASK                        (0xFFFFUL << PDB0_INT_INT_SHIFT)                    /*!< PDB0_INT: INT Mask                      */
#define PDB0_INT_INT_SHIFT                       0                                                   /*!< PDB0_INT: INT Position                  */
#define PDB0_INT_INT(x)                          (((x)<<PDB0_INT_INT_SHIFT)&PDB0_INT_INT_MASK)       /*!< PDB0_INT                                */

/* ------- PDB0_POEN                                ------ */
#define PDB0_POEN_POEN_MASK                      (0xFFUL << PDB0_POEN_POEN_SHIFT)                    /*!< PDB0_POEN: POEN Mask                    */
#define PDB0_POEN_POEN_SHIFT                     0                                                   /*!< PDB0_POEN: POEN Position                */
#define PDB0_POEN_POEN(x)                        (((x)<<PDB0_POEN_POEN_SHIFT)&PDB0_POEN_POEN_MASK)   /*!< PDB0_POEN                               */

/* ------- PDB0_PODLY                               ------ */
#define PDB0_PODLY_DLY2_MASK                     (0xFFFFUL << PDB0_PODLY_DLY2_SHIFT)                 /*!< PDB0_PODLY: DLY2 Mask                   */
#define PDB0_PODLY_DLY2_SHIFT                    0                                                   /*!< PDB0_PODLY: DLY2 Position               */
#define PDB0_PODLY_DLY2(x)                       (((x)<<PDB0_PODLY_DLY2_SHIFT)&PDB0_PODLY_DLY2_MASK) /*!< PDB0_PODLY                              */
#define PDB0_PODLY_DLY1_MASK                     (0xFFFFUL << PDB0_PODLY_DLY1_SHIFT)                 /*!< PDB0_PODLY: DLY1 Mask                   */
#define PDB0_PODLY_DLY1_SHIFT                    16                                                  /*!< PDB0_PODLY: DLY1 Position               */
#define PDB0_PODLY_DLY1(x)                       (((x)<<PDB0_PODLY_DLY1_SHIFT)&PDB0_PODLY_DLY1_MASK) /*!< PDB0_PODLY                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'PDB0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define PDB0_SC                        (PDB0->SC)
#define PDB0_MOD                       (PDB0->MOD)
#define PDB0_CNT                       (PDB0->CNT)
#define PDB0_IDLY                      (PDB0->IDLY)
#define PDB0_CH0C1                     (PDB0->CH[0].C1)
#define PDB0_CH0S                      (PDB0->CH[0].S)
#define PDB0_CH0DLY0                   (PDB0->CH[0].DLY0)
#define PDB0_CH0DLY1                   (PDB0->CH[0].DLY1)
#define PDB0_CH1C1                     (PDB0->CH[1].C1)
#define PDB0_CH1S                      (PDB0->CH[1].S)
#define PDB0_CH1DLY0                   (PDB0->CH[1].DLY0)
#define PDB0_CH1DLY1                   (PDB0->CH[1].DLY1)
#define PDB0_DAC0INTC                  (PDB0->DAC[0].INTC)
#define PDB0_DAC0INT                   (PDB0->DAC[0].INT)
#define PDB0_POEN                      (PDB0->POEN)
#define PDB0_PO0DLY                    (PDB0->PODLY[0])
#define PDB0_PO1DLY                    (PDB0->PODLY[1])

/* ================================================================================ */
/* ================           PIT (file:PIT_4CH_CHAIN)             ================ */
/* ================================================================================ */

/**
 * @brief Periodic Interrupt Timer (4 channels)
 */
typedef struct {                                /*!<       PIT Structure                                                */
   __IO uint32_t  MCR;                          /*!< 0000: Module Control Register                                      */
   __I  uint32_t  RESERVED0[63];                /*!< 0004:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0040, 64)                                            */
      __IO uint32_t  LDVAL;                     /*!< 0100: Timer Load Value Register                                    */
      __I  uint32_t  CVAL;                      /*!< 0104: Current Timer Value Register                                 */
      __IO uint32_t  TCTRL;                     /*!< 0108: Timer Control Register                                       */
      __IO uint32_t  TFLG;                      /*!< 010C: Timer Flag Register                                          */
   } CS[4];
} PIT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PIT_MCR                                  ------ */
#define PIT_MCR_FRZ_MASK                         (0x01UL << PIT_MCR_FRZ_SHIFT)                       /*!< PIT_MCR: FRZ Mask                       */
#define PIT_MCR_FRZ_SHIFT                        0                                                   /*!< PIT_MCR: FRZ Position                   */
#define PIT_MCR_MDIS_MASK                        (0x01UL << PIT_MCR_MDIS_SHIFT)                      /*!< PIT_MCR: MDIS Mask                      */
#define PIT_MCR_MDIS_SHIFT                       1                                                   /*!< PIT_MCR: MDIS Position                  */

/* ------- PIT_LDVAL                                ------ */
#define PIT_LDVAL_TSV_MASK                       (0xFFFFFFFFUL << PIT_LDVAL_TSV_SHIFT)               /*!< PIT_LDVAL: TSV Mask                     */
#define PIT_LDVAL_TSV_SHIFT                      0                                                   /*!< PIT_LDVAL: TSV Position                 */
#define PIT_LDVAL_TSV(x)                         (((x)<<PIT_LDVAL_TSV_SHIFT)&PIT_LDVAL_TSV_MASK)     /*!< PIT_LDVAL                               */

/* ------- PIT_CVAL                                 ------ */
#define PIT_CVAL_TVL_MASK                        (0xFFFFFFFFUL << PIT_CVAL_TVL_SHIFT)                /*!< PIT_CVAL: TVL Mask                      */
#define PIT_CVAL_TVL_SHIFT                       0                                                   /*!< PIT_CVAL: TVL Position                  */
#define PIT_CVAL_TVL(x)                          (((x)<<PIT_CVAL_TVL_SHIFT)&PIT_CVAL_TVL_MASK)       /*!< PIT_CVAL                                */

/* ------- PIT_TCTRL                                ------ */
#define PIT_TCTRL_TEN_MASK                       (0x01UL << PIT_TCTRL_TEN_SHIFT)                     /*!< PIT_TCTRL: TEN Mask                     */
#define PIT_TCTRL_TEN_SHIFT                      0                                                   /*!< PIT_TCTRL: TEN Position                 */
#define PIT_TCTRL_TIE_MASK                       (0x01UL << PIT_TCTRL_TIE_SHIFT)                     /*!< PIT_TCTRL: TIE Mask                     */
#define PIT_TCTRL_TIE_SHIFT                      1                                                   /*!< PIT_TCTRL: TIE Position                 */
#define PIT_TCTRL_CHN_MASK                       (0x01UL << PIT_TCTRL_CHN_SHIFT)                     /*!< PIT_TCTRL: CHN Mask                     */
#define PIT_TCTRL_CHN_SHIFT                      2                                                   /*!< PIT_TCTRL: CHN Position                 */

/* ------- PIT_TFLG                                 ------ */
#define PIT_TFLG_TIF_MASK                        (0x01UL << PIT_TFLG_TIF_SHIFT)                      /*!< PIT_TFLG: TIF Mask                      */
#define PIT_TFLG_TIF_SHIFT                       0                                                   /*!< PIT_TFLG: TIF Position                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define PIT_MCR                        (PIT->MCR)
#define PIT_LDVAL0                     (PIT->CS[0].LDVAL)
#define PIT_CVAL0                      (PIT->CS[0].CVAL)
#define PIT_TCTRL0                     (PIT->CS[0].TCTRL)
#define PIT_TFLG0                      (PIT->CS[0].TFLG)
#define PIT_LDVAL1                     (PIT->CS[1].LDVAL)
#define PIT_CVAL1                      (PIT->CS[1].CVAL)
#define PIT_TCTRL1                     (PIT->CS[1].TCTRL)
#define PIT_TFLG1                      (PIT->CS[1].TFLG)
#define PIT_LDVAL2                     (PIT->CS[2].LDVAL)
#define PIT_CVAL2                      (PIT->CS[2].CVAL)
#define PIT_TCTRL2                     (PIT->CS[2].TCTRL)
#define PIT_TFLG2                      (PIT->CS[2].TFLG)
#define PIT_LDVAL3                     (PIT->CS[3].LDVAL)
#define PIT_CVAL3                      (PIT->CS[3].CVAL)
#define PIT_TCTRL3                     (PIT->CS[3].TCTRL)
#define PIT_TFLG3                      (PIT->CS[3].TFLG)

/* ================================================================================ */
/* ================           PMC (file:PMC_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Power Management Controller
 */
typedef struct {                                /*!<       PMC Structure                                                */
   __IO uint8_t   LVDSC1;                       /*!< 0000: Low Voltage Status and Control 1                             */
   __IO uint8_t   LVDSC2;                       /*!< 0001: Low Voltage Status and Control 2                             */
   __IO uint8_t   REGSC;                        /*!< 0002: Regulator Status and Control                                 */
} PMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PMC_LVDSC1                               ------ */
#define PMC_LVDSC1_LVDV_MASK                     (0x03UL << PMC_LVDSC1_LVDV_SHIFT)                   /*!< PMC_LVDSC1: LVDV Mask                   */
#define PMC_LVDSC1_LVDV_SHIFT                    0                                                   /*!< PMC_LVDSC1: LVDV Position               */
#define PMC_LVDSC1_LVDV(x)                       (((x)<<PMC_LVDSC1_LVDV_SHIFT)&PMC_LVDSC1_LVDV_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDRE_MASK                    (0x01UL << PMC_LVDSC1_LVDRE_SHIFT)                  /*!< PMC_LVDSC1: LVDRE Mask                  */
#define PMC_LVDSC1_LVDRE_SHIFT                   4                                                   /*!< PMC_LVDSC1: LVDRE Position              */
#define PMC_LVDSC1_LVDIE_MASK                    (0x01UL << PMC_LVDSC1_LVDIE_SHIFT)                  /*!< PMC_LVDSC1: LVDIE Mask                  */
#define PMC_LVDSC1_LVDIE_SHIFT                   5                                                   /*!< PMC_LVDSC1: LVDIE Position              */
#define PMC_LVDSC1_LVDACK_MASK                   (0x01UL << PMC_LVDSC1_LVDACK_SHIFT)                 /*!< PMC_LVDSC1: LVDACK Mask                 */
#define PMC_LVDSC1_LVDACK_SHIFT                  6                                                   /*!< PMC_LVDSC1: LVDACK Position             */
#define PMC_LVDSC1_LVDF_MASK                     (0x01UL << PMC_LVDSC1_LVDF_SHIFT)                   /*!< PMC_LVDSC1: LVDF Mask                   */
#define PMC_LVDSC1_LVDF_SHIFT                    7                                                   /*!< PMC_LVDSC1: LVDF Position               */

/* ------- PMC_LVDSC2                               ------ */
#define PMC_LVDSC2_LVWV_MASK                     (0x03UL << PMC_LVDSC2_LVWV_SHIFT)                   /*!< PMC_LVDSC2: LVWV Mask                   */
#define PMC_LVDSC2_LVWV_SHIFT                    0                                                   /*!< PMC_LVDSC2: LVWV Position               */
#define PMC_LVDSC2_LVWV(x)                       (((x)<<PMC_LVDSC2_LVWV_SHIFT)&PMC_LVDSC2_LVWV_MASK) /*!< PMC_LVDSC2                              */
#define PMC_LVDSC2_LVWIE_MASK                    (0x01UL << PMC_LVDSC2_LVWIE_SHIFT)                  /*!< PMC_LVDSC2: LVWIE Mask                  */
#define PMC_LVDSC2_LVWIE_SHIFT                   5                                                   /*!< PMC_LVDSC2: LVWIE Position              */
#define PMC_LVDSC2_LVWACK_MASK                   (0x01UL << PMC_LVDSC2_LVWACK_SHIFT)                 /*!< PMC_LVDSC2: LVWACK Mask                 */
#define PMC_LVDSC2_LVWACK_SHIFT                  6                                                   /*!< PMC_LVDSC2: LVWACK Position             */
#define PMC_LVDSC2_LVWF_MASK                     (0x01UL << PMC_LVDSC2_LVWF_SHIFT)                   /*!< PMC_LVDSC2: LVWF Mask                   */
#define PMC_LVDSC2_LVWF_SHIFT                    7                                                   /*!< PMC_LVDSC2: LVWF Position               */

/* ------- PMC_REGSC                                ------ */
#define PMC_REGSC_BGBE_MASK                      (0x01UL << PMC_REGSC_BGBE_SHIFT)                    /*!< PMC_REGSC: BGBE Mask                    */
#define PMC_REGSC_BGBE_SHIFT                     0                                                   /*!< PMC_REGSC: BGBE Position                */
#define PMC_REGSC_REGONS_MASK                    (0x01UL << PMC_REGSC_REGONS_SHIFT)                  /*!< PMC_REGSC: REGONS Mask                  */
#define PMC_REGSC_REGONS_SHIFT                   2                                                   /*!< PMC_REGSC: REGONS Position              */
#define PMC_REGSC_ACKISO_MASK                    (0x01UL << PMC_REGSC_ACKISO_SHIFT)                  /*!< PMC_REGSC: ACKISO Mask                  */
#define PMC_REGSC_ACKISO_SHIFT                   3                                                   /*!< PMC_REGSC: ACKISO Position              */
#define PMC_REGSC_BGEN_MASK                      (0x01UL << PMC_REGSC_BGEN_SHIFT)                    /*!< PMC_REGSC: BGEN Mask                    */
#define PMC_REGSC_BGEN_SHIFT                     4                                                   /*!< PMC_REGSC: BGEN Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define PMC_LVDSC1                     (PMC->LVDSC1)
#define PMC_LVDSC2                     (PMC->LVDSC2)
#define PMC_REGSC                      (PMC->REGSC)

/* ================================================================================ */
/* ================           PORTA (file:PORTA_FILT)              ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef struct {                                /*!<       PORTA Structure                                              */
   __IO uint32_t  PCR[32];                      /*!< 0000: Pin Control Register                                         */
   __IO uint32_t  GPCLR;                        /*!< 0080: Global Pin Control Low Register                              */
   __IO uint32_t  GPCHR;                        /*!< 0084: Global Pin Control High Register                             */
   __I  uint32_t  RESERVED0[6];                 /*!< 0088:                                                              */
   __IO uint32_t  ISFR;                         /*!< 00A0: Interrupt Status Flag Register                               */
   __I  uint32_t  RESERVED1[7];                 /*!< 00A4:                                                              */
   __IO uint32_t  DFER;                         /*!< 00C0: Digital Filter Enable Register                               */
   __IO uint32_t  DFCR;                         /*!< 00C4: Digital Filter Clock Register                                */
   __IO uint32_t  DFWR;                         /*!< 00C8: Digital Filter Width Register                                */
} PORTA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PORTA_PCR                                ------ */
#define PORT_PCR_PS_MASK                         (0x01UL << PORT_PCR_PS_SHIFT)                       /*!< PORTA_PCR: PS Mask                      */
#define PORT_PCR_PS_SHIFT                        0                                                   /*!< PORTA_PCR: PS Position                  */
#define PORT_PCR_PE_MASK                         (0x01UL << PORT_PCR_PE_SHIFT)                       /*!< PORTA_PCR: PE Mask                      */
#define PORT_PCR_PE_SHIFT                        1                                                   /*!< PORTA_PCR: PE Position                  */
#define PORT_PCR_SRE_MASK                        (0x01UL << PORT_PCR_SRE_SHIFT)                      /*!< PORTA_PCR: SRE Mask                     */
#define PORT_PCR_SRE_SHIFT                       2                                                   /*!< PORTA_PCR: SRE Position                 */
#define PORT_PCR_PFE_MASK                        (0x01UL << PORT_PCR_PFE_SHIFT)                      /*!< PORTA_PCR: PFE Mask                     */
#define PORT_PCR_PFE_SHIFT                       4                                                   /*!< PORTA_PCR: PFE Position                 */
#define PORT_PCR_ODE_MASK                        (0x01UL << PORT_PCR_ODE_SHIFT)                      /*!< PORTA_PCR: ODE Mask                     */
#define PORT_PCR_ODE_SHIFT                       5                                                   /*!< PORTA_PCR: ODE Position                 */
#define PORT_PCR_DSE_MASK                        (0x01UL << PORT_PCR_DSE_SHIFT)                      /*!< PORTA_PCR: DSE Mask                     */
#define PORT_PCR_DSE_SHIFT                       6                                                   /*!< PORTA_PCR: DSE Position                 */
#define PORT_PCR_MUX_MASK                        (0x07UL << PORT_PCR_MUX_SHIFT)                      /*!< PORTA_PCR: MUX Mask                     */
#define PORT_PCR_MUX_SHIFT                       8                                                   /*!< PORTA_PCR: MUX Position                 */
#define PORT_PCR_MUX(x)                          (((x)<<PORT_PCR_MUX_SHIFT)&PORT_PCR_MUX_MASK)       /*!< PORTA_PCR                               */
#define PORT_PCR_LK_MASK                         (0x01UL << PORT_PCR_LK_SHIFT)                       /*!< PORTA_PCR: LK Mask                      */
#define PORT_PCR_LK_SHIFT                        15                                                  /*!< PORTA_PCR: LK Position                  */
#define PORT_PCR_IRQC_MASK                       (0x0FUL << PORT_PCR_IRQC_SHIFT)                     /*!< PORTA_PCR: IRQC Mask                    */
#define PORT_PCR_IRQC_SHIFT                      16                                                  /*!< PORTA_PCR: IRQC Position                */
#define PORT_PCR_IRQC(x)                         (((x)<<PORT_PCR_IRQC_SHIFT)&PORT_PCR_IRQC_MASK)     /*!< PORTA_PCR                               */
#define PORT_PCR_ISF_MASK                        (0x01UL << PORT_PCR_ISF_SHIFT)                      /*!< PORTA_PCR: ISF Mask                     */
#define PORT_PCR_ISF_SHIFT                       24                                                  /*!< PORTA_PCR: ISF Position                 */

/* ------- PORTA_GPCLR                              ------ */
#define PORT_GPCLR_GPWD_MASK                     (0xFFFFUL << PORT_GPCLR_GPWD_SHIFT)                 /*!< PORTA_GPCLR: GPWD Mask                  */
#define PORT_GPCLR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCLR: GPWD Position              */
#define PORT_GPCLR_GPWD(x)                       (((x)<<PORT_GPCLR_GPWD_SHIFT)&PORT_GPCLR_GPWD_MASK) /*!< PORTA_GPCLR                             */
#define PORT_GPCLR_GPWE_MASK                     (0xFFFFUL << PORT_GPCLR_GPWE_SHIFT)                 /*!< PORTA_GPCLR: GPWE Mask                  */
#define PORT_GPCLR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCLR: GPWE Position              */
#define PORT_GPCLR_GPWE(x)                       (((x)<<PORT_GPCLR_GPWE_SHIFT)&PORT_GPCLR_GPWE_MASK) /*!< PORTA_GPCLR                             */

/* ------- PORTA_GPCHR                              ------ */
#define PORT_GPCHR_GPWD_MASK                     (0xFFFFUL << PORT_GPCHR_GPWD_SHIFT)                 /*!< PORTA_GPCHR: GPWD Mask                  */
#define PORT_GPCHR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCHR: GPWD Position              */
#define PORT_GPCHR_GPWD(x)                       (((x)<<PORT_GPCHR_GPWD_SHIFT)&PORT_GPCHR_GPWD_MASK) /*!< PORTA_GPCHR                             */
#define PORT_GPCHR_GPWE_MASK                     (0xFFFFUL << PORT_GPCHR_GPWE_SHIFT)                 /*!< PORTA_GPCHR: GPWE Mask                  */
#define PORT_GPCHR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCHR: GPWE Position              */
#define PORT_GPCHR_GPWE(x)                       (((x)<<PORT_GPCHR_GPWE_SHIFT)&PORT_GPCHR_GPWE_MASK) /*!< PORTA_GPCHR                             */

/* ------- PORTA_ISFR                               ------ */
#define PORT_ISFR_ISF0_MASK                      (0x01UL << PORT_ISFR_ISF0_SHIFT)                    /*!< PORTA_ISFR: ISF0 Mask                   */
#define PORT_ISFR_ISF0_SHIFT                     0                                                   /*!< PORTA_ISFR: ISF0 Position               */
#define PORT_ISFR_ISF1_MASK                      (0x01UL << PORT_ISFR_ISF1_SHIFT)                    /*!< PORTA_ISFR: ISF1 Mask                   */
#define PORT_ISFR_ISF1_SHIFT                     1                                                   /*!< PORTA_ISFR: ISF1 Position               */
#define PORT_ISFR_ISF2_MASK                      (0x01UL << PORT_ISFR_ISF2_SHIFT)                    /*!< PORTA_ISFR: ISF2 Mask                   */
#define PORT_ISFR_ISF2_SHIFT                     2                                                   /*!< PORTA_ISFR: ISF2 Position               */
#define PORT_ISFR_ISF3_MASK                      (0x01UL << PORT_ISFR_ISF3_SHIFT)                    /*!< PORTA_ISFR: ISF3 Mask                   */
#define PORT_ISFR_ISF3_SHIFT                     3                                                   /*!< PORTA_ISFR: ISF3 Position               */
#define PORT_ISFR_ISF4_MASK                      (0x01UL << PORT_ISFR_ISF4_SHIFT)                    /*!< PORTA_ISFR: ISF4 Mask                   */
#define PORT_ISFR_ISF4_SHIFT                     4                                                   /*!< PORTA_ISFR: ISF4 Position               */
#define PORT_ISFR_ISF5_MASK                      (0x01UL << PORT_ISFR_ISF5_SHIFT)                    /*!< PORTA_ISFR: ISF5 Mask                   */
#define PORT_ISFR_ISF5_SHIFT                     5                                                   /*!< PORTA_ISFR: ISF5 Position               */
#define PORT_ISFR_ISF6_MASK                      (0x01UL << PORT_ISFR_ISF6_SHIFT)                    /*!< PORTA_ISFR: ISF6 Mask                   */
#define PORT_ISFR_ISF6_SHIFT                     6                                                   /*!< PORTA_ISFR: ISF6 Position               */
#define PORT_ISFR_ISF7_MASK                      (0x01UL << PORT_ISFR_ISF7_SHIFT)                    /*!< PORTA_ISFR: ISF7 Mask                   */
#define PORT_ISFR_ISF7_SHIFT                     7                                                   /*!< PORTA_ISFR: ISF7 Position               */
#define PORT_ISFR_ISF8_MASK                      (0x01UL << PORT_ISFR_ISF8_SHIFT)                    /*!< PORTA_ISFR: ISF8 Mask                   */
#define PORT_ISFR_ISF8_SHIFT                     8                                                   /*!< PORTA_ISFR: ISF8 Position               */
#define PORT_ISFR_ISF9_MASK                      (0x01UL << PORT_ISFR_ISF9_SHIFT)                    /*!< PORTA_ISFR: ISF9 Mask                   */
#define PORT_ISFR_ISF9_SHIFT                     9                                                   /*!< PORTA_ISFR: ISF9 Position               */
#define PORT_ISFR_ISF10_MASK                     (0x01UL << PORT_ISFR_ISF10_SHIFT)                   /*!< PORTA_ISFR: ISF10 Mask                  */
#define PORT_ISFR_ISF10_SHIFT                    10                                                  /*!< PORTA_ISFR: ISF10 Position              */
#define PORT_ISFR_ISF11_MASK                     (0x01UL << PORT_ISFR_ISF11_SHIFT)                   /*!< PORTA_ISFR: ISF11 Mask                  */
#define PORT_ISFR_ISF11_SHIFT                    11                                                  /*!< PORTA_ISFR: ISF11 Position              */
#define PORT_ISFR_ISF12_MASK                     (0x01UL << PORT_ISFR_ISF12_SHIFT)                   /*!< PORTA_ISFR: ISF12 Mask                  */
#define PORT_ISFR_ISF12_SHIFT                    12                                                  /*!< PORTA_ISFR: ISF12 Position              */
#define PORT_ISFR_ISF13_MASK                     (0x01UL << PORT_ISFR_ISF13_SHIFT)                   /*!< PORTA_ISFR: ISF13 Mask                  */
#define PORT_ISFR_ISF13_SHIFT                    13                                                  /*!< PORTA_ISFR: ISF13 Position              */
#define PORT_ISFR_ISF14_MASK                     (0x01UL << PORT_ISFR_ISF14_SHIFT)                   /*!< PORTA_ISFR: ISF14 Mask                  */
#define PORT_ISFR_ISF14_SHIFT                    14                                                  /*!< PORTA_ISFR: ISF14 Position              */
#define PORT_ISFR_ISF15_MASK                     (0x01UL << PORT_ISFR_ISF15_SHIFT)                   /*!< PORTA_ISFR: ISF15 Mask                  */
#define PORT_ISFR_ISF15_SHIFT                    15                                                  /*!< PORTA_ISFR: ISF15 Position              */
#define PORT_ISFR_ISF16_MASK                     (0x01UL << PORT_ISFR_ISF16_SHIFT)                   /*!< PORTA_ISFR: ISF16 Mask                  */
#define PORT_ISFR_ISF16_SHIFT                    16                                                  /*!< PORTA_ISFR: ISF16 Position              */
#define PORT_ISFR_ISF17_MASK                     (0x01UL << PORT_ISFR_ISF17_SHIFT)                   /*!< PORTA_ISFR: ISF17 Mask                  */
#define PORT_ISFR_ISF17_SHIFT                    17                                                  /*!< PORTA_ISFR: ISF17 Position              */
#define PORT_ISFR_ISF18_MASK                     (0x01UL << PORT_ISFR_ISF18_SHIFT)                   /*!< PORTA_ISFR: ISF18 Mask                  */
#define PORT_ISFR_ISF18_SHIFT                    18                                                  /*!< PORTA_ISFR: ISF18 Position              */
#define PORT_ISFR_ISF19_MASK                     (0x01UL << PORT_ISFR_ISF19_SHIFT)                   /*!< PORTA_ISFR: ISF19 Mask                  */
#define PORT_ISFR_ISF19_SHIFT                    19                                                  /*!< PORTA_ISFR: ISF19 Position              */
#define PORT_ISFR_ISF20_MASK                     (0x01UL << PORT_ISFR_ISF20_SHIFT)                   /*!< PORTA_ISFR: ISF20 Mask                  */
#define PORT_ISFR_ISF20_SHIFT                    20                                                  /*!< PORTA_ISFR: ISF20 Position              */
#define PORT_ISFR_ISF21_MASK                     (0x01UL << PORT_ISFR_ISF21_SHIFT)                   /*!< PORTA_ISFR: ISF21 Mask                  */
#define PORT_ISFR_ISF21_SHIFT                    21                                                  /*!< PORTA_ISFR: ISF21 Position              */
#define PORT_ISFR_ISF22_MASK                     (0x01UL << PORT_ISFR_ISF22_SHIFT)                   /*!< PORTA_ISFR: ISF22 Mask                  */
#define PORT_ISFR_ISF22_SHIFT                    22                                                  /*!< PORTA_ISFR: ISF22 Position              */
#define PORT_ISFR_ISF23_MASK                     (0x01UL << PORT_ISFR_ISF23_SHIFT)                   /*!< PORTA_ISFR: ISF23 Mask                  */
#define PORT_ISFR_ISF23_SHIFT                    23                                                  /*!< PORTA_ISFR: ISF23 Position              */
#define PORT_ISFR_ISF24_MASK                     (0x01UL << PORT_ISFR_ISF24_SHIFT)                   /*!< PORTA_ISFR: ISF24 Mask                  */
#define PORT_ISFR_ISF24_SHIFT                    24                                                  /*!< PORTA_ISFR: ISF24 Position              */
#define PORT_ISFR_ISF25_MASK                     (0x01UL << PORT_ISFR_ISF25_SHIFT)                   /*!< PORTA_ISFR: ISF25 Mask                  */
#define PORT_ISFR_ISF25_SHIFT                    25                                                  /*!< PORTA_ISFR: ISF25 Position              */
#define PORT_ISFR_ISF26_MASK                     (0x01UL << PORT_ISFR_ISF26_SHIFT)                   /*!< PORTA_ISFR: ISF26 Mask                  */
#define PORT_ISFR_ISF26_SHIFT                    26                                                  /*!< PORTA_ISFR: ISF26 Position              */
#define PORT_ISFR_ISF27_MASK                     (0x01UL << PORT_ISFR_ISF27_SHIFT)                   /*!< PORTA_ISFR: ISF27 Mask                  */
#define PORT_ISFR_ISF27_SHIFT                    27                                                  /*!< PORTA_ISFR: ISF27 Position              */
#define PORT_ISFR_ISF28_MASK                     (0x01UL << PORT_ISFR_ISF28_SHIFT)                   /*!< PORTA_ISFR: ISF28 Mask                  */
#define PORT_ISFR_ISF28_SHIFT                    28                                                  /*!< PORTA_ISFR: ISF28 Position              */
#define PORT_ISFR_ISF29_MASK                     (0x01UL << PORT_ISFR_ISF29_SHIFT)                   /*!< PORTA_ISFR: ISF29 Mask                  */
#define PORT_ISFR_ISF29_SHIFT                    29                                                  /*!< PORTA_ISFR: ISF29 Position              */
#define PORT_ISFR_ISF30_MASK                     (0x01UL << PORT_ISFR_ISF30_SHIFT)                   /*!< PORTA_ISFR: ISF30 Mask                  */
#define PORT_ISFR_ISF30_SHIFT                    30                                                  /*!< PORTA_ISFR: ISF30 Position              */
#define PORT_ISFR_ISF31_MASK                     (0x01UL << PORT_ISFR_ISF31_SHIFT)                   /*!< PORTA_ISFR: ISF31 Mask                  */
#define PORT_ISFR_ISF31_SHIFT                    31                                                  /*!< PORTA_ISFR: ISF31 Position              */

/* ------- PORTA_DFER                               ------ */
#define PORT_DFER_DFE0_MASK                      (0x01UL << PORT_DFER_DFE0_SHIFT)                    /*!< PORTA_DFER: DFE0 Mask                   */
#define PORT_DFER_DFE0_SHIFT                     0                                                   /*!< PORTA_DFER: DFE0 Position               */
#define PORT_DFER_DFE1_MASK                      (0x01UL << PORT_DFER_DFE1_SHIFT)                    /*!< PORTA_DFER: DFE1 Mask                   */
#define PORT_DFER_DFE1_SHIFT                     1                                                   /*!< PORTA_DFER: DFE1 Position               */
#define PORT_DFER_DFE2_MASK                      (0x01UL << PORT_DFER_DFE2_SHIFT)                    /*!< PORTA_DFER: DFE2 Mask                   */
#define PORT_DFER_DFE2_SHIFT                     2                                                   /*!< PORTA_DFER: DFE2 Position               */
#define PORT_DFER_DFE3_MASK                      (0x01UL << PORT_DFER_DFE3_SHIFT)                    /*!< PORTA_DFER: DFE3 Mask                   */
#define PORT_DFER_DFE3_SHIFT                     3                                                   /*!< PORTA_DFER: DFE3 Position               */
#define PORT_DFER_DFE4_MASK                      (0x01UL << PORT_DFER_DFE4_SHIFT)                    /*!< PORTA_DFER: DFE4 Mask                   */
#define PORT_DFER_DFE4_SHIFT                     4                                                   /*!< PORTA_DFER: DFE4 Position               */
#define PORT_DFER_DFE5_MASK                      (0x01UL << PORT_DFER_DFE5_SHIFT)                    /*!< PORTA_DFER: DFE5 Mask                   */
#define PORT_DFER_DFE5_SHIFT                     5                                                   /*!< PORTA_DFER: DFE5 Position               */
#define PORT_DFER_DFE6_MASK                      (0x01UL << PORT_DFER_DFE6_SHIFT)                    /*!< PORTA_DFER: DFE6 Mask                   */
#define PORT_DFER_DFE6_SHIFT                     6                                                   /*!< PORTA_DFER: DFE6 Position               */
#define PORT_DFER_DFE7_MASK                      (0x01UL << PORT_DFER_DFE7_SHIFT)                    /*!< PORTA_DFER: DFE7 Mask                   */
#define PORT_DFER_DFE7_SHIFT                     7                                                   /*!< PORTA_DFER: DFE7 Position               */
#define PORT_DFER_DFE8_MASK                      (0x01UL << PORT_DFER_DFE8_SHIFT)                    /*!< PORTA_DFER: DFE8 Mask                   */
#define PORT_DFER_DFE8_SHIFT                     8                                                   /*!< PORTA_DFER: DFE8 Position               */
#define PORT_DFER_DFE9_MASK                      (0x01UL << PORT_DFER_DFE9_SHIFT)                    /*!< PORTA_DFER: DFE9 Mask                   */
#define PORT_DFER_DFE9_SHIFT                     9                                                   /*!< PORTA_DFER: DFE9 Position               */
#define PORT_DFER_DFE10_MASK                     (0x01UL << PORT_DFER_DFE10_SHIFT)                   /*!< PORTA_DFER: DFE10 Mask                  */
#define PORT_DFER_DFE10_SHIFT                    10                                                  /*!< PORTA_DFER: DFE10 Position              */
#define PORT_DFER_DFE11_MASK                     (0x01UL << PORT_DFER_DFE11_SHIFT)                   /*!< PORTA_DFER: DFE11 Mask                  */
#define PORT_DFER_DFE11_SHIFT                    11                                                  /*!< PORTA_DFER: DFE11 Position              */
#define PORT_DFER_DFE12_MASK                     (0x01UL << PORT_DFER_DFE12_SHIFT)                   /*!< PORTA_DFER: DFE12 Mask                  */
#define PORT_DFER_DFE12_SHIFT                    12                                                  /*!< PORTA_DFER: DFE12 Position              */
#define PORT_DFER_DFE13_MASK                     (0x01UL << PORT_DFER_DFE13_SHIFT)                   /*!< PORTA_DFER: DFE13 Mask                  */
#define PORT_DFER_DFE13_SHIFT                    13                                                  /*!< PORTA_DFER: DFE13 Position              */
#define PORT_DFER_DFE14_MASK                     (0x01UL << PORT_DFER_DFE14_SHIFT)                   /*!< PORTA_DFER: DFE14 Mask                  */
#define PORT_DFER_DFE14_SHIFT                    14                                                  /*!< PORTA_DFER: DFE14 Position              */
#define PORT_DFER_DFE15_MASK                     (0x01UL << PORT_DFER_DFE15_SHIFT)                   /*!< PORTA_DFER: DFE15 Mask                  */
#define PORT_DFER_DFE15_SHIFT                    15                                                  /*!< PORTA_DFER: DFE15 Position              */
#define PORT_DFER_DFE16_MASK                     (0x01UL << PORT_DFER_DFE16_SHIFT)                   /*!< PORTA_DFER: DFE16 Mask                  */
#define PORT_DFER_DFE16_SHIFT                    16                                                  /*!< PORTA_DFER: DFE16 Position              */
#define PORT_DFER_DFE17_MASK                     (0x01UL << PORT_DFER_DFE17_SHIFT)                   /*!< PORTA_DFER: DFE17 Mask                  */
#define PORT_DFER_DFE17_SHIFT                    17                                                  /*!< PORTA_DFER: DFE17 Position              */
#define PORT_DFER_DFE18_MASK                     (0x01UL << PORT_DFER_DFE18_SHIFT)                   /*!< PORTA_DFER: DFE18 Mask                  */
#define PORT_DFER_DFE18_SHIFT                    18                                                  /*!< PORTA_DFER: DFE18 Position              */
#define PORT_DFER_DFE19_MASK                     (0x01UL << PORT_DFER_DFE19_SHIFT)                   /*!< PORTA_DFER: DFE19 Mask                  */
#define PORT_DFER_DFE19_SHIFT                    19                                                  /*!< PORTA_DFER: DFE19 Position              */
#define PORT_DFER_DFE20_MASK                     (0x01UL << PORT_DFER_DFE20_SHIFT)                   /*!< PORTA_DFER: DFE20 Mask                  */
#define PORT_DFER_DFE20_SHIFT                    20                                                  /*!< PORTA_DFER: DFE20 Position              */
#define PORT_DFER_DFE21_MASK                     (0x01UL << PORT_DFER_DFE21_SHIFT)                   /*!< PORTA_DFER: DFE21 Mask                  */
#define PORT_DFER_DFE21_SHIFT                    21                                                  /*!< PORTA_DFER: DFE21 Position              */
#define PORT_DFER_DFE22_MASK                     (0x01UL << PORT_DFER_DFE22_SHIFT)                   /*!< PORTA_DFER: DFE22 Mask                  */
#define PORT_DFER_DFE22_SHIFT                    22                                                  /*!< PORTA_DFER: DFE22 Position              */
#define PORT_DFER_DFE23_MASK                     (0x01UL << PORT_DFER_DFE23_SHIFT)                   /*!< PORTA_DFER: DFE23 Mask                  */
#define PORT_DFER_DFE23_SHIFT                    23                                                  /*!< PORTA_DFER: DFE23 Position              */
#define PORT_DFER_DFE24_MASK                     (0x01UL << PORT_DFER_DFE24_SHIFT)                   /*!< PORTA_DFER: DFE24 Mask                  */
#define PORT_DFER_DFE24_SHIFT                    24                                                  /*!< PORTA_DFER: DFE24 Position              */
#define PORT_DFER_DFE25_MASK                     (0x01UL << PORT_DFER_DFE25_SHIFT)                   /*!< PORTA_DFER: DFE25 Mask                  */
#define PORT_DFER_DFE25_SHIFT                    25                                                  /*!< PORTA_DFER: DFE25 Position              */
#define PORT_DFER_DFE26_MASK                     (0x01UL << PORT_DFER_DFE26_SHIFT)                   /*!< PORTA_DFER: DFE26 Mask                  */
#define PORT_DFER_DFE26_SHIFT                    26                                                  /*!< PORTA_DFER: DFE26 Position              */
#define PORT_DFER_DFE27_MASK                     (0x01UL << PORT_DFER_DFE27_SHIFT)                   /*!< PORTA_DFER: DFE27 Mask                  */
#define PORT_DFER_DFE27_SHIFT                    27                                                  /*!< PORTA_DFER: DFE27 Position              */
#define PORT_DFER_DFE28_MASK                     (0x01UL << PORT_DFER_DFE28_SHIFT)                   /*!< PORTA_DFER: DFE28 Mask                  */
#define PORT_DFER_DFE28_SHIFT                    28                                                  /*!< PORTA_DFER: DFE28 Position              */
#define PORT_DFER_DFE29_MASK                     (0x01UL << PORT_DFER_DFE29_SHIFT)                   /*!< PORTA_DFER: DFE29 Mask                  */
#define PORT_DFER_DFE29_SHIFT                    29                                                  /*!< PORTA_DFER: DFE29 Position              */
#define PORT_DFER_DFE30_MASK                     (0x01UL << PORT_DFER_DFE30_SHIFT)                   /*!< PORTA_DFER: DFE30 Mask                  */
#define PORT_DFER_DFE30_SHIFT                    30                                                  /*!< PORTA_DFER: DFE30 Position              */
#define PORT_DFER_DFE31_MASK                     (0x01UL << PORT_DFER_DFE31_SHIFT)                   /*!< PORTA_DFER: DFE31 Mask                  */
#define PORT_DFER_DFE31_SHIFT                    31                                                  /*!< PORTA_DFER: DFE31 Position              */

/* ------- PORTA_DFCR                               ------ */
#define PORT_DFCR_CS_MASK                        (0x01UL << PORT_DFCR_CS_SHIFT)                      /*!< PORTA_DFCR: CS Mask                     */
#define PORT_DFCR_CS_SHIFT                       0                                                   /*!< PORTA_DFCR: CS Position                 */

/* ------- PORTA_DFWR                               ------ */
#define PORT_DFWR_FILT_MASK                      (0x1FUL << PORT_DFWR_FILT_SHIFT)                    /*!< PORTA_DFWR: FILT Mask                   */
#define PORT_DFWR_FILT_SHIFT                     0                                                   /*!< PORTA_DFWR: FILT Position               */
#define PORT_DFWR_FILT(x)                        (((x)<<PORT_DFWR_FILT_SHIFT)&PORT_DFWR_FILT_MASK)   /*!< PORTA_DFWR                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTA_PCR0                     (PORTA->PCR[0])
#define PORTA_PCR1                     (PORTA->PCR[1])
#define PORTA_PCR2                     (PORTA->PCR[2])
#define PORTA_PCR3                     (PORTA->PCR[3])
#define PORTA_PCR4                     (PORTA->PCR[4])
#define PORTA_PCR5                     (PORTA->PCR[5])
#define PORTA_PCR6                     (PORTA->PCR[6])
#define PORTA_PCR7                     (PORTA->PCR[7])
#define PORTA_PCR8                     (PORTA->PCR[8])
#define PORTA_PCR9                     (PORTA->PCR[9])
#define PORTA_PCR10                    (PORTA->PCR[10])
#define PORTA_PCR11                    (PORTA->PCR[11])
#define PORTA_PCR12                    (PORTA->PCR[12])
#define PORTA_PCR13                    (PORTA->PCR[13])
#define PORTA_PCR14                    (PORTA->PCR[14])
#define PORTA_PCR15                    (PORTA->PCR[15])
#define PORTA_PCR16                    (PORTA->PCR[16])
#define PORTA_PCR17                    (PORTA->PCR[17])
#define PORTA_PCR18                    (PORTA->PCR[18])
#define PORTA_PCR19                    (PORTA->PCR[19])
#define PORTA_PCR20                    (PORTA->PCR[20])
#define PORTA_PCR21                    (PORTA->PCR[21])
#define PORTA_PCR22                    (PORTA->PCR[22])
#define PORTA_PCR23                    (PORTA->PCR[23])
#define PORTA_PCR24                    (PORTA->PCR[24])
#define PORTA_PCR25                    (PORTA->PCR[25])
#define PORTA_PCR26                    (PORTA->PCR[26])
#define PORTA_PCR27                    (PORTA->PCR[27])
#define PORTA_PCR28                    (PORTA->PCR[28])
#define PORTA_PCR29                    (PORTA->PCR[29])
#define PORTA_PCR30                    (PORTA->PCR[30])
#define PORTA_PCR31                    (PORTA->PCR[31])
#define PORTA_GPCLR                    (PORTA->GPCLR)
#define PORTA_GPCHR                    (PORTA->GPCHR)
#define PORTA_ISFR                     (PORTA->ISFR)
#define PORTA_DFER                     (PORTA->DFER)
#define PORTA_DFCR                     (PORTA->DFCR)
#define PORTA_DFWR                     (PORTA->DFWR)

/* ================================================================================ */
/* ================           PORTB (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef PORTA_Type PORTB_Type;  /*!< PORTB Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTB' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTB_PCR0                     (PORTB->PCR[0])
#define PORTB_PCR1                     (PORTB->PCR[1])
#define PORTB_PCR2                     (PORTB->PCR[2])
#define PORTB_PCR3                     (PORTB->PCR[3])
#define PORTB_PCR4                     (PORTB->PCR[4])
#define PORTB_PCR5                     (PORTB->PCR[5])
#define PORTB_PCR6                     (PORTB->PCR[6])
#define PORTB_PCR7                     (PORTB->PCR[7])
#define PORTB_PCR8                     (PORTB->PCR[8])
#define PORTB_PCR9                     (PORTB->PCR[9])
#define PORTB_PCR10                    (PORTB->PCR[10])
#define PORTB_PCR11                    (PORTB->PCR[11])
#define PORTB_PCR12                    (PORTB->PCR[12])
#define PORTB_PCR13                    (PORTB->PCR[13])
#define PORTB_PCR14                    (PORTB->PCR[14])
#define PORTB_PCR15                    (PORTB->PCR[15])
#define PORTB_PCR16                    (PORTB->PCR[16])
#define PORTB_PCR17                    (PORTB->PCR[17])
#define PORTB_PCR18                    (PORTB->PCR[18])
#define PORTB_PCR19                    (PORTB->PCR[19])
#define PORTB_PCR20                    (PORTB->PCR[20])
#define PORTB_PCR21                    (PORTB->PCR[21])
#define PORTB_PCR22                    (PORTB->PCR[22])
#define PORTB_PCR23                    (PORTB->PCR[23])
#define PORTB_PCR24                    (PORTB->PCR[24])
#define PORTB_PCR25                    (PORTB->PCR[25])
#define PORTB_PCR26                    (PORTB->PCR[26])
#define PORTB_PCR27                    (PORTB->PCR[27])
#define PORTB_PCR28                    (PORTB->PCR[28])
#define PORTB_PCR29                    (PORTB->PCR[29])
#define PORTB_PCR30                    (PORTB->PCR[30])
#define PORTB_PCR31                    (PORTB->PCR[31])
#define PORTB_GPCLR                    (PORTB->GPCLR)
#define PORTB_GPCHR                    (PORTB->GPCHR)
#define PORTB_ISFR                     (PORTB->ISFR)
#define PORTB_DFER                     (PORTB->DFER)
#define PORTB_DFCR                     (PORTB->DFCR)
#define PORTB_DFWR                     (PORTB->DFWR)

/* ================================================================================ */
/* ================           PORTC (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef PORTA_Type PORTC_Type;  /*!< PORTC Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTC' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTC_PCR0                     (PORTC->PCR[0])
#define PORTC_PCR1                     (PORTC->PCR[1])
#define PORTC_PCR2                     (PORTC->PCR[2])
#define PORTC_PCR3                     (PORTC->PCR[3])
#define PORTC_PCR4                     (PORTC->PCR[4])
#define PORTC_PCR5                     (PORTC->PCR[5])
#define PORTC_PCR6                     (PORTC->PCR[6])
#define PORTC_PCR7                     (PORTC->PCR[7])
#define PORTC_PCR8                     (PORTC->PCR[8])
#define PORTC_PCR9                     (PORTC->PCR[9])
#define PORTC_PCR10                    (PORTC->PCR[10])
#define PORTC_PCR11                    (PORTC->PCR[11])
#define PORTC_PCR12                    (PORTC->PCR[12])
#define PORTC_PCR13                    (PORTC->PCR[13])
#define PORTC_PCR14                    (PORTC->PCR[14])
#define PORTC_PCR15                    (PORTC->PCR[15])
#define PORTC_PCR16                    (PORTC->PCR[16])
#define PORTC_PCR17                    (PORTC->PCR[17])
#define PORTC_PCR18                    (PORTC->PCR[18])
#define PORTC_PCR19                    (PORTC->PCR[19])
#define PORTC_PCR20                    (PORTC->PCR[20])
#define PORTC_PCR21                    (PORTC->PCR[21])
#define PORTC_PCR22                    (PORTC->PCR[22])
#define PORTC_PCR23                    (PORTC->PCR[23])
#define PORTC_PCR24                    (PORTC->PCR[24])
#define PORTC_PCR25                    (PORTC->PCR[25])
#define PORTC_PCR26                    (PORTC->PCR[26])
#define PORTC_PCR27                    (PORTC->PCR[27])
#define PORTC_PCR28                    (PORTC->PCR[28])
#define PORTC_PCR29                    (PORTC->PCR[29])
#define PORTC_PCR30                    (PORTC->PCR[30])
#define PORTC_PCR31                    (PORTC->PCR[31])
#define PORTC_GPCLR                    (PORTC->GPCLR)
#define PORTC_GPCHR                    (PORTC->GPCHR)
#define PORTC_ISFR                     (PORTC->ISFR)
#define PORTC_DFER                     (PORTC->DFER)
#define PORTC_DFCR                     (PORTC->DFCR)
#define PORTC_DFWR                     (PORTC->DFWR)

/* ================================================================================ */
/* ================           PORTD (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef PORTA_Type PORTD_Type;  /*!< PORTD Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTD' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTD_PCR0                     (PORTD->PCR[0])
#define PORTD_PCR1                     (PORTD->PCR[1])
#define PORTD_PCR2                     (PORTD->PCR[2])
#define PORTD_PCR3                     (PORTD->PCR[3])
#define PORTD_PCR4                     (PORTD->PCR[4])
#define PORTD_PCR5                     (PORTD->PCR[5])
#define PORTD_PCR6                     (PORTD->PCR[6])
#define PORTD_PCR7                     (PORTD->PCR[7])
#define PORTD_PCR8                     (PORTD->PCR[8])
#define PORTD_PCR9                     (PORTD->PCR[9])
#define PORTD_PCR10                    (PORTD->PCR[10])
#define PORTD_PCR11                    (PORTD->PCR[11])
#define PORTD_PCR12                    (PORTD->PCR[12])
#define PORTD_PCR13                    (PORTD->PCR[13])
#define PORTD_PCR14                    (PORTD->PCR[14])
#define PORTD_PCR15                    (PORTD->PCR[15])
#define PORTD_PCR16                    (PORTD->PCR[16])
#define PORTD_PCR17                    (PORTD->PCR[17])
#define PORTD_PCR18                    (PORTD->PCR[18])
#define PORTD_PCR19                    (PORTD->PCR[19])
#define PORTD_PCR20                    (PORTD->PCR[20])
#define PORTD_PCR21                    (PORTD->PCR[21])
#define PORTD_PCR22                    (PORTD->PCR[22])
#define PORTD_PCR23                    (PORTD->PCR[23])
#define PORTD_PCR24                    (PORTD->PCR[24])
#define PORTD_PCR25                    (PORTD->PCR[25])
#define PORTD_PCR26                    (PORTD->PCR[26])
#define PORTD_PCR27                    (PORTD->PCR[27])
#define PORTD_PCR28                    (PORTD->PCR[28])
#define PORTD_PCR29                    (PORTD->PCR[29])
#define PORTD_PCR30                    (PORTD->PCR[30])
#define PORTD_PCR31                    (PORTD->PCR[31])
#define PORTD_GPCLR                    (PORTD->GPCLR)
#define PORTD_GPCHR                    (PORTD->GPCHR)
#define PORTD_ISFR                     (PORTD->ISFR)
#define PORTD_DFER                     (PORTD->DFER)
#define PORTD_DFCR                     (PORTD->DFCR)
#define PORTD_DFWR                     (PORTD->DFWR)

/* ================================================================================ */
/* ================           PORTE (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef PORTA_Type PORTE_Type;  /*!< PORTE Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTE' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTE_PCR0                     (PORTE->PCR[0])
#define PORTE_PCR1                     (PORTE->PCR[1])
#define PORTE_PCR2                     (PORTE->PCR[2])
#define PORTE_PCR3                     (PORTE->PCR[3])
#define PORTE_PCR4                     (PORTE->PCR[4])
#define PORTE_PCR5                     (PORTE->PCR[5])
#define PORTE_PCR6                     (PORTE->PCR[6])
#define PORTE_PCR7                     (PORTE->PCR[7])
#define PORTE_PCR8                     (PORTE->PCR[8])
#define PORTE_PCR9                     (PORTE->PCR[9])
#define PORTE_PCR10                    (PORTE->PCR[10])
#define PORTE_PCR11                    (PORTE->PCR[11])
#define PORTE_PCR12                    (PORTE->PCR[12])
#define PORTE_PCR13                    (PORTE->PCR[13])
#define PORTE_PCR14                    (PORTE->PCR[14])
#define PORTE_PCR15                    (PORTE->PCR[15])
#define PORTE_PCR16                    (PORTE->PCR[16])
#define PORTE_PCR17                    (PORTE->PCR[17])
#define PORTE_PCR18                    (PORTE->PCR[18])
#define PORTE_PCR19                    (PORTE->PCR[19])
#define PORTE_PCR20                    (PORTE->PCR[20])
#define PORTE_PCR21                    (PORTE->PCR[21])
#define PORTE_PCR22                    (PORTE->PCR[22])
#define PORTE_PCR23                    (PORTE->PCR[23])
#define PORTE_PCR24                    (PORTE->PCR[24])
#define PORTE_PCR25                    (PORTE->PCR[25])
#define PORTE_PCR26                    (PORTE->PCR[26])
#define PORTE_PCR27                    (PORTE->PCR[27])
#define PORTE_PCR28                    (PORTE->PCR[28])
#define PORTE_PCR29                    (PORTE->PCR[29])
#define PORTE_PCR30                    (PORTE->PCR[30])
#define PORTE_PCR31                    (PORTE->PCR[31])
#define PORTE_GPCLR                    (PORTE->GPCLR)
#define PORTE_GPCHR                    (PORTE->GPCHR)
#define PORTE_ISFR                     (PORTE->ISFR)
#define PORTE_DFER                     (PORTE->DFER)
#define PORTE_DFCR                     (PORTE->DFCR)
#define PORTE_DFWR                     (PORTE->DFWR)

/* ================================================================================ */
/* ================           RCM (file:RCM_MK_TAMPER_LOL)         ================ */
/* ================================================================================ */

/**
 * @brief Reset Control Module
 */
typedef struct {                                /*!<       RCM Structure                                                */
   __I  uint8_t   SRS0;                         /*!< 0000: System Reset Status Register 0                               */
   __I  uint8_t   SRS1;                         /*!< 0001: System Reset Status Register 1                               */
   __I  uint16_t  RESERVED0;                    /*!< 0002:                                                              */
   __IO uint8_t   RPFC;                         /*!< 0004: Reset Pin Filter Control Register                            */
   __IO uint8_t   RPFW;                         /*!< 0005: Reset Pin Filter Width Register                              */
   __I  uint8_t   RESERVED1;                    /*!< 0006:                                                              */
   __I  uint8_t   MR;                           /*!< 0007: Mode Register                                                */
} RCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RCM_SRS0                                 ------ */
#define RCM_SRS0_WAKEUP_MASK                     (0x01UL << RCM_SRS0_WAKEUP_SHIFT)                   /*!< RCM_SRS0: WAKEUP Mask                   */
#define RCM_SRS0_WAKEUP_SHIFT                    0                                                   /*!< RCM_SRS0: WAKEUP Position               */
#define RCM_SRS0_LVD_MASK                        (0x01UL << RCM_SRS0_LVD_SHIFT)                      /*!< RCM_SRS0: LVD Mask                      */
#define RCM_SRS0_LVD_SHIFT                       1                                                   /*!< RCM_SRS0: LVD Position                  */
#define RCM_SRS0_LOC_MASK                        (0x01UL << RCM_SRS0_LOC_SHIFT)                      /*!< RCM_SRS0: LOC Mask                      */
#define RCM_SRS0_LOC_SHIFT                       2                                                   /*!< RCM_SRS0: LOC Position                  */
#define RCM_SRS0_LOL_MASK                        (0x01UL << RCM_SRS0_LOL_SHIFT)                      /*!< RCM_SRS0: LOL Mask                      */
#define RCM_SRS0_LOL_SHIFT                       3                                                   /*!< RCM_SRS0: LOL Position                  */
#define RCM_SRS0_WDOG_MASK                       (0x01UL << RCM_SRS0_WDOG_SHIFT)                     /*!< RCM_SRS0: WDOG Mask                     */
#define RCM_SRS0_WDOG_SHIFT                      5                                                   /*!< RCM_SRS0: WDOG Position                 */
#define RCM_SRS0_PIN_MASK                        (0x01UL << RCM_SRS0_PIN_SHIFT)                      /*!< RCM_SRS0: PIN Mask                      */
#define RCM_SRS0_PIN_SHIFT                       6                                                   /*!< RCM_SRS0: PIN Position                  */
#define RCM_SRS0_POR_MASK                        (0x01UL << RCM_SRS0_POR_SHIFT)                      /*!< RCM_SRS0: POR Mask                      */
#define RCM_SRS0_POR_SHIFT                       7                                                   /*!< RCM_SRS0: POR Position                  */

/* ------- RCM_SRS1                                 ------ */
#define RCM_SRS1_JTAG_MASK                       (0x01UL << RCM_SRS1_JTAG_SHIFT)                     /*!< RCM_SRS1: JTAG Mask                     */
#define RCM_SRS1_JTAG_SHIFT                      0                                                   /*!< RCM_SRS1: JTAG Position                 */
#define RCM_SRS1_LOCKUP_MASK                     (0x01UL << RCM_SRS1_LOCKUP_SHIFT)                   /*!< RCM_SRS1: LOCKUP Mask                   */
#define RCM_SRS1_LOCKUP_SHIFT                    1                                                   /*!< RCM_SRS1: LOCKUP Position               */
#define RCM_SRS1_SW_MASK                         (0x01UL << RCM_SRS1_SW_SHIFT)                       /*!< RCM_SRS1: SW Mask                       */
#define RCM_SRS1_SW_SHIFT                        2                                                   /*!< RCM_SRS1: SW Position                   */
#define RCM_SRS1_MDM_AP_MASK                     (0x01UL << RCM_SRS1_MDM_AP_SHIFT)                   /*!< RCM_SRS1: MDM_AP Mask                   */
#define RCM_SRS1_MDM_AP_SHIFT                    3                                                   /*!< RCM_SRS1: MDM_AP Position               */
#define RCM_SRS1_EZPT_MASK                       (0x01UL << RCM_SRS1_EZPT_SHIFT)                     /*!< RCM_SRS1: EZPT Mask                     */
#define RCM_SRS1_EZPT_SHIFT                      4                                                   /*!< RCM_SRS1: EZPT Position                 */
#define RCM_SRS1_SACKERR_MASK                    (0x01UL << RCM_SRS1_SACKERR_SHIFT)                  /*!< RCM_SRS1: SACKERR Mask                  */
#define RCM_SRS1_SACKERR_SHIFT                   5                                                   /*!< RCM_SRS1: SACKERR Position              */
#define RCM_SRS1_TAMPER_MASK                     (0x01UL << RCM_SRS1_TAMPER_SHIFT)                   /*!< RCM_SRS1: TAMPER Mask                   */
#define RCM_SRS1_TAMPER_SHIFT                    7                                                   /*!< RCM_SRS1: TAMPER Position               */

/* ------- RCM_RPFC                                 ------ */
#define RCM_RPFC_RSTFLTSRW_MASK                  (0x03UL << RCM_RPFC_RSTFLTSRW_SHIFT)                /*!< RCM_RPFC: RSTFLTSRW Mask                */
#define RCM_RPFC_RSTFLTSRW_SHIFT                 0                                                   /*!< RCM_RPFC: RSTFLTSRW Position            */
#define RCM_RPFC_RSTFLTSRW(x)                    (((x)<<RCM_RPFC_RSTFLTSRW_SHIFT)&RCM_RPFC_RSTFLTSRW_MASK) /*!< RCM_RPFC                                */
#define RCM_RPFC_RSTFLTSS_MASK                   (0x01UL << RCM_RPFC_RSTFLTSS_SHIFT)                 /*!< RCM_RPFC: RSTFLTSS Mask                 */
#define RCM_RPFC_RSTFLTSS_SHIFT                  2                                                   /*!< RCM_RPFC: RSTFLTSS Position             */

/* ------- RCM_RPFW                                 ------ */
#define RCM_RPFW_RSTFLTSEL_MASK                  (0x1FUL << RCM_RPFW_RSTFLTSEL_SHIFT)                /*!< RCM_RPFW: RSTFLTSEL Mask                */
#define RCM_RPFW_RSTFLTSEL_SHIFT                 0                                                   /*!< RCM_RPFW: RSTFLTSEL Position            */
#define RCM_RPFW_RSTFLTSEL(x)                    (((x)<<RCM_RPFW_RSTFLTSEL_SHIFT)&RCM_RPFW_RSTFLTSEL_MASK) /*!< RCM_RPFW                                */

/* ------- RCM_MR                                   ------ */
#define RCM_MR_EZP_MS_MASK                       (0x01UL << RCM_MR_EZP_MS_SHIFT)                     /*!< RCM_MR: EZP_MS Mask                     */
#define RCM_MR_EZP_MS_SHIFT                      1                                                   /*!< RCM_MR: EZP_MS Position                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define RCM_SRS0                       (RCM->SRS0)
#define RCM_SRS1                       (RCM->SRS1)
#define RCM_RPFC                       (RCM->RPFC)
#define RCM_RPFW                       (RCM->RPFW)
#define RCM_MR                         (RCM->MR)

/* ================================================================================ */
/* ================           RFSYS (file:RFSYS_0)                 ================ */
/* ================================================================================ */

/**
 * @brief System register file
 */
typedef struct {                                /*!<       RFSYS Structure                                              */
   __IO uint32_t  REG[8];                       /*!< 0000: Register file register                                       */
} RFSYS_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RFSYS' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RFSYS_REG                                ------ */
#define RFSYS_REG_LL_MASK                        (0xFFUL << RFSYS_REG_LL_SHIFT)                      /*!< RFSYS_REG: LL Mask                      */
#define RFSYS_REG_LL_SHIFT                       0                                                   /*!< RFSYS_REG: LL Position                  */
#define RFSYS_REG_LL(x)                          (((x)<<RFSYS_REG_LL_SHIFT)&RFSYS_REG_LL_MASK)       /*!< RFSYS_REG                               */
#define RFSYS_REG_LH_MASK                        (0xFFUL << RFSYS_REG_LH_SHIFT)                      /*!< RFSYS_REG: LH Mask                      */
#define RFSYS_REG_LH_SHIFT                       8                                                   /*!< RFSYS_REG: LH Position                  */
#define RFSYS_REG_LH(x)                          (((x)<<RFSYS_REG_LH_SHIFT)&RFSYS_REG_LH_MASK)       /*!< RFSYS_REG                               */
#define RFSYS_REG_HL_MASK                        (0xFFUL << RFSYS_REG_HL_SHIFT)                      /*!< RFSYS_REG: HL Mask                      */
#define RFSYS_REG_HL_SHIFT                       16                                                  /*!< RFSYS_REG: HL Position                  */
#define RFSYS_REG_HL(x)                          (((x)<<RFSYS_REG_HL_SHIFT)&RFSYS_REG_HL_MASK)       /*!< RFSYS_REG                               */
#define RFSYS_REG_HH_MASK                        (0xFFUL << RFSYS_REG_HH_SHIFT)                      /*!< RFSYS_REG: HH Mask                      */
#define RFSYS_REG_HH_SHIFT                       24                                                  /*!< RFSYS_REG: HH Position                  */
#define RFSYS_REG_HH(x)                          (((x)<<RFSYS_REG_HH_SHIFT)&RFSYS_REG_HH_MASK)       /*!< RFSYS_REG                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'RFSYS' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define RFSYS_REG0                     (RFSYS->REG[0])
#define RFSYS_REG1                     (RFSYS->REG[1])
#define RFSYS_REG2                     (RFSYS->REG[2])
#define RFSYS_REG3                     (RFSYS->REG[3])
#define RFSYS_REG4                     (RFSYS->REG[4])
#define RFSYS_REG5                     (RFSYS->REG[5])
#define RFSYS_REG6                     (RFSYS->REG[6])
#define RFSYS_REG7                     (RFSYS->REG[7])

/* ================================================================================ */
/* ================           RFVBAT (file:RFVBAT_0)               ================ */
/* ================================================================================ */

/**
 * @brief VBAT register file
 */
typedef struct {                                /*!<       RFVBAT Structure                                             */
   __IO uint32_t  REG[8];                       /*!< 0000: VBAT register file register                                  */
} RFVBAT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RFVBAT' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RFVBAT_REG                               ------ */
#define RFVBAT_REG_LL_MASK                       (0xFFUL << RFVBAT_REG_LL_SHIFT)                     /*!< RFVBAT_REG: LL Mask                     */
#define RFVBAT_REG_LL_SHIFT                      0                                                   /*!< RFVBAT_REG: LL Position                 */
#define RFVBAT_REG_LL(x)                         (((x)<<RFVBAT_REG_LL_SHIFT)&RFVBAT_REG_LL_MASK)     /*!< RFVBAT_REG                              */
#define RFVBAT_REG_LH_MASK                       (0xFFUL << RFVBAT_REG_LH_SHIFT)                     /*!< RFVBAT_REG: LH Mask                     */
#define RFVBAT_REG_LH_SHIFT                      8                                                   /*!< RFVBAT_REG: LH Position                 */
#define RFVBAT_REG_LH(x)                         (((x)<<RFVBAT_REG_LH_SHIFT)&RFVBAT_REG_LH_MASK)     /*!< RFVBAT_REG                              */
#define RFVBAT_REG_HL_MASK                       (0xFFUL << RFVBAT_REG_HL_SHIFT)                     /*!< RFVBAT_REG: HL Mask                     */
#define RFVBAT_REG_HL_SHIFT                      16                                                  /*!< RFVBAT_REG: HL Position                 */
#define RFVBAT_REG_HL(x)                         (((x)<<RFVBAT_REG_HL_SHIFT)&RFVBAT_REG_HL_MASK)     /*!< RFVBAT_REG                              */
#define RFVBAT_REG_HH_MASK                       (0xFFUL << RFVBAT_REG_HH_SHIFT)                     /*!< RFVBAT_REG: HH Mask                     */
#define RFVBAT_REG_HH_SHIFT                      24                                                  /*!< RFVBAT_REG: HH Position                 */
#define RFVBAT_REG_HH(x)                         (((x)<<RFVBAT_REG_HH_SHIFT)&RFVBAT_REG_HH_MASK)     /*!< RFVBAT_REG                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'RFVBAT' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define RFVBAT_REG0                    (RFVBAT->REG[0])
#define RFVBAT_REG1                    (RFVBAT->REG[1])
#define RFVBAT_REG2                    (RFVBAT->REG[2])
#define RFVBAT_REG3                    (RFVBAT->REG[3])
#define RFVBAT_REG4                    (RFVBAT->REG[4])
#define RFVBAT_REG5                    (RFVBAT->REG[5])
#define RFVBAT_REG6                    (RFVBAT->REG[6])
#define RFVBAT_REG7                    (RFVBAT->REG[7])

/* ================================================================================ */
/* ================           RNG (file:RNG_1)                     ================ */
/* ================================================================================ */

/**
 * @brief Random Number Generator Accelerator
 */
typedef struct {                                /*!<       RNG Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: RNGA Control Register                                        */
   __I  uint32_t  SR;                           /*!< 0004: RNGA Status Register                                         */
   __O  uint32_t  ER;                           /*!< 0008: RNGA Entropy Register                                        */
   __I  uint32_t  OR;                           /*!< 000C: RNGA Output Register                                         */
} RNG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RNG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RNG_CR                                   ------ */
#define RNG_CR_GO_MASK                           (0x01UL << RNG_CR_GO_SHIFT)                         /*!< RNG_CR: GO Mask                         */
#define RNG_CR_GO_SHIFT                          0                                                   /*!< RNG_CR: GO Position                     */
#define RNG_CR_HA_MASK                           (0x01UL << RNG_CR_HA_SHIFT)                         /*!< RNG_CR: HA Mask                         */
#define RNG_CR_HA_SHIFT                          1                                                   /*!< RNG_CR: HA Position                     */
#define RNG_CR_INTM_MASK                         (0x01UL << RNG_CR_INTM_SHIFT)                       /*!< RNG_CR: INTM Mask                       */
#define RNG_CR_INTM_SHIFT                        2                                                   /*!< RNG_CR: INTM Position                   */
#define RNG_CR_CLRI_MASK                         (0x01UL << RNG_CR_CLRI_SHIFT)                       /*!< RNG_CR: CLRI Mask                       */
#define RNG_CR_CLRI_SHIFT                        3                                                   /*!< RNG_CR: CLRI Position                   */
#define RNG_CR_SLP_MASK                          (0x01UL << RNG_CR_SLP_SHIFT)                        /*!< RNG_CR: SLP Mask                        */
#define RNG_CR_SLP_SHIFT                         4                                                   /*!< RNG_CR: SLP Position                    */

/* ------- RNG_SR                                   ------ */
#define RNG_SR_SECV_MASK                         (0x01UL << RNG_SR_SECV_SHIFT)                       /*!< RNG_SR: SECV Mask                       */
#define RNG_SR_SECV_SHIFT                        0                                                   /*!< RNG_SR: SECV Position                   */
#define RNG_SR_LRS_MASK                          (0x01UL << RNG_SR_LRS_SHIFT)                        /*!< RNG_SR: LRS Mask                        */
#define RNG_SR_LRS_SHIFT                         1                                                   /*!< RNG_SR: LRS Position                    */
#define RNG_SR_ORU_MASK                          (0x01UL << RNG_SR_ORU_SHIFT)                        /*!< RNG_SR: ORU Mask                        */
#define RNG_SR_ORU_SHIFT                         2                                                   /*!< RNG_SR: ORU Position                    */
#define RNG_SR_ERRI_MASK                         (0x01UL << RNG_SR_ERRI_SHIFT)                       /*!< RNG_SR: ERRI Mask                       */
#define RNG_SR_ERRI_SHIFT                        3                                                   /*!< RNG_SR: ERRI Position                   */
#define RNG_SR_SLP_MASK                          (0x01UL << RNG_SR_SLP_SHIFT)                        /*!< RNG_SR: SLP Mask                        */
#define RNG_SR_SLP_SHIFT                         4                                                   /*!< RNG_SR: SLP Position                    */
#define RNG_SR_OREG_LVL_MASK                     (0xFFUL << RNG_SR_OREG_LVL_SHIFT)                   /*!< RNG_SR: OREG_LVL Mask                   */
#define RNG_SR_OREG_LVL_SHIFT                    8                                                   /*!< RNG_SR: OREG_LVL Position               */
#define RNG_SR_OREG_LVL(x)                       (((x)<<RNG_SR_OREG_LVL_SHIFT)&RNG_SR_OREG_LVL_MASK) /*!< RNG_SR                                  */
#define RNG_SR_OREG_SIZE_MASK                    (0xFFUL << RNG_SR_OREG_SIZE_SHIFT)                  /*!< RNG_SR: OREG_SIZE Mask                  */
#define RNG_SR_OREG_SIZE_SHIFT                   16                                                  /*!< RNG_SR: OREG_SIZE Position              */
#define RNG_SR_OREG_SIZE(x)                      (((x)<<RNG_SR_OREG_SIZE_SHIFT)&RNG_SR_OREG_SIZE_MASK) /*!< RNG_SR                                  */

/* ------- RNG_ER                                   ------ */
#define RNG_ER_EXT_ENT_MASK                      (0xFFFFFFFFUL << RNG_ER_EXT_ENT_SHIFT)              /*!< RNG_ER: EXT_ENT Mask                    */
#define RNG_ER_EXT_ENT_SHIFT                     0                                                   /*!< RNG_ER: EXT_ENT Position                */
#define RNG_ER_EXT_ENT(x)                        (((x)<<RNG_ER_EXT_ENT_SHIFT)&RNG_ER_EXT_ENT_MASK)   /*!< RNG_ER                                  */

/* ------- RNG_OR                                   ------ */
#define RNG_OR_RANDOUT_MASK                      (0xFFFFFFFFUL << RNG_OR_RANDOUT_SHIFT)              /*!< RNG_OR: RANDOUT Mask                    */
#define RNG_OR_RANDOUT_SHIFT                     0                                                   /*!< RNG_OR: RANDOUT Position                */
#define RNG_OR_RANDOUT(x)                        (((x)<<RNG_OR_RANDOUT_SHIFT)&RNG_OR_RANDOUT_MASK)   /*!< RNG_OR                                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'RNG' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define RNG_CR                         (RNG->CR)
#define RNG_SR                         (RNG->SR)
#define RNG_ER                         (RNG->ER)
#define RNG_OR                         (RNG->OR)

/* ================================================================================ */
/* ================           RTC (file:RTC_TAMPER_WPON)           ================ */
/* ================================================================================ */

/**
 * @brief Secure Real Time Clock
 */
typedef struct {                                /*!<       RTC Structure                                                */
   __IO uint32_t  TSR;                          /*!< 0000: Time Seconds Register                                        */
   __IO uint32_t  TPR;                          /*!< 0004: Time Prescaler Register                                      */
   __IO uint32_t  TAR;                          /*!< 0008: Time Alarm Register                                          */
   __IO uint32_t  TCR;                          /*!< 000C: Time Compensation Register                                   */
   __IO uint32_t  CR;                           /*!< 0010: Control Register                                             */
   __IO uint32_t  SR;                           /*!< 0014: Status Register                                              */
   __IO uint32_t  LR;                           /*!< 0018: Lock Register                                                */
   __IO uint32_t  IER;                          /*!< 001C: Interrupt Enable Register                                    */
   __I  uint32_t  TTSR;                         /*!< 0020: Tamper Time Seconds Register                                 */
   __IO uint32_t  MER;                          /*!< 0024: Monotonic Enable Register                                    */
   __IO uint32_t  MCLR;                         /*!< 0028: Monotonic Counter Low Register                               */
   __IO uint32_t  MCHR;                         /*!< 002C: Monotonic Counter High Register                              */
   __I  uint32_t  RESERVED0[500];               /*!< 0030:                                                              */
   __IO uint32_t  WAR;                          /*!< 0800: Write Access Register                                        */
   __IO uint32_t  RAR;                          /*!< 0804: Read Access Register                                         */
} RTC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RTC_TSR                                  ------ */
#define RTC_TSR_TSR_MASK                         (0xFFFFFFFFUL << RTC_TSR_TSR_SHIFT)                 /*!< RTC_TSR: TSR Mask                       */
#define RTC_TSR_TSR_SHIFT                        0                                                   /*!< RTC_TSR: TSR Position                   */
#define RTC_TSR_TSR(x)                           (((x)<<RTC_TSR_TSR_SHIFT)&RTC_TSR_TSR_MASK)         /*!< RTC_TSR                                 */

/* ------- RTC_TPR                                  ------ */
#define RTC_TPR_TPR_MASK                         (0xFFFFUL << RTC_TPR_TPR_SHIFT)                     /*!< RTC_TPR: TPR Mask                       */
#define RTC_TPR_TPR_SHIFT                        0                                                   /*!< RTC_TPR: TPR Position                   */
#define RTC_TPR_TPR(x)                           (((x)<<RTC_TPR_TPR_SHIFT)&RTC_TPR_TPR_MASK)         /*!< RTC_TPR                                 */

/* ------- RTC_TAR                                  ------ */
#define RTC_TAR_TAR_MASK                         (0xFFFFFFFFUL << RTC_TAR_TAR_SHIFT)                 /*!< RTC_TAR: TAR Mask                       */
#define RTC_TAR_TAR_SHIFT                        0                                                   /*!< RTC_TAR: TAR Position                   */
#define RTC_TAR_TAR(x)                           (((x)<<RTC_TAR_TAR_SHIFT)&RTC_TAR_TAR_MASK)         /*!< RTC_TAR                                 */

/* ------- RTC_TCR                                  ------ */
#define RTC_TCR_TCR_MASK                         (0xFFUL << RTC_TCR_TCR_SHIFT)                       /*!< RTC_TCR: TCR Mask                       */
#define RTC_TCR_TCR_SHIFT                        0                                                   /*!< RTC_TCR: TCR Position                   */
#define RTC_TCR_TCR(x)                           (((x)<<RTC_TCR_TCR_SHIFT)&RTC_TCR_TCR_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_CIR_MASK                         (0xFFUL << RTC_TCR_CIR_SHIFT)                       /*!< RTC_TCR: CIR Mask                       */
#define RTC_TCR_CIR_SHIFT                        8                                                   /*!< RTC_TCR: CIR Position                   */
#define RTC_TCR_CIR(x)                           (((x)<<RTC_TCR_CIR_SHIFT)&RTC_TCR_CIR_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_TCV_MASK                         (0xFFUL << RTC_TCR_TCV_SHIFT)                       /*!< RTC_TCR: TCV Mask                       */
#define RTC_TCR_TCV_SHIFT                        16                                                  /*!< RTC_TCR: TCV Position                   */
#define RTC_TCR_TCV(x)                           (((x)<<RTC_TCR_TCV_SHIFT)&RTC_TCR_TCV_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_CIC_MASK                         (0xFFUL << RTC_TCR_CIC_SHIFT)                       /*!< RTC_TCR: CIC Mask                       */
#define RTC_TCR_CIC_SHIFT                        24                                                  /*!< RTC_TCR: CIC Position                   */
#define RTC_TCR_CIC(x)                           (((x)<<RTC_TCR_CIC_SHIFT)&RTC_TCR_CIC_MASK)         /*!< RTC_TCR                                 */

/* ------- RTC_CR                                   ------ */
#define RTC_CR_SWR_MASK                          (0x01UL << RTC_CR_SWR_SHIFT)                        /*!< RTC_CR: SWR Mask                        */
#define RTC_CR_SWR_SHIFT                         0                                                   /*!< RTC_CR: SWR Position                    */
#define RTC_CR_WPE_MASK                          (0x01UL << RTC_CR_WPE_SHIFT)                        /*!< RTC_CR: WPE Mask                        */
#define RTC_CR_WPE_SHIFT                         1                                                   /*!< RTC_CR: WPE Position                    */
#define RTC_CR_SUP_MASK                          (0x01UL << RTC_CR_SUP_SHIFT)                        /*!< RTC_CR: SUP Mask                        */
#define RTC_CR_SUP_SHIFT                         2                                                   /*!< RTC_CR: SUP Position                    */
#define RTC_CR_UM_MASK                           (0x01UL << RTC_CR_UM_SHIFT)                         /*!< RTC_CR: UM Mask                         */
#define RTC_CR_UM_SHIFT                          3                                                   /*!< RTC_CR: UM Position                     */
#define RTC_CR_OSCE_MASK                         (0x01UL << RTC_CR_OSCE_SHIFT)                       /*!< RTC_CR: OSCE Mask                       */
#define RTC_CR_OSCE_SHIFT                        8                                                   /*!< RTC_CR: OSCE Position                   */
#define RTC_CR_CLKO_MASK                         (0x01UL << RTC_CR_CLKO_SHIFT)                       /*!< RTC_CR: CLKO Mask                       */
#define RTC_CR_CLKO_SHIFT                        9                                                   /*!< RTC_CR: CLKO Position                   */
#define RTC_CR_SC16P_MASK                        (0x01UL << RTC_CR_SC16P_SHIFT)                      /*!< RTC_CR: SC16P Mask                      */
#define RTC_CR_SC16P_SHIFT                       10                                                  /*!< RTC_CR: SC16P Position                  */
#define RTC_CR_SC8P_MASK                         (0x01UL << RTC_CR_SC8P_SHIFT)                       /*!< RTC_CR: SC8P Mask                       */
#define RTC_CR_SC8P_SHIFT                        11                                                  /*!< RTC_CR: SC8P Position                   */
#define RTC_CR_SC4P_MASK                         (0x01UL << RTC_CR_SC4P_SHIFT)                       /*!< RTC_CR: SC4P Mask                       */
#define RTC_CR_SC4P_SHIFT                        12                                                  /*!< RTC_CR: SC4P Position                   */
#define RTC_CR_SC2P_MASK                         (0x01UL << RTC_CR_SC2P_SHIFT)                       /*!< RTC_CR: SC2P Mask                       */
#define RTC_CR_SC2P_SHIFT                        13                                                  /*!< RTC_CR: SC2P Position                   */

/* ------- RTC_SR                                   ------ */
#define RTC_SR_TIF_MASK                          (0x01UL << RTC_SR_TIF_SHIFT)                        /*!< RTC_SR: TIF Mask                        */
#define RTC_SR_TIF_SHIFT                         0                                                   /*!< RTC_SR: TIF Position                    */
#define RTC_SR_TOF_MASK                          (0x01UL << RTC_SR_TOF_SHIFT)                        /*!< RTC_SR: TOF Mask                        */
#define RTC_SR_TOF_SHIFT                         1                                                   /*!< RTC_SR: TOF Position                    */
#define RTC_SR_TAF_MASK                          (0x01UL << RTC_SR_TAF_SHIFT)                        /*!< RTC_SR: TAF Mask                        */
#define RTC_SR_TAF_SHIFT                         2                                                   /*!< RTC_SR: TAF Position                    */
#define RTC_SR_MOF_MASK                          (0x01UL << RTC_SR_MOF_SHIFT)                        /*!< RTC_SR: MOF Mask                        */
#define RTC_SR_MOF_SHIFT                         3                                                   /*!< RTC_SR: MOF Position                    */
#define RTC_SR_TCE_MASK                          (0x01UL << RTC_SR_TCE_SHIFT)                        /*!< RTC_SR: TCE Mask                        */
#define RTC_SR_TCE_SHIFT                         4                                                   /*!< RTC_SR: TCE Position                    */

/* ------- RTC_LR                                   ------ */
#define RTC_LR_TCL_MASK                          (0x01UL << RTC_LR_TCL_SHIFT)                        /*!< RTC_LR: TCL Mask                        */
#define RTC_LR_TCL_SHIFT                         3                                                   /*!< RTC_LR: TCL Position                    */
#define RTC_LR_CRL_MASK                          (0x01UL << RTC_LR_CRL_SHIFT)                        /*!< RTC_LR: CRL Mask                        */
#define RTC_LR_CRL_SHIFT                         4                                                   /*!< RTC_LR: CRL Position                    */
#define RTC_LR_SRL_MASK                          (0x01UL << RTC_LR_SRL_SHIFT)                        /*!< RTC_LR: SRL Mask                        */
#define RTC_LR_SRL_SHIFT                         5                                                   /*!< RTC_LR: SRL Position                    */
#define RTC_LR_LRL_MASK                          (0x01UL << RTC_LR_LRL_SHIFT)                        /*!< RTC_LR: LRL Mask                        */
#define RTC_LR_LRL_SHIFT                         6                                                   /*!< RTC_LR: LRL Position                    */
#define RTC_LR_TTSL_MASK                         (0x01UL << RTC_LR_TTSL_SHIFT)                       /*!< RTC_LR: TTSL Mask                       */
#define RTC_LR_TTSL_SHIFT                        8                                                   /*!< RTC_LR: TTSL Position                   */
#define RTC_LR_MEL_MASK                          (0x01UL << RTC_LR_MEL_SHIFT)                        /*!< RTC_LR: MEL Mask                        */
#define RTC_LR_MEL_SHIFT                         9                                                   /*!< RTC_LR: MEL Position                    */
#define RTC_LR_MCLL_MASK                         (0x01UL << RTC_LR_MCLL_SHIFT)                       /*!< RTC_LR: MCLL Mask                       */
#define RTC_LR_MCLL_SHIFT                        10                                                  /*!< RTC_LR: MCLL Position                   */
#define RTC_LR_MCHL_MASK                         (0x01UL << RTC_LR_MCHL_SHIFT)                       /*!< RTC_LR: MCHL Mask                       */
#define RTC_LR_MCHL_SHIFT                        11                                                  /*!< RTC_LR: MCHL Position                   */

/* ------- RTC_IER                                  ------ */
#define RTC_IER_TIIE_MASK                        (0x01UL << RTC_IER_TIIE_SHIFT)                      /*!< RTC_IER: TIIE Mask                      */
#define RTC_IER_TIIE_SHIFT                       0                                                   /*!< RTC_IER: TIIE Position                  */
#define RTC_IER_TOIE_MASK                        (0x01UL << RTC_IER_TOIE_SHIFT)                      /*!< RTC_IER: TOIE Mask                      */
#define RTC_IER_TOIE_SHIFT                       1                                                   /*!< RTC_IER: TOIE Position                  */
#define RTC_IER_TAIE_MASK                        (0x01UL << RTC_IER_TAIE_SHIFT)                      /*!< RTC_IER: TAIE Mask                      */
#define RTC_IER_TAIE_SHIFT                       2                                                   /*!< RTC_IER: TAIE Position                  */
#define RTC_IER_MOIE_MASK                        (0x01UL << RTC_IER_MOIE_SHIFT)                      /*!< RTC_IER: MOIE Mask                      */
#define RTC_IER_MOIE_SHIFT                       3                                                   /*!< RTC_IER: MOIE Position                  */
#define RTC_IER_TSIE_MASK                        (0x01UL << RTC_IER_TSIE_SHIFT)                      /*!< RTC_IER: TSIE Mask                      */
#define RTC_IER_TSIE_SHIFT                       4                                                   /*!< RTC_IER: TSIE Position                  */
#define RTC_IER_WPON_MASK                        (0x01UL << RTC_IER_WPON_SHIFT)                      /*!< RTC_IER: WPON Mask                      */
#define RTC_IER_WPON_SHIFT                       7                                                   /*!< RTC_IER: WPON Position                  */

/* ------- RTC_TTSR                                 ------ */
#define RTC_TTSR_TTS_MASK                        (0xFFFFFFFFUL << RTC_TTSR_TTS_SHIFT)                /*!< RTC_TTSR: TTS Mask                      */
#define RTC_TTSR_TTS_SHIFT                       0                                                   /*!< RTC_TTSR: TTS Position                  */
#define RTC_TTSR_TTS(x)                          (((x)<<RTC_TTSR_TTS_SHIFT)&RTC_TTSR_TTS_MASK)       /*!< RTC_TTSR                                */

/* ------- RTC_MER                                  ------ */
#define RTC_MER_MCE_MASK                         (0x01UL << RTC_MER_MCE_SHIFT)                       /*!< RTC_MER: MCE Mask                       */
#define RTC_MER_MCE_SHIFT                        4                                                   /*!< RTC_MER: MCE Position                   */

/* ------- RTC_MCLR                                 ------ */
#define RTC_MCLR_MCL_MASK                        (0xFFFFFFFFUL << RTC_MCLR_MCL_SHIFT)                /*!< RTC_MCLR: MCL Mask                      */
#define RTC_MCLR_MCL_SHIFT                       0                                                   /*!< RTC_MCLR: MCL Position                  */
#define RTC_MCLR_MCL(x)                          (((x)<<RTC_MCLR_MCL_SHIFT)&RTC_MCLR_MCL_MASK)       /*!< RTC_MCLR                                */

/* ------- RTC_MCHR                                 ------ */
#define RTC_MCHR_MCH_MASK                        (0xFFFFFFFFUL << RTC_MCHR_MCH_SHIFT)                /*!< RTC_MCHR: MCH Mask                      */
#define RTC_MCHR_MCH_SHIFT                       0                                                   /*!< RTC_MCHR: MCH Position                  */
#define RTC_MCHR_MCH(x)                          (((x)<<RTC_MCHR_MCH_SHIFT)&RTC_MCHR_MCH_MASK)       /*!< RTC_MCHR                                */

/* ------- RTC_WAR                                  ------ */
#define RTC_WAR_TSRW_MASK                        (0x01UL << RTC_WAR_TSRW_SHIFT)                      /*!< RTC_WAR: TSRW Mask                      */
#define RTC_WAR_TSRW_SHIFT                       0                                                   /*!< RTC_WAR: TSRW Position                  */
#define RTC_WAR_TPRW_MASK                        (0x01UL << RTC_WAR_TPRW_SHIFT)                      /*!< RTC_WAR: TPRW Mask                      */
#define RTC_WAR_TPRW_SHIFT                       1                                                   /*!< RTC_WAR: TPRW Position                  */
#define RTC_WAR_TARW_MASK                        (0x01UL << RTC_WAR_TARW_SHIFT)                      /*!< RTC_WAR: TARW Mask                      */
#define RTC_WAR_TARW_SHIFT                       2                                                   /*!< RTC_WAR: TARW Position                  */
#define RTC_WAR_TCRW_MASK                        (0x01UL << RTC_WAR_TCRW_SHIFT)                      /*!< RTC_WAR: TCRW Mask                      */
#define RTC_WAR_TCRW_SHIFT                       3                                                   /*!< RTC_WAR: TCRW Position                  */
#define RTC_WAR_CRW_MASK                         (0x01UL << RTC_WAR_CRW_SHIFT)                       /*!< RTC_WAR: CRW Mask                       */
#define RTC_WAR_CRW_SHIFT                        4                                                   /*!< RTC_WAR: CRW Position                   */
#define RTC_WAR_SRW_MASK                         (0x01UL << RTC_WAR_SRW_SHIFT)                       /*!< RTC_WAR: SRW Mask                       */
#define RTC_WAR_SRW_SHIFT                        5                                                   /*!< RTC_WAR: SRW Position                   */
#define RTC_WAR_LRW_MASK                         (0x01UL << RTC_WAR_LRW_SHIFT)                       /*!< RTC_WAR: LRW Mask                       */
#define RTC_WAR_LRW_SHIFT                        6                                                   /*!< RTC_WAR: LRW Position                   */
#define RTC_WAR_IERW_MASK                        (0x01UL << RTC_WAR_IERW_SHIFT)                      /*!< RTC_WAR: IERW Mask                      */
#define RTC_WAR_IERW_SHIFT                       7                                                   /*!< RTC_WAR: IERW Position                  */
#define RTC_WAR_TTSW_MASK                        (0x01UL << RTC_WAR_TTSW_SHIFT)                      /*!< RTC_WAR: TTSW Mask                      */
#define RTC_WAR_TTSW_SHIFT                       8                                                   /*!< RTC_WAR: TTSW Position                  */
#define RTC_WAR_MERW_MASK                        (0x01UL << RTC_WAR_MERW_SHIFT)                      /*!< RTC_WAR: MERW Mask                      */
#define RTC_WAR_MERW_SHIFT                       9                                                   /*!< RTC_WAR: MERW Position                  */
#define RTC_WAR_MCLW_MASK                        (0x01UL << RTC_WAR_MCLW_SHIFT)                      /*!< RTC_WAR: MCLW Mask                      */
#define RTC_WAR_MCLW_SHIFT                       10                                                  /*!< RTC_WAR: MCLW Position                  */
#define RTC_WAR_MCHW_MASK                        (0x01UL << RTC_WAR_MCHW_SHIFT)                      /*!< RTC_WAR: MCHW Mask                      */
#define RTC_WAR_MCHW_SHIFT                       11                                                  /*!< RTC_WAR: MCHW Position                  */

/* ------- RTC_RAR                                  ------ */
#define RTC_RAR_TSRR_MASK                        (0x01UL << RTC_RAR_TSRR_SHIFT)                      /*!< RTC_RAR: TSRR Mask                      */
#define RTC_RAR_TSRR_SHIFT                       0                                                   /*!< RTC_RAR: TSRR Position                  */
#define RTC_RAR_TPRR_MASK                        (0x01UL << RTC_RAR_TPRR_SHIFT)                      /*!< RTC_RAR: TPRR Mask                      */
#define RTC_RAR_TPRR_SHIFT                       1                                                   /*!< RTC_RAR: TPRR Position                  */
#define RTC_RAR_TARR_MASK                        (0x01UL << RTC_RAR_TARR_SHIFT)                      /*!< RTC_RAR: TARR Mask                      */
#define RTC_RAR_TARR_SHIFT                       2                                                   /*!< RTC_RAR: TARR Position                  */
#define RTC_RAR_TCRR_MASK                        (0x01UL << RTC_RAR_TCRR_SHIFT)                      /*!< RTC_RAR: TCRR Mask                      */
#define RTC_RAR_TCRR_SHIFT                       3                                                   /*!< RTC_RAR: TCRR Position                  */
#define RTC_RAR_CRR_MASK                         (0x01UL << RTC_RAR_CRR_SHIFT)                       /*!< RTC_RAR: CRR Mask                       */
#define RTC_RAR_CRR_SHIFT                        4                                                   /*!< RTC_RAR: CRR Position                   */
#define RTC_RAR_SRR_MASK                         (0x01UL << RTC_RAR_SRR_SHIFT)                       /*!< RTC_RAR: SRR Mask                       */
#define RTC_RAR_SRR_SHIFT                        5                                                   /*!< RTC_RAR: SRR Position                   */
#define RTC_RAR_LRR_MASK                         (0x01UL << RTC_RAR_LRR_SHIFT)                       /*!< RTC_RAR: LRR Mask                       */
#define RTC_RAR_LRR_SHIFT                        6                                                   /*!< RTC_RAR: LRR Position                   */
#define RTC_RAR_IERR_MASK                        (0x01UL << RTC_RAR_IERR_SHIFT)                      /*!< RTC_RAR: IERR Mask                      */
#define RTC_RAR_IERR_SHIFT                       7                                                   /*!< RTC_RAR: IERR Position                  */
#define RTC_RAR_TTSR_MASK                        (0x01UL << RTC_RAR_TTSR_SHIFT)                      /*!< RTC_RAR: TTSR Mask                      */
#define RTC_RAR_TTSR_SHIFT                       8                                                   /*!< RTC_RAR: TTSR Position                  */
#define RTC_RAR_MERR_MASK                        (0x01UL << RTC_RAR_MERR_SHIFT)                      /*!< RTC_RAR: MERR Mask                      */
#define RTC_RAR_MERR_SHIFT                       9                                                   /*!< RTC_RAR: MERR Position                  */
#define RTC_RAR_MCLR_MASK                        (0x01UL << RTC_RAR_MCLR_SHIFT)                      /*!< RTC_RAR: MCLR Mask                      */
#define RTC_RAR_MCLR_SHIFT                       10                                                  /*!< RTC_RAR: MCLR Position                  */
#define RTC_RAR_MCHR_MASK                        (0x01UL << RTC_RAR_MCHR_SHIFT)                      /*!< RTC_RAR: MCHR Mask                      */
#define RTC_RAR_MCHR_SHIFT                       11                                                  /*!< RTC_RAR: MCHR Position                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define RTC_TSR                        (RTC->TSR)
#define RTC_TPR                        (RTC->TPR)
#define RTC_TAR                        (RTC->TAR)
#define RTC_TCR                        (RTC->TCR)
#define RTC_CR                         (RTC->CR)
#define RTC_SR                         (RTC->SR)
#define RTC_LR                         (RTC->LR)
#define RTC_IER                        (RTC->IER)
#define RTC_TTSR                       (RTC->TTSR)
#define RTC_MER                        (RTC->MER)
#define RTC_MCLR                       (RTC->MCLR)
#define RTC_MCHR                       (RTC->MCHR)
#define RTC_WAR                        (RTC->WAR)
#define RTC_RAR                        (RTC->RAR)

/* ================================================================================ */
/* ================           SIM (file:SIM_MK11D5)                ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module
 */
typedef struct {                                /*!<       SIM Structure                                                */
   __IO uint32_t  SOPT1;                        /*!< 0000: System Options Register 1                                    */
   __I  uint32_t  RESERVED0[1024];              /*!< 0004:                                                              */
   __IO uint32_t  SOPT2;                        /*!< 1004: System Options Register 2                                    */
   __I  uint32_t  RESERVED1;                    /*!< 1008:                                                              */
   __IO uint32_t  SOPT4;                        /*!< 100C: System Options Register 4                                    */
   __IO uint32_t  SOPT5;                        /*!< 1010: System Options Register 5                                    */
   __I  uint32_t  RESERVED2;                    /*!< 1014:                                                              */
   __IO uint32_t  SOPT7;                        /*!< 1018: System Options Register 7                                    */
   __I  uint32_t  RESERVED3[2];                 /*!< 101C:                                                              */
   __I  uint32_t  SDID;                         /*!< 1024: System Device Identification Register                        */
   __I  uint32_t  RESERVED4[3];                 /*!< 1028:                                                              */
   __IO uint32_t  SCGC4;                        /*!< 1034: System Clock Gating Control Register 4                       */
   __IO uint32_t  SCGC5;                        /*!< 1038: System Clock Gating Control Register 5                       */
   __IO uint32_t  SCGC6;                        /*!< 103C: System Clock Gating Control Register 6                       */
   __IO uint32_t  SCGC7;                        /*!< 1040: System Clock Gating Control Register 7                       */
   __IO uint32_t  CLKDIV1;                      /*!< 1044: System Clock Divider Register 1                              */
   __I  uint32_t  CLKDIV2;                      /*!< 1048: System Clock Divider Register 2                              */
   __IO uint32_t  FCFG1;                        /*!< 104C: Flash Configuration Register 1                               */
   __I  uint32_t  FCFG2;                        /*!< 1050: Flash Configuration Register 2                               */
   __I  uint32_t  UIDH;                         /*!< 1054: Unique Identification Register High                          */
   __I  uint32_t  UIDMH;                        /*!< 1058: Unique Identification Register Mid-High                      */
   __I  uint32_t  UIDML;                        /*!< 105C: Unique Identification Register Mid Low                       */
   __I  uint32_t  UIDL;                         /*!< 1060: Unique Identification Register Low                           */
} SIM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SIM_SOPT1                                ------ */
#define SIM_SOPT1_RAMSIZE_MASK                   (0x0FUL << SIM_SOPT1_RAMSIZE_SHIFT)                 /*!< SIM_SOPT1: RAMSIZE Mask                 */
#define SIM_SOPT1_RAMSIZE_SHIFT                  12                                                  /*!< SIM_SOPT1: RAMSIZE Position             */
#define SIM_SOPT1_RAMSIZE(x)                     (((x)<<SIM_SOPT1_RAMSIZE_SHIFT)&SIM_SOPT1_RAMSIZE_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_OSC32KSEL_MASK                 (0x03UL << SIM_SOPT1_OSC32KSEL_SHIFT)               /*!< SIM_SOPT1: OSC32KSEL Mask               */
#define SIM_SOPT1_OSC32KSEL_SHIFT                18                                                  /*!< SIM_SOPT1: OSC32KSEL Position           */
#define SIM_SOPT1_OSC32KSEL(x)                   (((x)<<SIM_SOPT1_OSC32KSEL_SHIFT)&SIM_SOPT1_OSC32KSEL_MASK) /*!< SIM_SOPT1                               */

/* ------- SIM_SOPT2                                ------ */
#define SIM_SOPT2_RTCCLKOUTSEL_MASK              (0x01UL << SIM_SOPT2_RTCCLKOUTSEL_SHIFT)            /*!< SIM_SOPT2: RTCCLKOUTSEL Mask            */
#define SIM_SOPT2_RTCCLKOUTSEL_SHIFT             4                                                   /*!< SIM_SOPT2: RTCCLKOUTSEL Position        */
#define SIM_SOPT2_CLKOUTSEL_MASK                 (0x07UL << SIM_SOPT2_CLKOUTSEL_SHIFT)               /*!< SIM_SOPT2: CLKOUTSEL Mask               */
#define SIM_SOPT2_CLKOUTSEL_SHIFT                5                                                   /*!< SIM_SOPT2: CLKOUTSEL Position           */
#define SIM_SOPT2_CLKOUTSEL(x)                   (((x)<<SIM_SOPT2_CLKOUTSEL_SHIFT)&SIM_SOPT2_CLKOUTSEL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_PTD7PAD_MASK                   (0x01UL << SIM_SOPT2_PTD7PAD_SHIFT)                 /*!< SIM_SOPT2: PTD7PAD Mask                 */
#define SIM_SOPT2_PTD7PAD_SHIFT                  11                                                  /*!< SIM_SOPT2: PTD7PAD Position             */
#define SIM_SOPT2_TRACECLKSEL_MASK               (0x01UL << SIM_SOPT2_TRACECLKSEL_SHIFT)             /*!< SIM_SOPT2: TRACECLKSEL Mask             */
#define SIM_SOPT2_TRACECLKSEL_SHIFT              12                                                  /*!< SIM_SOPT2: TRACECLKSEL Position         */
#define SIM_SOPT2_PLLFLLSEL_MASK                 (0x01UL << SIM_SOPT2_PLLFLLSEL_SHIFT)               /*!< SIM_SOPT2: PLLFLLSEL Mask               */
#define SIM_SOPT2_PLLFLLSEL_SHIFT                16                                                  /*!< SIM_SOPT2: PLLFLLSEL Position           */

/* ------- SIM_SOPT4                                ------ */
#define SIM_SOPT4_FTM0FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM0FLT0_SHIFT)                /*!< SIM_SOPT4: FTM0FLT0 Mask                */
#define SIM_SOPT4_FTM0FLT0_SHIFT                 0                                                   /*!< SIM_SOPT4: FTM0FLT0 Position            */
#define SIM_SOPT4_FTM0FLT1_MASK                  (0x01UL << SIM_SOPT4_FTM0FLT1_SHIFT)                /*!< SIM_SOPT4: FTM0FLT1 Mask                */
#define SIM_SOPT4_FTM0FLT1_SHIFT                 1                                                   /*!< SIM_SOPT4: FTM0FLT1 Position            */
#define SIM_SOPT4_FTM1FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM1FLT0_SHIFT)                /*!< SIM_SOPT4: FTM1FLT0 Mask                */
#define SIM_SOPT4_FTM1FLT0_SHIFT                 4                                                   /*!< SIM_SOPT4: FTM1FLT0 Position            */
#define SIM_SOPT4_FTM2FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM2FLT0_SHIFT)                /*!< SIM_SOPT4: FTM2FLT0 Mask                */
#define SIM_SOPT4_FTM2FLT0_SHIFT                 8                                                   /*!< SIM_SOPT4: FTM2FLT0 Position            */
#define SIM_SOPT4_FTM1CH0SRC_MASK                (0x03UL << SIM_SOPT4_FTM1CH0SRC_SHIFT)              /*!< SIM_SOPT4: FTM1CH0SRC Mask              */
#define SIM_SOPT4_FTM1CH0SRC_SHIFT               18                                                  /*!< SIM_SOPT4: FTM1CH0SRC Position          */
#define SIM_SOPT4_FTM1CH0SRC(x)                  (((x)<<SIM_SOPT4_FTM1CH0SRC_SHIFT)&SIM_SOPT4_FTM1CH0SRC_MASK) /*!< SIM_SOPT4                               */
#define SIM_SOPT4_FTM2CH0SRC_MASK                (0x03UL << SIM_SOPT4_FTM2CH0SRC_SHIFT)              /*!< SIM_SOPT4: FTM2CH0SRC Mask              */
#define SIM_SOPT4_FTM2CH0SRC_SHIFT               20                                                  /*!< SIM_SOPT4: FTM2CH0SRC Position          */
#define SIM_SOPT4_FTM2CH0SRC(x)                  (((x)<<SIM_SOPT4_FTM2CH0SRC_SHIFT)&SIM_SOPT4_FTM2CH0SRC_MASK) /*!< SIM_SOPT4                               */
#define SIM_SOPT4_FTM0CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM0CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM0CLKSEL Mask              */
#define SIM_SOPT4_FTM0CLKSEL_SHIFT               24                                                  /*!< SIM_SOPT4: FTM0CLKSEL Position          */
#define SIM_SOPT4_FTM1CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM1CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM1CLKSEL Mask              */
#define SIM_SOPT4_FTM1CLKSEL_SHIFT               25                                                  /*!< SIM_SOPT4: FTM1CLKSEL Position          */
#define SIM_SOPT4_FTM2CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM2CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM2CLKSEL Mask              */
#define SIM_SOPT4_FTM2CLKSEL_SHIFT               26                                                  /*!< SIM_SOPT4: FTM2CLKSEL Position          */
#define SIM_SOPT4_FTM0TRG0SRC_MASK               (0x01UL << SIM_SOPT4_FTM0TRG0SRC_SHIFT)             /*!< SIM_SOPT4: FTM0TRG0SRC Mask             */
#define SIM_SOPT4_FTM0TRG0SRC_SHIFT              28                                                  /*!< SIM_SOPT4: FTM0TRG0SRC Position         */
#define SIM_SOPT4_FTM0TRG1SRC_MASK               (0x01UL << SIM_SOPT4_FTM0TRG1SRC_SHIFT)             /*!< SIM_SOPT4: FTM0TRG1SRC Mask             */
#define SIM_SOPT4_FTM0TRG1SRC_SHIFT              29                                                  /*!< SIM_SOPT4: FTM0TRG1SRC Position         */

/* ------- SIM_SOPT5                                ------ */
#define SIM_SOPT5_UART0TXSRC_MASK                (0x03UL << SIM_SOPT5_UART0TXSRC_SHIFT)              /*!< SIM_SOPT5: UART0TXSRC Mask              */
#define SIM_SOPT5_UART0TXSRC_SHIFT               0                                                   /*!< SIM_SOPT5: UART0TXSRC Position          */
#define SIM_SOPT5_UART0TXSRC(x)                  (((x)<<SIM_SOPT5_UART0TXSRC_SHIFT)&SIM_SOPT5_UART0TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART0RXSRC_MASK                (0x03UL << SIM_SOPT5_UART0RXSRC_SHIFT)              /*!< SIM_SOPT5: UART0RXSRC Mask              */
#define SIM_SOPT5_UART0RXSRC_SHIFT               2                                                   /*!< SIM_SOPT5: UART0RXSRC Position          */
#define SIM_SOPT5_UART0RXSRC(x)                  (((x)<<SIM_SOPT5_UART0RXSRC_SHIFT)&SIM_SOPT5_UART0RXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART1TXSRC_MASK                (0x03UL << SIM_SOPT5_UART1TXSRC_SHIFT)              /*!< SIM_SOPT5: UART1TXSRC Mask              */
#define SIM_SOPT5_UART1TXSRC_SHIFT               4                                                   /*!< SIM_SOPT5: UART1TXSRC Position          */
#define SIM_SOPT5_UART1TXSRC(x)                  (((x)<<SIM_SOPT5_UART1TXSRC_SHIFT)&SIM_SOPT5_UART1TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART1RXSRC_MASK                (0x03UL << SIM_SOPT5_UART1RXSRC_SHIFT)              /*!< SIM_SOPT5: UART1RXSRC Mask              */
#define SIM_SOPT5_UART1RXSRC_SHIFT               6                                                   /*!< SIM_SOPT5: UART1RXSRC Position          */
#define SIM_SOPT5_UART1RXSRC(x)                  (((x)<<SIM_SOPT5_UART1RXSRC_SHIFT)&SIM_SOPT5_UART1RXSRC_MASK) /*!< SIM_SOPT5                               */

/* ------- SIM_SOPT7                                ------ */
#define SIM_SOPT7_ADC0TRGSEL_MASK                (0x0FUL << SIM_SOPT7_ADC0TRGSEL_SHIFT)              /*!< SIM_SOPT7: ADC0TRGSEL Mask              */
#define SIM_SOPT7_ADC0TRGSEL_SHIFT               0                                                   /*!< SIM_SOPT7: ADC0TRGSEL Position          */
#define SIM_SOPT7_ADC0TRGSEL(x)                  (((x)<<SIM_SOPT7_ADC0TRGSEL_SHIFT)&SIM_SOPT7_ADC0TRGSEL_MASK) /*!< SIM_SOPT7                               */
#define SIM_SOPT7_ADC0PRETRGSEL_MASK             (0x01UL << SIM_SOPT7_ADC0PRETRGSEL_SHIFT)           /*!< SIM_SOPT7: ADC0PRETRGSEL Mask           */
#define SIM_SOPT7_ADC0PRETRGSEL_SHIFT            4                                                   /*!< SIM_SOPT7: ADC0PRETRGSEL Position       */
#define SIM_SOPT7_ADC0ALTTRGEN_MASK              (0x01UL << SIM_SOPT7_ADC0ALTTRGEN_SHIFT)            /*!< SIM_SOPT7: ADC0ALTTRGEN Mask            */
#define SIM_SOPT7_ADC0ALTTRGEN_SHIFT             7                                                   /*!< SIM_SOPT7: ADC0ALTTRGEN Position        */

/* ------- SIM_SDID                                 ------ */
#define SIM_SDID_PINID_MASK                      (0x0FUL << SIM_SDID_PINID_SHIFT)                    /*!< SIM_SDID: PINID Mask                    */
#define SIM_SDID_PINID_SHIFT                     0                                                   /*!< SIM_SDID: PINID Position                */
#define SIM_SDID_PINID(x)                        (((x)<<SIM_SDID_PINID_SHIFT)&SIM_SDID_PINID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_FAMID_MASK                      (0x07UL << SIM_SDID_FAMID_SHIFT)                    /*!< SIM_SDID: FAMID Mask                    */
#define SIM_SDID_FAMID_SHIFT                     4                                                   /*!< SIM_SDID: FAMID Position                */
#define SIM_SDID_FAMID(x)                        (((x)<<SIM_SDID_FAMID_SHIFT)&SIM_SDID_FAMID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_DIEID_MASK                      (0x1FUL << SIM_SDID_DIEID_SHIFT)                    /*!< SIM_SDID: DIEID Mask                    */
#define SIM_SDID_DIEID_SHIFT                     7                                                   /*!< SIM_SDID: DIEID Position                */
#define SIM_SDID_DIEID(x)                        (((x)<<SIM_SDID_DIEID_SHIFT)&SIM_SDID_DIEID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_REVID_MASK                      (0x0FUL << SIM_SDID_REVID_SHIFT)                    /*!< SIM_SDID: REVID Mask                    */
#define SIM_SDID_REVID_SHIFT                     12                                                  /*!< SIM_SDID: REVID Position                */
#define SIM_SDID_REVID(x)                        (((x)<<SIM_SDID_REVID_SHIFT)&SIM_SDID_REVID_MASK)   /*!< SIM_SDID                                */

/* ------- SIM_SCGC4                                ------ */
#define SIM_SCGC4_EWM_MASK                       (0x01UL << SIM_SCGC4_EWM_SHIFT)                     /*!< SIM_SCGC4: EWM Mask                     */
#define SIM_SCGC4_EWM_SHIFT                      1                                                   /*!< SIM_SCGC4: EWM Position                 */
#define SIM_SCGC4_CMT_MASK                       (0x01UL << SIM_SCGC4_CMT_SHIFT)                     /*!< SIM_SCGC4: CMT Mask                     */
#define SIM_SCGC4_CMT_SHIFT                      2                                                   /*!< SIM_SCGC4: CMT Position                 */
#define SIM_SCGC4_I2C0_MASK                      (0x01UL << SIM_SCGC4_I2C0_SHIFT)                    /*!< SIM_SCGC4: I2C0 Mask                    */
#define SIM_SCGC4_I2C0_SHIFT                     6                                                   /*!< SIM_SCGC4: I2C0 Position                */
#define SIM_SCGC4_I2C1_MASK                      (0x01UL << SIM_SCGC4_I2C1_SHIFT)                    /*!< SIM_SCGC4: I2C1 Mask                    */
#define SIM_SCGC4_I2C1_SHIFT                     7                                                   /*!< SIM_SCGC4: I2C1 Position                */
#define SIM_SCGC4_UART0_MASK                     (0x01UL << SIM_SCGC4_UART0_SHIFT)                   /*!< SIM_SCGC4: UART0 Mask                   */
#define SIM_SCGC4_UART0_SHIFT                    10                                                  /*!< SIM_SCGC4: UART0 Position               */
#define SIM_SCGC4_UART1_MASK                     (0x01UL << SIM_SCGC4_UART1_SHIFT)                   /*!< SIM_SCGC4: UART1 Mask                   */
#define SIM_SCGC4_UART1_SHIFT                    11                                                  /*!< SIM_SCGC4: UART1 Position               */
#define SIM_SCGC4_UART2_MASK                     (0x01UL << SIM_SCGC4_UART2_SHIFT)                   /*!< SIM_SCGC4: UART2 Mask                   */
#define SIM_SCGC4_UART2_SHIFT                    12                                                  /*!< SIM_SCGC4: UART2 Position               */
#define SIM_SCGC4_UART3_MASK                     (0x01UL << SIM_SCGC4_UART3_SHIFT)                   /*!< SIM_SCGC4: UART3 Mask                   */
#define SIM_SCGC4_UART3_SHIFT                    13                                                  /*!< SIM_SCGC4: UART3 Position               */
#define SIM_SCGC4_CMP_MASK                       (0x01UL << SIM_SCGC4_CMP_SHIFT)                     /*!< SIM_SCGC4: CMP Mask                     */
#define SIM_SCGC4_CMP_SHIFT                      19                                                  /*!< SIM_SCGC4: CMP Position                 */
#define SIM_SCGC4_VREF_MASK                      (0x01UL << SIM_SCGC4_VREF_SHIFT)                    /*!< SIM_SCGC4: VREF Mask                    */
#define SIM_SCGC4_VREF_SHIFT                     20                                                  /*!< SIM_SCGC4: VREF Position                */

/* ------- SIM_SCGC5                                ------ */
#define SIM_SCGC5_LPTMR_MASK                     (0x01UL << SIM_SCGC5_LPTMR_SHIFT)                   /*!< SIM_SCGC5: LPTMR Mask                   */
#define SIM_SCGC5_LPTMR_SHIFT                    0                                                   /*!< SIM_SCGC5: LPTMR Position               */
#define SIM_SCGC5_PORTA_MASK                     (0x01UL << SIM_SCGC5_PORTA_SHIFT)                   /*!< SIM_SCGC5: PORTA Mask                   */
#define SIM_SCGC5_PORTA_SHIFT                    9                                                   /*!< SIM_SCGC5: PORTA Position               */
#define SIM_SCGC5_PORTB_MASK                     (0x01UL << SIM_SCGC5_PORTB_SHIFT)                   /*!< SIM_SCGC5: PORTB Mask                   */
#define SIM_SCGC5_PORTB_SHIFT                    10                                                  /*!< SIM_SCGC5: PORTB Position               */
#define SIM_SCGC5_PORTC_MASK                     (0x01UL << SIM_SCGC5_PORTC_SHIFT)                   /*!< SIM_SCGC5: PORTC Mask                   */
#define SIM_SCGC5_PORTC_SHIFT                    11                                                  /*!< SIM_SCGC5: PORTC Position               */
#define SIM_SCGC5_PORTD_MASK                     (0x01UL << SIM_SCGC5_PORTD_SHIFT)                   /*!< SIM_SCGC5: PORTD Mask                   */
#define SIM_SCGC5_PORTD_SHIFT                    12                                                  /*!< SIM_SCGC5: PORTD Position               */
#define SIM_SCGC5_PORTE_MASK                     (0x01UL << SIM_SCGC5_PORTE_SHIFT)                   /*!< SIM_SCGC5: PORTE Mask                   */
#define SIM_SCGC5_PORTE_SHIFT                    13                                                  /*!< SIM_SCGC5: PORTE Position               */

/* ------- SIM_SCGC6                                ------ */
#define SIM_SCGC6_FTFL_MASK                      (0x01UL << SIM_SCGC6_FTFL_SHIFT)                    /*!< SIM_SCGC6: FTFL Mask                    */
#define SIM_SCGC6_FTFL_SHIFT                     0                                                   /*!< SIM_SCGC6: FTFL Position                */
#define SIM_SCGC6_DMAMUX_MASK                    (0x01UL << SIM_SCGC6_DMAMUX_SHIFT)                  /*!< SIM_SCGC6: DMAMUX Mask                  */
#define SIM_SCGC6_DMAMUX_SHIFT                   1                                                   /*!< SIM_SCGC6: DMAMUX Position              */
#define SIM_SCGC6_RNGA_MASK                      (0x01UL << SIM_SCGC6_RNGA_SHIFT)                    /*!< SIM_SCGC6: RNGA Mask                    */
#define SIM_SCGC6_RNGA_SHIFT                     9                                                   /*!< SIM_SCGC6: RNGA Position                */
#define SIM_SCGC6_SPI0_MASK                      (0x01UL << SIM_SCGC6_SPI0_SHIFT)                    /*!< SIM_SCGC6: SPI0 Mask                    */
#define SIM_SCGC6_SPI0_SHIFT                     12                                                  /*!< SIM_SCGC6: SPI0 Position                */
#define SIM_SCGC6_SPI1_MASK                      (0x01UL << SIM_SCGC6_SPI1_SHIFT)                    /*!< SIM_SCGC6: SPI1 Mask                    */
#define SIM_SCGC6_SPI1_SHIFT                     13                                                  /*!< SIM_SCGC6: SPI1 Position                */
#define SIM_SCGC6_I2S_MASK                       (0x01UL << SIM_SCGC6_I2S_SHIFT)                     /*!< SIM_SCGC6: I2S Mask                     */
#define SIM_SCGC6_I2S_SHIFT                      15                                                  /*!< SIM_SCGC6: I2S Position                 */
#define SIM_SCGC6_CRC_MASK                       (0x01UL << SIM_SCGC6_CRC_SHIFT)                     /*!< SIM_SCGC6: CRC Mask                     */
#define SIM_SCGC6_CRC_SHIFT                      18                                                  /*!< SIM_SCGC6: CRC Position                 */
#define SIM_SCGC6_PDB_MASK                       (0x01UL << SIM_SCGC6_PDB_SHIFT)                     /*!< SIM_SCGC6: PDB Mask                     */
#define SIM_SCGC6_PDB_SHIFT                      22                                                  /*!< SIM_SCGC6: PDB Position                 */
#define SIM_SCGC6_PIT_MASK                       (0x01UL << SIM_SCGC6_PIT_SHIFT)                     /*!< SIM_SCGC6: PIT Mask                     */
#define SIM_SCGC6_PIT_SHIFT                      23                                                  /*!< SIM_SCGC6: PIT Position                 */
#define SIM_SCGC6_FTM0_MASK                      (0x01UL << SIM_SCGC6_FTM0_SHIFT)                    /*!< SIM_SCGC6: FTM0 Mask                    */
#define SIM_SCGC6_FTM0_SHIFT                     24                                                  /*!< SIM_SCGC6: FTM0 Position                */
#define SIM_SCGC6_FTM1_MASK                      (0x01UL << SIM_SCGC6_FTM1_SHIFT)                    /*!< SIM_SCGC6: FTM1 Mask                    */
#define SIM_SCGC6_FTM1_SHIFT                     25                                                  /*!< SIM_SCGC6: FTM1 Position                */
#define SIM_SCGC6_FTM2_MASK                      (0x01UL << SIM_SCGC6_FTM2_SHIFT)                    /*!< SIM_SCGC6: FTM2 Mask                    */
#define SIM_SCGC6_FTM2_SHIFT                     26                                                  /*!< SIM_SCGC6: FTM2 Position                */
#define SIM_SCGC6_ADC0_MASK                      (0x01UL << SIM_SCGC6_ADC0_SHIFT)                    /*!< SIM_SCGC6: ADC0 Mask                    */
#define SIM_SCGC6_ADC0_SHIFT                     27                                                  /*!< SIM_SCGC6: ADC0 Position                */
#define SIM_SCGC6_RTC_MASK                       (0x01UL << SIM_SCGC6_RTC_SHIFT)                     /*!< SIM_SCGC6: RTC Mask                     */
#define SIM_SCGC6_RTC_SHIFT                      29                                                  /*!< SIM_SCGC6: RTC Position                 */
#define SIM_SCGC6_DAC0_MASK                      (0x01UL << SIM_SCGC6_DAC0_SHIFT)                    /*!< SIM_SCGC6: DAC0 Mask                    */
#define SIM_SCGC6_DAC0_SHIFT                     31                                                  /*!< SIM_SCGC6: DAC0 Position                */

/* ------- SIM_SCGC7                                ------ */
#define SIM_SCGC7_DMA_MASK                       (0x01UL << SIM_SCGC7_DMA_SHIFT)                     /*!< SIM_SCGC7: DMA Mask                     */
#define SIM_SCGC7_DMA_SHIFT                      1                                                   /*!< SIM_SCGC7: DMA Position                 */

/* ------- SIM_CLKDIV1                              ------ */
#define SIM_CLKDIV1_OUTDIV4_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV4_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV4 Mask               */
#define SIM_CLKDIV1_OUTDIV4_SHIFT                16                                                  /*!< SIM_CLKDIV1: OUTDIV4 Position           */
#define SIM_CLKDIV1_OUTDIV4(x)                   (((x)<<SIM_CLKDIV1_OUTDIV4_SHIFT)&SIM_CLKDIV1_OUTDIV4_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV2_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV2_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV2 Mask               */
#define SIM_CLKDIV1_OUTDIV2_SHIFT                24                                                  /*!< SIM_CLKDIV1: OUTDIV2 Position           */
#define SIM_CLKDIV1_OUTDIV2(x)                   (((x)<<SIM_CLKDIV1_OUTDIV2_SHIFT)&SIM_CLKDIV1_OUTDIV2_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV1_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV1_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV1 Mask               */
#define SIM_CLKDIV1_OUTDIV1_SHIFT                28                                                  /*!< SIM_CLKDIV1: OUTDIV1 Position           */
#define SIM_CLKDIV1_OUTDIV1(x)                   (((x)<<SIM_CLKDIV1_OUTDIV1_SHIFT)&SIM_CLKDIV1_OUTDIV1_MASK) /*!< SIM_CLKDIV1                             */

/* ------- SIM_CLKDIV2                              ------ */

/* ------- SIM_FCFG1                                ------ */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x01UL << SIM_FCFG1_FLASHDIS_SHIFT)                /*!< SIM_FCFG1: FLASHDIS Mask                */
#define SIM_FCFG1_FLASHDIS_SHIFT                 0                                                   /*!< SIM_FCFG1: FLASHDIS Position            */
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x01UL << SIM_FCFG1_FLASHDOZE_SHIFT)               /*!< SIM_FCFG1: FLASHDOZE Mask               */
#define SIM_FCFG1_FLASHDOZE_SHIFT                1                                                   /*!< SIM_FCFG1: FLASHDOZE Position           */
#define SIM_FCFG1_DEPART_MASK                    (0x0FUL << SIM_FCFG1_DEPART_SHIFT)                  /*!< SIM_FCFG1: DEPART Mask                  */
#define SIM_FCFG1_DEPART_SHIFT                   8                                                   /*!< SIM_FCFG1: DEPART Position              */
#define SIM_FCFG1_DEPART(x)                      (((x)<<SIM_FCFG1_DEPART_SHIFT)&SIM_FCFG1_DEPART_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_EESIZE_MASK                    (0x0FUL << SIM_FCFG1_EESIZE_SHIFT)                  /*!< SIM_FCFG1: EESIZE Mask                  */
#define SIM_FCFG1_EESIZE_SHIFT                   16                                                  /*!< SIM_FCFG1: EESIZE Position              */
#define SIM_FCFG1_EESIZE(x)                      (((x)<<SIM_FCFG1_EESIZE_SHIFT)&SIM_FCFG1_EESIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_PFSIZE_MASK                    (0x0FUL << SIM_FCFG1_PFSIZE_SHIFT)                  /*!< SIM_FCFG1: PFSIZE Mask                  */
#define SIM_FCFG1_PFSIZE_SHIFT                   24                                                  /*!< SIM_FCFG1: PFSIZE Position              */
#define SIM_FCFG1_PFSIZE(x)                      (((x)<<SIM_FCFG1_PFSIZE_SHIFT)&SIM_FCFG1_PFSIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_NVMSIZE_MASK                   (0x0FUL << SIM_FCFG1_NVMSIZE_SHIFT)                 /*!< SIM_FCFG1: NVMSIZE Mask                 */
#define SIM_FCFG1_NVMSIZE_SHIFT                  28                                                  /*!< SIM_FCFG1: NVMSIZE Position             */
#define SIM_FCFG1_NVMSIZE(x)                     (((x)<<SIM_FCFG1_NVMSIZE_SHIFT)&SIM_FCFG1_NVMSIZE_MASK) /*!< SIM_FCFG1                               */

/* ------- SIM_FCFG2                                ------ */
#define SIM_FCFG2_MAXADDR1_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR1_SHIFT)                /*!< SIM_FCFG2: MAXADDR1 Mask                */
#define SIM_FCFG2_MAXADDR1_SHIFT                 16                                                  /*!< SIM_FCFG2: MAXADDR1 Position            */
#define SIM_FCFG2_MAXADDR1(x)                    (((x)<<SIM_FCFG2_MAXADDR1_SHIFT)&SIM_FCFG2_MAXADDR1_MASK) /*!< SIM_FCFG2                               */
#define SIM_FCFG2_PFLSH_MASK                     (0x01UL << SIM_FCFG2_PFLSH_SHIFT)                   /*!< SIM_FCFG2: PFLSH Mask                   */
#define SIM_FCFG2_PFLSH_SHIFT                    23                                                  /*!< SIM_FCFG2: PFLSH Position               */
#define SIM_FCFG2_MAXADDR0_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR0_SHIFT)                /*!< SIM_FCFG2: MAXADDR0 Mask                */
#define SIM_FCFG2_MAXADDR0_SHIFT                 24                                                  /*!< SIM_FCFG2: MAXADDR0 Position            */
#define SIM_FCFG2_MAXADDR0(x)                    (((x)<<SIM_FCFG2_MAXADDR0_SHIFT)&SIM_FCFG2_MAXADDR0_MASK) /*!< SIM_FCFG2                               */
#define SIM_FCFG2_SWAPPFLSH_MASK                 (0x01UL << SIM_FCFG2_SWAPPFLSH_SHIFT)               /*!< SIM_FCFG2: SWAPPFLSH Mask               */
#define SIM_FCFG2_SWAPPFLSH_SHIFT                31                                                  /*!< SIM_FCFG2: SWAPPFLSH Position           */

/* ------- SIM_UIDH                                 ------ */
#define SIM_UIDH_UID_MASK                        (0xFFFFFFFFUL << SIM_UIDH_UID_SHIFT)                /*!< SIM_UIDH: UID Mask                      */
#define SIM_UIDH_UID_SHIFT                       0                                                   /*!< SIM_UIDH: UID Position                  */
#define SIM_UIDH_UID(x)                          (((x)<<SIM_UIDH_UID_SHIFT)&SIM_UIDH_UID_MASK)       /*!< SIM_UIDH                                */

/* ------- SIM_UIDMH                                ------ */
#define SIM_UIDMH_UID_MASK                       (0xFFFFFFFFUL << SIM_UIDMH_UID_SHIFT)               /*!< SIM_UIDMH: UID Mask                     */
#define SIM_UIDMH_UID_SHIFT                      0                                                   /*!< SIM_UIDMH: UID Position                 */
#define SIM_UIDMH_UID(x)                         (((x)<<SIM_UIDMH_UID_SHIFT)&SIM_UIDMH_UID_MASK)     /*!< SIM_UIDMH                               */

/* ------- SIM_UIDML                                ------ */
#define SIM_UIDML_UID_MASK                       (0xFFFFFFFFUL << SIM_UIDML_UID_SHIFT)               /*!< SIM_UIDML: UID Mask                     */
#define SIM_UIDML_UID_SHIFT                      0                                                   /*!< SIM_UIDML: UID Position                 */
#define SIM_UIDML_UID(x)                         (((x)<<SIM_UIDML_UID_SHIFT)&SIM_UIDML_UID_MASK)     /*!< SIM_UIDML                               */

/* ------- SIM_UIDL                                 ------ */
#define SIM_UIDL_UID_MASK                        (0xFFFFFFFFUL << SIM_UIDL_UID_SHIFT)                /*!< SIM_UIDL: UID Mask                      */
#define SIM_UIDL_UID_SHIFT                       0                                                   /*!< SIM_UIDL: UID Position                  */
#define SIM_UIDL_UID(x)                          (((x)<<SIM_UIDL_UID_SHIFT)&SIM_UIDL_UID_MASK)       /*!< SIM_UIDL                                */

/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define SIM_SOPT1                      (SIM->SOPT1)
#define SIM_SOPT2                      (SIM->SOPT2)
#define SIM_SOPT4                      (SIM->SOPT4)
#define SIM_SOPT5                      (SIM->SOPT5)
#define SIM_SOPT7                      (SIM->SOPT7)
#define SIM_SDID                       (SIM->SDID)
#define SIM_SCGC4                      (SIM->SCGC4)
#define SIM_SCGC5                      (SIM->SCGC5)
#define SIM_SCGC6                      (SIM->SCGC6)
#define SIM_SCGC7                      (SIM->SCGC7)
#define SIM_CLKDIV1                    (SIM->CLKDIV1)
#define SIM_CLKDIV2                    (SIM->CLKDIV2)
#define SIM_FCFG1                      (SIM->FCFG1)
#define SIM_FCFG2                      (SIM->FCFG2)
#define SIM_UIDH                       (SIM->UIDH)
#define SIM_UIDMH                      (SIM->UIDMH)
#define SIM_UIDML                      (SIM->UIDML)
#define SIM_UIDL                       (SIM->UIDL)

/* ================================================================================ */
/* ================           SMC (file:SMC_4)                     ================ */
/* ================================================================================ */

/**
 * @brief System Mode Controller
 */
typedef struct {                                /*!<       SMC Structure                                                */
   __IO uint8_t   PMPROT;                       /*!< 0000: Power Mode Protection Register                               */
   __IO uint8_t   PMCTRL;                       /*!< 0001: Power Mode Control Register                                  */
   __IO uint8_t   VLLSCTRL;                     /*!< 0002: VLLS Control Register                                        */
   __I  uint8_t   PMSTAT;                       /*!< 0003: Power Mode Status Register                                   */
} SMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SMC_PMPROT                               ------ */
#define SMC_PMPROT_AVLLS_MASK                    (0x01UL << SMC_PMPROT_AVLLS_SHIFT)                  /*!< SMC_PMPROT: AVLLS Mask                  */
#define SMC_PMPROT_AVLLS_SHIFT                   1                                                   /*!< SMC_PMPROT: AVLLS Position              */
#define SMC_PMPROT_ALLS_MASK                     (0x01UL << SMC_PMPROT_ALLS_SHIFT)                   /*!< SMC_PMPROT: ALLS Mask                   */
#define SMC_PMPROT_ALLS_SHIFT                    3                                                   /*!< SMC_PMPROT: ALLS Position               */
#define SMC_PMPROT_AVLP_MASK                     (0x01UL << SMC_PMPROT_AVLP_SHIFT)                   /*!< SMC_PMPROT: AVLP Mask                   */
#define SMC_PMPROT_AVLP_SHIFT                    5                                                   /*!< SMC_PMPROT: AVLP Position               */

/* ------- SMC_PMCTRL                               ------ */
#define SMC_PMCTRL_STOPM_MASK                    (0x07UL << SMC_PMCTRL_STOPM_SHIFT)                  /*!< SMC_PMCTRL: STOPM Mask                  */
#define SMC_PMCTRL_STOPM_SHIFT                   0                                                   /*!< SMC_PMCTRL: STOPM Position              */
#define SMC_PMCTRL_STOPM(x)                      (((x)<<SMC_PMCTRL_STOPM_SHIFT)&SMC_PMCTRL_STOPM_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_STOPA_MASK                    (0x01UL << SMC_PMCTRL_STOPA_SHIFT)                  /*!< SMC_PMCTRL: STOPA Mask                  */
#define SMC_PMCTRL_STOPA_SHIFT                   3                                                   /*!< SMC_PMCTRL: STOPA Position              */
#define SMC_PMCTRL_RUNM_MASK                     (0x03UL << SMC_PMCTRL_RUNM_SHIFT)                   /*!< SMC_PMCTRL: RUNM Mask                   */
#define SMC_PMCTRL_RUNM_SHIFT                    5                                                   /*!< SMC_PMCTRL: RUNM Position               */
#define SMC_PMCTRL_RUNM(x)                       (((x)<<SMC_PMCTRL_RUNM_SHIFT)&SMC_PMCTRL_RUNM_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_LPWUI_MASK                    (0x01UL << SMC_PMCTRL_LPWUI_SHIFT)                  /*!< SMC_PMCTRL: LPWUI Mask                  */
#define SMC_PMCTRL_LPWUI_SHIFT                   7                                                   /*!< SMC_PMCTRL: LPWUI Position              */

/* ------- SMC_VLLSCTRL                             ------ */
#define SMC_VLLSCTRL_VLLSM_MASK                  (0x07UL << SMC_VLLSCTRL_VLLSM_SHIFT)                /*!< SMC_VLLSCTRL: VLLSM Mask                */
#define SMC_VLLSCTRL_VLLSM_SHIFT                 0                                                   /*!< SMC_VLLSCTRL: VLLSM Position            */
#define SMC_VLLSCTRL_VLLSM(x)                    (((x)<<SMC_VLLSCTRL_VLLSM_SHIFT)&SMC_VLLSCTRL_VLLSM_MASK) /*!< SMC_VLLSCTRL                            */
#define SMC_VLLSCTRL_RAM2PO_MASK                 (0x01UL << SMC_VLLSCTRL_RAM2PO_SHIFT)               /*!< SMC_VLLSCTRL: RAM2PO Mask               */
#define SMC_VLLSCTRL_RAM2PO_SHIFT                4                                                   /*!< SMC_VLLSCTRL: RAM2PO Position           */
#define SMC_VLLSCTRL_PORPO_MASK                  (0x01UL << SMC_VLLSCTRL_PORPO_SHIFT)                /*!< SMC_VLLSCTRL: PORPO Mask                */
#define SMC_VLLSCTRL_PORPO_SHIFT                 5                                                   /*!< SMC_VLLSCTRL: PORPO Position            */

/* ------- SMC_PMSTAT                               ------ */
#define SMC_PMSTAT_PMSTAT_MASK                   (0x7FUL << SMC_PMSTAT_PMSTAT_SHIFT)                 /*!< SMC_PMSTAT: PMSTAT Mask                 */
#define SMC_PMSTAT_PMSTAT_SHIFT                  0                                                   /*!< SMC_PMSTAT: PMSTAT Position             */
#define SMC_PMSTAT_PMSTAT(x)                     (((x)<<SMC_PMSTAT_PMSTAT_SHIFT)&SMC_PMSTAT_PMSTAT_MASK) /*!< SMC_PMSTAT                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define SMC_PMPROT                     (SMC->PMPROT)
#define SMC_PMCTRL                     (SMC->PMCTRL)
#define SMC_VLLSCTRL                   (SMC->VLLSCTRL)
#define SMC_PMSTAT                     (SMC->PMSTAT)

/* ================================================================================ */
/* ================           SPI0 (file:SPI0_MKxxD5)              ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
typedef struct {                                /*!<       SPI0 Structure                                               */
   __IO uint32_t  MCR;                          /*!< 0000: Module Configuration Register                                */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  TCR;                          /*!< 0008: Transfer Count Register                                      */
   union {                                      /*!< 0000: (size=0008)                                                  */
      __IO uint32_t  CTAR[2];                   /*!< 000C: Clock and Transfer Attributes Register (In Master Mode)      */
      __IO uint32_t  CTAR0_SLAVE;               /*!< 000C: Clock and Transfer Attributes Register (In Slave Mode)       */
   };
   __I  uint32_t  RESERVED1[6];                 /*!< 0014:                                                              */
   __IO uint32_t  SR;                           /*!< 002C: Status Register                                              */
   __IO uint32_t  RSER;                         /*!< 0030: DMA/Interrupt Request Select and Enable Register             */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  PUSHR;                     /*!< 0034: PUSH TX FIFO Register In Master Mode                         */
      __IO uint32_t  PUSHR_SLAVE;               /*!< 0034: PUSH TX FIFO Register In Slave Mode                          */
   };
   __I  uint32_t  POPR;                         /*!< 0038: POP RX FIFO Register                                         */
   __I  uint32_t  TXFR[4];                      /*!< 003C: Transmit FIFO                                                */
   __I  uint32_t  RESERVED2[12];                /*!< 004C:                                                              */
   __I  uint32_t  RXFR[4];                      /*!< 007C: Receive FIFO                                                 */
} SPI0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SPI0_MCR                                 ------ */
#define SPI_MCR_HALT_MASK                        (0x01UL << SPI_MCR_HALT_SHIFT)                      /*!< SPI0_MCR: HALT Mask                     */
#define SPI_MCR_HALT_SHIFT                       0                                                   /*!< SPI0_MCR: HALT Position                 */
#define SPI_MCR_SMPL_PT_MASK                     (0x03UL << SPI_MCR_SMPL_PT_SHIFT)                   /*!< SPI0_MCR: SMPL_PT Mask                  */
#define SPI_MCR_SMPL_PT_SHIFT                    8                                                   /*!< SPI0_MCR: SMPL_PT Position              */
#define SPI_MCR_SMPL_PT(x)                       (((x)<<SPI_MCR_SMPL_PT_SHIFT)&SPI_MCR_SMPL_PT_MASK) /*!< SPI0_MCR                                */
#define SPI_MCR_CLR_RXF_MASK                     (0x01UL << SPI_MCR_CLR_RXF_SHIFT)                   /*!< SPI0_MCR: CLR_RXF Mask                  */
#define SPI_MCR_CLR_RXF_SHIFT                    10                                                  /*!< SPI0_MCR: CLR_RXF Position              */
#define SPI_MCR_CLR_TXF_MASK                     (0x01UL << SPI_MCR_CLR_TXF_SHIFT)                   /*!< SPI0_MCR: CLR_TXF Mask                  */
#define SPI_MCR_CLR_TXF_SHIFT                    11                                                  /*!< SPI0_MCR: CLR_TXF Position              */
#define SPI_MCR_DIS_RXF_MASK                     (0x01UL << SPI_MCR_DIS_RXF_SHIFT)                   /*!< SPI0_MCR: DIS_RXF Mask                  */
#define SPI_MCR_DIS_RXF_SHIFT                    12                                                  /*!< SPI0_MCR: DIS_RXF Position              */
#define SPI_MCR_DIS_TXF_MASK                     (0x01UL << SPI_MCR_DIS_TXF_SHIFT)                   /*!< SPI0_MCR: DIS_TXF Mask                  */
#define SPI_MCR_DIS_TXF_SHIFT                    13                                                  /*!< SPI0_MCR: DIS_TXF Position              */
#define SPI_MCR_MDIS_MASK                        (0x01UL << SPI_MCR_MDIS_SHIFT)                      /*!< SPI0_MCR: MDIS Mask                     */
#define SPI_MCR_MDIS_SHIFT                       14                                                  /*!< SPI0_MCR: MDIS Position                 */
#define SPI_MCR_DOZE_MASK                        (0x01UL << SPI_MCR_DOZE_SHIFT)                      /*!< SPI0_MCR: DOZE Mask                     */
#define SPI_MCR_DOZE_SHIFT                       15                                                  /*!< SPI0_MCR: DOZE Position                 */
#define SPI_MCR_PCSIS_MASK                       (0x3FUL << SPI_MCR_PCSIS_SHIFT)                     /*!< SPI0_MCR: PCSIS Mask                    */
#define SPI_MCR_PCSIS_SHIFT                      16                                                  /*!< SPI0_MCR: PCSIS Position                */
#define SPI_MCR_PCSIS(x)                         (((x)<<SPI_MCR_PCSIS_SHIFT)&SPI_MCR_PCSIS_MASK)     /*!< SPI0_MCR                                */
#define SPI_MCR_ROOE_MASK                        (0x01UL << SPI_MCR_ROOE_SHIFT)                      /*!< SPI0_MCR: ROOE Mask                     */
#define SPI_MCR_ROOE_SHIFT                       24                                                  /*!< SPI0_MCR: ROOE Position                 */
#define SPI_MCR_MTFE_MASK                        (0x01UL << SPI_MCR_MTFE_SHIFT)                      /*!< SPI0_MCR: MTFE Mask                     */
#define SPI_MCR_MTFE_SHIFT                       26                                                  /*!< SPI0_MCR: MTFE Position                 */
#define SPI_MCR_FRZ_MASK                         (0x01UL << SPI_MCR_FRZ_SHIFT)                       /*!< SPI0_MCR: FRZ Mask                      */
#define SPI_MCR_FRZ_SHIFT                        27                                                  /*!< SPI0_MCR: FRZ Position                  */
#define SPI_MCR_DCONF_MASK                       (0x03UL << SPI_MCR_DCONF_SHIFT)                     /*!< SPI0_MCR: DCONF Mask                    */
#define SPI_MCR_DCONF_SHIFT                      28                                                  /*!< SPI0_MCR: DCONF Position                */
#define SPI_MCR_DCONF(x)                         (((x)<<SPI_MCR_DCONF_SHIFT)&SPI_MCR_DCONF_MASK)     /*!< SPI0_MCR                                */
#define SPI_MCR_CONT_SCKE_MASK                   (0x01UL << SPI_MCR_CONT_SCKE_SHIFT)                 /*!< SPI0_MCR: CONT_SCKE Mask                */
#define SPI_MCR_CONT_SCKE_SHIFT                  30                                                  /*!< SPI0_MCR: CONT_SCKE Position            */
#define SPI_MCR_MSTR_MASK                        (0x01UL << SPI_MCR_MSTR_SHIFT)                      /*!< SPI0_MCR: MSTR Mask                     */
#define SPI_MCR_MSTR_SHIFT                       31                                                  /*!< SPI0_MCR: MSTR Position                 */

/* ------- SPI0_TCR                                 ------ */
#define SPI_TCR_SPI_TCNT_MASK                    (0xFFFFUL << SPI_TCR_SPI_TCNT_SHIFT)                /*!< SPI0_TCR: SPI_TCNT Mask                 */
#define SPI_TCR_SPI_TCNT_SHIFT                   16                                                  /*!< SPI0_TCR: SPI_TCNT Position             */
#define SPI_TCR_SPI_TCNT(x)                      (((x)<<SPI_TCR_SPI_TCNT_SHIFT)&SPI_TCR_SPI_TCNT_MASK) /*!< SPI0_TCR                                */

/* ------- SPI0_CTAR                                ------ */
#define SPI_CTAR_BR_MASK                         (0x0FUL << SPI_CTAR_BR_SHIFT)                       /*!< SPI0_CTAR: BR Mask                      */
#define SPI_CTAR_BR_SHIFT                        0                                                   /*!< SPI0_CTAR: BR Position                  */
#define SPI_CTAR_BR(x)                           (((x)<<SPI_CTAR_BR_SHIFT)&SPI_CTAR_BR_MASK)         /*!< SPI0_CTAR                               */
#define SPI_CTAR_DT_MASK                         (0x0FUL << SPI_CTAR_DT_SHIFT)                       /*!< SPI0_CTAR: DT Mask                      */
#define SPI_CTAR_DT_SHIFT                        4                                                   /*!< SPI0_CTAR: DT Position                  */
#define SPI_CTAR_DT(x)                           (((x)<<SPI_CTAR_DT_SHIFT)&SPI_CTAR_DT_MASK)         /*!< SPI0_CTAR                               */
#define SPI_CTAR_ASC_MASK                        (0x0FUL << SPI_CTAR_ASC_SHIFT)                      /*!< SPI0_CTAR: ASC Mask                     */
#define SPI_CTAR_ASC_SHIFT                       8                                                   /*!< SPI0_CTAR: ASC Position                 */
#define SPI_CTAR_ASC(x)                          (((x)<<SPI_CTAR_ASC_SHIFT)&SPI_CTAR_ASC_MASK)       /*!< SPI0_CTAR                               */
#define SPI_CTAR_CSSCK_MASK                      (0x0FUL << SPI_CTAR_CSSCK_SHIFT)                    /*!< SPI0_CTAR: CSSCK Mask                   */
#define SPI_CTAR_CSSCK_SHIFT                     12                                                  /*!< SPI0_CTAR: CSSCK Position               */
#define SPI_CTAR_CSSCK(x)                        (((x)<<SPI_CTAR_CSSCK_SHIFT)&SPI_CTAR_CSSCK_MASK)   /*!< SPI0_CTAR                               */
#define SPI_CTAR_PBR_MASK                        (0x03UL << SPI_CTAR_PBR_SHIFT)                      /*!< SPI0_CTAR: PBR Mask                     */
#define SPI_CTAR_PBR_SHIFT                       16                                                  /*!< SPI0_CTAR: PBR Position                 */
#define SPI_CTAR_PBR(x)                          (((x)<<SPI_CTAR_PBR_SHIFT)&SPI_CTAR_PBR_MASK)       /*!< SPI0_CTAR                               */
#define SPI_CTAR_PDT_MASK                        (0x03UL << SPI_CTAR_PDT_SHIFT)                      /*!< SPI0_CTAR: PDT Mask                     */
#define SPI_CTAR_PDT_SHIFT                       18                                                  /*!< SPI0_CTAR: PDT Position                 */
#define SPI_CTAR_PDT(x)                          (((x)<<SPI_CTAR_PDT_SHIFT)&SPI_CTAR_PDT_MASK)       /*!< SPI0_CTAR                               */
#define SPI_CTAR_PASC_MASK                       (0x03UL << SPI_CTAR_PASC_SHIFT)                     /*!< SPI0_CTAR: PASC Mask                    */
#define SPI_CTAR_PASC_SHIFT                      20                                                  /*!< SPI0_CTAR: PASC Position                */
#define SPI_CTAR_PASC(x)                         (((x)<<SPI_CTAR_PASC_SHIFT)&SPI_CTAR_PASC_MASK)     /*!< SPI0_CTAR                               */
#define SPI_CTAR_PCSSCK_MASK                     (0x03UL << SPI_CTAR_PCSSCK_SHIFT)                   /*!< SPI0_CTAR: PCSSCK Mask                  */
#define SPI_CTAR_PCSSCK_SHIFT                    22                                                  /*!< SPI0_CTAR: PCSSCK Position              */
#define SPI_CTAR_PCSSCK(x)                       (((x)<<SPI_CTAR_PCSSCK_SHIFT)&SPI_CTAR_PCSSCK_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_LSBFE_MASK                      (0x01UL << SPI_CTAR_LSBFE_SHIFT)                    /*!< SPI0_CTAR: LSBFE Mask                   */
#define SPI_CTAR_LSBFE_SHIFT                     24                                                  /*!< SPI0_CTAR: LSBFE Position               */
#define SPI_CTAR_CPHA_MASK                       (0x01UL << SPI_CTAR_CPHA_SHIFT)                     /*!< SPI0_CTAR: CPHA Mask                    */
#define SPI_CTAR_CPHA_SHIFT                      25                                                  /*!< SPI0_CTAR: CPHA Position                */
#define SPI_CTAR_CPOL_MASK                       (0x01UL << SPI_CTAR_CPOL_SHIFT)                     /*!< SPI0_CTAR: CPOL Mask                    */
#define SPI_CTAR_CPOL_SHIFT                      26                                                  /*!< SPI0_CTAR: CPOL Position                */
#define SPI_CTAR_FMSZ_MASK                       (0x0FUL << SPI_CTAR_FMSZ_SHIFT)                     /*!< SPI0_CTAR: FMSZ Mask                    */
#define SPI_CTAR_FMSZ_SHIFT                      27                                                  /*!< SPI0_CTAR: FMSZ Position                */
#define SPI_CTAR_FMSZ(x)                         (((x)<<SPI_CTAR_FMSZ_SHIFT)&SPI_CTAR_FMSZ_MASK)     /*!< SPI0_CTAR                               */
#define SPI_CTAR_DBR_MASK                        (0x01UL << SPI_CTAR_DBR_SHIFT)                      /*!< SPI0_CTAR: DBR Mask                     */
#define SPI_CTAR_DBR_SHIFT                       31                                                  /*!< SPI0_CTAR: DBR Position                 */

/* ------- SPI0_CTAR0_SLAVE                         ------ */
#define SPI_CTAR_SLAVE_CPHA_MASK                 (0x01UL << SPI_CTAR_SLAVE_CPHA_SHIFT)               /*!< SPI0_CTAR0_SLAVE: CPHA Mask             */
#define SPI_CTAR_SLAVE_CPHA_SHIFT                25                                                  /*!< SPI0_CTAR0_SLAVE: CPHA Position         */
#define SPI_CTAR_SLAVE_CPOL_MASK                 (0x01UL << SPI_CTAR_SLAVE_CPOL_SHIFT)               /*!< SPI0_CTAR0_SLAVE: CPOL Mask             */
#define SPI_CTAR_SLAVE_CPOL_SHIFT                26                                                  /*!< SPI0_CTAR0_SLAVE: CPOL Position         */
#define SPI_CTAR_SLAVE_FMSZ_MASK                 (0x1FUL << SPI_CTAR_SLAVE_FMSZ_SHIFT)               /*!< SPI0_CTAR0_SLAVE: FMSZ Mask             */
#define SPI_CTAR_SLAVE_FMSZ_SHIFT                27                                                  /*!< SPI0_CTAR0_SLAVE: FMSZ Position         */
#define SPI_CTAR_SLAVE_FMSZ(x)                   (((x)<<SPI_CTAR_SLAVE_FMSZ_SHIFT)&SPI_CTAR_SLAVE_FMSZ_MASK) /*!< SPI0_CTAR0_SLAVE                        */

/* ------- SPI0_SR                                  ------ */
#define SPI_SR_POPNXTPTR_MASK                    (0x0FUL << SPI_SR_POPNXTPTR_SHIFT)                  /*!< SPI0_SR: POPNXTPTR Mask                 */
#define SPI_SR_POPNXTPTR_SHIFT                   0                                                   /*!< SPI0_SR: POPNXTPTR Position             */
#define SPI_SR_POPNXTPTR(x)                      (((x)<<SPI_SR_POPNXTPTR_SHIFT)&SPI_SR_POPNXTPTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_RXCTR_MASK                        (0x0FUL << SPI_SR_RXCTR_SHIFT)                      /*!< SPI0_SR: RXCTR Mask                     */
#define SPI_SR_RXCTR_SHIFT                       4                                                   /*!< SPI0_SR: RXCTR Position                 */
#define SPI_SR_RXCTR(x)                          (((x)<<SPI_SR_RXCTR_SHIFT)&SPI_SR_RXCTR_MASK)       /*!< SPI0_SR                                 */
#define SPI_SR_TXNXTPTR_MASK                     (0x0FUL << SPI_SR_TXNXTPTR_SHIFT)                   /*!< SPI0_SR: TXNXTPTR Mask                  */
#define SPI_SR_TXNXTPTR_SHIFT                    8                                                   /*!< SPI0_SR: TXNXTPTR Position              */
#define SPI_SR_TXNXTPTR(x)                       (((x)<<SPI_SR_TXNXTPTR_SHIFT)&SPI_SR_TXNXTPTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_TXCTR_MASK                        (0x0FUL << SPI_SR_TXCTR_SHIFT)                      /*!< SPI0_SR: TXCTR Mask                     */
#define SPI_SR_TXCTR_SHIFT                       12                                                  /*!< SPI0_SR: TXCTR Position                 */
#define SPI_SR_TXCTR(x)                          (((x)<<SPI_SR_TXCTR_SHIFT)&SPI_SR_TXCTR_MASK)       /*!< SPI0_SR                                 */
#define SPI_SR_RFDF_MASK                         (0x01UL << SPI_SR_RFDF_SHIFT)                       /*!< SPI0_SR: RFDF Mask                      */
#define SPI_SR_RFDF_SHIFT                        17                                                  /*!< SPI0_SR: RFDF Position                  */
#define SPI_SR_RFOF_MASK                         (0x01UL << SPI_SR_RFOF_SHIFT)                       /*!< SPI0_SR: RFOF Mask                      */
#define SPI_SR_RFOF_SHIFT                        19                                                  /*!< SPI0_SR: RFOF Position                  */
#define SPI_SR_TFFF_MASK                         (0x01UL << SPI_SR_TFFF_SHIFT)                       /*!< SPI0_SR: TFFF Mask                      */
#define SPI_SR_TFFF_SHIFT                        25                                                  /*!< SPI0_SR: TFFF Position                  */
#define SPI_SR_TFUF_MASK                         (0x01UL << SPI_SR_TFUF_SHIFT)                       /*!< SPI0_SR: TFUF Mask                      */
#define SPI_SR_TFUF_SHIFT                        27                                                  /*!< SPI0_SR: TFUF Position                  */
#define SPI_SR_EOQF_MASK                         (0x01UL << SPI_SR_EOQF_SHIFT)                       /*!< SPI0_SR: EOQF Mask                      */
#define SPI_SR_EOQF_SHIFT                        28                                                  /*!< SPI0_SR: EOQF Position                  */
#define SPI_SR_TXRXS_MASK                        (0x01UL << SPI_SR_TXRXS_SHIFT)                      /*!< SPI0_SR: TXRXS Mask                     */
#define SPI_SR_TXRXS_SHIFT                       30                                                  /*!< SPI0_SR: TXRXS Position                 */
#define SPI_SR_TCF_MASK                          (0x01UL << SPI_SR_TCF_SHIFT)                        /*!< SPI0_SR: TCF Mask                       */
#define SPI_SR_TCF_SHIFT                         31                                                  /*!< SPI0_SR: TCF Position                   */

/* ------- SPI0_RSER                                ------ */
#define SPI_RSER_RFDF_DIRS_MASK                  (0x01UL << SPI_RSER_RFDF_DIRS_SHIFT)                /*!< SPI0_RSER: RFDF_DIRS Mask               */
#define SPI_RSER_RFDF_DIRS_SHIFT                 16                                                  /*!< SPI0_RSER: RFDF_DIRS Position           */
#define SPI_RSER_RFDF_RE_MASK                    (0x01UL << SPI_RSER_RFDF_RE_SHIFT)                  /*!< SPI0_RSER: RFDF_RE Mask                 */
#define SPI_RSER_RFDF_RE_SHIFT                   17                                                  /*!< SPI0_RSER: RFDF_RE Position             */
#define SPI_RSER_RFOF_RE_MASK                    (0x01UL << SPI_RSER_RFOF_RE_SHIFT)                  /*!< SPI0_RSER: RFOF_RE Mask                 */
#define SPI_RSER_RFOF_RE_SHIFT                   19                                                  /*!< SPI0_RSER: RFOF_RE Position             */
#define SPI_RSER_TFFF_DIRS_MASK                  (0x01UL << SPI_RSER_TFFF_DIRS_SHIFT)                /*!< SPI0_RSER: TFFF_DIRS Mask               */
#define SPI_RSER_TFFF_DIRS_SHIFT                 24                                                  /*!< SPI0_RSER: TFFF_DIRS Position           */
#define SPI_RSER_TFFF_RE_MASK                    (0x01UL << SPI_RSER_TFFF_RE_SHIFT)                  /*!< SPI0_RSER: TFFF_RE Mask                 */
#define SPI_RSER_TFFF_RE_SHIFT                   25                                                  /*!< SPI0_RSER: TFFF_RE Position             */
#define SPI_RSER_TFUF_RE_MASK                    (0x01UL << SPI_RSER_TFUF_RE_SHIFT)                  /*!< SPI0_RSER: TFUF_RE Mask                 */
#define SPI_RSER_TFUF_RE_SHIFT                   27                                                  /*!< SPI0_RSER: TFUF_RE Position             */
#define SPI_RSER_EOQF_RE_MASK                    (0x01UL << SPI_RSER_EOQF_RE_SHIFT)                  /*!< SPI0_RSER: EOQF_RE Mask                 */
#define SPI_RSER_EOQF_RE_SHIFT                   28                                                  /*!< SPI0_RSER: EOQF_RE Position             */
#define SPI_RSER_TCF_RE_MASK                     (0x01UL << SPI_RSER_TCF_RE_SHIFT)                   /*!< SPI0_RSER: TCF_RE Mask                  */
#define SPI_RSER_TCF_RE_SHIFT                    31                                                  /*!< SPI0_RSER: TCF_RE Position              */

/* ------- SPI0_PUSHR                               ------ */
#define SPI_PUSHR_TXDATA_MASK                    (0xFFFFUL << SPI_PUSHR_TXDATA_SHIFT)                /*!< SPI0_PUSHR: TXDATA Mask                 */
#define SPI_PUSHR_TXDATA_SHIFT                   0                                                   /*!< SPI0_PUSHR: TXDATA Position             */
#define SPI_PUSHR_TXDATA(x)                      (((x)<<SPI_PUSHR_TXDATA_SHIFT)&SPI_PUSHR_TXDATA_MASK) /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_PCS_MASK                       (0x3FUL << SPI_PUSHR_PCS_SHIFT)                     /*!< SPI0_PUSHR: PCS Mask                    */
#define SPI_PUSHR_PCS_SHIFT                      16                                                  /*!< SPI0_PUSHR: PCS Position                */
#define SPI_PUSHR_PCS(x)                         (((x)<<SPI_PUSHR_PCS_SHIFT)&SPI_PUSHR_PCS_MASK)     /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_CTCNT_MASK                     (0x01UL << SPI_PUSHR_CTCNT_SHIFT)                   /*!< SPI0_PUSHR: CTCNT Mask                  */
#define SPI_PUSHR_CTCNT_SHIFT                    26                                                  /*!< SPI0_PUSHR: CTCNT Position              */
#define SPI_PUSHR_EOQ_MASK                       (0x01UL << SPI_PUSHR_EOQ_SHIFT)                     /*!< SPI0_PUSHR: EOQ Mask                    */
#define SPI_PUSHR_EOQ_SHIFT                      27                                                  /*!< SPI0_PUSHR: EOQ Position                */
#define SPI_PUSHR_CTAS_MASK                      (0x07UL << SPI_PUSHR_CTAS_SHIFT)                    /*!< SPI0_PUSHR: CTAS Mask                   */
#define SPI_PUSHR_CTAS_SHIFT                     28                                                  /*!< SPI0_PUSHR: CTAS Position               */
#define SPI_PUSHR_CTAS(x)                        (((x)<<SPI_PUSHR_CTAS_SHIFT)&SPI_PUSHR_CTAS_MASK)   /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_CONT_MASK                      (0x01UL << SPI_PUSHR_CONT_SHIFT)                    /*!< SPI0_PUSHR: CONT Mask                   */
#define SPI_PUSHR_CONT_SHIFT                     31                                                  /*!< SPI0_PUSHR: CONT Position               */

/* ------- SPI0_PUSHR_SLAVE                         ------ */
#define SPI_PUSHR_SLAVE_TXDATA_MASK              (0xFFFFUL << SPI_PUSHR_SLAVE_TXDATA_SHIFT)          /*!< SPI0_PUSHR_SLAVE: TXDATA Mask           */
#define SPI_PUSHR_SLAVE_TXDATA_SHIFT             0                                                   /*!< SPI0_PUSHR_SLAVE: TXDATA Position       */
#define SPI_PUSHR_SLAVE_TXDATA(x)                (((x)<<SPI_PUSHR_SLAVE_TXDATA_SHIFT)&SPI_PUSHR_SLAVE_TXDATA_MASK) /*!< SPI0_PUSHR_SLAVE                        */

/* ------- SPI0_POPR                                ------ */
#define SPI_POPR_RXDATA_MASK                     (0xFFFFFFFFUL << SPI_POPR_RXDATA_SHIFT)             /*!< SPI0_POPR: RXDATA Mask                  */
#define SPI_POPR_RXDATA_SHIFT                    0                                                   /*!< SPI0_POPR: RXDATA Position              */
#define SPI_POPR_RXDATA(x)                       (((x)<<SPI_POPR_RXDATA_SHIFT)&SPI_POPR_RXDATA_MASK) /*!< SPI0_POPR                               */

/* ------- SPI0_TXFR                                ------ */
#define SPI_TXFR_TXDATA_MASK                     (0xFFFFUL << SPI_TXFR_TXDATA_SHIFT)                 /*!< SPI0_TXFR: TXDATA Mask                  */
#define SPI_TXFR_TXDATA_SHIFT                    0                                                   /*!< SPI0_TXFR: TXDATA Position              */
#define SPI_TXFR_TXDATA(x)                       (((x)<<SPI_TXFR_TXDATA_SHIFT)&SPI_TXFR_TXDATA_MASK) /*!< SPI0_TXFR                               */
#define SPI_TXFR_TXCMD_TXDATA_MASK               (0xFFFFUL << SPI_TXFR_TXCMD_TXDATA_SHIFT)           /*!< SPI0_TXFR: TXCMD_TXDATA Mask            */
#define SPI_TXFR_TXCMD_TXDATA_SHIFT              16                                                  /*!< SPI0_TXFR: TXCMD_TXDATA Position        */
#define SPI_TXFR_TXCMD_TXDATA(x)                 (((x)<<SPI_TXFR_TXCMD_TXDATA_SHIFT)&SPI_TXFR_TXCMD_TXDATA_MASK) /*!< SPI0_TXFR                               */

/* ------- SPI0_RXFR                                ------ */
#define SPI_RXFR_RXDATA_MASK                     (0xFFFFFFFFUL << SPI_RXFR_RXDATA_SHIFT)             /*!< SPI0_RXFR: RXDATA Mask                  */
#define SPI_RXFR_RXDATA_SHIFT                    0                                                   /*!< SPI0_RXFR: RXDATA Position              */
#define SPI_RXFR_RXDATA(x)                       (((x)<<SPI_RXFR_RXDATA_SHIFT)&SPI_RXFR_RXDATA_MASK) /*!< SPI0_RXFR                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define SPI0_MCR                       (SPI0->MCR)
#define SPI0_TCR                       (SPI0->TCR)
#define SPI0_CTAR0                     (SPI0->CTAR[0])
#define SPI0_CTAR1                     (SPI0->CTAR[1])
#define SPI0_CTAR0_SLAVE               (SPI0->CTAR0_SLAVE)
#define SPI0_SR                        (SPI0->SR)
#define SPI0_RSER                      (SPI0->RSER)
#define SPI0_PUSHR                     (SPI0->PUSHR)
#define SPI0_PUSHR_SLAVE               (SPI0->PUSHR_SLAVE)
#define SPI0_POPR                      (SPI0->POPR)
#define SPI0_TXFR0                     (SPI0->TXFR[0])
#define SPI0_TXFR1                     (SPI0->TXFR[1])
#define SPI0_TXFR2                     (SPI0->TXFR[2])
#define SPI0_TXFR3                     (SPI0->TXFR[3])
#define SPI0_RXFR0                     (SPI0->RXFR[0])
#define SPI0_RXFR1                     (SPI0->RXFR[1])
#define SPI0_RXFR2                     (SPI0->RXFR[2])
#define SPI0_RXFR3                     (SPI0->RXFR[3])

/* ================================================================================ */
/* ================           SPI1 (derived from SPI0)             ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
typedef SPI0_Type SPI1_Type;  /*!< SPI1 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define SPI1_MCR                       (SPI1->MCR)
#define SPI1_TCR                       (SPI1->TCR)
#define SPI1_CTAR0                     (SPI1->CTAR[0])
#define SPI1_CTAR1                     (SPI1->CTAR[1])
#define SPI1_CTAR0_SLAVE               (SPI1->CTAR0_SLAVE)
#define SPI1_SR                        (SPI1->SR)
#define SPI1_RSER                      (SPI1->RSER)
#define SPI1_PUSHR                     (SPI1->PUSHR)
#define SPI1_PUSHR_SLAVE               (SPI1->PUSHR_SLAVE)
#define SPI1_POPR                      (SPI1->POPR)
#define SPI1_TXFR0                     (SPI1->TXFR[0])
#define SPI1_TXFR1                     (SPI1->TXFR[1])
#define SPI1_TXFR2                     (SPI1->TXFR[2])
#define SPI1_TXFR3                     (SPI1->TXFR[3])
#define SPI1_RXFR0                     (SPI1->RXFR[0])
#define SPI1_RXFR1                     (SPI1->RXFR[1])
#define SPI1_RXFR2                     (SPI1->RXFR[2])
#define SPI1_RXFR3                     (SPI1->RXFR[3])

/* ================================================================================ */
/* ================           SYST (file:SysTick_0)                ================ */
/* ================================================================================ */

/**
 * @brief System timer SysTick
 */
typedef struct {                                /*!<       SYST Structure                                               */
   __IO uint32_t  CSR;                          /*!< 0000: Control and Status Register                                  */
   __IO uint32_t  RVR;                          /*!< 0004: Reload Value Register                                        */
   __IO uint32_t  CVR;                          /*!< 0008: Current Value Register                                       */
   __I  uint32_t  CALIB;                        /*!< 000C: Calibration Value Register                                   */
} SYST_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SYST' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SYST_CSR                                 ------ */
#define SYST_CSR_ENABLE_MASK                     (0x01UL << SYST_CSR_ENABLE_SHIFT)                   /*!< SYST_CSR: ENABLE Mask                   */
#define SYST_CSR_ENABLE_SHIFT                    0                                                   /*!< SYST_CSR: ENABLE Position               */
#define SYST_CSR_TICKINT_MASK                    (0x01UL << SYST_CSR_TICKINT_SHIFT)                  /*!< SYST_CSR: TICKINT Mask                  */
#define SYST_CSR_TICKINT_SHIFT                   1                                                   /*!< SYST_CSR: TICKINT Position              */
#define SYST_CSR_CLKSOURCE_MASK                  (0x01UL << SYST_CSR_CLKSOURCE_SHIFT)                /*!< SYST_CSR: CLKSOURCE Mask                */
#define SYST_CSR_CLKSOURCE_SHIFT                 2                                                   /*!< SYST_CSR: CLKSOURCE Position            */
#define SYST_CSR_COUNTFLAG_MASK                  (0x01UL << SYST_CSR_COUNTFLAG_SHIFT)                /*!< SYST_CSR: COUNTFLAG Mask                */
#define SYST_CSR_COUNTFLAG_SHIFT                 16                                                  /*!< SYST_CSR: COUNTFLAG Position            */

/* ------- SYST_RVR                                 ------ */
#define SYST_RVR_RELOAD_MASK                     (0xFFFFFFUL << SYST_RVR_RELOAD_SHIFT)               /*!< SYST_RVR: RELOAD Mask                   */
#define SYST_RVR_RELOAD_SHIFT                    0                                                   /*!< SYST_RVR: RELOAD Position               */
#define SYST_RVR_RELOAD(x)                       (((x)<<SYST_RVR_RELOAD_SHIFT)&SYST_RVR_RELOAD_MASK) /*!< SYST_RVR                                */

/* ------- SYST_CVR                                 ------ */
#define SYST_CVR_CURRENT_MASK                    (0xFFFFFFUL << SYST_CVR_CURRENT_SHIFT)              /*!< SYST_CVR: CURRENT Mask                  */
#define SYST_CVR_CURRENT_SHIFT                   0                                                   /*!< SYST_CVR: CURRENT Position              */
#define SYST_CVR_CURRENT(x)                      (((x)<<SYST_CVR_CURRENT_SHIFT)&SYST_CVR_CURRENT_MASK) /*!< SYST_CVR                                */

/* ------- SYST_CALIB                               ------ */
#define SYST_CALIB_TENMS_MASK                    (0xFFFFFFUL << SYST_CALIB_TENMS_SHIFT)              /*!< SYST_CALIB: TENMS Mask                  */
#define SYST_CALIB_TENMS_SHIFT                   0                                                   /*!< SYST_CALIB: TENMS Position              */
#define SYST_CALIB_TENMS(x)                      (((x)<<SYST_CALIB_TENMS_SHIFT)&SYST_CALIB_TENMS_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_SKEW_MASK                     (0x01UL << SYST_CALIB_SKEW_SHIFT)                   /*!< SYST_CALIB: SKEW Mask                   */
#define SYST_CALIB_SKEW_SHIFT                    30                                                  /*!< SYST_CALIB: SKEW Position               */
#define SYST_CALIB_NOREF_MASK                    (0x01UL << SYST_CALIB_NOREF_SHIFT)                  /*!< SYST_CALIB: NOREF Mask                  */
#define SYST_CALIB_NOREF_SHIFT                   31                                                  /*!< SYST_CALIB: NOREF Position              */

/* -------------------------------------------------------------------------------- */
/* -----------     'SYST' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define SYST_CSR                       (SYST->CSR)
#define SYST_RVR                       (SYST->RVR)
#define SYST_CVR                       (SYST->CVR)
#define SYST_CALIB                     (SYST->CALIB)

/* ================================================================================ */
/* ================           TPIU (file:TPIU_0)                   ================ */
/* ================================================================================ */

/**
 * @brief Trace Port Interface Unit
 */
typedef struct {                                /*!<       TPIU Structure                                               */
   __I  uint32_t  SSPSR;                        /*!< 0000: Supported Parallel Port Size Register                        */
   __IO uint32_t  CSPSR;                        /*!< 0004: Current Parallel Port Size Register                          */
   __I  uint32_t  RESERVED0[2];                 /*!< 0008:                                                              */
   __IO uint32_t  ACPR;                         /*!< 0010: Asynchronous Clock Prescaler Register                        */
   __I  uint32_t  RESERVED1[55];                /*!< 0014:                                                              */
   __IO uint32_t  SPPR;                         /*!< 00F0: Selected Pin Protocol Register                               */
   __I  uint32_t  RESERVED2[131];               /*!< 00F4:                                                              */
   __I  uint32_t  FFSR;                         /*!< 0300: Formatter and Flush Status Register                          */
   __IO uint32_t  FFCR;                         /*!< 0304: Formatter and Flush Control Register                         */
   __IO uint32_t  FSCR;                         /*!< 0308: Formatter Synchronization Counter Register                   */
   __I  uint32_t  RESERVED3[759];               /*!< 030C:                                                              */
   __I  uint32_t  TRIGGER;                      /*!< 0EE8: Trigger Register                                             */
   __I  uint32_t  FIFODATA0;                    /*!< 0EEC: FIFODATA0 Register                                           */
   __I  uint32_t  ITATBCTR2;                    /*!< 0EF0: Integration Test ATB Control 2 Register                      */
   __I  uint32_t  RESERVED4;                    /*!< 0EF4:                                                              */
   __I  uint32_t  ITATBCTR0;                    /*!< 0EF8: Integration Test ATB Control 0 Register                      */
   __I  uint32_t  FIFODATA1;                    /*!< 0EFC: FIFODATA1 Register                                           */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED5[39];                /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED6[8];                 /*!< 0FA8:                                                              */
   __I  uint32_t  DEVID;                        /*!< 0FC8: TPIU_DEVID Register                                          */
   __I  uint32_t  RESERVED7;                    /*!< 0FCC:                                                              */
   __I  uint32_t  PID4;                         /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID0;                         /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CID1;                         /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CID2;                         /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CID3;                         /*!< 0FFC: Component Identification Register 3                          */
} TPIU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TPIU' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- TPIU_SSPSR                               ------ */
#define TPIU_SSPSR_SWIDTH_MASK                   (0xFFFFFFFFUL << TPIU_SSPSR_SWIDTH_SHIFT)           /*!< TPIU_SSPSR: SWIDTH Mask                 */
#define TPIU_SSPSR_SWIDTH_SHIFT                  0                                                   /*!< TPIU_SSPSR: SWIDTH Position             */
#define TPIU_SSPSR_SWIDTH(x)                     (((x)<<TPIU_SSPSR_SWIDTH_SHIFT)&TPIU_SSPSR_SWIDTH_MASK) /*!< TPIU_SSPSR                              */

/* ------- TPIU_CSPSR                               ------ */
#define TPIU_CSPSR_CWIDTH_MASK                   (0xFFFFFFFFUL << TPIU_CSPSR_CWIDTH_SHIFT)           /*!< TPIU_CSPSR: CWIDTH Mask                 */
#define TPIU_CSPSR_CWIDTH_SHIFT                  0                                                   /*!< TPIU_CSPSR: CWIDTH Position             */
#define TPIU_CSPSR_CWIDTH(x)                     (((x)<<TPIU_CSPSR_CWIDTH_SHIFT)&TPIU_CSPSR_CWIDTH_MASK) /*!< TPIU_CSPSR                              */

/* ------- TPIU_ACPR                                ------ */
#define TPIU_ACPR_PRESCALER_MASK                 (0x1FFFUL << TPIU_ACPR_PRESCALER_SHIFT)             /*!< TPIU_ACPR: PRESCALER Mask               */
#define TPIU_ACPR_PRESCALER_SHIFT                0                                                   /*!< TPIU_ACPR: PRESCALER Position           */
#define TPIU_ACPR_PRESCALER(x)                   (((x)<<TPIU_ACPR_PRESCALER_SHIFT)&TPIU_ACPR_PRESCALER_MASK) /*!< TPIU_ACPR                               */

/* ------- TPIU_SPPR                                ------ */
#define TPIU_SPPR_TXMODE_MASK                    (0x03UL << TPIU_SPPR_TXMODE_SHIFT)                  /*!< TPIU_SPPR: TXMODE Mask                  */
#define TPIU_SPPR_TXMODE_SHIFT                   0                                                   /*!< TPIU_SPPR: TXMODE Position              */
#define TPIU_SPPR_TXMODE(x)                      (((x)<<TPIU_SPPR_TXMODE_SHIFT)&TPIU_SPPR_TXMODE_MASK) /*!< TPIU_SPPR                               */

/* ------- TPIU_FFSR                                ------ */
#define TPIU_FFSR_F1InProg_MASK                  (0x01UL << TPIU_FFSR_F1InProg_SHIFT)                /*!< TPIU_FFSR: F1InProg Mask                */
#define TPIU_FFSR_F1InProg_SHIFT                 0                                                   /*!< TPIU_FFSR: F1InProg Position            */
#define TPIU_FFSR_FtStopped_MASK                 (0x01UL << TPIU_FFSR_FtStopped_SHIFT)               /*!< TPIU_FFSR: FtStopped Mask               */
#define TPIU_FFSR_FtStopped_SHIFT                1                                                   /*!< TPIU_FFSR: FtStopped Position           */
#define TPIU_FFSR_TCPresent_MASK                 (0x01UL << TPIU_FFSR_TCPresent_SHIFT)               /*!< TPIU_FFSR: TCPresent Mask               */
#define TPIU_FFSR_TCPresent_SHIFT                2                                                   /*!< TPIU_FFSR: TCPresent Position           */
#define TPIU_FFSR_FtNonStop_MASK                 (0x01UL << TPIU_FFSR_FtNonStop_SHIFT)               /*!< TPIU_FFSR: FtNonStop Mask               */
#define TPIU_FFSR_FtNonStop_SHIFT                3                                                   /*!< TPIU_FFSR: FtNonStop Position           */

/* ------- TPIU_FFCR                                ------ */
#define TPIU_FFCR_EnFCont_MASK                   (0x01UL << TPIU_FFCR_EnFCont_SHIFT)                 /*!< TPIU_FFCR: EnFCont Mask                 */
#define TPIU_FFCR_EnFCont_SHIFT                  1                                                   /*!< TPIU_FFCR: EnFCont Position             */
#define TPIU_FFCR_TrigIn_MASK                    (0x01UL << TPIU_FFCR_TrigIn_SHIFT)                  /*!< TPIU_FFCR: TrigIn Mask                  */
#define TPIU_FFCR_TrigIn_SHIFT                   8                                                   /*!< TPIU_FFCR: TrigIn Position              */

/* ------- TPIU_FSCR                                ------ */
#define TPIU_FSCR_CycCount_MASK                  (0xFFFUL << TPIU_FSCR_CycCount_SHIFT)               /*!< TPIU_FSCR: CycCount Mask                */
#define TPIU_FSCR_CycCount_SHIFT                 0                                                   /*!< TPIU_FSCR: CycCount Position            */
#define TPIU_FSCR_CycCount(x)                    (((x)<<TPIU_FSCR_CycCount_SHIFT)&TPIU_FSCR_CycCount_MASK) /*!< TPIU_FSCR                               */

/* ------- TPIU_TRIGGER                             ------ */
#define TPIU_TRIGGER_TRIGGER_MASK                (0x01UL << TPIU_TRIGGER_TRIGGER_SHIFT)              /*!< TPIU_TRIGGER: TRIGGER Mask              */
#define TPIU_TRIGGER_TRIGGER_SHIFT               0                                                   /*!< TPIU_TRIGGER: TRIGGER Position          */

/* ------- TPIU_FIFODATA0                           ------ */
#define TPIU_FIFODATA0_ETMdata0_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata0_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata0 Mask           */
#define TPIU_FIFODATA0_ETMdata0_SHIFT            0                                                   /*!< TPIU_FIFODATA0: ETMdata0 Position       */
#define TPIU_FIFODATA0_ETMdata0(x)               (((x)<<TPIU_FIFODATA0_ETMdata0_SHIFT)&TPIU_FIFODATA0_ETMdata0_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMdata1_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata1_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata1 Mask           */
#define TPIU_FIFODATA0_ETMdata1_SHIFT            8                                                   /*!< TPIU_FIFODATA0: ETMdata1 Position       */
#define TPIU_FIFODATA0_ETMdata1(x)               (((x)<<TPIU_FIFODATA0_ETMdata1_SHIFT)&TPIU_FIFODATA0_ETMdata1_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMdata2_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata2_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata2 Mask           */
#define TPIU_FIFODATA0_ETMdata2_SHIFT            16                                                  /*!< TPIU_FIFODATA0: ETMdata2 Position       */
#define TPIU_FIFODATA0_ETMdata2(x)               (((x)<<TPIU_FIFODATA0_ETMdata2_SHIFT)&TPIU_FIFODATA0_ETMdata2_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMbytecount_MASK         (0x03UL << TPIU_FIFODATA0_ETMbytecount_SHIFT)       /*!< TPIU_FIFODATA0: ETMbytecount Mask       */
#define TPIU_FIFODATA0_ETMbytecount_SHIFT        24                                                  /*!< TPIU_FIFODATA0: ETMbytecount Position   */
#define TPIU_FIFODATA0_ETMbytecount(x)           (((x)<<TPIU_FIFODATA0_ETMbytecount_SHIFT)&TPIU_FIFODATA0_ETMbytecount_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMATVALID_MASK           (0x01UL << TPIU_FIFODATA0_ETMATVALID_SHIFT)         /*!< TPIU_FIFODATA0: ETMATVALID Mask         */
#define TPIU_FIFODATA0_ETMATVALID_SHIFT          26                                                  /*!< TPIU_FIFODATA0: ETMATVALID Position     */
#define TPIU_FIFODATA0_ITMbytecount_MASK         (0x03UL << TPIU_FIFODATA0_ITMbytecount_SHIFT)       /*!< TPIU_FIFODATA0: ITMbytecount Mask       */
#define TPIU_FIFODATA0_ITMbytecount_SHIFT        27                                                  /*!< TPIU_FIFODATA0: ITMbytecount Position   */
#define TPIU_FIFODATA0_ITMbytecount(x)           (((x)<<TPIU_FIFODATA0_ITMbytecount_SHIFT)&TPIU_FIFODATA0_ITMbytecount_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ITMATVALID_MASK           (0x01UL << TPIU_FIFODATA0_ITMATVALID_SHIFT)         /*!< TPIU_FIFODATA0: ITMATVALID Mask         */
#define TPIU_FIFODATA0_ITMATVALID_SHIFT          29                                                  /*!< TPIU_FIFODATA0: ITMATVALID Position     */

/* ------- TPIU_ITATBCTR2                           ------ */
#define TPIU_ITATBCTR2_ATREADY1_ATREADY2_MASK    (0x01UL << TPIU_ITATBCTR2_ATREADY1_ATREADY2_SHIFT)  /*!< TPIU_ITATBCTR2: ATREADY1_ATREADY2 Mask  */
#define TPIU_ITATBCTR2_ATREADY1_ATREADY2_SHIFT   0                                                   /*!< TPIU_ITATBCTR2: ATREADY1_ATREADY2 Position*/

/* ------- TPIU_ITATBCTR0                           ------ */
#define TPIU_ITATBCTR0_ATVALID1_ATVALID2_MASK    (0x01UL << TPIU_ITATBCTR0_ATVALID1_ATVALID2_SHIFT)  /*!< TPIU_ITATBCTR0: ATVALID1_ATVALID2 Mask  */
#define TPIU_ITATBCTR0_ATVALID1_ATVALID2_SHIFT   0                                                   /*!< TPIU_ITATBCTR0: ATVALID1_ATVALID2 Position*/

/* ------- TPIU_FIFODATA1                           ------ */
#define TPIU_FIFODATA1_ITMdata0_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata0_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata0 Mask           */
#define TPIU_FIFODATA1_ITMdata0_SHIFT            0                                                   /*!< TPIU_FIFODATA1: ITMdata0 Position       */
#define TPIU_FIFODATA1_ITMdata0(x)               (((x)<<TPIU_FIFODATA1_ITMdata0_SHIFT)&TPIU_FIFODATA1_ITMdata0_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMdata1_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata1_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata1 Mask           */
#define TPIU_FIFODATA1_ITMdata1_SHIFT            8                                                   /*!< TPIU_FIFODATA1: ITMdata1 Position       */
#define TPIU_FIFODATA1_ITMdata1(x)               (((x)<<TPIU_FIFODATA1_ITMdata1_SHIFT)&TPIU_FIFODATA1_ITMdata1_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMdata2_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata2_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata2 Mask           */
#define TPIU_FIFODATA1_ITMdata2_SHIFT            16                                                  /*!< TPIU_FIFODATA1: ITMdata2 Position       */
#define TPIU_FIFODATA1_ITMdata2(x)               (((x)<<TPIU_FIFODATA1_ITMdata2_SHIFT)&TPIU_FIFODATA1_ITMdata2_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ETMbytecount_MASK         (0x03UL << TPIU_FIFODATA1_ETMbytecount_SHIFT)       /*!< TPIU_FIFODATA1: ETMbytecount Mask       */
#define TPIU_FIFODATA1_ETMbytecount_SHIFT        24                                                  /*!< TPIU_FIFODATA1: ETMbytecount Position   */
#define TPIU_FIFODATA1_ETMbytecount(x)           (((x)<<TPIU_FIFODATA1_ETMbytecount_SHIFT)&TPIU_FIFODATA1_ETMbytecount_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ETMATVALID_MASK           (0x01UL << TPIU_FIFODATA1_ETMATVALID_SHIFT)         /*!< TPIU_FIFODATA1: ETMATVALID Mask         */
#define TPIU_FIFODATA1_ETMATVALID_SHIFT          26                                                  /*!< TPIU_FIFODATA1: ETMATVALID Position     */
#define TPIU_FIFODATA1_ITMbytecount_MASK         (0x03UL << TPIU_FIFODATA1_ITMbytecount_SHIFT)       /*!< TPIU_FIFODATA1: ITMbytecount Mask       */
#define TPIU_FIFODATA1_ITMbytecount_SHIFT        27                                                  /*!< TPIU_FIFODATA1: ITMbytecount Position   */
#define TPIU_FIFODATA1_ITMbytecount(x)           (((x)<<TPIU_FIFODATA1_ITMbytecount_SHIFT)&TPIU_FIFODATA1_ITMbytecount_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMATVALID_MASK           (0x01UL << TPIU_FIFODATA1_ITMATVALID_SHIFT)         /*!< TPIU_FIFODATA1: ITMATVALID Mask         */
#define TPIU_FIFODATA1_ITMATVALID_SHIFT          29                                                  /*!< TPIU_FIFODATA1: ITMATVALID Position     */

/* ------- TPIU_ITCTRL                              ------ */
#define TPIU_ITCTRL_Mode_MASK                    (0x03UL << TPIU_ITCTRL_Mode_SHIFT)                  /*!< TPIU_ITCTRL: Mode Mask                  */
#define TPIU_ITCTRL_Mode_SHIFT                   0                                                   /*!< TPIU_ITCTRL: Mode Position              */
#define TPIU_ITCTRL_Mode(x)                      (((x)<<TPIU_ITCTRL_Mode_SHIFT)&TPIU_ITCTRL_Mode_MASK) /*!< TPIU_ITCTRL                             */

/* ------- TPIU_CLAIMSET                            ------ */
#define TPIU_CLAIMSET_CLAIMSET_MASK              (0x0FUL << TPIU_CLAIMSET_CLAIMSET_SHIFT)            /*!< TPIU_CLAIMSET: CLAIMSET Mask            */
#define TPIU_CLAIMSET_CLAIMSET_SHIFT             0                                                   /*!< TPIU_CLAIMSET: CLAIMSET Position        */
#define TPIU_CLAIMSET_CLAIMSET(x)                (((x)<<TPIU_CLAIMSET_CLAIMSET_SHIFT)&TPIU_CLAIMSET_CLAIMSET_MASK) /*!< TPIU_CLAIMSET                           */

/* ------- TPIU_CLAIMCLR                            ------ */
#define TPIU_CLAIMCLR_CLAIMCLR_MASK              (0x0FUL << TPIU_CLAIMCLR_CLAIMCLR_SHIFT)            /*!< TPIU_CLAIMCLR: CLAIMCLR Mask            */
#define TPIU_CLAIMCLR_CLAIMCLR_SHIFT             0                                                   /*!< TPIU_CLAIMCLR: CLAIMCLR Position        */
#define TPIU_CLAIMCLR_CLAIMCLR(x)                (((x)<<TPIU_CLAIMCLR_CLAIMCLR_SHIFT)&TPIU_CLAIMCLR_CLAIMCLR_MASK) /*!< TPIU_CLAIMCLR                           */

/* ------- TPIU_DEVID                               ------ */
#define TPIU_DEVID_NumberOfTraceInputs_MASK      (0x1FUL << TPIU_DEVID_NumberOfTraceInputs_SHIFT)    /*!< TPIU_DEVID: NumberOfTraceInputs Mask    */
#define TPIU_DEVID_NumberOfTraceInputs_SHIFT     0                                                   /*!< TPIU_DEVID: NumberOfTraceInputs Position*/
#define TPIU_DEVID_NumberOfTraceInputs(x)        (((x)<<TPIU_DEVID_NumberOfTraceInputs_SHIFT)&TPIU_DEVID_NumberOfTraceInputs_MASK) /*!< TPIU_DEVID                              */
#define TPIU_DEVID_TRACECELKIN_MASK              (0x01UL << TPIU_DEVID_TRACECELKIN_SHIFT)            /*!< TPIU_DEVID: TRACECELKIN Mask            */
#define TPIU_DEVID_TRACECELKIN_SHIFT             5                                                   /*!< TPIU_DEVID: TRACECELKIN Position        */
#define TPIU_DEVID_MinimumBufferSize_MASK        (0x07UL << TPIU_DEVID_MinimumBufferSize_SHIFT)      /*!< TPIU_DEVID: MinimumBufferSize Mask      */
#define TPIU_DEVID_MinimumBufferSize_SHIFT       6                                                   /*!< TPIU_DEVID: MinimumBufferSize Position  */
#define TPIU_DEVID_MinimumBufferSize(x)          (((x)<<TPIU_DEVID_MinimumBufferSize_SHIFT)&TPIU_DEVID_MinimumBufferSize_MASK) /*!< TPIU_DEVID                              */
#define TPIU_DEVID_TraceAndClockModes_MASK       (0x01UL << TPIU_DEVID_TraceAndClockModes_SHIFT)     /*!< TPIU_DEVID: TraceAndClockModes Mask     */
#define TPIU_DEVID_TraceAndClockModes_SHIFT      9                                                   /*!< TPIU_DEVID: TraceAndClockModes Position */
#define TPIU_DEVID_Manchester_MASK               (0x01UL << TPIU_DEVID_Manchester_SHIFT)             /*!< TPIU_DEVID: Manchester Mask             */
#define TPIU_DEVID_Manchester_SHIFT              10                                                  /*!< TPIU_DEVID: Manchester Position         */
#define TPIU_DEVID_NRZ_MASK                      (0x01UL << TPIU_DEVID_NRZ_SHIFT)                    /*!< TPIU_DEVID: NRZ Mask                    */
#define TPIU_DEVID_NRZ_SHIFT                     11                                                  /*!< TPIU_DEVID: NRZ Position                */

/* ------- TPIU_PID4                                ------ */
#define TPIU_PID4_JEP106_MASK                    (0x0FUL << TPIU_PID4_JEP106_SHIFT)                  /*!< TPIU_PID4: JEP106 Mask                  */
#define TPIU_PID4_JEP106_SHIFT                   0                                                   /*!< TPIU_PID4: JEP106 Position              */
#define TPIU_PID4_JEP106(x)                      (((x)<<TPIU_PID4_JEP106_SHIFT)&TPIU_PID4_JEP106_MASK) /*!< TPIU_PID4                               */
#define TPIU_PID4_c4KB_MASK                      (0x0FUL << TPIU_PID4_c4KB_SHIFT)                    /*!< TPIU_PID4: c4KB Mask                    */
#define TPIU_PID4_c4KB_SHIFT                     4                                                   /*!< TPIU_PID4: c4KB Position                */
#define TPIU_PID4_c4KB(x)                        (((x)<<TPIU_PID4_c4KB_SHIFT)&TPIU_PID4_c4KB_MASK)   /*!< TPIU_PID4                               */

/* ------- TPIU_PID5                                ------ */

/* ------- TPIU_PID6                                ------ */

/* ------- TPIU_PID7                                ------ */

/* ------- TPIU_PID0                                ------ */
#define TPIU_PID0_PartNumber_MASK                (0xFFUL << TPIU_PID0_PartNumber_SHIFT)              /*!< TPIU_PID0: PartNumber Mask              */
#define TPIU_PID0_PartNumber_SHIFT               0                                                   /*!< TPIU_PID0: PartNumber Position          */
#define TPIU_PID0_PartNumber(x)                  (((x)<<TPIU_PID0_PartNumber_SHIFT)&TPIU_PID0_PartNumber_MASK) /*!< TPIU_PID0                               */

/* ------- TPIU_PID1                                ------ */
#define TPIU_PID1_PartNumber_MASK                (0x0FUL << TPIU_PID1_PartNumber_SHIFT)              /*!< TPIU_PID1: PartNumber Mask              */
#define TPIU_PID1_PartNumber_SHIFT               0                                                   /*!< TPIU_PID1: PartNumber Position          */
#define TPIU_PID1_PartNumber(x)                  (((x)<<TPIU_PID1_PartNumber_SHIFT)&TPIU_PID1_PartNumber_MASK) /*!< TPIU_PID1                               */
#define TPIU_PID1_JEP106_identity_code_MASK      (0x0FUL << TPIU_PID1_JEP106_identity_code_SHIFT)    /*!< TPIU_PID1: JEP106_identity_code Mask    */
#define TPIU_PID1_JEP106_identity_code_SHIFT     4                                                   /*!< TPIU_PID1: JEP106_identity_code Position*/
#define TPIU_PID1_JEP106_identity_code(x)        (((x)<<TPIU_PID1_JEP106_identity_code_SHIFT)&TPIU_PID1_JEP106_identity_code_MASK) /*!< TPIU_PID1                               */

/* ------- TPIU_PID2                                ------ */
#define TPIU_PID2_JEP106_identity_code_MASK      (0x07UL << TPIU_PID2_JEP106_identity_code_SHIFT)    /*!< TPIU_PID2: JEP106_identity_code Mask    */
#define TPIU_PID2_JEP106_identity_code_SHIFT     0                                                   /*!< TPIU_PID2: JEP106_identity_code Position*/
#define TPIU_PID2_JEP106_identity_code(x)        (((x)<<TPIU_PID2_JEP106_identity_code_SHIFT)&TPIU_PID2_JEP106_identity_code_MASK) /*!< TPIU_PID2                               */
#define TPIU_PID2_Revision_MASK                  (0x0FUL << TPIU_PID2_Revision_SHIFT)                /*!< TPIU_PID2: Revision Mask                */
#define TPIU_PID2_Revision_SHIFT                 4                                                   /*!< TPIU_PID2: Revision Position            */
#define TPIU_PID2_Revision(x)                    (((x)<<TPIU_PID2_Revision_SHIFT)&TPIU_PID2_Revision_MASK) /*!< TPIU_PID2                               */

/* ------- TPIU_PID3                                ------ */
#define TPIU_PID3_CustomerModified_MASK          (0x0FUL << TPIU_PID3_CustomerModified_SHIFT)        /*!< TPIU_PID3: CustomerModified Mask        */
#define TPIU_PID3_CustomerModified_SHIFT         0                                                   /*!< TPIU_PID3: CustomerModified Position    */
#define TPIU_PID3_CustomerModified(x)            (((x)<<TPIU_PID3_CustomerModified_SHIFT)&TPIU_PID3_CustomerModified_MASK) /*!< TPIU_PID3                               */
#define TPIU_PID3_RevAnd_MASK                    (0x0FUL << TPIU_PID3_RevAnd_SHIFT)                  /*!< TPIU_PID3: RevAnd Mask                  */
#define TPIU_PID3_RevAnd_SHIFT                   4                                                   /*!< TPIU_PID3: RevAnd Position              */
#define TPIU_PID3_RevAnd(x)                      (((x)<<TPIU_PID3_RevAnd_SHIFT)&TPIU_PID3_RevAnd_MASK) /*!< TPIU_PID3                               */

/* ------- TPIU_CID0                                ------ */
#define TPIU_CID0_Preamble_MASK                  (0xFFUL << TPIU_CID0_Preamble_SHIFT)                /*!< TPIU_CID0: Preamble Mask                */
#define TPIU_CID0_Preamble_SHIFT                 0                                                   /*!< TPIU_CID0: Preamble Position            */
#define TPIU_CID0_Preamble(x)                    (((x)<<TPIU_CID0_Preamble_SHIFT)&TPIU_CID0_Preamble_MASK) /*!< TPIU_CID0                               */

/* ------- TPIU_CID1                                ------ */
#define TPIU_CID1_Preamble_MASK                  (0x0FUL << TPIU_CID1_Preamble_SHIFT)                /*!< TPIU_CID1: Preamble Mask                */
#define TPIU_CID1_Preamble_SHIFT                 0                                                   /*!< TPIU_CID1: Preamble Position            */
#define TPIU_CID1_Preamble(x)                    (((x)<<TPIU_CID1_Preamble_SHIFT)&TPIU_CID1_Preamble_MASK) /*!< TPIU_CID1                               */
#define TPIU_CID1_ComponentClass_MASK            (0x0FUL << TPIU_CID1_ComponentClass_SHIFT)          /*!< TPIU_CID1: ComponentClass Mask          */
#define TPIU_CID1_ComponentClass_SHIFT           4                                                   /*!< TPIU_CID1: ComponentClass Position      */
#define TPIU_CID1_ComponentClass(x)              (((x)<<TPIU_CID1_ComponentClass_SHIFT)&TPIU_CID1_ComponentClass_MASK) /*!< TPIU_CID1                               */

/* ------- TPIU_CID2                                ------ */
#define TPIU_CID2_Preamble_MASK                  (0xFFUL << TPIU_CID2_Preamble_SHIFT)                /*!< TPIU_CID2: Preamble Mask                */
#define TPIU_CID2_Preamble_SHIFT                 0                                                   /*!< TPIU_CID2: Preamble Position            */
#define TPIU_CID2_Preamble(x)                    (((x)<<TPIU_CID2_Preamble_SHIFT)&TPIU_CID2_Preamble_MASK) /*!< TPIU_CID2                               */

/* ------- TPIU_CID3                                ------ */
#define TPIU_CID3_Preamble_MASK                  (0xFFUL << TPIU_CID3_Preamble_SHIFT)                /*!< TPIU_CID3: Preamble Mask                */
#define TPIU_CID3_Preamble_SHIFT                 0                                                   /*!< TPIU_CID3: Preamble Position            */
#define TPIU_CID3_Preamble(x)                    (((x)<<TPIU_CID3_Preamble_SHIFT)&TPIU_CID3_Preamble_MASK) /*!< TPIU_CID3                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'TPIU' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define TPIU_SSPSR                     (TPIU->SSPSR)
#define TPIU_CSPSR                     (TPIU->CSPSR)
#define TPIU_ACPR                      (TPIU->ACPR)
#define TPIU_SPPR                      (TPIU->SPPR)
#define TPIU_FFSR                      (TPIU->FFSR)
#define TPIU_FFCR                      (TPIU->FFCR)
#define TPIU_FSCR                      (TPIU->FSCR)
#define TPIU_TRIGGER                   (TPIU->TRIGGER)
#define TPIU_FIFODATA0                 (TPIU->FIFODATA0)
#define TPIU_ITATBCTR2                 (TPIU->ITATBCTR2)
#define TPIU_ITATBCTR0                 (TPIU->ITATBCTR0)
#define TPIU_FIFODATA1                 (TPIU->FIFODATA1)
#define TPIU_ITCTRL                    (TPIU->ITCTRL)
#define TPIU_CLAIMSET                  (TPIU->CLAIMSET)
#define TPIU_CLAIMCLR                  (TPIU->CLAIMCLR)
#define TPIU_DEVID                     (TPIU->DEVID)
#define TPIU_PID4                      (TPIU->PID4)
#define TPIU_PID5                      (TPIU->PID5)
#define TPIU_PID6                      (TPIU->PID6)
#define TPIU_PID7                      (TPIU->PID7)
#define TPIU_PID0                      (TPIU->PID0)
#define TPIU_PID1                      (TPIU->PID1)
#define TPIU_PID2                      (TPIU->PID2)
#define TPIU_PID3                      (TPIU->PID3)
#define TPIU_CID0                      (TPIU->CID0)
#define TPIU_CID1                      (TPIU->CID1)
#define TPIU_CID2                      (TPIU->CID2)
#define TPIU_CID3                      (TPIU->CID3)

/* ================================================================================ */
/* ================           UART0 (file:UART0_MK_C7816)          ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef struct {                                /*!<       UART0 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: Baud Rate Register: High                                     */
   __IO uint8_t   BDL;                          /*!< 0001: Baud Rate Register: Low                                      */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0003: Control Register 2                                           */
   __I  uint8_t   S1;                           /*!< 0004: Status Register 1                                            */
   __IO uint8_t   S2;                           /*!< 0005: Status Register 2                                            */
   __IO uint8_t   C3;                           /*!< 0006: Control Register 3                                           */
   __IO uint8_t   D;                            /*!< 0007: Data Register                                                */
   __IO uint8_t   MA1;                          /*!< 0008: Match Address Registers 1                                    */
   __IO uint8_t   MA2;                          /*!< 0009: Match Address Registers 2                                    */
   __IO uint8_t   C4;                           /*!< 000A: Control Register 4                                           */
   __IO uint8_t   C5;                           /*!< 000B: Control Register 5                                           */
   __I  uint8_t   ED;                           /*!< 000C: Extended Data Register                                       */
   __IO uint8_t   MODEM;                        /*!< 000D: Modem Register                                               */
   __IO uint8_t   IR;                           /*!< 000E: Infrared Register                                            */
   __I  uint8_t   RESERVED0;                    /*!< 000F:                                                              */
   __IO uint8_t   PFIFO;                        /*!< 0010: FIFO Parameters                                              */
   __IO uint8_t   CFIFO;                        /*!< 0011: FIFO Control Register                                        */
   __IO uint8_t   SFIFO;                        /*!< 0012: FIFO Status Register                                         */
   __IO uint8_t   TWFIFO;                       /*!< 0013: FIFO Transmit Watermark                                      */
   __I  uint8_t   TCFIFO;                       /*!< 0014: FIFO Transmit Count                                          */
   __IO uint8_t   RWFIFO;                       /*!< 0015: FIFO Receive Watermark                                       */
   __I  uint8_t   RCFIFO;                       /*!< 0016: FIFO Receive Count                                           */
   __I  uint8_t   RESERVED1;                    /*!< 0017:                                                              */
   __IO uint8_t   C7816;                        /*!< 0018: 7816 Control Register                                        */
   __IO uint8_t   IE7816;                       /*!< 0019: 7816 Interrupt Enable Register                               */
   __IO uint8_t   IS7816;                       /*!< 001A: 7816 Interrupt Status Register                               */
   union {                                      /*!< 0000: (size=0001)                                                  */
      __IO uint8_t   WP7816T0;                  /*!< 001B: 7816 Wait Parameter Register                                 */
      __IO uint8_t   WP7816T1;                  /*!< 001B: 7816 Wait Parameter Register                                 */
   };
   __IO uint8_t   WN7816;                       /*!< 001C: 7816 Wait N Register                                         */
   __IO uint8_t   WF7816;                       /*!< 001D: 7816 Wait FD Register                                        */
   __IO uint8_t   ET7816;                       /*!< 001E: 7816 Error Threshold Register                                */
   __IO uint8_t   TL7816;                       /*!< 001F: 7816 Transmit Length Register                                */
} UART0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- UART0_BDH                                ------ */
#define UART_BDH_SBR_MASK                        (0x1FUL << UART_BDH_SBR_SHIFT)                      /*!< UART0_BDH: SBR Mask                     */
#define UART_BDH_SBR_SHIFT                       0                                                   /*!< UART0_BDH: SBR Position                 */
#define UART_BDH_SBR(x)                          (((x)<<UART_BDH_SBR_SHIFT)&UART_BDH_SBR_MASK)       /*!< UART0_BDH                               */
#define UART_BDH_RXEDGIE_MASK                    (0x01UL << UART_BDH_RXEDGIE_SHIFT)                  /*!< UART0_BDH: RXEDGIE Mask                 */
#define UART_BDH_RXEDGIE_SHIFT                   6                                                   /*!< UART0_BDH: RXEDGIE Position             */
#define UART_BDH_LBKDIE_MASK                     (0x01UL << UART_BDH_LBKDIE_SHIFT)                   /*!< UART0_BDH: LBKDIE Mask                  */
#define UART_BDH_LBKDIE_SHIFT                    7                                                   /*!< UART0_BDH: LBKDIE Position              */

/* ------- UART0_BDL                                ------ */
#define UART_BDL_SBR_MASK                        (0xFFUL << UART_BDL_SBR_SHIFT)                      /*!< UART0_BDL: SBR Mask                     */
#define UART_BDL_SBR_SHIFT                       0                                                   /*!< UART0_BDL: SBR Position                 */
#define UART_BDL_SBR(x)                          (((x)<<UART_BDL_SBR_SHIFT)&UART_BDL_SBR_MASK)       /*!< UART0_BDL                               */

/* ------- UART0_C1                                 ------ */
#define UART_C1_PT_MASK                          (0x01UL << UART_C1_PT_SHIFT)                        /*!< UART0_C1: PT Mask                       */
#define UART_C1_PT_SHIFT                         0                                                   /*!< UART0_C1: PT Position                   */
#define UART_C1_PE_MASK                          (0x01UL << UART_C1_PE_SHIFT)                        /*!< UART0_C1: PE Mask                       */
#define UART_C1_PE_SHIFT                         1                                                   /*!< UART0_C1: PE Position                   */
#define UART_C1_ILT_MASK                         (0x01UL << UART_C1_ILT_SHIFT)                       /*!< UART0_C1: ILT Mask                      */
#define UART_C1_ILT_SHIFT                        2                                                   /*!< UART0_C1: ILT Position                  */
#define UART_C1_WAKE_MASK                        (0x01UL << UART_C1_WAKE_SHIFT)                      /*!< UART0_C1: WAKE Mask                     */
#define UART_C1_WAKE_SHIFT                       3                                                   /*!< UART0_C1: WAKE Position                 */
#define UART_C1_M_MASK                           (0x01UL << UART_C1_M_SHIFT)                         /*!< UART0_C1: M Mask                        */
#define UART_C1_M_SHIFT                          4                                                   /*!< UART0_C1: M Position                    */
#define UART_C1_RSRC_MASK                        (0x01UL << UART_C1_RSRC_SHIFT)                      /*!< UART0_C1: RSRC Mask                     */
#define UART_C1_RSRC_SHIFT                       5                                                   /*!< UART0_C1: RSRC Position                 */
#define UART_C1_UARTSWAI_MASK                    (0x01UL << UART_C1_UARTSWAI_SHIFT)                  /*!< UART0_C1: UARTSWAI Mask                 */
#define UART_C1_UARTSWAI_SHIFT                   6                                                   /*!< UART0_C1: UARTSWAI Position             */
#define UART_C1_LOOPS_MASK                       (0x01UL << UART_C1_LOOPS_SHIFT)                     /*!< UART0_C1: LOOPS Mask                    */
#define UART_C1_LOOPS_SHIFT                      7                                                   /*!< UART0_C1: LOOPS Position                */

/* ------- UART0_C2                                 ------ */
#define UART_C2_SBK_MASK                         (0x01UL << UART_C2_SBK_SHIFT)                       /*!< UART0_C2: SBK Mask                      */
#define UART_C2_SBK_SHIFT                        0                                                   /*!< UART0_C2: SBK Position                  */
#define UART_C2_RWU_MASK                         (0x01UL << UART_C2_RWU_SHIFT)                       /*!< UART0_C2: RWU Mask                      */
#define UART_C2_RWU_SHIFT                        1                                                   /*!< UART0_C2: RWU Position                  */
#define UART_C2_RE_MASK                          (0x01UL << UART_C2_RE_SHIFT)                        /*!< UART0_C2: RE Mask                       */
#define UART_C2_RE_SHIFT                         2                                                   /*!< UART0_C2: RE Position                   */
#define UART_C2_TE_MASK                          (0x01UL << UART_C2_TE_SHIFT)                        /*!< UART0_C2: TE Mask                       */
#define UART_C2_TE_SHIFT                         3                                                   /*!< UART0_C2: TE Position                   */
#define UART_C2_ILIE_MASK                        (0x01UL << UART_C2_ILIE_SHIFT)                      /*!< UART0_C2: ILIE Mask                     */
#define UART_C2_ILIE_SHIFT                       4                                                   /*!< UART0_C2: ILIE Position                 */
#define UART_C2_RIE_MASK                         (0x01UL << UART_C2_RIE_SHIFT)                       /*!< UART0_C2: RIE Mask                      */
#define UART_C2_RIE_SHIFT                        5                                                   /*!< UART0_C2: RIE Position                  */
#define UART_C2_TCIE_MASK                        (0x01UL << UART_C2_TCIE_SHIFT)                      /*!< UART0_C2: TCIE Mask                     */
#define UART_C2_TCIE_SHIFT                       6                                                   /*!< UART0_C2: TCIE Position                 */
#define UART_C2_TIE_MASK                         (0x01UL << UART_C2_TIE_SHIFT)                       /*!< UART0_C2: TIE Mask                      */
#define UART_C2_TIE_SHIFT                        7                                                   /*!< UART0_C2: TIE Position                  */

/* ------- UART0_S1                                 ------ */
#define UART_S1_PF_MASK                          (0x01UL << UART_S1_PF_SHIFT)                        /*!< UART0_S1: PF Mask                       */
#define UART_S1_PF_SHIFT                         0                                                   /*!< UART0_S1: PF Position                   */
#define UART_S1_FE_MASK                          (0x01UL << UART_S1_FE_SHIFT)                        /*!< UART0_S1: FE Mask                       */
#define UART_S1_FE_SHIFT                         1                                                   /*!< UART0_S1: FE Position                   */
#define UART_S1_NF_MASK                          (0x01UL << UART_S1_NF_SHIFT)                        /*!< UART0_S1: NF Mask                       */
#define UART_S1_NF_SHIFT                         2                                                   /*!< UART0_S1: NF Position                   */
#define UART_S1_OR_MASK                          (0x01UL << UART_S1_OR_SHIFT)                        /*!< UART0_S1: OR Mask                       */
#define UART_S1_OR_SHIFT                         3                                                   /*!< UART0_S1: OR Position                   */
#define UART_S1_IDLE_MASK                        (0x01UL << UART_S1_IDLE_SHIFT)                      /*!< UART0_S1: IDLE Mask                     */
#define UART_S1_IDLE_SHIFT                       4                                                   /*!< UART0_S1: IDLE Position                 */
#define UART_S1_RDRF_MASK                        (0x01UL << UART_S1_RDRF_SHIFT)                      /*!< UART0_S1: RDRF Mask                     */
#define UART_S1_RDRF_SHIFT                       5                                                   /*!< UART0_S1: RDRF Position                 */
#define UART_S1_TC_MASK                          (0x01UL << UART_S1_TC_SHIFT)                        /*!< UART0_S1: TC Mask                       */
#define UART_S1_TC_SHIFT                         6                                                   /*!< UART0_S1: TC Position                   */
#define UART_S1_TDRE_MASK                        (0x01UL << UART_S1_TDRE_SHIFT)                      /*!< UART0_S1: TDRE Mask                     */
#define UART_S1_TDRE_SHIFT                       7                                                   /*!< UART0_S1: TDRE Position                 */

/* ------- UART0_S2                                 ------ */
#define UART_S2_RAF_MASK                         (0x01UL << UART_S2_RAF_SHIFT)                       /*!< UART0_S2: RAF Mask                      */
#define UART_S2_RAF_SHIFT                        0                                                   /*!< UART0_S2: RAF Position                  */
#define UART_S2_LBKDE_MASK                       (0x01UL << UART_S2_LBKDE_SHIFT)                     /*!< UART0_S2: LBKDE Mask                    */
#define UART_S2_LBKDE_SHIFT                      1                                                   /*!< UART0_S2: LBKDE Position                */
#define UART_S2_BRK13_MASK                       (0x01UL << UART_S2_BRK13_SHIFT)                     /*!< UART0_S2: BRK13 Mask                    */
#define UART_S2_BRK13_SHIFT                      2                                                   /*!< UART0_S2: BRK13 Position                */
#define UART_S2_RWUID_MASK                       (0x01UL << UART_S2_RWUID_SHIFT)                     /*!< UART0_S2: RWUID Mask                    */
#define UART_S2_RWUID_SHIFT                      3                                                   /*!< UART0_S2: RWUID Position                */
#define UART_S2_RXINV_MASK                       (0x01UL << UART_S2_RXINV_SHIFT)                     /*!< UART0_S2: RXINV Mask                    */
#define UART_S2_RXINV_SHIFT                      4                                                   /*!< UART0_S2: RXINV Position                */
#define UART_S2_MSBF_MASK                        (0x01UL << UART_S2_MSBF_SHIFT)                      /*!< UART0_S2: MSBF Mask                     */
#define UART_S2_MSBF_SHIFT                       5                                                   /*!< UART0_S2: MSBF Position                 */
#define UART_S2_RXEDGIF_MASK                     (0x01UL << UART_S2_RXEDGIF_SHIFT)                   /*!< UART0_S2: RXEDGIF Mask                  */
#define UART_S2_RXEDGIF_SHIFT                    6                                                   /*!< UART0_S2: RXEDGIF Position              */
#define UART_S2_LBKDIF_MASK                      (0x01UL << UART_S2_LBKDIF_SHIFT)                    /*!< UART0_S2: LBKDIF Mask                   */
#define UART_S2_LBKDIF_SHIFT                     7                                                   /*!< UART0_S2: LBKDIF Position               */

/* ------- UART0_C3                                 ------ */
#define UART_C3_PEIE_MASK                        (0x01UL << UART_C3_PEIE_SHIFT)                      /*!< UART0_C3: PEIE Mask                     */
#define UART_C3_PEIE_SHIFT                       0                                                   /*!< UART0_C3: PEIE Position                 */
#define UART_C3_FEIE_MASK                        (0x01UL << UART_C3_FEIE_SHIFT)                      /*!< UART0_C3: FEIE Mask                     */
#define UART_C3_FEIE_SHIFT                       1                                                   /*!< UART0_C3: FEIE Position                 */
#define UART_C3_NEIE_MASK                        (0x01UL << UART_C3_NEIE_SHIFT)                      /*!< UART0_C3: NEIE Mask                     */
#define UART_C3_NEIE_SHIFT                       2                                                   /*!< UART0_C3: NEIE Position                 */
#define UART_C3_ORIE_MASK                        (0x01UL << UART_C3_ORIE_SHIFT)                      /*!< UART0_C3: ORIE Mask                     */
#define UART_C3_ORIE_SHIFT                       3                                                   /*!< UART0_C3: ORIE Position                 */
#define UART_C3_TXINV_MASK                       (0x01UL << UART_C3_TXINV_SHIFT)                     /*!< UART0_C3: TXINV Mask                    */
#define UART_C3_TXINV_SHIFT                      4                                                   /*!< UART0_C3: TXINV Position                */
#define UART_C3_TXDIR_MASK                       (0x01UL << UART_C3_TXDIR_SHIFT)                     /*!< UART0_C3: TXDIR Mask                    */
#define UART_C3_TXDIR_SHIFT                      5                                                   /*!< UART0_C3: TXDIR Position                */
#define UART_C3_T8_MASK                          (0x01UL << UART_C3_T8_SHIFT)                        /*!< UART0_C3: T8 Mask                       */
#define UART_C3_T8_SHIFT                         6                                                   /*!< UART0_C3: T8 Position                   */
#define UART_C3_R8_MASK                          (0x01UL << UART_C3_R8_SHIFT)                        /*!< UART0_C3: R8 Mask                       */
#define UART_C3_R8_SHIFT                         7                                                   /*!< UART0_C3: R8 Position                   */

/* ------- UART0_D                                  ------ */
#define UART_D_RT_MASK                           (0xFFUL << UART_D_RT_SHIFT)                         /*!< UART0_D: RT Mask                        */
#define UART_D_RT_SHIFT                          0                                                   /*!< UART0_D: RT Position                    */
#define UART_D_RT(x)                             (((x)<<UART_D_RT_SHIFT)&UART_D_RT_MASK)             /*!< UART0_D                                 */

/* ------- UART0_MA                                 ------ */
#define UART_MA_MA_MASK                          (0xFFUL << UART_MA_MA_SHIFT)                        /*!< UART0_MA: MA Mask                       */
#define UART_MA_MA_SHIFT                         0                                                   /*!< UART0_MA: MA Position                   */
#define UART_MA_MA(x)                            (((x)<<UART_MA_MA_SHIFT)&UART_MA_MA_MASK)           /*!< UART0_MA                                */

/* ------- UART0_C4                                 ------ */
#define UART_C4_BRFA_MASK                        (0x1FUL << UART_C4_BRFA_SHIFT)                      /*!< UART0_C4: BRFA Mask                     */
#define UART_C4_BRFA_SHIFT                       0                                                   /*!< UART0_C4: BRFA Position                 */
#define UART_C4_BRFA(x)                          (((x)<<UART_C4_BRFA_SHIFT)&UART_C4_BRFA_MASK)       /*!< UART0_C4                                */
#define UART_C4_M10_MASK                         (0x01UL << UART_C4_M10_SHIFT)                       /*!< UART0_C4: M10 Mask                      */
#define UART_C4_M10_SHIFT                        5                                                   /*!< UART0_C4: M10 Position                  */
#define UART_C4_MAEN2_MASK                       (0x01UL << UART_C4_MAEN2_SHIFT)                     /*!< UART0_C4: MAEN2 Mask                    */
#define UART_C4_MAEN2_SHIFT                      6                                                   /*!< UART0_C4: MAEN2 Position                */
#define UART_C4_MAEN1_MASK                       (0x01UL << UART_C4_MAEN1_SHIFT)                     /*!< UART0_C4: MAEN1 Mask                    */
#define UART_C4_MAEN1_SHIFT                      7                                                   /*!< UART0_C4: MAEN1 Position                */

/* ------- UART0_C5                                 ------ */
#define UART_C5_RDMAS_MASK                       (0x01UL << UART_C5_RDMAS_SHIFT)                     /*!< UART0_C5: RDMAS Mask                    */
#define UART_C5_RDMAS_SHIFT                      5                                                   /*!< UART0_C5: RDMAS Position                */
#define UART_C5_TDMAS_MASK                       (0x01UL << UART_C5_TDMAS_SHIFT)                     /*!< UART0_C5: TDMAS Mask                    */
#define UART_C5_TDMAS_SHIFT                      7                                                   /*!< UART0_C5: TDMAS Position                */

/* ------- UART0_ED                                 ------ */
#define UART_ED_PARITYE_MASK                     (0x01UL << UART_ED_PARITYE_SHIFT)                   /*!< UART0_ED: PARITYE Mask                  */
#define UART_ED_PARITYE_SHIFT                    6                                                   /*!< UART0_ED: PARITYE Position              */
#define UART_ED_NOISY_MASK                       (0x01UL << UART_ED_NOISY_SHIFT)                     /*!< UART0_ED: NOISY Mask                    */
#define UART_ED_NOISY_SHIFT                      7                                                   /*!< UART0_ED: NOISY Position                */

/* ------- UART0_MODEM                              ------ */
#define UART_MODEM_TXCTSE_MASK                   (0x01UL << UART_MODEM_TXCTSE_SHIFT)                 /*!< UART0_MODEM: TXCTSE Mask                */
#define UART_MODEM_TXCTSE_SHIFT                  0                                                   /*!< UART0_MODEM: TXCTSE Position            */
#define UART_MODEM_TXRTSE_MASK                   (0x01UL << UART_MODEM_TXRTSE_SHIFT)                 /*!< UART0_MODEM: TXRTSE Mask                */
#define UART_MODEM_TXRTSE_SHIFT                  1                                                   /*!< UART0_MODEM: TXRTSE Position            */
#define UART_MODEM_TXRTSPOL_MASK                 (0x01UL << UART_MODEM_TXRTSPOL_SHIFT)               /*!< UART0_MODEM: TXRTSPOL Mask              */
#define UART_MODEM_TXRTSPOL_SHIFT                2                                                   /*!< UART0_MODEM: TXRTSPOL Position          */
#define UART_MODEM_RXRTSE_MASK                   (0x01UL << UART_MODEM_RXRTSE_SHIFT)                 /*!< UART0_MODEM: RXRTSE Mask                */
#define UART_MODEM_RXRTSE_SHIFT                  3                                                   /*!< UART0_MODEM: RXRTSE Position            */

/* ------- UART0_IR                                 ------ */
#define UART_IR_TNP_MASK                         (0x03UL << UART_IR_TNP_SHIFT)                       /*!< UART0_IR: TNP Mask                      */
#define UART_IR_TNP_SHIFT                        0                                                   /*!< UART0_IR: TNP Position                  */
#define UART_IR_TNP(x)                           (((x)<<UART_IR_TNP_SHIFT)&UART_IR_TNP_MASK)         /*!< UART0_IR                                */
#define UART_IR_IREN_MASK                        (0x01UL << UART_IR_IREN_SHIFT)                      /*!< UART0_IR: IREN Mask                     */
#define UART_IR_IREN_SHIFT                       2                                                   /*!< UART0_IR: IREN Position                 */

/* ------- UART0_PFIFO                              ------ */
#define UART_PFIFO_RXFIFOSIZE_MASK               (0x07UL << UART_PFIFO_RXFIFOSIZE_SHIFT)             /*!< UART0_PFIFO: RXFIFOSIZE Mask            */
#define UART_PFIFO_RXFIFOSIZE_SHIFT              0                                                   /*!< UART0_PFIFO: RXFIFOSIZE Position        */
#define UART_PFIFO_RXFIFOSIZE(x)                 (((x)<<UART_PFIFO_RXFIFOSIZE_SHIFT)&UART_PFIFO_RXFIFOSIZE_MASK) /*!< UART0_PFIFO                             */
#define UART_PFIFO_RXFE_MASK                     (0x01UL << UART_PFIFO_RXFE_SHIFT)                   /*!< UART0_PFIFO: RXFE Mask                  */
#define UART_PFIFO_RXFE_SHIFT                    3                                                   /*!< UART0_PFIFO: RXFE Position              */
#define UART_PFIFO_TXFIFOSIZE_MASK               (0x07UL << UART_PFIFO_TXFIFOSIZE_SHIFT)             /*!< UART0_PFIFO: TXFIFOSIZE Mask            */
#define UART_PFIFO_TXFIFOSIZE_SHIFT              4                                                   /*!< UART0_PFIFO: TXFIFOSIZE Position        */
#define UART_PFIFO_TXFIFOSIZE(x)                 (((x)<<UART_PFIFO_TXFIFOSIZE_SHIFT)&UART_PFIFO_TXFIFOSIZE_MASK) /*!< UART0_PFIFO                             */
#define UART_PFIFO_TXFE_MASK                     (0x01UL << UART_PFIFO_TXFE_SHIFT)                   /*!< UART0_PFIFO: TXFE Mask                  */
#define UART_PFIFO_TXFE_SHIFT                    7                                                   /*!< UART0_PFIFO: TXFE Position              */

/* ------- UART0_CFIFO                              ------ */
#define UART_CFIFO_RXUFE_MASK                    (0x01UL << UART_CFIFO_RXUFE_SHIFT)                  /*!< UART0_CFIFO: RXUFE Mask                 */
#define UART_CFIFO_RXUFE_SHIFT                   0                                                   /*!< UART0_CFIFO: RXUFE Position             */
#define UART_CFIFO_TXOFE_MASK                    (0x01UL << UART_CFIFO_TXOFE_SHIFT)                  /*!< UART0_CFIFO: TXOFE Mask                 */
#define UART_CFIFO_TXOFE_SHIFT                   1                                                   /*!< UART0_CFIFO: TXOFE Position             */
#define UART_CFIFO_RXOFE_MASK                    (0x01UL << UART_CFIFO_RXOFE_SHIFT)                  /*!< UART0_CFIFO: RXOFE Mask                 */
#define UART_CFIFO_RXOFE_SHIFT                   2                                                   /*!< UART0_CFIFO: RXOFE Position             */
#define UART_CFIFO_RXFLUSH_MASK                  (0x01UL << UART_CFIFO_RXFLUSH_SHIFT)                /*!< UART0_CFIFO: RXFLUSH Mask               */
#define UART_CFIFO_RXFLUSH_SHIFT                 6                                                   /*!< UART0_CFIFO: RXFLUSH Position           */
#define UART_CFIFO_TXFLUSH_MASK                  (0x01UL << UART_CFIFO_TXFLUSH_SHIFT)                /*!< UART0_CFIFO: TXFLUSH Mask               */
#define UART_CFIFO_TXFLUSH_SHIFT                 7                                                   /*!< UART0_CFIFO: TXFLUSH Position           */

/* ------- UART0_SFIFO                              ------ */
#define UART_SFIFO_RXUF_MASK                     (0x01UL << UART_SFIFO_RXUF_SHIFT)                   /*!< UART0_SFIFO: RXUF Mask                  */
#define UART_SFIFO_RXUF_SHIFT                    0                                                   /*!< UART0_SFIFO: RXUF Position              */
#define UART_SFIFO_TXOF_MASK                     (0x01UL << UART_SFIFO_TXOF_SHIFT)                   /*!< UART0_SFIFO: TXOF Mask                  */
#define UART_SFIFO_TXOF_SHIFT                    1                                                   /*!< UART0_SFIFO: TXOF Position              */
#define UART_SFIFO_RXOF_MASK                     (0x01UL << UART_SFIFO_RXOF_SHIFT)                   /*!< UART0_SFIFO: RXOF Mask                  */
#define UART_SFIFO_RXOF_SHIFT                    2                                                   /*!< UART0_SFIFO: RXOF Position              */
#define UART_SFIFO_RXEMPT_MASK                   (0x01UL << UART_SFIFO_RXEMPT_SHIFT)                 /*!< UART0_SFIFO: RXEMPT Mask                */
#define UART_SFIFO_RXEMPT_SHIFT                  6                                                   /*!< UART0_SFIFO: RXEMPT Position            */
#define UART_SFIFO_TXEMPT_MASK                   (0x01UL << UART_SFIFO_TXEMPT_SHIFT)                 /*!< UART0_SFIFO: TXEMPT Mask                */
#define UART_SFIFO_TXEMPT_SHIFT                  7                                                   /*!< UART0_SFIFO: TXEMPT Position            */

/* ------- UART0_TWFIFO                             ------ */
#define UART_TWFIFO_TXWATER_MASK                 (0xFFUL << UART_TWFIFO_TXWATER_SHIFT)               /*!< UART0_TWFIFO: TXWATER Mask              */
#define UART_TWFIFO_TXWATER_SHIFT                0                                                   /*!< UART0_TWFIFO: TXWATER Position          */
#define UART_TWFIFO_TXWATER(x)                   (((x)<<UART_TWFIFO_TXWATER_SHIFT)&UART_TWFIFO_TXWATER_MASK) /*!< UART0_TWFIFO                            */

/* ------- UART0_TCFIFO                             ------ */
#define UART_TCFIFO_TXCOUNT_MASK                 (0xFFUL << UART_TCFIFO_TXCOUNT_SHIFT)               /*!< UART0_TCFIFO: TXCOUNT Mask              */
#define UART_TCFIFO_TXCOUNT_SHIFT                0                                                   /*!< UART0_TCFIFO: TXCOUNT Position          */
#define UART_TCFIFO_TXCOUNT(x)                   (((x)<<UART_TCFIFO_TXCOUNT_SHIFT)&UART_TCFIFO_TXCOUNT_MASK) /*!< UART0_TCFIFO                            */

/* ------- UART0_RWFIFO                             ------ */
#define UART_RWFIFO_RXWATER_MASK                 (0xFFUL << UART_RWFIFO_RXWATER_SHIFT)               /*!< UART0_RWFIFO: RXWATER Mask              */
#define UART_RWFIFO_RXWATER_SHIFT                0                                                   /*!< UART0_RWFIFO: RXWATER Position          */
#define UART_RWFIFO_RXWATER(x)                   (((x)<<UART_RWFIFO_RXWATER_SHIFT)&UART_RWFIFO_RXWATER_MASK) /*!< UART0_RWFIFO                            */

/* ------- UART0_RCFIFO                             ------ */
#define UART_RCFIFO_RXCOUNT_MASK                 (0xFFUL << UART_RCFIFO_RXCOUNT_SHIFT)               /*!< UART0_RCFIFO: RXCOUNT Mask              */
#define UART_RCFIFO_RXCOUNT_SHIFT                0                                                   /*!< UART0_RCFIFO: RXCOUNT Position          */
#define UART_RCFIFO_RXCOUNT(x)                   (((x)<<UART_RCFIFO_RXCOUNT_SHIFT)&UART_RCFIFO_RXCOUNT_MASK) /*!< UART0_RCFIFO                            */

/* ------- UART0_C7816                              ------ */
#define UART_C7816_ISO_7816E_MASK                (0x01UL << UART_C7816_ISO_7816E_SHIFT)              /*!< UART0_C7816: ISO_7816E Mask             */
#define UART_C7816_ISO_7816E_SHIFT               0                                                   /*!< UART0_C7816: ISO_7816E Position         */
#define UART_C7816_TTYPE_MASK                    (0x01UL << UART_C7816_TTYPE_SHIFT)                  /*!< UART0_C7816: TTYPE Mask                 */
#define UART_C7816_TTYPE_SHIFT                   1                                                   /*!< UART0_C7816: TTYPE Position             */
#define UART_C7816_INIT_MASK                     (0x01UL << UART_C7816_INIT_SHIFT)                   /*!< UART0_C7816: INIT Mask                  */
#define UART_C7816_INIT_SHIFT                    2                                                   /*!< UART0_C7816: INIT Position              */
#define UART_C7816_ANACK_MASK                    (0x01UL << UART_C7816_ANACK_SHIFT)                  /*!< UART0_C7816: ANACK Mask                 */
#define UART_C7816_ANACK_SHIFT                   3                                                   /*!< UART0_C7816: ANACK Position             */
#define UART_C7816_ONACK_MASK                    (0x01UL << UART_C7816_ONACK_SHIFT)                  /*!< UART0_C7816: ONACK Mask                 */
#define UART_C7816_ONACK_SHIFT                   4                                                   /*!< UART0_C7816: ONACK Position             */

/* ------- UART0_IE7816                             ------ */
#define UART_IE7816_RXTE_MASK                    (0x01UL << UART_IE7816_RXTE_SHIFT)                  /*!< UART0_IE7816: RXTE Mask                 */
#define UART_IE7816_RXTE_SHIFT                   0                                                   /*!< UART0_IE7816: RXTE Position             */
#define UART_IE7816_TXTE_MASK                    (0x01UL << UART_IE7816_TXTE_SHIFT)                  /*!< UART0_IE7816: TXTE Mask                 */
#define UART_IE7816_TXTE_SHIFT                   1                                                   /*!< UART0_IE7816: TXTE Position             */
#define UART_IE7816_GTVE_MASK                    (0x01UL << UART_IE7816_GTVE_SHIFT)                  /*!< UART0_IE7816: GTVE Mask                 */
#define UART_IE7816_GTVE_SHIFT                   2                                                   /*!< UART0_IE7816: GTVE Position             */
#define UART_IE7816_INITDE_MASK                  (0x01UL << UART_IE7816_INITDE_SHIFT)                /*!< UART0_IE7816: INITDE Mask               */
#define UART_IE7816_INITDE_SHIFT                 4                                                   /*!< UART0_IE7816: INITDE Position           */
#define UART_IE7816_BWTE_MASK                    (0x01UL << UART_IE7816_BWTE_SHIFT)                  /*!< UART0_IE7816: BWTE Mask                 */
#define UART_IE7816_BWTE_SHIFT                   5                                                   /*!< UART0_IE7816: BWTE Position             */
#define UART_IE7816_CWTE_MASK                    (0x01UL << UART_IE7816_CWTE_SHIFT)                  /*!< UART0_IE7816: CWTE Mask                 */
#define UART_IE7816_CWTE_SHIFT                   6                                                   /*!< UART0_IE7816: CWTE Position             */
#define UART_IE7816_WTE_MASK                     (0x01UL << UART_IE7816_WTE_SHIFT)                   /*!< UART0_IE7816: WTE Mask                  */
#define UART_IE7816_WTE_SHIFT                    7                                                   /*!< UART0_IE7816: WTE Position              */

/* ------- UART0_IS7816                             ------ */
#define UART_IS7816_RXT_MASK                     (0x01UL << UART_IS7816_RXT_SHIFT)                   /*!< UART0_IS7816: RXT Mask                  */
#define UART_IS7816_RXT_SHIFT                    0                                                   /*!< UART0_IS7816: RXT Position              */
#define UART_IS7816_TXT_MASK                     (0x01UL << UART_IS7816_TXT_SHIFT)                   /*!< UART0_IS7816: TXT Mask                  */
#define UART_IS7816_TXT_SHIFT                    1                                                   /*!< UART0_IS7816: TXT Position              */
#define UART_IS7816_GTV_MASK                     (0x01UL << UART_IS7816_GTV_SHIFT)                   /*!< UART0_IS7816: GTV Mask                  */
#define UART_IS7816_GTV_SHIFT                    2                                                   /*!< UART0_IS7816: GTV Position              */
#define UART_IS7816_INITD_MASK                   (0x01UL << UART_IS7816_INITD_SHIFT)                 /*!< UART0_IS7816: INITD Mask                */
#define UART_IS7816_INITD_SHIFT                  4                                                   /*!< UART0_IS7816: INITD Position            */
#define UART_IS7816_BWT_MASK                     (0x01UL << UART_IS7816_BWT_SHIFT)                   /*!< UART0_IS7816: BWT Mask                  */
#define UART_IS7816_BWT_SHIFT                    5                                                   /*!< UART0_IS7816: BWT Position              */
#define UART_IS7816_CWT_MASK                     (0x01UL << UART_IS7816_CWT_SHIFT)                   /*!< UART0_IS7816: CWT Mask                  */
#define UART_IS7816_CWT_SHIFT                    6                                                   /*!< UART0_IS7816: CWT Position              */
#define UART_IS7816_WT_MASK                      (0x01UL << UART_IS7816_WT_SHIFT)                    /*!< UART0_IS7816: WT Mask                   */
#define UART_IS7816_WT_SHIFT                     7                                                   /*!< UART0_IS7816: WT Position               */

/* ------- UART0_WP7816T0                           ------ */
#define UART_WP7816T0_WI_MASK                    (0xFFUL << UART_WP7816T0_WI_SHIFT)                  /*!< UART0_WP7816T0: WI Mask                 */
#define UART_WP7816T0_WI_SHIFT                   0                                                   /*!< UART0_WP7816T0: WI Position             */
#define UART_WP7816T0_WI(x)                      (((x)<<UART_WP7816T0_WI_SHIFT)&UART_WP7816T0_WI_MASK) /*!< UART0_WP7816T0                          */

/* ------- UART0_WP7816T1                           ------ */
#define UART_WP7816T1_BWI_MASK                   (0x0FUL << UART_WP7816T1_BWI_SHIFT)                 /*!< UART0_WP7816T1: BWI Mask                */
#define UART_WP7816T1_BWI_SHIFT                  0                                                   /*!< UART0_WP7816T1: BWI Position            */
#define UART_WP7816T1_BWI(x)                     (((x)<<UART_WP7816T1_BWI_SHIFT)&UART_WP7816T1_BWI_MASK) /*!< UART0_WP7816T1                          */
#define UART_WP7816T1_CWI_MASK                   (0x0FUL << UART_WP7816T1_CWI_SHIFT)                 /*!< UART0_WP7816T1: CWI Mask                */
#define UART_WP7816T1_CWI_SHIFT                  4                                                   /*!< UART0_WP7816T1: CWI Position            */
#define UART_WP7816T1_CWI(x)                     (((x)<<UART_WP7816T1_CWI_SHIFT)&UART_WP7816T1_CWI_MASK) /*!< UART0_WP7816T1                          */

/* ------- UART0_WN7816                             ------ */
#define UART_WN7816_GTN_MASK                     (0xFFUL << UART_WN7816_GTN_SHIFT)                   /*!< UART0_WN7816: GTN Mask                  */
#define UART_WN7816_GTN_SHIFT                    0                                                   /*!< UART0_WN7816: GTN Position              */
#define UART_WN7816_GTN(x)                       (((x)<<UART_WN7816_GTN_SHIFT)&UART_WN7816_GTN_MASK) /*!< UART0_WN7816                            */

/* ------- UART0_WF7816                             ------ */
#define UART_WF7816_GTFD_MASK                    (0xFFUL << UART_WF7816_GTFD_SHIFT)                  /*!< UART0_WF7816: GTFD Mask                 */
#define UART_WF7816_GTFD_SHIFT                   0                                                   /*!< UART0_WF7816: GTFD Position             */
#define UART_WF7816_GTFD(x)                      (((x)<<UART_WF7816_GTFD_SHIFT)&UART_WF7816_GTFD_MASK) /*!< UART0_WF7816                            */

/* ------- UART0_ET7816                             ------ */
#define UART_ET7816_RXTHRESHOLD_MASK             (0x0FUL << UART_ET7816_RXTHRESHOLD_SHIFT)           /*!< UART0_ET7816: RXTHRESHOLD Mask          */
#define UART_ET7816_RXTHRESHOLD_SHIFT            0                                                   /*!< UART0_ET7816: RXTHRESHOLD Position      */
#define UART_ET7816_RXTHRESHOLD(x)               (((x)<<UART_ET7816_RXTHRESHOLD_SHIFT)&UART_ET7816_RXTHRESHOLD_MASK) /*!< UART0_ET7816                            */
#define UART_ET7816_TXTHRESHOLD_MASK             (0x0FUL << UART_ET7816_TXTHRESHOLD_SHIFT)           /*!< UART0_ET7816: TXTHRESHOLD Mask          */
#define UART_ET7816_TXTHRESHOLD_SHIFT            4                                                   /*!< UART0_ET7816: TXTHRESHOLD Position      */
#define UART_ET7816_TXTHRESHOLD(x)               (((x)<<UART_ET7816_TXTHRESHOLD_SHIFT)&UART_ET7816_TXTHRESHOLD_MASK) /*!< UART0_ET7816                            */

/* ------- UART0_TL7816                             ------ */
#define UART_TL7816_TLEN_MASK                    (0xFFUL << UART_TL7816_TLEN_SHIFT)                  /*!< UART0_TL7816: TLEN Mask                 */
#define UART_TL7816_TLEN_SHIFT                   0                                                   /*!< UART0_TL7816: TLEN Position             */
#define UART_TL7816_TLEN(x)                      (((x)<<UART_TL7816_TLEN_SHIFT)&UART_TL7816_TLEN_MASK) /*!< UART0_TL7816                            */

/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART0_BDH                      (UART0->BDH)
#define UART0_BDL                      (UART0->BDL)
#define UART0_C1                       (UART0->C1)
#define UART0_C2                       (UART0->C2)
#define UART0_S1                       (UART0->S1)
#define UART0_S2                       (UART0->S2)
#define UART0_C3                       (UART0->C3)
#define UART0_D                        (UART0->D)
#define UART0_MA1                      (UART0->MA1)
#define UART0_MA2                      (UART0->MA2)
#define UART0_C4                       (UART0->C4)
#define UART0_C5                       (UART0->C5)
#define UART0_ED                       (UART0->ED)
#define UART0_MODEM                    (UART0->MODEM)
#define UART0_IR                       (UART0->IR)
#define UART0_PFIFO                    (UART0->PFIFO)
#define UART0_CFIFO                    (UART0->CFIFO)
#define UART0_SFIFO                    (UART0->SFIFO)
#define UART0_TWFIFO                   (UART0->TWFIFO)
#define UART0_TCFIFO                   (UART0->TCFIFO)
#define UART0_RWFIFO                   (UART0->RWFIFO)
#define UART0_RCFIFO                   (UART0->RCFIFO)
#define UART0_C7816                    (UART0->C7816)
#define UART0_IE7816                   (UART0->IE7816)
#define UART0_IS7816                   (UART0->IS7816)
#define UART0_WP7816T0                 (UART0->WP7816T0)
#define UART0_WP7816T1                 (UART0->WP7816T1)
#define UART0_WN7816                   (UART0->WN7816)
#define UART0_WF7816                   (UART0->WF7816)
#define UART0_ET7816                   (UART0->ET7816)
#define UART0_TL7816                   (UART0->TL7816)

/* ================================================================================ */
/* ================           UART1 (file:UART1_RXOF)              ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef struct {                                /*!<       UART1 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: Baud Rate Register: High                                     */
   __IO uint8_t   BDL;                          /*!< 0001: Baud Rate Register: Low                                      */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0003: Control Register 2                                           */
   __I  uint8_t   S1;                           /*!< 0004: Status Register 1                                            */
   __IO uint8_t   S2;                           /*!< 0005: Status Register 2                                            */
   __IO uint8_t   C3;                           /*!< 0006: Control Register 3                                           */
   __IO uint8_t   D;                            /*!< 0007: Data Register                                                */
   __IO uint8_t   MA1;                          /*!< 0008: Match Address Registers 1                                    */
   __IO uint8_t   MA2;                          /*!< 0009: Match Address Registers 2                                    */
   __IO uint8_t   C4;                           /*!< 000A: Control Register 4                                           */
   __IO uint8_t   C5;                           /*!< 000B: Control Register 5                                           */
   __I  uint8_t   ED;                           /*!< 000C: Extended Data Register                                       */
   __IO uint8_t   MODEM;                        /*!< 000D: Modem Register                                               */
   __IO uint8_t   IR;                           /*!< 000E: Infrared Register                                            */
   __I  uint8_t   RESERVED0;                    /*!< 000F:                                                              */
   __IO uint8_t   PFIFO;                        /*!< 0010: FIFO Parameters                                              */
   __IO uint8_t   CFIFO;                        /*!< 0011: FIFO Control Register                                        */
   __IO uint8_t   SFIFO;                        /*!< 0012: FIFO Status Register                                         */
   __IO uint8_t   TWFIFO;                       /*!< 0013: FIFO Transmit Watermark                                      */
   __I  uint8_t   TCFIFO;                       /*!< 0014: FIFO Transmit Count                                          */
   __IO uint8_t   RWFIFO;                       /*!< 0015: FIFO Receive Watermark                                       */
   __I  uint8_t   RCFIFO;                       /*!< 0016: FIFO Receive Count                                           */
} UART1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART1' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- UART1_BDH                                ------ */

/* ------- UART1_BDL                                ------ */

/* ------- UART1_C1                                 ------ */

/* ------- UART1_C2                                 ------ */

/* ------- UART1_S1                                 ------ */

/* ------- UART1_S2                                 ------ */

/* ------- UART1_C3                                 ------ */

/* ------- UART1_D                                  ------ */

/* ------- UART1_MA                                 ------ */

/* ------- UART1_C4                                 ------ */

/* ------- UART1_C5                                 ------ */

/* ------- UART1_ED                                 ------ */

/* ------- UART1_MODEM                              ------ */

/* ------- UART1_IR                                 ------ */

/* ------- UART1_PFIFO                              ------ */

/* ------- UART1_CFIFO                              ------ */

/* ------- UART1_SFIFO                              ------ */

/* ------- UART1_TWFIFO                             ------ */

/* ------- UART1_TCFIFO                             ------ */

/* ------- UART1_RWFIFO                             ------ */

/* ------- UART1_RCFIFO                             ------ */

/* -------------------------------------------------------------------------------- */
/* -----------     'UART1' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART1_BDH                      (UART1->BDH)
#define UART1_BDL                      (UART1->BDL)
#define UART1_C1                       (UART1->C1)
#define UART1_C2                       (UART1->C2)
#define UART1_S1                       (UART1->S1)
#define UART1_S2                       (UART1->S2)
#define UART1_C3                       (UART1->C3)
#define UART1_D                        (UART1->D)
#define UART1_MA1                      (UART1->MA1)
#define UART1_MA2                      (UART1->MA2)
#define UART1_C4                       (UART1->C4)
#define UART1_C5                       (UART1->C5)
#define UART1_ED                       (UART1->ED)
#define UART1_MODEM                    (UART1->MODEM)
#define UART1_IR                       (UART1->IR)
#define UART1_PFIFO                    (UART1->PFIFO)
#define UART1_CFIFO                    (UART1->CFIFO)
#define UART1_SFIFO                    (UART1->SFIFO)
#define UART1_TWFIFO                   (UART1->TWFIFO)
#define UART1_TCFIFO                   (UART1->TCFIFO)
#define UART1_RWFIFO                   (UART1->RWFIFO)
#define UART1_RCFIFO                   (UART1->RCFIFO)

/* ================================================================================ */
/* ================           UART2 (derived from UART1)           ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef UART1_Type UART2_Type;  /*!< UART2 Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'UART2' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART2_BDH                      (UART2->BDH)
#define UART2_BDL                      (UART2->BDL)
#define UART2_C1                       (UART2->C1)
#define UART2_C2                       (UART2->C2)
#define UART2_S1                       (UART2->S1)
#define UART2_S2                       (UART2->S2)
#define UART2_C3                       (UART2->C3)
#define UART2_D                        (UART2->D)
#define UART2_MA1                      (UART2->MA1)
#define UART2_MA2                      (UART2->MA2)
#define UART2_C4                       (UART2->C4)
#define UART2_C5                       (UART2->C5)
#define UART2_ED                       (UART2->ED)
#define UART2_MODEM                    (UART2->MODEM)
#define UART2_IR                       (UART2->IR)
#define UART2_PFIFO                    (UART2->PFIFO)
#define UART2_CFIFO                    (UART2->CFIFO)
#define UART2_SFIFO                    (UART2->SFIFO)
#define UART2_TWFIFO                   (UART2->TWFIFO)
#define UART2_TCFIFO                   (UART2->TCFIFO)
#define UART2_RWFIFO                   (UART2->RWFIFO)
#define UART2_RCFIFO                   (UART2->RCFIFO)

/* ================================================================================ */
/* ================           UART3 (derived from UART1)           ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef UART1_Type UART3_Type;  /*!< UART3 Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'UART3' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART3_BDH                      (UART3->BDH)
#define UART3_BDL                      (UART3->BDL)
#define UART3_C1                       (UART3->C1)
#define UART3_C2                       (UART3->C2)
#define UART3_S1                       (UART3->S1)
#define UART3_S2                       (UART3->S2)
#define UART3_C3                       (UART3->C3)
#define UART3_D                        (UART3->D)
#define UART3_MA1                      (UART3->MA1)
#define UART3_MA2                      (UART3->MA2)
#define UART3_C4                       (UART3->C4)
#define UART3_C5                       (UART3->C5)
#define UART3_ED                       (UART3->ED)
#define UART3_MODEM                    (UART3->MODEM)
#define UART3_IR                       (UART3->IR)
#define UART3_PFIFO                    (UART3->PFIFO)
#define UART3_CFIFO                    (UART3->CFIFO)
#define UART3_SFIFO                    (UART3->SFIFO)
#define UART3_TWFIFO                   (UART3->TWFIFO)
#define UART3_TCFIFO                   (UART3->TCFIFO)
#define UART3_RWFIFO                   (UART3->RWFIFO)
#define UART3_RCFIFO                   (UART3->RCFIFO)

/* ================================================================================ */
/* ================           VREF (file:VREF_MK_0)                ================ */
/* ================================================================================ */

/**
 * @brief Voltage Reference
 */
typedef struct {                                /*!<       VREF Structure                                               */
   __IO uint8_t   TRM;                          /*!< 0000: Trim Register                                                */
   __IO uint8_t   SC;                           /*!< 0001: Status and Control Register                                  */
} VREF_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'VREF' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- VREF_TRM                                 ------ */
#define VREF_TRM_TRIM_MASK                       (0x3FUL << VREF_TRM_TRIM_SHIFT)                     /*!< VREF_TRM: TRIM Mask                     */
#define VREF_TRM_TRIM_SHIFT                      0                                                   /*!< VREF_TRM: TRIM Position                 */
#define VREF_TRM_TRIM(x)                         (((x)<<VREF_TRM_TRIM_SHIFT)&VREF_TRM_TRIM_MASK)     /*!< VREF_TRM                                */
#define VREF_TRM_CHOPEN_MASK                     (0x01UL << VREF_TRM_CHOPEN_SHIFT)                   /*!< VREF_TRM: CHOPEN Mask                   */
#define VREF_TRM_CHOPEN_SHIFT                    6                                                   /*!< VREF_TRM: CHOPEN Position               */

/* ------- VREF_SC                                  ------ */
#define VREF_SC_MODE_LV_MASK                     (0x03UL << VREF_SC_MODE_LV_SHIFT)                   /*!< VREF_SC: MODE_LV Mask                   */
#define VREF_SC_MODE_LV_SHIFT                    0                                                   /*!< VREF_SC: MODE_LV Position               */
#define VREF_SC_MODE_LV(x)                       (((x)<<VREF_SC_MODE_LV_SHIFT)&VREF_SC_MODE_LV_MASK) /*!< VREF_SC                                 */
#define VREF_SC_VREFST_MASK                      (0x01UL << VREF_SC_VREFST_SHIFT)                    /*!< VREF_SC: VREFST Mask                    */
#define VREF_SC_VREFST_SHIFT                     2                                                   /*!< VREF_SC: VREFST Position                */
#define VREF_SC_ICOMPEN_MASK                     (0x01UL << VREF_SC_ICOMPEN_SHIFT)                   /*!< VREF_SC: ICOMPEN Mask                   */
#define VREF_SC_ICOMPEN_SHIFT                    5                                                   /*!< VREF_SC: ICOMPEN Position               */
#define VREF_SC_REGEN_MASK                       (0x01UL << VREF_SC_REGEN_SHIFT)                     /*!< VREF_SC: REGEN Mask                     */
#define VREF_SC_REGEN_SHIFT                      6                                                   /*!< VREF_SC: REGEN Position                 */
#define VREF_SC_VREFEN_MASK                      (0x01UL << VREF_SC_VREFEN_SHIFT)                    /*!< VREF_SC: VREFEN Mask                    */
#define VREF_SC_VREFEN_SHIFT                     7                                                   /*!< VREF_SC: VREFEN Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'VREF' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define VREF_TRM                       (VREF->TRM)
#define VREF_SC                        (VREF->SC)

/* ================================================================================ */
/* ================           WDOG (file:WDOG_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Generation 2008 Watchdog Timer
 */
typedef struct {                                /*!<       WDOG Structure                                               */
   __IO uint16_t  STCTRLH;                      /*!< 0000: Status and Control Register High                             */
   __IO uint16_t  STCTRLL;                      /*!< 0002: Status and Control Register Low                              */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  TOVAL;                     /*!< 0004: Time-out Value Register High TOVALL:TOVALH                   */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  TOVALH;                 /*!< 0004: Time-out Value Register High                                 */
         __IO uint16_t  TOVALL;                 /*!< 0006: Time-out Value Register Low                                  */
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  WIN;                       /*!< 0008: Window Register (WINL:WINH)                                  */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  WINH;                   /*!< 0008: Window Register High                                         */
         __IO uint16_t  WINL;                   /*!< 000A: Window Register Low                                          */
      };
   };
   __IO uint16_t  REFRESH;                      /*!< 000C: Refresh Register                                             */
   __IO uint16_t  UNLOCK;                       /*!< 000E: Unlock Register                                              */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  TMROUT;                    /*!< 0010: Timer Output Register (TMROUTL:TMROUTH)                      */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  TMROUTH;                /*!< 0010: Timer Output Register High                                   */
         __IO uint16_t  TMROUTL;                /*!< 0012: Timer Output Register Low                                    */
      };
   };
   __IO uint16_t  RSTCNT;                       /*!< 0014: Reset Count Register                                         */
   __IO uint16_t  PRESC;                        /*!< 0016: Prescaler Register                                           */
} WDOG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'WDOG' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- WDOG_STCTRLH                             ------ */
#define WDOG_STCTRLH_WDOGEN_MASK                 (0x01UL << WDOG_STCTRLH_WDOGEN_SHIFT)               /*!< WDOG_STCTRLH: WDOGEN Mask               */
#define WDOG_STCTRLH_WDOGEN_SHIFT                0                                                   /*!< WDOG_STCTRLH: WDOGEN Position           */
#define WDOG_STCTRLH_CLKSRC_MASK                 (0x01UL << WDOG_STCTRLH_CLKSRC_SHIFT)               /*!< WDOG_STCTRLH: CLKSRC Mask               */
#define WDOG_STCTRLH_CLKSRC_SHIFT                1                                                   /*!< WDOG_STCTRLH: CLKSRC Position           */
#define WDOG_STCTRLH_IRQRSTEN_MASK               (0x01UL << WDOG_STCTRLH_IRQRSTEN_SHIFT)             /*!< WDOG_STCTRLH: IRQRSTEN Mask             */
#define WDOG_STCTRLH_IRQRSTEN_SHIFT              2                                                   /*!< WDOG_STCTRLH: IRQRSTEN Position         */
#define WDOG_STCTRLH_WINEN_MASK                  (0x01UL << WDOG_STCTRLH_WINEN_SHIFT)                /*!< WDOG_STCTRLH: WINEN Mask                */
#define WDOG_STCTRLH_WINEN_SHIFT                 3                                                   /*!< WDOG_STCTRLH: WINEN Position            */
#define WDOG_STCTRLH_ALLOWUPDATE_MASK            (0x01UL << WDOG_STCTRLH_ALLOWUPDATE_SHIFT)          /*!< WDOG_STCTRLH: ALLOWUPDATE Mask          */
#define WDOG_STCTRLH_ALLOWUPDATE_SHIFT           4                                                   /*!< WDOG_STCTRLH: ALLOWUPDATE Position      */
#define WDOG_STCTRLH_DBGEN_MASK                  (0x01UL << WDOG_STCTRLH_DBGEN_SHIFT)                /*!< WDOG_STCTRLH: DBGEN Mask                */
#define WDOG_STCTRLH_DBGEN_SHIFT                 5                                                   /*!< WDOG_STCTRLH: DBGEN Position            */
#define WDOG_STCTRLH_STOPEN_MASK                 (0x01UL << WDOG_STCTRLH_STOPEN_SHIFT)               /*!< WDOG_STCTRLH: STOPEN Mask               */
#define WDOG_STCTRLH_STOPEN_SHIFT                6                                                   /*!< WDOG_STCTRLH: STOPEN Position           */
#define WDOG_STCTRLH_WAITEN_MASK                 (0x01UL << WDOG_STCTRLH_WAITEN_SHIFT)               /*!< WDOG_STCTRLH: WAITEN Mask               */
#define WDOG_STCTRLH_WAITEN_SHIFT                7                                                   /*!< WDOG_STCTRLH: WAITEN Position           */
#define WDOG_STCTRLH_TESTWDOG_MASK               (0x01UL << WDOG_STCTRLH_TESTWDOG_SHIFT)             /*!< WDOG_STCTRLH: TESTWDOG Mask             */
#define WDOG_STCTRLH_TESTWDOG_SHIFT              10                                                  /*!< WDOG_STCTRLH: TESTWDOG Position         */
#define WDOG_STCTRLH_TESTSEL_MASK                (0x01UL << WDOG_STCTRLH_TESTSEL_SHIFT)              /*!< WDOG_STCTRLH: TESTSEL Mask              */
#define WDOG_STCTRLH_TESTSEL_SHIFT               11                                                  /*!< WDOG_STCTRLH: TESTSEL Position          */
#define WDOG_STCTRLH_BYTESEL_MASK                (0x03UL << WDOG_STCTRLH_BYTESEL_SHIFT)              /*!< WDOG_STCTRLH: BYTESEL Mask              */
#define WDOG_STCTRLH_BYTESEL_SHIFT               12                                                  /*!< WDOG_STCTRLH: BYTESEL Position          */
#define WDOG_STCTRLH_BYTESEL(x)                  (((x)<<WDOG_STCTRLH_BYTESEL_SHIFT)&WDOG_STCTRLH_BYTESEL_MASK) /*!< WDOG_STCTRLH                            */
#define WDOG_STCTRLH_DISTESTWDOG_MASK            (0x01UL << WDOG_STCTRLH_DISTESTWDOG_SHIFT)          /*!< WDOG_STCTRLH: DISTESTWDOG Mask          */
#define WDOG_STCTRLH_DISTESTWDOG_SHIFT           14                                                  /*!< WDOG_STCTRLH: DISTESTWDOG Position      */

/* ------- WDOG_STCTRLL                             ------ */
#define WDOG_STCTRLL_INTFLG_MASK                 (0x01UL << WDOG_STCTRLL_INTFLG_SHIFT)               /*!< WDOG_STCTRLL: INTFLG Mask               */
#define WDOG_STCTRLL_INTFLG_SHIFT                15                                                  /*!< WDOG_STCTRLL: INTFLG Position           */

/* ------- WDOG_TOVAL                               ------ */
#define WDOG_TOVAL_TOVAL_MASK                    (0xFFFFFFFFUL << WDOG_TOVAL_TOVAL_SHIFT)            /*!< WDOG_TOVAL: TOVAL Mask                  */
#define WDOG_TOVAL_TOVAL_SHIFT                   0                                                   /*!< WDOG_TOVAL: TOVAL Position              */
#define WDOG_TOVAL_TOVAL(x)                      (((x)<<WDOG_TOVAL_TOVAL_SHIFT)&WDOG_TOVAL_TOVAL_MASK) /*!< WDOG_TOVAL                              */

/* ------- WDOG_TOVALH                              ------ */
#define WDOG_TOVALH_TOVALHIGH_MASK               (0xFFFFUL << WDOG_TOVALH_TOVALHIGH_SHIFT)           /*!< WDOG_TOVALH: TOVALHIGH Mask             */
#define WDOG_TOVALH_TOVALHIGH_SHIFT              0                                                   /*!< WDOG_TOVALH: TOVALHIGH Position         */
#define WDOG_TOVALH_TOVALHIGH(x)                 (((x)<<WDOG_TOVALH_TOVALHIGH_SHIFT)&WDOG_TOVALH_TOVALHIGH_MASK) /*!< WDOG_TOVALH                             */

/* ------- WDOG_TOVALL                              ------ */
#define WDOG_TOVALL_TOVALLOW_MASK                (0xFFFFUL << WDOG_TOVALL_TOVALLOW_SHIFT)            /*!< WDOG_TOVALL: TOVALLOW Mask              */
#define WDOG_TOVALL_TOVALLOW_SHIFT               0                                                   /*!< WDOG_TOVALL: TOVALLOW Position          */
#define WDOG_TOVALL_TOVALLOW(x)                  (((x)<<WDOG_TOVALL_TOVALLOW_SHIFT)&WDOG_TOVALL_TOVALLOW_MASK) /*!< WDOG_TOVALL                             */

/* ------- WDOG_WIN                                 ------ */
#define WDOG_WIN_WIN_MASK                        (0xFFFFFFFFUL << WDOG_WIN_WIN_SHIFT)                /*!< WDOG_WIN: WIN Mask                      */
#define WDOG_WIN_WIN_SHIFT                       0                                                   /*!< WDOG_WIN: WIN Position                  */
#define WDOG_WIN_WIN(x)                          (((x)<<WDOG_WIN_WIN_SHIFT)&WDOG_WIN_WIN_MASK)       /*!< WDOG_WIN                                */

/* ------- WDOG_WINH                                ------ */
#define WDOG_WINH_WINHIGH_MASK                   (0xFFFFUL << WDOG_WINH_WINHIGH_SHIFT)               /*!< WDOG_WINH: WINHIGH Mask                 */
#define WDOG_WINH_WINHIGH_SHIFT                  0                                                   /*!< WDOG_WINH: WINHIGH Position             */
#define WDOG_WINH_WINHIGH(x)                     (((x)<<WDOG_WINH_WINHIGH_SHIFT)&WDOG_WINH_WINHIGH_MASK) /*!< WDOG_WINH                               */

/* ------- WDOG_WINL                                ------ */
#define WDOG_WINL_WINLOW_MASK                    (0xFFFFUL << WDOG_WINL_WINLOW_SHIFT)                /*!< WDOG_WINL: WINLOW Mask                  */
#define WDOG_WINL_WINLOW_SHIFT                   0                                                   /*!< WDOG_WINL: WINLOW Position              */
#define WDOG_WINL_WINLOW(x)                      (((x)<<WDOG_WINL_WINLOW_SHIFT)&WDOG_WINL_WINLOW_MASK) /*!< WDOG_WINL                               */

/* ------- WDOG_REFRESH                             ------ */
#define WDOG_REFRESH_WDOGREFRESH_MASK            (0xFFFFUL << WDOG_REFRESH_WDOGREFRESH_SHIFT)        /*!< WDOG_REFRESH: WDOGREFRESH Mask          */
#define WDOG_REFRESH_WDOGREFRESH_SHIFT           0                                                   /*!< WDOG_REFRESH: WDOGREFRESH Position      */
#define WDOG_REFRESH_WDOGREFRESH(x)              (((x)<<WDOG_REFRESH_WDOGREFRESH_SHIFT)&WDOG_REFRESH_WDOGREFRESH_MASK) /*!< WDOG_REFRESH                            */

/* ------- WDOG_UNLOCK                              ------ */
#define WDOG_UNLOCK_WDOGUNLOCK_MASK              (0xFFFFUL << WDOG_UNLOCK_WDOGUNLOCK_SHIFT)          /*!< WDOG_UNLOCK: WDOGUNLOCK Mask            */
#define WDOG_UNLOCK_WDOGUNLOCK_SHIFT             0                                                   /*!< WDOG_UNLOCK: WDOGUNLOCK Position        */
#define WDOG_UNLOCK_WDOGUNLOCK(x)                (((x)<<WDOG_UNLOCK_WDOGUNLOCK_SHIFT)&WDOG_UNLOCK_WDOGUNLOCK_MASK) /*!< WDOG_UNLOCK                             */

/* ------- WDOG_TMROUT                              ------ */
#define WDOG_TMROUT_TIMEROUTHIGH_MASK            (0xFFFFFFFFUL << WDOG_TMROUT_TIMEROUTHIGH_SHIFT)    /*!< WDOG_TMROUT: TIMEROUTHIGH Mask          */
#define WDOG_TMROUT_TIMEROUTHIGH_SHIFT           0                                                   /*!< WDOG_TMROUT: TIMEROUTHIGH Position      */
#define WDOG_TMROUT_TIMEROUTHIGH(x)              (((x)<<WDOG_TMROUT_TIMEROUTHIGH_SHIFT)&WDOG_TMROUT_TIMEROUTHIGH_MASK) /*!< WDOG_TMROUT                             */

/* ------- WDOG_TMROUTH                             ------ */
#define WDOG_TMROUTH_TIMEROUTHIGH_MASK           (0xFFFFUL << WDOG_TMROUTH_TIMEROUTHIGH_SHIFT)       /*!< WDOG_TMROUTH: TIMEROUTHIGH Mask         */
#define WDOG_TMROUTH_TIMEROUTHIGH_SHIFT          0                                                   /*!< WDOG_TMROUTH: TIMEROUTHIGH Position     */
#define WDOG_TMROUTH_TIMEROUTHIGH(x)             (((x)<<WDOG_TMROUTH_TIMEROUTHIGH_SHIFT)&WDOG_TMROUTH_TIMEROUTHIGH_MASK) /*!< WDOG_TMROUTH                            */

/* ------- WDOG_TMROUTL                             ------ */
#define WDOG_TMROUTL_TIMEROUTLOW_MASK            (0xFFFFUL << WDOG_TMROUTL_TIMEROUTLOW_SHIFT)        /*!< WDOG_TMROUTL: TIMEROUTLOW Mask          */
#define WDOG_TMROUTL_TIMEROUTLOW_SHIFT           0                                                   /*!< WDOG_TMROUTL: TIMEROUTLOW Position      */
#define WDOG_TMROUTL_TIMEROUTLOW(x)              (((x)<<WDOG_TMROUTL_TIMEROUTLOW_SHIFT)&WDOG_TMROUTL_TIMEROUTLOW_MASK) /*!< WDOG_TMROUTL                            */

/* ------- WDOG_RSTCNT                              ------ */
#define WDOG_RSTCNT_RSTCNT_MASK                  (0xFFFFUL << WDOG_RSTCNT_RSTCNT_SHIFT)              /*!< WDOG_RSTCNT: RSTCNT Mask                */
#define WDOG_RSTCNT_RSTCNT_SHIFT                 0                                                   /*!< WDOG_RSTCNT: RSTCNT Position            */
#define WDOG_RSTCNT_RSTCNT(x)                    (((x)<<WDOG_RSTCNT_RSTCNT_SHIFT)&WDOG_RSTCNT_RSTCNT_MASK) /*!< WDOG_RSTCNT                             */

/* ------- WDOG_PRESC                               ------ */
#define WDOG_PRESC_PRESCVAL_MASK                 (0x07UL << WDOG_PRESC_PRESCVAL_SHIFT)               /*!< WDOG_PRESC: PRESCVAL Mask               */
#define WDOG_PRESC_PRESCVAL_SHIFT                8                                                   /*!< WDOG_PRESC: PRESCVAL Position           */
#define WDOG_PRESC_PRESCVAL(x)                   (((x)<<WDOG_PRESC_PRESCVAL_SHIFT)&WDOG_PRESC_PRESCVAL_MASK) /*!< WDOG_PRESC                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'WDOG' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define WDOG_STCTRLH                   (WDOG->STCTRLH)
#define WDOG_STCTRLL                   (WDOG->STCTRLL)
#define WDOG_TOVAL                     (WDOG->TOVAL)
#define WDOG_TOVALH                    (WDOG->TOVALH)
#define WDOG_TOVALL                    (WDOG->TOVALL)
#define WDOG_WIN                       (WDOG->WIN)
#define WDOG_WINH                      (WDOG->WINH)
#define WDOG_WINL                      (WDOG->WINL)
#define WDOG_REFRESH                   (WDOG->REFRESH)
#define WDOG_UNLOCK                    (WDOG->UNLOCK)
#define WDOG_TMROUT                    (WDOG->TMROUT)
#define WDOG_TMROUTH                   (WDOG->TMROUTH)
#define WDOG_TMROUTL                   (WDOG->TMROUTL)
#define WDOG_RSTCNT                    (WDOG->RSTCNT)
#define WDOG_PRESC                     (WDOG->PRESC)
/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define ADC0_BASE_PTR                  0x4003B000UL
#define CAU_BASE_PTR                   0xE0081000UL
#define CMP0_BASE_PTR                  0x40073000UL
#define CMP1_BASE_PTR                  0x40073008UL
#define CMT_BASE_PTR                   0x40062000UL
#define CRC_BASE_PTR                   0x40032000UL
#define DAC0_BASE_PTR                  0x4003F000UL
#define DMA_BASE_PTR                   0x40008000UL
#define DMAMUX_BASE_PTR                0x40021000UL
#define ETF_BASE_PTR                   0xE0043000UL
#define ETM_BASE_PTR                   0xE0041000UL
#define EWM_BASE_PTR                   0x40061000UL
#define FMC_BASE_PTR                   0x4001F000UL
#define FPB_BASE_PTR                   0xE0002000UL
#define FTFL_BASE_PTR                  0x40020000UL
#define FTM0_BASE_PTR                  0x40038000UL
#define FTM1_BASE_PTR                  0x40039000UL
#define FTM2_BASE_PTR                  0x4003A000UL
#define GPIOA_BASE_PTR                 0x400FF000UL
#define GPIOB_BASE_PTR                 0x400FF040UL
#define GPIOC_BASE_PTR                 0x400FF080UL
#define GPIOD_BASE_PTR                 0x400FF0C0UL
#define GPIOE_BASE_PTR                 0x400FF100UL
#define I2C0_BASE_PTR                  0x40066000UL
#define I2C1_BASE_PTR                  0x40067000UL
#define I2S0_BASE_PTR                  0x4002F000UL
#define LLWU_BASE_PTR                  0x4007C000UL
#define LPTMR0_BASE_PTR                0x40040000UL
#define MCG_BASE_PTR                   0x40064000UL
#define MCM_BASE_PTR                   0xE0080000UL
#define NV_BASE_PTR                    0x00000400UL
#define OSC0_BASE_PTR                  0x40065000UL
#define PDB0_BASE_PTR                  0x40036000UL
#define PIT_BASE_PTR                   0x40037000UL
#define PMC_BASE_PTR                   0x4007D000UL
#define PORTA_BASE_PTR                 0x40049000UL
#define PORTB_BASE_PTR                 0x4004A000UL
#define PORTC_BASE_PTR                 0x4004B000UL
#define PORTD_BASE_PTR                 0x4004C000UL
#define PORTE_BASE_PTR                 0x4004D000UL
#define RCM_BASE_PTR                   0x4007F000UL
#define RFSYS_BASE_PTR                 0x40041000UL
#define RFVBAT_BASE_PTR                0x4003E000UL
#define RNG_BASE_PTR                   0x40029000UL
#define RTC_BASE_PTR                   0x4003D000UL
#define SIM_BASE_PTR                   0x40047000UL
#define SMC_BASE_PTR                   0x4007E000UL
#define SPI0_BASE_PTR                  0x4002C000UL
#define SPI1_BASE_PTR                  0x4002D000UL
#define SYST_BASE_PTR                  0xE000E010UL
#define TPIU_BASE_PTR                  0xE0040000UL
#define UART0_BASE_PTR                 0x4006A000UL
#define UART1_BASE_PTR                 0x4006B000UL
#define UART2_BASE_PTR                 0x4006C000UL
#define UART3_BASE_PTR                 0x4006D000UL
#define VREF_BASE_PTR                  0x40074000UL
#define WDOG_BASE_PTR                  0x40052000UL

/* ================================================================================ */
/* ================             Peripheral declarations            ================ */
/* ================================================================================ */

#define ADC0                           ((volatile ADC0_Type   *) ADC0_BASE_PTR)
#define CAU                            ((volatile CAU_Type    *) CAU_BASE_PTR)
#define CMP0                           ((volatile CMP0_Type   *) CMP0_BASE_PTR)
#define CMP1                           ((volatile CMP1_Type   *) CMP1_BASE_PTR)
#define CMT                            ((volatile CMT_Type    *) CMT_BASE_PTR)
#define CRC                            ((volatile CRC_Type    *) CRC_BASE_PTR)
#define DAC0                           ((volatile DAC0_Type   *) DAC0_BASE_PTR)
#define DMA                            ((volatile DMA_Type    *) DMA_BASE_PTR)
#define DMAMUX                         ((volatile DMAMUX_Type *) DMAMUX_BASE_PTR)
#define ETF                            ((volatile ETF_Type    *) ETF_BASE_PTR)
#define ETM                            ((volatile ETM_Type    *) ETM_BASE_PTR)
#define EWM                            ((volatile EWM_Type    *) EWM_BASE_PTR)
#define FMC                            ((volatile FMC_Type    *) FMC_BASE_PTR)
#define FPB                            ((volatile FPB_Type    *) FPB_BASE_PTR)
#define FTFL                           ((volatile FTFL_Type   *) FTFL_BASE_PTR)
#define FTM0                           ((volatile FTM0_Type   *) FTM0_BASE_PTR)
#define FTM1                           ((volatile FTM1_Type   *) FTM1_BASE_PTR)
#define FTM2                           ((volatile FTM2_Type   *) FTM2_BASE_PTR)
#define GPIOA                          ((volatile GPIOA_Type  *) GPIOA_BASE_PTR)
#define GPIOB                          ((volatile GPIOB_Type  *) GPIOB_BASE_PTR)
#define GPIOC                          ((volatile GPIOC_Type  *) GPIOC_BASE_PTR)
#define GPIOD                          ((volatile GPIOD_Type  *) GPIOD_BASE_PTR)
#define GPIOE                          ((volatile GPIOE_Type  *) GPIOE_BASE_PTR)
#define I2C0                           ((volatile I2C0_Type   *) I2C0_BASE_PTR)
#define I2C1                           ((volatile I2C1_Type   *) I2C1_BASE_PTR)
#define I2S0                           ((volatile I2S0_Type   *) I2S0_BASE_PTR)
#define LLWU                           ((volatile LLWU_Type   *) LLWU_BASE_PTR)
#define LPTMR0                         ((volatile LPTMR0_Type *) LPTMR0_BASE_PTR)
#define MCG                            ((volatile MCG_Type    *) MCG_BASE_PTR)
#define MCM                            ((volatile MCM_Type    *) MCM_BASE_PTR)
#define NV                             ((volatile NV_Type     *) NV_BASE_PTR)
#define OSC0                           ((volatile OSC0_Type   *) OSC0_BASE_PTR)
#define PDB0                           ((volatile PDB0_Type   *) PDB0_BASE_PTR)
#define PIT                            ((volatile PIT_Type    *) PIT_BASE_PTR)
#define PMC                            ((volatile PMC_Type    *) PMC_BASE_PTR)
#define PORTA                          ((volatile PORTA_Type  *) PORTA_BASE_PTR)
#define PORTB                          ((volatile PORTB_Type  *) PORTB_BASE_PTR)
#define PORTC                          ((volatile PORTC_Type  *) PORTC_BASE_PTR)
#define PORTD                          ((volatile PORTD_Type  *) PORTD_BASE_PTR)
#define PORTE                          ((volatile PORTE_Type  *) PORTE_BASE_PTR)
#define RCM                            ((volatile RCM_Type    *) RCM_BASE_PTR)
#define RFSYS                          ((volatile RFSYS_Type  *) RFSYS_BASE_PTR)
#define RFVBAT                         ((volatile RFVBAT_Type *) RFVBAT_BASE_PTR)
#define RNG                            ((volatile RNG_Type    *) RNG_BASE_PTR)
#define RTC                            ((volatile RTC_Type    *) RTC_BASE_PTR)
#define SIM                            ((volatile SIM_Type    *) SIM_BASE_PTR)
#define SMC                            ((volatile SMC_Type    *) SMC_BASE_PTR)
#define SPI0                           ((volatile SPI0_Type   *) SPI0_BASE_PTR)
#define SPI1                           ((volatile SPI1_Type   *) SPI1_BASE_PTR)
#define SYST                           ((volatile SYST_Type   *) SYST_BASE_PTR)
#define TPIU                           ((volatile TPIU_Type   *) TPIU_BASE_PTR)
#define UART0                          ((volatile UART0_Type  *) UART0_BASE_PTR)
#define UART1                          ((volatile UART1_Type  *) UART1_BASE_PTR)
#define UART2                          ((volatile UART2_Type  *) UART2_BASE_PTR)
#define UART3                          ((volatile UART3_Type  *) UART3_BASE_PTR)
#define VREF                           ((volatile VREF_Type   *) VREF_BASE_PTR)
#define WDOG                           ((volatile WDOG_Type   *) WDOG_BASE_PTR)

#ifdef __cplusplus
}
#endif


#endif  /* MCU_MK11D5 */

