#include <stdio.h>

int main(){
    int marks[10] = {60, 90, 80, 50, 100, 98, 88, 72, 95, 99 };
    int i;

    for(i=0; i<11; i++){
        printf("%d", marks[i]);
    }
    return EXIT_SUCCESS;
    }