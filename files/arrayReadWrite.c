#include <stdio.h>

int main(){

    int vogue[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    FILE *fp;
    char buff[255];

    fp = fopen("/home/gateway47/Documents/C Intro/gf/the_file1.txt","w+");
    for(i=0; i<10; i++){
        printf("vogue %d = %d\n", vogue[i], vogue[i]+100);
        fprintf(fp, "%d\n", vogue[i]);
        }

}
