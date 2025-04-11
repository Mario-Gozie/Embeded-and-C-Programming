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


    // USING FLAGS INSTEAD (Here I want to represent multiple values with a bit of a variable to manage space.)

    unsigned int flags = 2; // an integer has 4 (32 bits) bytes which means with a flag, I can fit in 32 features into it because four bytes is 32 bits.

  if ((flags & 1) != 0){
    printf("1st features is enabled\n");
  }

    

    return 0;
}