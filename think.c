
#include <stdio.h>




int main(){


    char* listOfNamePointers[] = {"God", "Fred", "Alice"};

    printf("The size of the array is: %d bytes\n", sizeof(listOfNamePointers));
    printf("the first character listofNamePointers[0] points to is %c \n", *(listOfNamePointers[0]));
    
    printf("the second character listofNamePointers[0] points to is %c \n", *(listOfNamePointers[0] + 1));
    // each is 8 bytes or 64 bits
    // 1 must be added to the pointer or address not the deferenced value.


    int i;
    for (i = 0; i < 3; i++){
        
    }





    char listOfNames[] = "Vanexcel";
    printf("the size of memory allocated for this array is %d bytes \n", sizeof(listOfNames));

    int numberOfElements = sizeof(listOfNames)/ sizeof(listOfNames[0]);
    printf("%d elements\n", numberOfElements);


}