// ex 2.66
#include<stdio.h>

int leftmost_one(unsigned);

int main(){
    
}


// 1111 1111 0000 0000
// 1000 0000 0000 0000
// 0110 0110 0000 0000
// 0100 0000 0000 0000 0000 0000 0000 0000

int leftmost_one(unsigned x) {
   int size = sizeof(unsigned);
   
   unsigned b = 0xf;
   
   for (int i = 0; i < size - 1; i++)
   {
       ((b << (4 * (size - 1))) & x) >> (4 * (size - 1))
   }
}
