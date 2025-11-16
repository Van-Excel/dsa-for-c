#include <stdio.h>
#include <stdlib.h>

int main()
{

    // review of arrays
    int a[5];
    a[0] = 22;
    a[1] = 10;

    printf("first element in array a is: %d\n", a[0]);

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("value at position %d in array is %d\n", i, a[i]);
        printf("value at position %d in array is %d\n", i, *(a + i));
    }

    //2d arrays

    int service[3][3] = {{1,2,4}, {2,3,4}, {3,4,5}};
    void arrayfunction(int arr[][3], int size){
        int i;
        int j;
        for (i=0; i < size; i++){
            for (j =0; j < 3; j++){
                printf("value at row %d column %d is : %d\n",i, j, arr[i][j] );

            }
            
        }
    }

    arrayfunction(service, 3);








    // review of structures
    // defining structures
    // definition doesn't consume memory
    struct rectangle
    {
        int length;
        int breadth;
    };
    // size of structures

    // declaring structures
    //  this consumes memory
    struct rectangle r;

    // declaration and initialization
    struct rectangle op = {10, 3};

    // accessing members
    // we read and write memory in structs using dot operator

    printf("length of rectangle op is: %d cm\n", op.length);
    printf("width of rectangle op is: %d cm\n", op.breadth);

    // definition
    struct card
    {
        int face;
        int value;
        int color;
    };

    typedef struct card Card; // creates an alias and allows me to omit struct keyword

    // declaration and initialization
    Card deck[10] = {{10, 3, 5}, {11, 12, 34}, {9, 10, 2}};
    printf(

        "the color of the second card is: %d \n", deck[1].color); // *(deck + i). color
    
    printf("the face of the second card is %d \n", deck[1].face);
        


    // another way to use typedef and struct
    // typedef struct card
    // {
    //     int face;
    //     int value;
    //     int color;
    // } Card; // ← One semicolon for both struct and typedef

    // Card deck[10] = {{10, 3, 5}, {11, 12, 34}, {9, 10, 2}};
    // printf("the color of the second card is: %d \n", deck[1].color);


    // using ENUMs 




    // using pointers
    int age = 29;
    int* ptrtoage;
    ptrtoage = &age;

    printf("address of variable age is: %p \n", ptrtoage);
    printf("changing the value in variable age to 20\n");
    *ptrtoage = 20;
    printf("new value in variable age: %d \n", *ptrtoage);


    // using heap memory
    int* ptrtoheap1 = (int *) malloc(4 * sizeof(int));
    ptrtoheap1[1] = 30;

    printf("value of second item in heap memory is: %d\n", ptrtoheap1[1]);
    free(ptrtoheap1);

    // do some exercise- creating structs on heap and helper functions for CRUD


    //pointer to struct
    // struct in stack

    struct Tap{
        int length;
        int width;
    };

    typedef struct Tap tap; // creating type alias

    //declaration and initialization
    tap sinkTap = {12, 45};
    tap *ptrtotap = &sinkTap;
    ptrtotap->length = 30;
    printf("new value of length in struct tap is: %d \n", ptrtotap->length);
    


    return 0;
}