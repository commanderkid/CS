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

int tmult_ok(int64_t a, int64_t b) {
    return a * b == (int)(a * b);
}
