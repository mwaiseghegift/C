#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


int main(){
    int pid = fork();
    int i, n=10;
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm;

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
    }}

    else {
        wait(NULL);
    }
}