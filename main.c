#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("Hello Van\n");

    int local = 12;
    int* ptr = &local;

    printf("the value of local is: %d\n", local);

    printf("the value of ptr: %p\n", ptr);
    printf("the value in the address in ptr: %d\n", *ptr);


    return 0;


}
