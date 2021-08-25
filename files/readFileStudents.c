#include <stdio.h>

int main(){
    FILE *fp;

    int marks[10] = {10,20,33,40,50};

    fp = fopen("students.txt", "w+");

    for(int n=0; n<10; n++){
        fprintf(fp, "%d", marks[n]);
    }
}