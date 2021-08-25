#include <stdio.h>

//calculate sum of length of 10, add 10 in each loop
int main(){
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    int sum=0;

    for(int n=0; n<10;n++){
      sum = sum+(array[n]+10);
    }
    printf("%d", sum);
}

//string array
