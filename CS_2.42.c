#include <stdio.h>
#include <stdint.h>

int32_t div16(int32_t);

int main() {
    
    int32_t x = -67;
    
    int32_t a = div16(x);
    printf("%d\n", a);
    printf("%d", x / 16);
}


int32_t div16(int32_t x) {
    return x >> 4;
} 
