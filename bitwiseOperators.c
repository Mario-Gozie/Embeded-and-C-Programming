#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;

    // AND OPERATOR &

    printf("\nAnd Opertor\n");
    a = 1 & 1;
    b = 1 & 0;
    c = 1 & 2;
    d = 9 & 5;

    // 10 (binary) = 2
    // 01 (binary) = 1
    // 1 & 2 (binary) = 10; 01 = 00

    // 1001 = 9
    //  101 = 5
    // 9 + 5 = 0 0 0 1


    printf("Result of a: %d\n", a);
    printf("Result of b: %d\n", b);
    printf("Result of c: %d\n", c);
    printf("Result of d: %d\n", d);

    // BIT WISE OPERATIONS FOR OR |
    printf("\nOR Opertor\n");
    e = 9 | 5;

    // 9 = 1001
    // 5 = 0101
    // 9 | 5 = 1101

    printf("Result of e: %d\n", e);

    // Exclusive Or (^)

    printf("\nExclusive OR Opertor\n");

    f = 9 ^ 5;

    // 9 = 1001
    // 5 = 0101
    // 9 ^ 5 = 1100
    printf("Result of f: %d\n", f);

    printf("\nNOT Opertor\n");

    g = ~5; // not 5 all it does is to flip

    // 0101 = 5
    // 1010
    printf("Result of g: %d\n", g);


    printf("\nprinting in Hexadecimal to know why the above is -6\n");
    printf("Why do we have fffffffa? remember an int has 4bytes (32 bits)\n");
    // 0000 0000 0000 0000 0000 0000 0000 0101
    // so the result should be full of 1
    // 1111 1111 1111 1111 1111 1111 1111 0101
    // with the AND and OR we didnt experience this because even if I display the whole 32 bits, it will be 0 be 0 and 0 or 0 or 0 is 0



    printf("Result of g: %x\n", g); // printing result in hexadecimal to clearly show why I have negative 6 (-6)

    
    // if I make g unsigned, I will get a huge number instead of a Negative number. Please not that if the first number of a signed integer is 1 then we will get a negative value.
    
    printf("\nConverting g to unsigned int\n");

    unsigned int unsigned_g = (unsigned int) g;

    printf("Result of unsigned g: %u\n", unsigned_g);

    

    return 0;
}