#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
    //use two integer array size 5  and print the array
    int a[5]={1,2,3,4, 5};
    int b[5]={0,1,2,3,4};

    //randomly chose one element from first array divide by another element in second array

    int c=a[rand()%5]/b[rand()%5];
    // use a delay of one second between division
    printf("%d\n",c);

    sleep(1);

    //if the result is zero then print invalid operation
    if(c==0){
        // use SIGFPE signal to print invalid operation
       raise(SIGFPE);
       printf("\nDivision by zero is not possible\n");
    }

    //use kill -l command o display the list of signals
    kill(getpid(),SIGTERM);


    return 0;

    
}

















