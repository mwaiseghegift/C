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

    for(i=0; i<n; ++i){
        printf("\nEnter Name: ", i+1);
        scanf("%s", &name);

        printf("\nEnter Marks: ");
        scanf("%d", &marks);

        fprint(sFile, "\n%d Name: %s   Marks: %d \n", i, name, marks);
    }
    fclose(sFile);
    return 0;
}