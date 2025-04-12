#include <stdio.h>
#include <string.h>

int main(){
    // Number of times I want to print
    char times[5 + 1]; // The 1 I added is for a null terminator which indicates that a string has ended. It is denoted as '\0'. This is because the C programming language does not have a string object; a string is an array of characters, so it is important to say that this is the end of a string.

    for (int i = 0; i < 5; i++){
        times[i] = '*';
    }

    times[5] = '\0'; // Null terminate the string

    printf("The string is: %s\n", times); // Print the resulting string

    int counter = 0;
    int valueDeterminant = 0;
    int x;

    while(counter < strlen(times)){
      for(x=0; x <= strlen(times); x++){
        
        if(x > valueDeterminant){
          printf("%c ", times[x]);
        }else{
            printf("- ");
        }
        
      }  
      counter++;
    }

    return 0;
}