

#include <stdio.h>
#include <stdlib.h>


int main(void){
    int retechStaticArray[20];

    int retechDynamicArray = malloc(20 *sizeof(int));
    *retechDynamicArray = 10;



    return EXIT_SUCCESS;
    }
