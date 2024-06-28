#include <stdio.h>

#define K_BITS 2
#define N_BITS 2
#define BITS 5 //set bits

const int Biase = BITS - 1;
char number_in_bits[BITS];

int multiplyer(int);
void print_header();
void bits_maker(int);
int power_of_two(int);
int number_multyplayer(char*, int, int);

int main()
{
    print_header();
    
    int number_of_variants = multiplyer(Biase); // number of variants
    for(int i = 0; i < number_of_variants; i++) {
        bits_maker(i);
        printf(" %s", number_in_bits);
        printf(" \t\t%d", number_multyplayer(number_in_bits, 1, 2));
        printf("\n");
    }
    return 0;
}


void print_header() {
    printf("Description\tBiase\te\tE\t2^E\tf\tM\t2^E*M\tV\tDecemal\n");
}

void bits_maker(int number) {
    for(int i = 0; i < BITS; i++) {            
        number_in_bits[BITS - 1 - i] = (number & 1) + '0';
        number = number >> 1;
    }
}


int number_multyplayer(char* arr, int position, int count) {
    int result = 0;
    for(int i = count - 1, j = 0; i >= 0; i--, j++) {
        result += (arr[position + i] - '0') * power_of_two(j);
    }
}

int power_of_two(int numb){
    int result = 1;
    for(int i = 0; i < numb; i++){
        result = result * 2;
    }
    return result;
}

int multiplyer(int power_of_two) {
    int ans = 1;
    
    for(int i = 0; i < power_of_two; i++, ans *= 2);
    
    return ans;
}
