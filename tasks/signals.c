#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


int main(){
    int pid = fork();

    if (pid == -1){
        return 1;
    }

    if (pid == 0){
        // child
        
    }

    else {
        wait(NULL);
    }
}