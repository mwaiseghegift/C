#include <stdio.h>
#include <stdlib.h>


int main()
{

    char name[50];
    int age;


    printf("Enter your Details:\n");
    printf("Name\n");
    scanf("%s", &name);

    printf("Age\n");
    scanf("%d", &age);

    printf("Name : %s\nAge : %d", name, age);
    return 0;
}
