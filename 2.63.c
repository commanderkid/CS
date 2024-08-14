#include <stdio.h>
#include <stdint.h>

// srl - logic shivt right

unsigned srl(unsigned, int);
int sra(int, int);

int main()
{
    unsigned x = 0xffffffff;
    int k = 1;
    int ans = sra(x, k);
    //unsigned ans = srl(x, k);
    printf("%0.8x", ans);
}

// logic shift => 
unsigned srl(unsigned x, int k)
{
    unsigned xsra = (int) x >> k;
    return xsra ^ ((~0) << (sizeof(int) * 8 - k));
}

int sra(int x, int k)
{
    int xsrl = (unsignet) x >> k;
    
    //  ((1)<<(4*8=>32-k)=>(~(111000))=>(000111 & xsrl) 
    return (~((~0) << (sizeof(int) * 8 - k)) &  xsrl) | (((xsrl & ((~0) << (sizeof(int) * 8 - 1))) != 0) * (~0)) << (sizeof(int) * 8 - k);  

}
