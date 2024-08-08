#include <stdio.h>
#include <limits.h>

int main()
{
    
    int x = 0x000000ff;
    
    printf("%d\n", (INT_MAX & x) != 0);
    printf("%d\n", (~x) != 0);
    printf("%d\n", (x & 0xff) > 0);
    printf("%d\n", ~((x >> 7) & 0xff) !=  0);
    return 0;
}
