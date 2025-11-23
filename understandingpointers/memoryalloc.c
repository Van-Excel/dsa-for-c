#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //malloc
    //realloc
    //calloc
    //free
    // memset
    // memory alignment - what multiples of bytes to allocate
    // memory allocated will be aligned according to the pointer’s data type.

    int *ptr = (int*) malloc(sizeof(int));
    if (ptr != NULL){
        *ptr = 6;

        printf("value in memory; %d\n", *ptr);
        free(ptr);
    }else{
        printf("memory allocation failed");
    }

    // allocating memory on heap for a string

    char *name = (char *) malloc(strlen("Alice") + 1);
    strcpy(name, "alice");
    int i = 0;
    while (name[i] != '\0')
    {
        /* code */
        printf("%c", name[i]);
        i++;
        printf("\n");
    }
    free(name);

    // memory alignment - what multiples of bytes to allocate
    int *ptrtoInteger = malloc(10 * sizeof(int));
    if (ptrtoInteger != NULL){
        *ptrtoInteger = 45;
        ptrtoInteger[1]= 23;
    }
    printf("value 1 is: %d", ptrtoInteger[0]);
    printf("\n");
    printf("value 1 is: %d\n", ptrtoInteger[1]);

    free(ptrtoInteger);

    // calloc
    // no need to use free()
    // originally used to allocate memory for arrays
    // takes 2 args- number of elements and size of element


    char *arrayPointer = calloc(10, 1);
    if (arrayPointer != NULL){
        arrayPointer[0] = 'k';
    }
    printf("first element in memory pointed to by arrayPointer is:%c", arrayPointer[0]);
    

    // you can use memset and malloc to achieve the same results as calloc
    // write an implementation of memset
    // can it be used for structs and how would implementation look like?

    
    
  




    return 0;
}