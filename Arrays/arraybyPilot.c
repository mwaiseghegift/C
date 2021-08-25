#include <stdio.h>
#include <stdlib.h>

//a code that calculates the sum and average of an array of length 10
int main(void) {
    // Declare an array of 10 ints
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    int sum=0;

    for(int n=0; n<10; n++){
        if (array[n]%2==0){
            sum = sum+array[n];
        }
    }
     printf("Sum = %d\n", sum);
     float average = sum/10;
     printf("Average = %f", average);
    return 0;
}

