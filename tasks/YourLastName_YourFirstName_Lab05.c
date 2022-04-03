/*
CS 410 OS
Lastname Firstname
Lab 05
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

// set up a signal handler for SIGSTOP and SIGCONT
void sig_handler(int signo) {
    if (signo == SIGSTOP) {
        printf("SIGSTOP\n");
    } else if (signo == SIGCONT) {
        printf("SIGCONT\n");
    }
}

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

        // use SIGSTOP to pause the process at i == 4, and SIGCONT to resume
        if (i == 4){
            kill(getpid(), SIGSTOP);
            printf("Paused\n");
            fflush(stdout);
            sleep(1);
            kill(getpid(), SIGCONT);
            printf("Resumed\n");
            fflush(stdout);
            sleep(1);
        }

       
    }

    printf("\n");
    return 0;

}