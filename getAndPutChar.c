#include<stdio.h>

int main(){
    
    // using getchar and putchar functions

    char customerName;

    printf("\n\n");

    printf("Please give me a number: \n");

    customerName = getchar();

    printf("\n\n");

    printf("The number is: \n");

    putchar(customerName);
    
    return 0;
}