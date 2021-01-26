#include <stdio.h>
#include <stdlib.h>


main(){
    int retechArray[] = {100, 98, 72, 90, 99, 81, 74, 87};
    int arraySize = 8;
    int i;
    int index;

    printf("The original array\n");
    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i, retechArray[i]);
    }

    //increased the size of the array
    arraySize = arraySize +1 

    // replaces index 2
    retechArray[2] = 94;
    retechArray[8] = 90;

    printf("The After array\n");
    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i, retechArray[i]);
    }
}
