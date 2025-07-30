/**
 * UART4 Generated Driver API Header File
 * 
 * @file uart4.c
 * 
 * @ingroup uart4
 * 
 * @brief This is the generated driver implementation file for the UART4 driver using the Universal Asynchronous Receiver and Transmitter (UART) module.
 *
 * @version UART4 Driver Version 3.0.8
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

/**
  Section: Included Files
*/
#include "../uart4.h"

/**
  Section: Macro Declarations
*/

/**
  Section: Driver Interface
 */

const uart_drv_interface_t UART4 = {
    .Initialize = &UART4_Initialize,
    .Deinitialize = &UART4_Deinitialize,
    .Read = &UART4_Read,
    .Write = &UART4_Write,
    .IsRxReady = &UART4_IsRxReady,
    .IsTxReady = &UART4_IsTxReady,
    .IsTxDone = &UART4_IsTxDone,
    .TransmitEnable = &UART4_TransmitEnable,
    .TransmitDisable = &UART4_TransmitDisable,
    .AutoBaudSet = &UART4_AutoBaudSet,
    .AutoBaudQuery = &UART4_AutoBaudQuery,
    .BRGCountSet = NULL,
    .BRGCountGet = NULL,
    .BaudRateSet = NULL,
    .BaudRateGet = NULL,
    .AutoBaudEventEnableGet = NULL,
    .ErrorGet = &UART4_ErrorGet,
    .TxCompleteCallbackRegister = NULL,
    .RxCompleteCallbackRegister = NULL,
    .TxCollisionCallbackRegister = NULL,
    .FramingErrorCallbackRegister = &UART4_FramingErrorCallbackRegister,
    .OverrunErrorCallbackRegister = &UART4_OverrunErrorCallbackRegister,
    .ParityErrorCallbackRegister = &UART4_ParityErrorCallbackRegister,
    .EventCallbackRegister = NULL,
};

/**
  Section: UART4 variables
*/
 /**
 * @misradeviation{@advisory,19.2}
 * The UART error status necessitates checking the bitfield and accessing the status within the group byte therefore the use of a union is essential.
 */
 /* cppcheck-suppress misra-c2012-19.2 */
static volatile uart4_status_t uart4RxLastError;

/**
  Section: UART4 APIs
*/

static void (*UART4_FramingErrorHandler)(void);
static void (*UART4_OverrunErrorHandler)(void);
static void (*UART4_ParityErrorHandler)(void);

static void UART4_DefaultFramingErrorCallback(void);
static void UART4_DefaultOverrunErrorCallback(void);
static void UART4_DefaultParityErrorCallback(void);

/**
  Section: UART4  APIs
*/

void UART4_Initialize(void)
{

    // Set the UART4 module to the options selected in the user interface.

    //P1L 0x0; 
    U4P1L = 0x0;
    //P2L 0x0; 
    U4P2L = 0x0;
    //P3L 0x0; 
    U4P3L = 0x0;
    //MODE Asynchronous 8-bit mode; RXEN enabled; TXEN enabled; ABDEN disabled; BRGS high speed; 
    U4CON0 = 0xB0;
    //SENDB disabled; BRKOVR disabled; RXBIMD Set RXBKIF on rising RX input; WUE disabled; ON enabled; 
    U4CON1 = 0x80;
    //FLO off; TXPOL not inverted; STP Transmit 1Stop bit, receiver verifies first Stop bit; RXPOL not inverted; RUNOVF RX input shifter stops all activity; 
    U4CON2 = 0x0;
    //BRGL 130; 
    U4BRGL = 0x82;
    //BRGH 6; 
    U4BRGH = 0x6;
    //TXBE empty; STPMD in middle of first Stop bit; TXWRE No error; 
    U4FIFO = 0x2E;
    //ABDIE disabled; ABDIF Auto-baud not enabled or not complete; WUIF WUE not enabled by software; 
    U4UIR = 0x0;
    //TXCIF equal; RXFOIF not overflowed; RXBKIF No Break detected; FERIF no error; CERIF No Checksum error; ABDOVF Not overflowed; PERIF no parity error; TXMTIF empty; 
    U4ERRIR = 0x80;
    //TXCIE disabled; RXFOIE disabled; RXBKIE disabled; FERIE disabled; CERIE disabled; ABDOVE disabled; PERIE disabled; TXMTIE disabled; 
    U4ERRIE = 0x0;

    UART4_FramingErrorCallbackRegister(UART4_DefaultFramingErrorCallback);
    UART4_OverrunErrorCallbackRegister(UART4_DefaultOverrunErrorCallback);
    UART4_ParityErrorCallbackRegister(UART4_DefaultParityErrorCallback);

    uart4RxLastError.status = 0;  
}

