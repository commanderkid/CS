#include <stdio.h>

#define BITS 5 //set bits

const int Biase = BITS - 1;
char number_in_bits[BITS];

void print_header(); //print header
int multiplyer(int);
void bits_maker(int);

int main()
{
    print_header();
    
    int number_of_variants = multiplyer(Biase); // number of variants
    for(int i = 0; i < number_of_variants; i++) {
        bits_maker(i);
        printf("%s\n", number_in_bits);
    }

    return 0;
}


void print_header() {
    printf("Description\tBiase\te\tE\t2^E\tf\tM\t2^E*M\tV\tDecemal\n");
}

void bits_maker(int number) {
    for(int i = 0; i < BITS; i++) {                     //00000
        number = number & 1;                            //
        number_in_bits[BITS - 1 - i] = number + '0';
        number = number >> 1;
    }
}

int multiplyer(int power_of_two) {
    int ans = 1;
    
    for(int i = 0; i < power_of_two; i++, ans *= 2);
    
    return ans;
}
