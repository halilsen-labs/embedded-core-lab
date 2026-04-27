#include <stdio.h>
#include <assert.h>
#include "bitops.h"

int main()
{
    uint32_t v = 0;

    v = bit_set(v, 3);
    assert(bit_check(v, 3));

    v = bit_clear(v, 3);
    assert(!bit_check(v, 3));

    v = bit_toggle(v, 2);
    assert(bit_check(v, 2));

    uint32_t reg = 0;
    reg = bit_write_field(reg, 4, 3, 0x5);
    assert(bit_read_field(reg, 4, 3) == 0x5);

    printf("ALL TESTS PASSED\n");
    return 0;
}