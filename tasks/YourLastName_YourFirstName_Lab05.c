
/*
    CS 410 OS
    Lastname Firstname
    Lab 05
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int main(){
    int pid = fork();
    int i, n=10;
    int firstTerm = 0, secondTerm = 1, nextTerm;
    int currentIndex;

    if (pid == -1){
        return 1;
    }

    if (pid == 0){
        // child
        for (i = 0; i < n; i++){
            printf("%d ", firstTerm);
            fflush(stdout);
            sleep(1);
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;

            currentIndex = i;

        }
    }

    else {
        sleep(5);
        // kill SIGSTOP with a message
        printf("\nSending SIGSTOP to child\n");
        kill(pid, SIGSTOP);

        printf("\n");
        sleep(5);
        printf("Sending SIGCONT to child\n");
        sleep(1);
        kill(pid, SIGCONT);
        sleep(5);
        kill(pid, SIGSTOP);
    }
}