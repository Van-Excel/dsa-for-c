#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



    int i;
    i = 90;
    printf("the size of i is %d bytes \n", sizeof(i));


    int array1[20];
    printf("the size of the array is %d bytes \n", sizeof(array1));
    printf("the length of the array is %d  \n", sizeof(array1)/ sizeof(int));



    int so = 3;
    int dj = 10;

    if ((so < 10) && (dj < 20)){
        printf("truthy\n");
    }
    printf("%s\n", (so > 5 ? "so is greater than 5": "so is less than 5"));


    // data modifiers

    short int color;
    long int colord;
    printf("size of color: %d bytes or %d bits\n", sizeof(color), sizeof(color) * 8);
    printf("size of colord: %d bytes or %d bits\n", sizeof(colord), sizeof(colord) * 8);

    // %hd for short
    // %hu for unsigned short
    // %ld for long
    // %lu for unsigned long



    // math functions

    int va = 2;
    int vb = 3;
    int vc = 4;


    printf("the square root of 4 is: %2.0f\n", sqrt(vc));
    printf("the square root of 4 is: %f\n", sqrt(vc));
    printf("the square root of 4 is: %2.2f\n", sqrt(vc));

    // if statement

    // write a program that finds numbers between 0 and 20 that can be divided by 2 and 3
    // add these numbers to an array and then print these numbers when you are done

    int number;
    int arr[20];
    int arrposition = 0;

    for (number = 0; number < 20; number++){
        if ((number % 2 == 0) && (number % 3 == 0)){
            printf("The number %d is divisible by 2 and 3 \n", number);
            arr[arrposition] = number;
            arrposition++;
        }

    }
    for (int j = 0; j < arrposition; j++){
        printf("values in array: %d\n", arr[j]); // address of first element + value of j is deferenced
        printf("values in array: %d\n", *(arr + j));

    }




}