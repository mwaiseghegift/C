#include <stdio.h>
#include <stdlib.h>


main(){
    int retechArray[] = {10, 12, 11, 9, 7, 12, 8, 6};
    int arraySize = 8;
    int i = 0;
    int index;
    int search_index = 0;
    int item_to_search = 9;

    printf("The original array\n");
    for(i; i<arraySize;i++){
        printf("%d : %d\n", i+1, retechArray[i]);
    }

    while(search_index<arraySize){
        if(retechArray[search_index] == item_to_search){
            break;
        }
        search_index = search_index+1;
    }

    printf("item found at position %d",  search_index+1);

}
