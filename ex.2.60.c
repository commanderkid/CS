#include <stdio.h>

unsigned int replace_byte(unsigned int, int, unsigned char);

void main()
{
    printf("%x", replace_byte(0x12345678, 2, 0xAB));
    printf("\n");
    printf("%x", replace_byte(0x12345678, 0, 0xAB));
    printf("\n");
}

unsigned int replace_byte(unsigned int x, int i, unsigned char b)
{
    // big int
    int size_of_x = sizeof(unsigned int);
    unsigned char* p = &x;
    p[i] = b;
    return x;
}
