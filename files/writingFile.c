#include <stdio.h>
#include <stdlib.h>


//Cod efor writing a file
int main(){

    FILE *fp;

    fp = fopen("/home/gateway47/Documents/C Intro/gf/the_file.txt","w+");

    //using fprintf
    fprintf(fp, "RETECH will be the next greatest empire...\n");

    //using fputs
    fputs("You loved one girl but she ended up screwing you..\n", fp);
    fclose(fp);
}
