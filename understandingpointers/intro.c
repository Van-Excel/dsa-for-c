
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


    //pointer arithmetic - adding/subtracting pointers from pointers

    //multiple levels of indirections
    // pointers to pointers


    // constants and pointers

    // pointer to const variable

    int age = 12;
    const int birthdate = 23; // ptr to constant integer

    int*ptrtoint = &age;
    const int *ptrtoconstint = &birthdate;
    //  i can deference pointer to read the value
    // I cannot deference to modify the value it points to
    // I can still assign the address of a normal int to the pointer
    printf("value: %d, pointer:%p", birthdate, ptrtoconstint);
    printf("\n");

    // constant pointers to nonconstants
    // pointer can be deferenced to modify value it points to
    // pointer cannot be reassigned a different value after initial initialization

    int *const ptrtononconstant;



    // constant pointer to constants
    // neither pointer nor value being pointed to can be modified

    const int limit = 900;
    const int *const ptrtolimit = &limit;
    printf("value of limit:%d. pointer to limit:%p", limit, ptrtolimit);
    printf("\n");


    // pointer to (const pointer to const value)

    const int price = 234;
    const int *const ptrtoprice = &price;
    const int *const *ptrtoptr = &ptrtoprice;
    printf("value:%d, pointer:%p, pointertopointer:%d", price, *ptrtoprice, **ptrtoptr);
    printf("\n");










    return 0;
}