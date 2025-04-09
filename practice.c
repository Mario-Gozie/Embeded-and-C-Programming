#include<stdio.h>
#include<stdint.h>
#include<float.h>

int main(){
    int whileInterator = 0;
    int decNumber = 1;
    int i;
    while(whileInterator < 5)

    {
        for (int i = 1; i <= 5; i++){

        if (i < decNumber)
        {printf("- ");}
        
        else
        {printf("%d ", i);}
       
    }
    decNumber++;
    printf("\n");
    
    whileInterator++;
    }

    // Working with Long long int data type

    long long int myLargeNumber = 1234567890123456789LL;

    printf("Large Number: %lld\n", myLargeNumber);

    // Using the stdint header

    int32_t myInt = 42;
    uint16_t myUnsignedInt = 65535;

    printf("Signed Integer: %d\n", myInt);
    printf("Unsigned Integer: %u\n", myUnsignedInt);

    // Working with float (double and float)
    float myFloat = 3.14f;
    double myDouble = 3.141592653589793;

    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    
    // Working with <float.h>

    printf("Float Max: %e\n", FLT_MAX);
    printf("Float Min: %e\n", FLT_MIN);
    printf("Double Max: %e\n", DBL_MAX);
    printf("Double Min: %e\n", DBL_MIN);
    printf("Double Digits: %d\n", DBL_DIG);
    return 0;
}