#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //malloc
    //realloc
    //calloc
    //free

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
    
    
  




    return 0;
}