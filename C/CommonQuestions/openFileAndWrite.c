#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;

    fp = fopen("/home/gateway47/Documents/C Intro/gf/the_file.txt", "w");
    fprintf(fp, "Welcome to programming");
    fclose(fp);
}