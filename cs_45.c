#include <stdio.h>

const int BITS = 5;
const int Biase = BITS - 1;


void print_header(); //print header
int multiplyer(int);

int main()
{
    int n = multiplyer(Biase); // number of variants
    
    printf("%d\n", n);
    
    print_header();
    return 0;
}


void print_header() {
    printf("Description\tBiase\te\tE\t2^E\tf\tM\t2^E*M\tV\tDecemal\n");
}

char* bits_maker() {
    
}

int multiplyer(int power_of_two) {
    int ans = 1;
    
    for(int i = 0; i < power_of_two; i++, ans *= 2);
    
    return ans;
}
