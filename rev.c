#include <stdio.h>
#include <stdlib.h>


void processArray(int* ptr, int size){
    for(int i=0; i < size; i++){
        printf("The address of the element in arr[%d] is %p\n",i, (void*)ptr );
        printf("The value of element in arr[%d] is %d\n",i, *(ptr + i));
        // OR the equivalent correct way using array indexing with the pointer
        // printf("The value of element in arr[%d] is %d\n", i, ptr[i]);
    }
}

int main()
{

    printf("The sorry state \n");

    
    

    // understand pointers and arrays to understand strings


    int x = 9;
    int* ptrtoint = &x;
    // *ptrtoint = 23; this is allowed. you can deference the pointer and overwrite the value
    printf("value in ptrtoint: %p\n", ptrtoint);
    printf("The value in x is: %d\n", *ptrtoint);
    printf("left value of x is: : %p and the right value of x is: %d\n", ptrtoint, *ptrtoint);

    // left and right value of a pointer are both addresses
    printf("left value of ptrtoint is: : %p and the right value of ptrtoint is: %p\n", &ptrtoint, ptrtoint);



    // ARRAYS
    // used when we need to declare a collection of the same data type

    // initializing an array
    int i;
    int first_array[10];
    for (i = 0; i < 10; i++){
        first_array[i] = i;
        printf("The list firstarray[%d] is initialized with %d\n", i, first_array[i]);

    // how do I print the array itself. which format specifier do I use?
    }

    printf("The size of first_array is: %d bytes long\n", sizeof(first_array));
    int size = 10;
    int second_array[size];
    printf("The size of second_array is: %d bytes long \n", sizeof(int) * size);

    // single dimension arrays
    // indexing arrays
    // pointers and arrays
    // character arrays
    // multi-dimensional arrays
    // unsized arrays


    int arr[]={1,3,5,6,7};
    int* integerPointer = arr; // decays to &arr[0]

    printf("The address of the first element in the array arr is: %p\n",(void*)integerPointer);
    // when you pass the name of an array to a function or pointer variable, you assign the address
    // of the first element in the array to the pointer variable or function
    //   ptr[i] means *(ptr + i)
    // int* ptr = arr means int* ptr = &arr[0]

    //these notations are the same

    // int *pv = (int*) malloc(5 * sizeof(int));
    // for(int i=0; i<5; i++) {
    // pv[i] = i+1;
    // }

    // for(int i=0; i<5; i++) {
    // *(pv+i) = i+1;
    // }





    processArray(arr, 5);


    //character arrays
    int charSize = 6;
    char array_ch[6]= {'h', 'e', 'l', 'l', 'o', '\0'};

    //printing out an array of characters

    int c ;
    // we loop through character array using the len or size of array
    // it prints all characters including the null character
    for (c=0; c < charSize; c++){
        printf("The character in array_ch[%d] is: %c\n",c, array_ch[c]);
    }

    int d ;
    // check if the element in specific index evaluates to true or false
    // null character evaluates to false.
    // loop will print all characters excluding the null character
    // we can also use array_ch[d] != '\0'
     for (d = 0; array_ch[d]; d++){
        printf("The character in array_ch[%d] is: %c\n",d, array_ch[d]);
    }

    int e ;
    // check if the element in specific index evaluates to true or false
    // null character evaluates to false.
    // loop will print all characters excluding the null character
    // we can also use array_ch[d] != '\0'
    // this method prints all characters together
     for (e = 0; array_ch[e]; e++){
        
        printf( "%s\n", array_ch); // array name decays into a pointer to address of first element
        //printf( "%c\n", array_ch[e]);
        // error printed emojis?
    }



    // pv[i]  ≡  *(pv + i) 
    // its just syntactic sugar
    // pv + i gives you the address
    // *(pv + i) dereferences that address to get the value
    // pv[i] is just syntactic sugar for *(pv + i)






    //STRINGS
    // what is the difference between a character string and a character array?
    // a character string is a character array with a null character (\0) appended to the end
    // a string is a character array with a null character used to mark the end of the string.


    // difference between a string constant and character constant
    // a string constant is a sequence or series of characters enclosed in double quotes
    // the compiler will automatically add a null character to the end of a string constant to indicate the end of the string
    // a character constant is allocated one byte since it represents a single character in your pc character set
    // string constant has 2 bytes allocated because the compiler will append the null character at the end
    // a string is simply a character array
    // a str variable holds the address to the first character in the character array?
    // null pointers

    // string functions and methods
    // strcpy() and strncpy() strlcpy()

    // char str[] = "Hello";       // stack array (modifiable)
    // char *dyn = malloc(6);      // heap allocation
    // strcpy(dyn, "Hello");       // copy literal → now modifiable
    // *(dyn + 0) = 'Y';           // ✅ "Yello"

    // char str[] = "Hello";
    // This creates an array of characters big enough to hold "Hello" plus the null terminator ('\0').

    // So the compiler makes it:

    // 'H'  'e'  'l'  'l'  'o'  '\0'
    // Here, you can modify the characters if you want:

    // str[0] = 'Y';   // str becomes "Yello"
    // 2. Assigning to a char pointer

    // char *str = "Hello";
    // Here, str points to a string literal stored in read-only memory.

    // You must not modify it (doing so causes undefined behavior):

    // str[0] = 'Y';   // ❌ may crash program
    // This is fine if you only need to read the string.
    // ✅ Rule of thumb:

    // If you want a string you can modify → declare an array (char str[] = "...").

    // If you only need a read-only reference to a string constant → use a pointer (char *str = "...").

    // ⚡ If you want both pointer arithmetic convenience and writable memory, you should explicitly allocate or declare an array:

    // char str[] = "Hello";       // stack array (modifiable)
    // char *dyn = malloc(6);      // heap allocation
    // strcpy(dyn, "Hello");       // copy literal → now modifiable
    // *(dyn + 0) = 'Y';           // ✅ "Yello"


    return 0;

}
