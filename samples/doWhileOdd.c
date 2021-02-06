#include <stdio.h>
#include <stdlib.h>


//lists all odd numbers from 0 to 100
int main(){
    int i=1;
    int sum;


    do{
    printf("%d\n", i);
    i = i+2;
    sum = i+(i+2);
        }while(i<12);
    return 0;
 }
