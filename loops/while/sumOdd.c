#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum=0, i=1;

    do{
        sum = sum+i;
        i++;
    }while(i%2!=0 && i<100);

    printf("%d",sum);
}