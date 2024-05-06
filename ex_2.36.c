#include <stdio.h>
#include <stdint.h>

int tmult_ok(int64_t, int64_t);

int main() {
    
    int MIN_INT = 1 << (sizeof(int) * 8 - 1);
    int MAX_INT = ~MIN_INT;
    
    int a = tmult_ok(5, 10);
    
    printf("%d", a);
    
    return 0;
}

int32_t tmult_ok(int64_t a, int64_t b) {
    int64_t p = a * b;
    return p == (int32_t)p;
    // int32_t => 0000_0000  0000_0000  0000_0000  0000_0000
    // int64_t => 0000_0000  0000_0000  0000_0000  0000_0000 0000_0000  0000_0000  0000_0000  0000_0000
    // 2*32    => 2_147_483_647 -2_147_483_648 => 2 ^ 31 * 2 ^31 => 2 ^ 62
    // 2*64    => 9_223_372_036_854_775_807 -9_223_372_036_854_775_808
}
