#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum=0, i=1;

    do{
        if (i%2!=0)
            {
            sum = sum+i;
            i++;
        } 
    }while(i<100);

    printf("%d",sum);
}