#include <stdio.h>
#include <stdlib.h>


//reading a file in c
int main(){

    FILE *fp;
    char buff[255];

    fp = fopen("/home/gateway47/Documents/C Intro/gf/the_file.txt","r");

    //reads till there is a space
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);

    //reads the rest of the sentence
    fgets(buff, 255, (FILE*)fp);
    printf("2 : %s", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3 : %s", buff);
    fclose(fp);
}
