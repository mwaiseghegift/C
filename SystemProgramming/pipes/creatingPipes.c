#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    int pipefd[2];

    if (pipe(pipefd) == -1){
        perror("pipe:");
        exit(EXIT_FAILURE);
    }
    printf("Read file descriptor %d\n", pipefd[0]);
    printf("Write file descriptor %d\n", pipefd[1]);
    return EXIT_SUCCESS;
}