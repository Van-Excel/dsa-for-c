#include <stdio.h>
#include <string.h>

//swapFunction is a function that swaps the values of two integers pointed to by value1 and value2 
//using a temporary variable. It modifies the values in place via their pointers.
void swapFunction(int *value1, int *value2){
        int temp;
        temp = *value1;
        *value1 = *value2;
        *value2 = temp;

    }
int main(){

    // when a function is invoked a stack frame of that function is created and pushed onto the program stack
    // when the function returns the stack frame is popped of the program stack
    // program stack and heap are runtime elements of C
    //program stack is a region of memory that supports the execution of functions
    //the program stack tends to share the same memory region as the heap
    //the program stack tends to occupy the lower part of this region while the heap occupies the upper part
    // program stack holds stack frames also called activation records
    // stack frames hold parameters and local variables of functions
    //the heap is for dynamic allocation of memory

    // there are 2 main ways pointers are important to functions
    //we pass pointers to a functions to allow it to modify data structures referenced by the pointer
    //2nd is declaring pointers to a function to control the execution of a program

    // passing parameters by value and pointers(reference)



    // passing data using pointers
    // implementation of swap function
    

    int n1 = 5;
    int n2 = 10;
    swapFunction(&n1, &n2);
    printf("value of n1 after swap:%d \n", n1);
    printf("value of n2 after swap:%d \n", n2);


    return 0;
}