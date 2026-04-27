#ifndef BITOPS_H
#define BITOPS_H

#include <stdint.h>
#include <stdbool.h>

/* basic bit operations */
uint32_t bit_set(uint32_t value, uint8_t bit);
uint32_t bit_clear(uint32_t value, uint8_t bit);
uint32_t bit_toggle(uint32_t value, uint8_t bit);
bool     bit_check(uint32_t value, uint8_t bit);

/* field operations (register style) */
uint32_t bit_mask(uint8_t start, uint8_t len);
uint32_t bit_write_field(uint32_t reg, uint8_t start, uint8_t len, uint32_t value);
uint32_t bit_read_field(uint32_t reg, uint8_t start, uint8_t len);

#endif