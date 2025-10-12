#include <stdio.h>
#include <stdlib.h>

//revising what is in rev.c

int main(){

    int x = 89;
    int *ptr = &x;
    *ptr = 80; //write a value in memory address
    printf("Ptr is pointing to the value %d \n", *ptr);

    // declaring an array

    int size = 10;

    int array[] = {1,2,4,5,6,7,8,9,10,100};

    int *ptrarray = array;

    for (int i = 0; i < size; i++){
        printf("value of arr[%d]: %d \n", i, ptrarray[i]);
        printf("value of arr[%d]: %d \n", i, *(ptrarray + i));
    }

    int size2 = 5;
    int arr2[] = {1,2,4,5,6};
    int *ptr_2 = arr2;

    for (int i = 0; i < size2; i++){
        printf("value: %d\n", ptr_2[i]);
    }

     // compile and runtime
    // assigning values using pointer
    const int size3 = 5;
    int arr3[size3];
    int *ptr_3 = arr3;

    for (int i = 0; i < size3; i++){
        ptr_3[i] = i;
        printf("value written at ptr_3[%d] is %d \n", i, ptr_3[i]);
        
    }

    for (int i = 0; i < size3; i++){
        printf("arr3[%d]: %d\n", i, *(&arr3[i]));
        // int arrValue = arr3[i];
        // printf("value in arrValue is %d\n", arrValue);
    }

    // array of characters

    char arrCh[7] = {'H', 'E', 'L', 'L', 'O', 'S'};
    char *ptr_chr = arrCh;

    for(int i = 0; i < 7; i++){
        if (ptr_chr[i] != '\0'){
            printf("character: %c \n", ptr_chr[i]);

        }
    }




    // pointer arithmetic
    // pointer_variable + n * sizeof(data_type)
    // this tells the compiler to move to a certain memory address that is n bytes 
    //from the address referenced by the pointer variable

    double *ptr_double;
    printf("memory address in ptr_double: %p \n", ptr_double);

    // since a double is 8bytes or 64bits, 1 stands for 8 bytes
    // + 1 means the memory address that is 8 bytes from the current address
    //referenced by ptr_double

    printf("memory address in ptr_double: %p \n", ptr_double + 1);

    // -1 is memory address that is 8 bytes before current address
    // referenced by ptr_doubble
    printf("memory address in ptr_double: %p \n", ptr_double - 1);


    // study this some more especially sizeof *p notation
    // This means: allocate enough bytes to store 2 elements of type “whatever p points to”.
    // Option A: stack array
    // double a[2];
    // double *p = a;

    // Option B: heap (uncomment if you want heap)
    // double *p = malloc(2 * sizeof *p);
    // if (!p) return 1;

    // printf("p      = %p\n", (void*)p);
    // printf("p + 1  = %p\n", (void*)(p + 1));   // advances by sizeof *p bytes
    // printf("size   = %zu\n", sizeof *p);       // portable size check

    // if heap:
    // free(p);




    //passing arrays to functions
    // passing pointers to functions
    // passing multidimensional arrays to functions
    // array of pointers
    //pointing to functions

}


