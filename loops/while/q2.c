#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum, i=1;
    
    while(i<100){
        if (i%2!=0){
         sum = sum+i;
        }  
        i++;
    }
     printf("%d", sum);
}