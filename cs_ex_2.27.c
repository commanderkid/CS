#include <stdio.h>

int uadd_ok(unsigned int, unsigned int);
void test(unsigned int, unsigned int);

int main() {
    unsigned int MAX = ~0;
    
    test(MAX - 3, 2);
    test(MAX - 3, 3);
    test(MAX - 3, 4);
    
    test(2, MAX - 3);
    test(3, MAX - 3);
    test(4, MAX - 3);
    
    test(MAX, MAX);
    test(0, 0);
}


int uadd_ok(unsigned int a, unsigned int b) { 
    return a + b >= a; 
}

void test(unsigned int a, unsigned int b){
    unsigned int test = uadd_ok(a, b);
    printf("%u", test);
    printf("\n");
}
