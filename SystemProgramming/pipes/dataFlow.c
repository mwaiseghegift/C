#include <stdio.h>
#include <stdlib.h>

int main(){
    int pipefds[2];
    char data[2][20] = {"data"};
    char childdata[20];


    if (pipe(pipefds) == -1){
        printf("Unable to create a pipe");
        return 1;
    }

    printf("Writing to pipe - Message 1 is %s\n", data[0]);
    write(pipefds[1], data[0], sizeof(data[0]));
    read(pipefds[0], childdata, sizeof(childdata));
    printf("Reading from pipe – Message 1 is %s\n", childdata);
    write(pipefds[1], data[1], sizeof(data[0]));
    read(pipefds[0], childdata, sizeof(childdata));
    return 0;
}