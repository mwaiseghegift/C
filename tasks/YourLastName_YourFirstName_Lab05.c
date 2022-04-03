/*
CS 410 OS
Lastname Firstname
Lab 05
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(){
    int i, n=10;
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm;

    for (i = 0; i < n; i++){
        printf("%d ", firstTerm);
        fflush(stdout);
        sleep(1);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        // A kill signal to terminate the program when i == 4 and resume after some time)
        if (i == 4){
            printf("Program terminated\n");
            kill(getpid(), SIGKILL);

        }
    }

    printf("\n");
    return 0;

}