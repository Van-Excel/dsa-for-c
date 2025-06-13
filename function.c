#include <stdio.h>


  /* function declaration with prototype*/
int function_1(int x, int y);


/* function_1 definition*/

int function_1(int x, int y){
    printf("values passed to the function_1 are: %d and %d \n", x, y);
    return x +y;
}
int main() {


    int x = 2;
    int y = 3;

    int z = function_1(x, y);
    printf("the value of z is: %d \n", z);



    /* Prototyping functions*/



    /* functions with no arguments*/
    


    /* functions with a fixed number of arguments*/



    /*prototyping with a variable number of arguments*/



  

   


    return 0;
}