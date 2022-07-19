#include <stdio.h>

int main(void){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a =1; //Assign to a bitfield(be careful not to assign more than the allowed range of the bitfield)
    bit.b =7;
    bit.c=15;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c); //Output the contents of three fields in integer quantity format
    pbit=&bit; //Give the address of the bit field variable to the pointer variable pbit
    pbit->a=0; //Reassign the bit field aby pointer to 0
    pbit ->b&=3; //The compound bit operator "&=" is used ,
                //equivalent to: pbit->b=pbit->&3,the original value of b is 7
                //,and the result of 3(111&011=011,decimal value 3)
    pbit ->c |= 1;
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);

    return 0;
}