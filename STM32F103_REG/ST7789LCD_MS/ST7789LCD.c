#include "ST7789LCD.h"
#include "../SPI_MS/SPI1.h"
#include "./GPIO_MS/GPIO.h"

#include <stdint.h>

void st7789lcd_init(uint8_t CS, uint8_t CS_PORT, uint8_t DC, uint8_t DC_PORT, uint8_t RST, uint8_t RST_PORT, uint8_t LED, uint8_t LED_PORT)
{
    gpio_en(CS_PORT);
    gpio_en(DC_PORT);
    gpio_en(RST_PORT);
    gpio_en(LED_PORT);

    gpio_setup(CS, CS_PORT, 2);
    gpio_setup(DC, DC_PORT, 2);
    gpio_setup(RST, RST_PORT, 2);
    gpio_setup(LED, LED_PORT, 2);
}