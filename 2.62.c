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

// ex 2.61

// x = 0000 0000 0000 0000 0000 0000 0000 0000 - int32
// Хотябы 1 бине не 0 => 1 ! 0
// Хотябы 1 бит 0 => 1 ! 0
// 1 бит в младшем байте не 0 => 1 ! 0
// 1 бит в старшем бате не 0 => 1 ! 0

#include <stdio.h>

int HasOne(int);

void main() {
    printf("%d", HasOne(0xAAAAAAAA));
}

int HasOne(int number) {
    return number && 0xFFFFFFFF;
    // ~0 & number != ~0
}

int HasZero(int number) {
    return (~number) > 0;
}
