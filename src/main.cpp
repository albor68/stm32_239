#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

void gipo_setup();
void gipo_use();

int main () {

    gipo_setup();

    while (true) {

        gipo_use();

    }

}

void gipo_setup(){
    rcc_periph_clock_enable(RCC_GPIOE);
    gpio_mode_setup(GPIOE,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO10|GPIO12);
}

void gipo_use(){
    gpio_toggle(GPIOE, GPIO10|GPIO12);
}
