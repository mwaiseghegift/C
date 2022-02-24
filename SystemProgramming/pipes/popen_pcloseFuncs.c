//popen pclose func

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(){
    FILE *rd;
    char buffer[50]; //buffer as a stream storage
    // print string to write data into the buffer
    sprintf(buffer, "name first"); 
    // rd name of the file that will use open pipe using write mode.
    rd = popen("wc -c", "w");
    fwrite(buffer, sizeof(char), strlen(buffer),rd);
    pclose(rd);
}

/*
    cmd that reads either standard input or a
    list of computer files and generate one of the
    following statistics newline, word count, and byte
    count.
*/