void UART4_Deinitialize(void)
{
    U4RXB = 0x00;
    U4TXB = 0x00;
    U4P1L = 0x00;
    U4P2L = 0x00;
    U4P3L = 0x00;
    U4CON0 = 0x00;
    U4CON1 = 0x00;
    U4CON2 = 0x00;
    U4BRGL = 0x00;
    U4BRGH = 0x00;
    U4FIFO = 0x00;
    U4UIR = 0x00;
    U4ERRIR = 0x00;
    U4ERRIE = 0x00;
}

void UART4_Enable(void)
{
    U4CON1bits.ON = 1; 
}

void UART4_Disable(void)
{
    U4CON1bits.ON = 0; 
}

void UART4_TransmitEnable(void)
{
    U4CON0bits.TXEN = 1;
}

void UART4_TransmitDisable(void)
{
    U4CON0bits.TXEN = 0;
}

void UART4_ReceiveEnable(void)
{
    U4CON0bits.RXEN = 1;
}

void UART4_ReceiveDisable(void)
{
    U4CON0bits.RXEN = 0;
}

void UART4_SendBreakControlEnable(void)
{
    U4CON1bits.SENDB = 1;
}

void UART4_SendBreakControlDisable(void)
{
    U4CON1bits.SENDB = 0;
}

void UART4_AutoBaudSet(bool enable)
{
    if(enable)
    {
        U4CON0bits.ABDEN = 1; 
    }
    else
    {
      U4CON0bits.ABDEN = 0;  
    }
}


bool UART4_AutoBaudQuery(void)
{
    return (bool)U4UIRbits.ABDIF; 
}

void UART4_AutoBaudDetectCompleteReset(void)
{
    U4UIRbits.ABDIF = 0; 
}

bool UART4_IsAutoBaudDetectOverflow(void)
{
    return (bool)U4ERRIRbits.ABDOVF; 
}

void UART4_AutoBaudDetectOverflowReset(void)
{
    U4ERRIRbits.ABDOVF = 0; 
}

bool UART4_IsRxReady(void)
{
    return (bool)(!U4FIFObits.RXBE);
}

bool UART4_IsTxReady(void)
{
    return (bool)(U4FIFObits.TXBE && U4CON0bits.TXEN);
}

bool UART4_IsTxDone(void)
{
    return U4ERRIRbits.TXMTIF;
}

size_t UART4_ErrorGet(void)
{
    uart4RxLastError.status = 0;
    
    if(true == U4ERRIRbits.FERIF)
    {
        uart4RxLastError.ferr = 1;
        if(NULL != UART4_FramingErrorHandler)
        {
            UART4_FramingErrorHandler();
        }  
    }
    if(true == U4ERRIRbits.RXFOIF)
    {
        uart4RxLastError.oerr = 1;
        if(NULL != UART4_OverrunErrorHandler)
        {
            UART4_OverrunErrorHandler();
        }   
    }
    if(true == U4ERRIRbits.PERIF)
    {
        uart4RxLastError.perr = 1;
        if(NULL != UART4_ParityErrorHandler)
        {
            UART4_ParityErrorHandler();
        }   
    }

    return uart4RxLastError.status;
}

uint8_t UART4_Read(void)
{
    return U4RXB;
}


void UART4_Write(uint8_t txData)
{
    U4TXB = txData; 
}






static void UART4_DefaultFramingErrorCallback(void)
{
    
}

static void UART4_DefaultOverrunErrorCallback(void)
{
    
}

static void UART4_DefaultParityErrorCallback(void)
{
    
}

void UART4_FramingErrorCallbackRegister(void (* callbackHandler)(void))
{
    if(NULL != callbackHandler)
    {
        UART4_FramingErrorHandler = callbackHandler;
    }
}

void UART4_OverrunErrorCallbackRegister(void (* callbackHandler)(void))
{
    if(NULL != callbackHandler)
    {
        UART4_OverrunErrorHandler = callbackHandler;
    }    
}

void UART4_ParityErrorCallbackRegister(void (* callbackHandler)(void))
{
    if(NULL != callbackHandler)
    {
        UART4_ParityErrorHandler = callbackHandler;
    } 
}
