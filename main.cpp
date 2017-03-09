
#include <string>
#include "nrf_delay.h"
#include "boards.h"

int main(int argc, char **argv) {

    bsp_board_leds_init();

    while (true) {
        nrf_delay_ms(500);

        for (int i = 0; i < LEDS_NUMBER; i++) {
            bsp_board_led_invert(i);
        }

    }

    return 0;
}

