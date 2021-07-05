#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum, i=1;
    for(int n=0;n<100;n++){
        if (n%2!=0)
            {
            sum = sum+n;
            }   
    }
     printf("%d", sum);
}