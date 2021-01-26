#include <stdio.h>
#include <stdlib.h>

main(){
    int retechArray[] = {100, 98, 72, 90, 99, 81, 74, 87};
    int i;
    int index = 1;
    printf("retech points are as follows\n");
    for(i=0; i<8;i++){
        printf("%d : %d\n", i+index, retechArray[i]);
    }
}