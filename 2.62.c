#include <stdio.h>
#include <stdint.h>

int is_shifts_are_arithmetic();

int main()
{
    int ans = is_shifts_are_arithmetic();
    printf("%d", ans);
    return 0;
}

int is_shifts_are_arithmetic(){
    return (-1 >> 1) < 0;
}
