//command line arguments
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2){
        printf("The argument supplied is %s\n", *argv[1]);
        }
    else if(argc >2){
        printf("You applied too many arguments");
    }
    else {
    printf("Yea");
    }
}
