#include <stdio.h>
#include <stdlib.h>

int main(){
    int pipefds[2];
    char data[20] = "the data to transfer";


    if (pipe(pipefds) == -1){
        printf("Unable to create a pipe");
        return 1;
    }

    printf("writing to pipe data: %s\n", data);
    write(pipefds[1], data, sizeof(data));
    printf("reading from pipe\n");
    read(pipefds[0], data, sizeof(data));
    printf("read data: %s\n", data);
    return 0;
}