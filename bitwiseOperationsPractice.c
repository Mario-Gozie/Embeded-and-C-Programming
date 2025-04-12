#include <stdio.h>

// TO UNDERSTAND ALL THESE, YOU NEED TO KNOW BINARY CONVERSION FIRST.
// IF YOU DO, LETS NOW USE & (AND), | (OR), ~ (NOT operator, which alway flips or do entirely oposit of the value), << (Left shift) , >> (Right shift), ^ (exclusive OR)


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


  printf("\nWhen You want to set a specific bit use the or Operator. remember '0b' makes a number binary\n\n");

  unsigned int m = 0b1 | 0b10 |0b10000000; 
  // 0000 0000 0000 0000 0000 0000 0000 0001
  // 0000 0000 0000 0000 0000 0000 0000 0010 |
  // 0000 0000 0000 0000 0000 0000 1000 0000 |

  // The result will be 0000 0000 0000 0000 0000 0000 1000 0011

  if((m & 0b1) != 0){
    printf("First digit is enabled\n");
  }


  if((m & 0b10) != 0){
    printf("Second digit is enabled\n");
  }



  if((m & 0b10000000) != 0){
    printf("8th digit is enabled\n");
  }

  printf("\n\nBIT SHIFT OPERATIONS\n\n");

  unsigned int k = 1; // Remember that the computer will see this 5 to be represented in binary.

  // 1 = 0000 0000 0000 0000 0000 0000 0000 0001
  
  

  printf("k left shifted by 1: %d\n", k << 1); // BITSHIFT CAN ALSO BE DONE THIS WAY k <<= 1;
  // bit shifting k by 1 will give you 2

  // bit shifting ONCE will give 0000 0000 0000 0000 0000 0000 0000 0010 which is 2


  printf("k left shifted by 2: %d\n", k << 2); // left shifting by 2 will lead to 4

  // bit shifting TWICE will give 0000 0000 0000 0000 0000 0000 0000 0100 which is 2

  printf("\n\nDoing a leftshft on 32 bits\n\n");

  int i;

  for(i = 0; i < 32; i++){
    printf("left shifted by %02d: %08x | %u\n",i, k << i, k << i); 
  }

  // RIGHT SHIFTING

  printf("\n\nRIGHT SHIFT\n\n");
  unsigned int l = 100000000;
  int p;

  for(p = 0; p < 32; p++){
    printf("Right shifted by %02d: %08x | %u\n",p, l >> p, l >> p); // Right shift can also be done with l>>=1
  }

  
  return 0;
}