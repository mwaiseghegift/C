#include <stdio.h>

int main(){
    char name[50];
    int marks, i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *sFile;
    sFile = (fopen("student.txt", "W"));

    if (sFile == NULL){
        printf("Oops, There was an error with the file");
        exit(1);
    }
}