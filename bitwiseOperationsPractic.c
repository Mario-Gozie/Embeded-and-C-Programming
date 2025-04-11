#include <stdio.h>

int main(int argc, char* arg[]){
    
    // int x, y; // 8 bytes (one int is 4 bytes and here we have two integers)
    // x = 1;
    // y = 1;

    // if (x == 1){
    //     printf("1st feature is enabled\n");
    // }

    // if (y == 1){
    //     printf("2nd feature is enabled\n");
    // }


    // USING FLAGS INSTEAD (Here I want to represent multiple values with a bit of a variable to manage space.) Using a flag means using one variable for everything.

    unsigned int flags = 3; // an integer has 4 (32 bits) bytes which means with a flag, I can fit in 32 features into it because four bytes is 32 bits.

  if ((flags & 1) != 0){
    /// 0000 0000 0000 0000 0000 0000 0000 0010 & 0000 0000 0000 0000 0000 0000 0000 0001
    // result is 0000 0000 0000 0000 0000 0000 0000 0000
    printf("1st features is enabled\n");
  } else{
    printf("value is equal to zero\n");
  }

  if((flags & 2) != 0){
    printf("Second digit is enabled\n");
  }


  printf("\nWhen You want to set a specific bit use the or Operator. remember '0b' makes a number binary\n");

  unsigned int m = 0b1 | 0b10 |0b10000000; 
  // The result will be 0000 0000 0000 0000 0000 0000 1000 0011

  if((flags & 0b10) != 0){
    printf("Second digit is enabled\n");
  }

  if((flags & 0b1) != 0){
    printf("First digit is enabled\n");
  }

  if((flags & 0b10000000) != 0){
    printf("8th digit is enabled\n");
  }

    return 0;
}