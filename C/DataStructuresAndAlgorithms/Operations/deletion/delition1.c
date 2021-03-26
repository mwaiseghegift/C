#include <stdio.h>
#include <stdlib.h>

main(){
    int retechArray[] = {100, 98, 72, 90, 99, 81, 74, 87};
    int i;
    int to_delete;
    int arraySize = 8;
    int index = 1;
    printf("retech points are as follows\n");
    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i+index, retechArray[i]);
    }

    to_delete = 3;

    while(to_delete < arraySize){
        retechArray[to_delete-1] = retechArray[to_delete];
        to_delete = to_delete+1;
    }


    arraySize = arraySize-1;

    printf("retech points are as follows\n");
    for(i=0; i<arraySize;i++){
        printf("%d : %d\n", i+index, retechArray[i]);
    }


}
