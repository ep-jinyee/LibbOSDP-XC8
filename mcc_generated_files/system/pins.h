/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA4 aliases
#define U4TX_TRIS                 TRISAbits.TRISA4
#define U4TX_LAT                  LATAbits.LATA4
#define U4TX_PORT                 PORTAbits.RA4
#define U4TX_WPU                  WPUAbits.WPUA4
#define U4TX_OD                   ODCONAbits.ODCA4
#define U4TX_ANS                  ANSELAbits.ANSELA4
#define U4TX_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define U4TX_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define U4TX_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define U4TX_GetValue()           PORTAbits.RA4
#define U4TX_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define U4TX_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define U4TX_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define U4TX_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define U4TX_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define U4TX_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define U4TX_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define U4TX_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define U5RX_TRIS                 TRISAbits.TRISA5
#define U5RX_LAT                  LATAbits.LATA5
#define U5RX_PORT                 PORTAbits.RA5
#define U5RX_WPU                  WPUAbits.WPUA5
#define U5RX_OD                   ODCONAbits.ODCA5
#define U5RX_ANS                  ANSELAbits.ANSELA5
#define U5RX_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define U5RX_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define U5RX_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define U5RX_GetValue()           PORTAbits.RA5
#define U5RX_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define U5RX_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define U5RX_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define U5RX_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define U5RX_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define U5RX_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define U5RX_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define U5RX_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA7 aliases
#define HB_TRIS                 TRISAbits.TRISA7
#define HB_LAT                  LATAbits.LATA7
#define HB_PORT                 PORTAbits.RA7
#define HB_WPU                  WPUAbits.WPUA7
#define HB_OD                   ODCONAbits.ODCA7
#define HB_ANS                  ANSELAbits.ANSELA7
#define HB_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define HB_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define HB_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define HB_GetValue()           PORTAbits.RA7
#define HB_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define HB_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define HB_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define HB_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define HB_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define HB_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define HB_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define HB_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB3 aliases
#define U4RX_TRIS                 TRISBbits.TRISB3
#define U4RX_LAT                  LATBbits.LATB3
#define U4RX_PORT                 PORTBbits.RB3
#define U4RX_WPU                  WPUBbits.WPUB3
#define U4RX_OD                   ODCONBbits.ODCB3
#define U4RX_ANS                  ANSELBbits.ANSELB3
#define U4RX_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define U4RX_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define U4RX_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define U4RX_GetValue()           PORTBbits.RB3
#define U4RX_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define U4RX_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define U4RX_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define U4RX_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define U4RX_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define U4RX_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define U4RX_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define U4RX_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define U1TXDE_TRIS                 TRISBbits.TRISB4
#define U1TXDE_LAT                  LATBbits.LATB4
#define U1TXDE_PORT                 PORTBbits.RB4
#define U1TXDE_WPU                  WPUBbits.WPUB4
#define U1TXDE_OD                   ODCONBbits.ODCB4
#define U1TXDE_ANS                  ANSELBbits.ANSELB4
#define U1TXDE_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define U1TXDE_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define U1TXDE_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define U1TXDE_GetValue()           PORTBbits.RB4
#define U1TXDE_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define U1TXDE_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define U1TXDE_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define U1TXDE_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define U1TXDE_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define U1TXDE_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define U1TXDE_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define U1TXDE_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB6 aliases
#define U2TX_TRIS                 TRISBbits.TRISB6
#define U2TX_LAT                  LATBbits.LATB6
#define U2TX_PORT                 PORTBbits.RB6
#define U2TX_WPU                  WPUBbits.WPUB6
#define U2TX_OD                   ODCONBbits.ODCB6
#define U2TX_ANS                  ANSELBbits.ANSELB6
#define U2TX_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define U2TX_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define U2TX_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define U2TX_GetValue()           PORTBbits.RB6
#define U2TX_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define U2TX_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define U2TX_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define U2TX_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define U2TX_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define U2TX_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define U2TX_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define U2TX_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define U2RX_TRIS                 TRISBbits.TRISB7
#define U2RX_LAT                  LATBbits.LATB7
#define U2RX_PORT                 PORTBbits.RB7
#define U2RX_WPU                  WPUBbits.WPUB7
#define U2RX_OD                   ODCONBbits.ODCB7
#define U2RX_ANS                  ANSELBbits.ANSELB7
#define U2RX_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define U2RX_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define U2RX_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define U2RX_GetValue()           PORTBbits.RB7
#define U2RX_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define U2RX_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define U2RX_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define U2RX_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define U2RX_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define U2RX_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define U2RX_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define U2RX_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC0 aliases
#define U5TX_TRIS                 TRISCbits.TRISC0
#define U5TX_LAT                  LATCbits.LATC0
#define U5TX_PORT                 PORTCbits.RC0
#define U5TX_WPU                  WPUCbits.WPUC0
#define U5TX_OD                   ODCONCbits.ODCC0
#define U5TX_ANS                  ANSELCbits.ANSELC0
#define U5TX_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define U5TX_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define U5TX_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define U5TX_GetValue()           PORTCbits.RC0
#define U5TX_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define U5TX_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define U5TX_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define U5TX_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define U5TX_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define U5TX_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define U5TX_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define U5TX_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define U2TXDE_TRIS                 TRISCbits.TRISC1
#define U2TXDE_LAT                  LATCbits.LATC1
#define U2TXDE_PORT                 PORTCbits.RC1
#define U2TXDE_WPU                  WPUCbits.WPUC1
#define U2TXDE_OD                   ODCONCbits.ODCC1
#define U2TXDE_ANS                  ANSELCbits.ANSELC1
#define U2TXDE_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define U2TXDE_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define U2TXDE_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define U2TXDE_GetValue()           PORTCbits.RC1
#define U2TXDE_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define U2TXDE_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define U2TXDE_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define U2TXDE_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define U2TXDE_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define U2TXDE_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define U2TXDE_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define U2TXDE_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RD0 aliases
#define U3TXDE_TRIS                 TRISDbits.TRISD0
#define U3TXDE_LAT                  LATDbits.LATD0
#define U3TXDE_PORT                 PORTDbits.RD0
#define U3TXDE_WPU                  WPUDbits.WPUD0
#define U3TXDE_OD                   ODCONDbits.ODCD0
#define U3TXDE_ANS                  ANSELDbits.ANSELD0
#define U3TXDE_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define U3TXDE_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define U3TXDE_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define U3TXDE_GetValue()           PORTDbits.RD0
#define U3TXDE_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define U3TXDE_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define U3TXDE_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define U3TXDE_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define U3TXDE_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define U3TXDE_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define U3TXDE_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define U3TXDE_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RF2 aliases
#define U4TXDE_TRIS                 TRISFbits.TRISF2
#define U4TXDE_LAT                  LATFbits.LATF2
#define U4TXDE_PORT                 PORTFbits.RF2
#define U4TXDE_WPU                  WPUFbits.WPUF2
#define U4TXDE_OD                   ODCONFbits.ODCF2
#define U4TXDE_ANS                  ANSELFbits.ANSELF2
#define U4TXDE_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define U4TXDE_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define U4TXDE_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define U4TXDE_GetValue()           PORTFbits.RF2
#define U4TXDE_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define U4TXDE_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define U4TXDE_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define U4TXDE_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define U4TXDE_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define U4TXDE_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define U4TXDE_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define U4TXDE_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set RF3 aliases
#define U3TX_TRIS                 TRISFbits.TRISF3
#define U3TX_LAT                  LATFbits.LATF3
#define U3TX_PORT                 PORTFbits.RF3
#define U3TX_WPU                  WPUFbits.WPUF3
#define U3TX_OD                   ODCONFbits.ODCF3
#define U3TX_ANS                  ANSELFbits.ANSELF3
#define U3TX_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define U3TX_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define U3TX_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define U3TX_GetValue()           PORTFbits.RF3
#define U3TX_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define U3TX_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define U3TX_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define U3TX_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define U3TX_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define U3TX_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define U3TX_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define U3TX_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set RF4 aliases
#define U3RX_TRIS                 TRISFbits.TRISF4
#define U3RX_LAT                  LATFbits.LATF4
#define U3RX_PORT                 PORTFbits.RF4
#define U3RX_WPU                  WPUFbits.WPUF4
#define U3RX_OD                   ODCONFbits.ODCF4
#define U3RX_ANS                  ANSELFbits.ANSELF4
#define U3RX_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define U3RX_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define U3RX_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define U3RX_GetValue()           PORTFbits.RF4
#define U3RX_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define U3RX_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define U3RX_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define U3RX_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define U3RX_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define U3RX_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define U3RX_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define U3RX_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set RF5 aliases
#define U5TXDE_TRIS                 TRISFbits.TRISF5
#define U5TXDE_LAT                  LATFbits.LATF5
#define U5TXDE_PORT                 PORTFbits.RF5
#define U5TXDE_WPU                  WPUFbits.WPUF5
#define U5TXDE_OD                   ODCONFbits.ODCF5
#define U5TXDE_ANS                  ANSELFbits.ANSELF5
#define U5TXDE_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define U5TXDE_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define U5TXDE_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define U5TXDE_GetValue()           PORTFbits.RF5
#define U5TXDE_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define U5TXDE_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define U5TXDE_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define U5TXDE_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define U5TXDE_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define U5TXDE_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define U5TXDE_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define U5TXDE_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set RF6 aliases
#define U1TX_TRIS                 TRISFbits.TRISF6
#define U1TX_LAT                  LATFbits.LATF6
#define U1TX_PORT                 PORTFbits.RF6
#define U1TX_WPU                  WPUFbits.WPUF6
#define U1TX_OD                   ODCONFbits.ODCF6
#define U1TX_ANS                  ANSELFbits.ANSELF6
#define U1TX_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define U1TX_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define U1TX_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define U1TX_GetValue()           PORTFbits.RF6
#define U1TX_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define U1TX_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define U1TX_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define U1TX_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define U1TX_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define U1TX_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define U1TX_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define U1TX_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set RF7 aliases
#define U1RX_TRIS                 TRISFbits.TRISF7
#define U1RX_LAT                  LATFbits.LATF7
#define U1RX_PORT                 PORTFbits.RF7
#define U1RX_WPU                  WPUFbits.WPUF7
#define U1RX_OD                   ODCONFbits.ODCF7
#define U1RX_ANS                  ANSELFbits.ANSELF7
#define U1RX_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define U1RX_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define U1RX_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define U1RX_GetValue()           PORTFbits.RF7
#define U1RX_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define U1RX_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define U1RX_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define U1RX_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define U1RX_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define U1RX_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define U1RX_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define U1RX_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/