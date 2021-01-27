

#include <stdio.h>
#include <stdlib.h>

// increment or decrement pointer

int main(void){
    int retechSizes[] = {10, 20, 30};
    int *ptr = retechSizes; //without the brackets means the array is starting

    printf("The adress %x contains %d\n", ptr, *ptr);

    ptr++;
    printf("The adress %x contains %d\n", ptr, *ptr);

    ptr++;
    printf("The adress %x contains %d\n", ptr, *ptr);

    ptr--;
    printf("The adress %x contains %d\n", ptr, *ptr);

    ptr--;
    printf("The adress %x contains %d\n", ptr, *ptr);

    return EXIT_SUCCESS;
    }
