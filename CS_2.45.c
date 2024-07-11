#include <stdio.h>

#define K_BITS 2
#define N_BITS 2
#define BITS 5 //set bits

const int Biase = K_BITS + N_BITS;
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
        printf("\t\t");
        //ByteView
        printf("%s", number_in_bits);
        
        //e
        int e = number_multyplayer(number_in_bits, 1, 2);
        printf("\t\t%d", e);
        
        //E
        int E = e - (BITS - K_BITS - N_BITS)  + (0 == e ? 1 : 0); // shift => bias = 2 ^ (2-1) - 1 = 1 
        printf("\t%d", E);
        
        // 2^E
        int two_E = multiplyer(E);
        printf("\t%d", two_E);
        
        // f
        int last_bits = number_multyplayer(number_in_bits, 3, 2);
        printf("\t%d/%d", last_bits,  power_of_two(N_BITS));
        
        // M
        int M_bits = 0 == e ? last_bits + 0 : last_bits + 4;
        printf("\t%d/%d", M_bits,  power_of_two(N_BITS));
        
        // 2^E*M
        int two_e_counter = two_E * M_bits;
        int power_two = power_of_two(N_BITS);
        printf("\t%d/%d", two_e_counter,  power_two);
        
        
        // V
        if(two_e_counter % power_two == 0)
            printf("\t%d", two_e_counter / power_two);
        else
        {
            int integer = two_e_counter / 4;
            int odd = two_e_counter % 4;
            if(0 == integer)
            {
                if(power_two % two_e_counter == 0)
                    printf("\t%d/%d", 1, power_two / two_e_counter);
                else
                    printf("\t%d/%d", two_e_counter, power_two);
            }
            else
            {
                if(power_two % odd == 0)
                    printf("\t%d(%d/%d)", integer, 1, odd);
                else
                    printf("\t%d(%d/%d)", integer, odd, power_two);
            }
        }
        
        
        // Decemal
        printf("\t%0.2f", (float)two_e_counter / power_two);
        
        printf("\n");
        
    }
    return 0;
}


void print_header() {
    printf("Description\tByteView\te\tE\t2^E\tf\tM\t2^E*M\tV\tDecemal\n");
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
    return result;
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
