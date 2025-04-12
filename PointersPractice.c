// Programs are stored in RAM (Random Access Memory) including variables and everything stored in the RAM has an Address.

// Pointers are Variables that store a memory Address. pointers hold the memory address of another variable and the pointer points to that variable.

// The type of a pointer is the type of the variable it points to.

// so when you have int *a; you are creating a pointer that points to an int variable. so a will store a memory address.

// so we say that a pointer points to a variable when it stores its memory address. 
// so we can use pointer to modify the value of an Address. this is done with "*" to DEREFERENCE a pointer.


// Pointers are mainly used when we want to do pass by reference / Pass by pointer. this allow us to make a function that can modify multiple variables at once.

#include <stdio.h>

int main(void){
    int b = 42;

    int *a = &b; // creating the pointer by passing an address to it using &.

    printf("printing b\n");
    printf("b: %d\n", b);
    printf("\nprinting pointer with &b\n");
    printf("&b: %p\n", &b);
    printf("\nprinting pointer with a variable\n");
    printf("a: %p\n", a);

    printf("\n\nChanging the value of b by dereferencing the a pointer\n\n");
    *a = 50; // This means, go get what a is pointing to, and replace that.

    printf("printing b\n");
    printf("b: %d\n", b);
    printf("\nprinting pointer with &b\n");
    printf("&b: %p\n", &b);
    printf("\nprinting pointer with a variable\n");
    printf("a: %p\n", a);

    printf("\nEXAMPLES OF USING POINTERS\n\n");

    int c, d, e;

    c = d = e = 0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &c, &d, &e);
    printf("\n");
    printf("Result : %d\n", c + d + e);

    printf("\nTesting the swap function\n");

    int x,y;
    x = 5;
    y = 10;

    printf("x: %d, y: %d\n", x, y);
    printf("&x: %p,\n&y: %p\n", &x, &y);

    swap(&x, &y);

    printf("x: %d, y: %d\n", x, y);
    
   
    return 0;
}

void swap(int *a, int *b){ //this will take memory addresses and then point to that value we are talking about.
    printf("a: %p,\nb: %p\n", a, b);
    printf("*a: %d,\n*b: %d\n", *a, *b);

    int temp = 0;
    temp = *a; //what is happening here is dereferencing of a.
    *a = *b; // here I saying go to a, deference b and store its value into a
    *b = temp; // here I am saying point to b and store the vale of temp to b

}