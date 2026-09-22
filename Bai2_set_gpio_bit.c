#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main(void) {
    uint8_t mask = 1U << 5;
    uint8_t gpio_register = 0;
    gpio_register |= mask;
    printf("%"PRIu8"",gpio_register);
}