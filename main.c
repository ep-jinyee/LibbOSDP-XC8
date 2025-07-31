/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
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
#include "mcc_generated_files/system/system.h"
#include "osdp.h"
#include "osdp_common.h"

enum osdp_pd_e {
    OSDP_PD_1,
    OSDP_PD_2,
    OSDP_PD_SENTINEL,
};

int64_t millis_now(void) {
    return 0;
}

int sample_pd_send_func(void *data, uint8_t *buf, int len) {
    (void) (data);
    (void) (buf);

    // TODO (user): send buf of len bytes, over the UART channel.

    return len;
}

int sample_pd_recv_func(void *data, uint8_t *buf, int len) {
    (void) (data);
    (void) (buf);
    (void) (len);

    // TODO (user): read from UART channel into buf, for upto len bytes.

    return 0;
}

int pd_command_handler(void *arg, struct osdp_cmd *cmd) {
    (void) (arg);

    return 0;
}

int sample_cp_send_func(void *data, uint8_t *buf, int len) {
    (void) (data);
    (void) (buf);

    // TODO (user): send buf of len bytes, over the UART channel.

    return len;
}

int sample_cp_recv_func(void *data, uint8_t *buf, int len) {
    (void) (data);
    (void) (buf);
    (void) (len);

    // TODO (user): read from UART channel into buf, for upto len bytes.

    return 0;
}
/*
    Main application
 */
size_t dummyf(size_t dummy) {
    return dummy;
}

int main(void) {
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    osdp_t *pd_ctx, *cp_ctx;
    osdp_pd_info_t info_pd = {
        .address = 101,
        .baud_rate = 9600,
        .flags = 0,
        .channel.send = sample_pd_send_func,
        .channel.recv = sample_pd_recv_func,
        .id =
        {
            .version = 1,
            .model = 153,
            .vendor_code = 31337,
            .serial_number = 0x01020304,
            .firmware_version = 0x0A0B0C0D,
        },
        .cap = (struct osdp_pd_cap [])
        {
            {
                .function_code = OSDP_PD_CAP_READER_LED_CONTROL,
                .compliance_level = 1,
                .num_items = 1
            },
            {
                .function_code = OSDP_PD_CAP_READER_AUDIBLE_OUTPUT,
                .compliance_level = 1,
                .num_items = 1
            },
            { (uint8_t) - 1, 0, 0} /* Sentinel */
        },
        .scbk = NULL,
    };
    osdp_pd_info_t pd_info[] = {
        {
            .address = 0,
            .baud_rate = 9600,
            .flags = 0,
            .channel.send = sample_cp_send_func,
            .channel.recv = sample_cp_recv_func,
            .scbk = NULL,
        },
    };
    pd_ctx = osdp_pd_setup(&info_pd);
    cp_ctx = osdp_cp_setup(1, pd_info);

    size_t dummy = sizeof (struct osdp_pd);
    dummyf(dummy);

    if (pd_ctx == NULL || cp_ctx == NULL) return -1;
    osdp_pd_set_command_callback(pd_ctx, pd_command_handler, NULL);
    while (1) {
        osdp_pd_refresh(pd_ctx);
        osdp_cp_refresh(cp_ctx);
    }
    return 0;
}