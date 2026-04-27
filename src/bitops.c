#include "bitops.h"

uint32_t bit_set(uint32_t value, uint8_t bit)
{
    return value | (1U << bit);
}

uint32_t bit_clear(uint32_t value, uint8_t bit)
{
    return value & ~(1U << bit);
}

uint32_t bit_toggle(uint32_t value, uint8_t bit)
{
    return value ^ (1U << bit);
}

bool bit_check(uint32_t value, uint8_t bit)
{
    return (value & (1U << bit)) != 0;
}

/* create mask like 0b00111100 */
uint32_t bit_mask(uint8_t start, uint8_t len)
{
    return ((1U << len) - 1U) << start;
}

uint32_t bit_write_field(uint32_t reg, uint8_t start, uint8_t len, uint32_t value)
{
    uint32_t mask = bit_mask(start, len);
    reg &= ~mask;
    reg |= ((value << start) & mask);
    return reg;
}

uint32_t bit_read_field(uint32_t reg, uint8_t start, uint8_t len)
{
    uint32_t mask = bit_mask(start, len);
    return (reg & mask) >> start;
}
