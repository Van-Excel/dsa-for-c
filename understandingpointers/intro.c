
#include <stdio.h>

int main(){
    // array of character pointers

    char *names[] = {"Miller","Jones","Anderson"};

    printf("%c\n", names[1][2]); 
    //equivalent to *(names + i)[2]
    // pointer arithmetic and deferencing returns an array 
    // we access the third element in this array

    // declaring pointers

    int number; // declaring an integer variable
    int *ptrtonumber;//declaring a pointer variable

    number = 23; // initializing the integer variable
    ptrtonumber = &number; // initializing the pointer variable with the address of number variable

    // when working with complex pointer expressions, draw a picture of them

    //displaying pointer values and deferencing them
    printf("pointer: %p value:%d \n",ptrtonumber, *ptrtonumber);
    printf("%d\n", sizeof(char*));








    return 0;
}