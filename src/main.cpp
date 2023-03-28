#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

void gpio_setup();

void gpio_use();

int main ()
{
    gpio_setup();

    while (true)
    {
        gpio_use();
    }

}

void gpio_setup()
{
    rcc_periph_clock_enable(RCC_GPIOE);
    gpio_mode_setup(GPIOE, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO8 | GPIO9 | GPIO10 | GPIO11 | GPIO12 |GPIO13 | GPIO14 | GPIO15);

}

void gpio_use()
{
     gpio_toggle(GPIOE, GPIO8 | GPIO9 | GPIO10 | GPIO11 | GPIO12 |GPIO13 | GPIO14 | GPIO15);
}
