#include <stdio.h>
#include <stdint.h>

int32_t get_switch_last_two_bytes(int32_t, int32_t);

int main()
{
    int32_t x, y;
    x = 0x89ABCDEF;
    y = 0x76543210;
    
    int32_t answer = get_switch_last_two_bytes(x, y);
    printf("%x", answer);
    return 0;
}

int32_t get_switch_last_two_bytes(int32_t x, int32_t y) 
{
    return (x & (int32_t)0xff) + (y & (int32_t)0xffffff00);
}
