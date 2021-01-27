

#include <stdio.h>
#include <stdlib.h>


int main(void){
    int retechData[] = {10, 20, 30, 40, 50};
    int *ptr = retechData; //without the brackets means the array is starting
    printf("The data starts at address %x with value %d\n", ptr, *ptr);

    int numOfElements = sizeof(retechData)/sizeof(int);
    printf("There are %d elements in the array", numOfElements);

    for(int i=0; i<numOfElements; i++){
        printf("Address %x stores values in %d\n", ptr, *ptr);
        ptr++;
    }


    return EXIT_SUCCESS;
    }
