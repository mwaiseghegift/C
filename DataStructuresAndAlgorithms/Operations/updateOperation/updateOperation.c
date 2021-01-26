#include <stdio.h>
#include <stdlib.h>


void main(){
    int retechArray[] = {10, 12, 11, 9, 7, 12, 8, 6};
    int arraySize = 8;
    int i;
    int index;
    int updated = 12;


    printf("The original array\n");
    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i+1, retechArray[i]);
    }

    retechArray[3] = updated;

    printf("The updated array\n");

    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i+1, retechArray[i]);
    }

}
