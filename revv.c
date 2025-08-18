
#include <stdio.h>
#include <stdlib.h>

int add_number(int x , int y){
    int result = x + y;
    return result;
        
    }

int main(){

    int number = 12;

    printf("The number in the variable number is: %d\n", number);


    int sum;
    sum = add_number(3, 4);
    printf("Value returned by sum is %d\n", sum);

    int variable1 = 20;
    int variable2 = 10;

    int sumOfVariables = add_number(variable1, variable2);
    printf( "The value of sum is %d\n", sumOfVariables);


    /**
     * Float
     */

     float distance = 10.7F;
     printf("The float test: %f\n", distance);

     float currency = 5e3;
      printf("The currency test: %e\n", currency);



      /* getchar()*/

      int wrd;

      printf("Please enter your word:");
      while((wrd=getchar()) != '\n'){
        printf("The character printed is: %c\n", wrd);
      }
      printf("print done\n");

      /*increment and decrement*/

      int cx = 10;
      int y;
      y = cx++; /* assign old value of cx to y and then add 1 to cx*/
      printf("value of y:%d and value of cx:%d\n", y, cx);


      //while loops
      int input = ' ';
      while (input != 'x')
      {
        /* code */
        printf("Please enter a character. Enter x to exit\n");
        input = getc(stdin);
        putchar(input);
        printf("\n");
      }

      // playing with exit() function
    //   int word = ' ';
    //   while (word != '\0')
    //   {
    //     /* code */
    //     printf("Please enter a character. Enter x to exit\n");
    //     word = getc(stdin);
    //     putchar(word);
    //     if (word == 'x')
    //     {
    //         /* codec */
    //         exit(EXIT_SUCCESS);
    //     }
        
    //   }

      // do while loop
      // do or execute a block of statement then check the while condition
      // if condition evaluates to 1 or logical true, run statement block again
      // if it evaluates to 0 or logical false, move out of loop and continue to the next statement

      int counter = 4;

      do
      {
        
        printf("I love life\n");
        counter++;
        /* code */
      } while (counter < 10);
      

    //   ptr[i] means *(ptr + i)

    // print the hex and decimal versions of numbers 1 to 6

    int bytenumber;
    printf("Hexadecimal   Decimal\n");
    for(bytenumber=1; bytenumber < 20; bytenumber++){
        printf("%x              %d\n", bytenumber, bytenumber);

    }

      





    


    return 0;


}