#include<stdio.h>
#include<stdint.h> // for working with integers and specifying particular amount of bit.
#include<float.h> // for working with floats
#include<ctype.h> // for working with character  eg isalpha(), isdigit, toupper()
#include<string.h> // for working with strings

// Declaring a funciton here.
int add(int a, int b){
    return a + b;
};



int swap(int *c, int *d) // an Address will be passed into this function.
    {
        int temp = 0;
        temp = *c;
        *c = *d;
        *d = temp;

        return 0;
    };

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


    // Working with Characters and Strings

    char myChar = 'A';
    char myString[] = "Hello World!";

    printf("This is my character: %c\n", myChar);
    printf("This is my string: %s\n", myString);


    // Multiline String 

    char multiLineString[] = "This is the first line."
                            " This is the second line." ;

    printf("This is my multiLineString: %s\n", multiLineString);


    // using the ctype header

    if(isalpha(myChar)){
        printf("%c it is an Alphabet\n", myChar);
    }

    for(int i = 0; i < strlen(myString); i++){

        if(isdigit(myString[i])){
            printf("%d is a digit\n", myString[i]);
        } else{
            printf("%c is not a digit\n", myString[i]);
        }

    }


    // Arithemetic Operations

    int addition = 5 + 3;

    int subtraction = 8 - 3;

    int modulusValue = 5 % 2;

    printf("Addition value is %d while Subtraction value is %d and modulus value: %d\n", addition, subtraction, modulusValue);
    
    // Conversions
    // Implicit conversion

    int intValue = 10;
    float floatValue = intValue;

    printf("first integer value: %d\n", intValue);
    printf("first integer value converted to float: %f\n", floatValue);

    // Explicit Conversion

    float floatValue1 = 10.5;
    int intValue1 = (int)floatValue1; // explicit conversion.

    printf("Second float value: %f\n", floatValue1);
    printf("Second float value converted to integer: %d\n", intValue1);

    // Explicit conversion 

    int intValue2 = 42;
    double doubleValue = (double)intValue2;

    printf("third integer value: %d\n", intValue2);
    printf("third integer value converted to double: %lf\n", doubleValue);
    printf("third integer value converted to double (Scientific form): %e\n", doubleValue); // scientific form
    printf("third integer value converted to double (two decimal places): %.2f\n", doubleValue); // 2 decimal places

    // FUNCTIONS
    int sum = add(3, 4); // This function is declared outside before the main function
    printf("The sum of two numbers above are: %d\n", sum);



    // Pointer Variables
    // These are Variables used to store the memory address of another variable

    printf("NOW I WILL BE LOOKING INTO POINTERS\n\n\n\n");

    int x, y;
    

    printf("printing x and y: %d %d \n", x , y);

    
    int *px, *py;

    x = 1;
    px = &x;

    printf("printing px: %d \n", px);

    y = *px;

    printf("Printing y: %d \n", y);

    *px = 0;

    printf("Printing *px: %d \n", *px);

    py = px;

    printf("Printing py: %d \n", py);

    // Creating a Swapping Function and running.

    int c = 20;
    int d = 10;

    swap(&c, &d);

    printf("printing c: %d\n", c);
    printf("printing d: %d\n", d);

    // HOW TO USE scanf 

    int numberToRecieve;

    printf("\n\n");
    printf("Please give me a Number: \n");
    scanf("%d", &numberToRecieve);

    printf("\n\nThe digit you entered is: %d", numberToRecieve);

    printf("\n\n");

    return 0;
}