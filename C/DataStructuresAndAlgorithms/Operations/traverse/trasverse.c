#include <stdio.h>
#include <stdlib.h>

main(){
    int ageArray[] = {18,20,17,30,25};
    int item = 10, k=20, n=5;
    int i=0, j=n;
    printf("This is the list:\n");
    for(i; i<j; i++){
        printf("age[%d] = %d \n", i, ageArray[i]);
    }
}

//note: traverse prints all the arrays one by one