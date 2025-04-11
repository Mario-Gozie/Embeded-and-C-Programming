#include <stdio.h>

// THESE ARE CALLED MACROS
#define FIRST_FLAG 0b1
#define SECOND_FLAG 0b10
#define THIRD_FLAG 0b10000000

int main(){

  unsigned int flags = FIRST_FLAG | SECOND_FLAG |THIRD_FLAG; 
  // 0000 0000 0000 0000 0000 0000 0000 0001
  // 0000 0000 0000 0000 0000 0000 0000 0010 |
  // 0000 0000 0000 0000 0000 0000 1000 0000 |

  // The result will be 0000 0000 0000 0000 0000 0000 1000 0011

  if((flags & FIRST_FLAG) != 0){
    printf("First digit is enabled\n");
  }


  if((flags & SECOND_FLAG) != 0){
    printf("Second digit is enabled\n");
  }

  if((flags & THIRD_FLAG) != 0){
    printf("8th digit is enabled\n");
  }

  // DISABLING THE SECOND FLAG
  // flag = 10000011
  //        &
  // 11111101 
  // result 10000001

  // TO ACHIEVE THE RESULT WE WILL DO "flags & ~SECOND_FLAGS"

  flags = flags & ~SECOND_FLAG;
  if((flags) == FIRST_FLAG | THIRD_FLAG){
    printf("second flag disabled");
  }

    return 0;
}