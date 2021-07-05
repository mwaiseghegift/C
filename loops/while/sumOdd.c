#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum=0, i=1;

    do{
        sum = sum+i;
        i++;
    }while(i<100 && i%2==0);

    printf("%d",sum);
}