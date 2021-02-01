//code to show that unions are used to store a collection of data as 1


#include <stdio.h>
#include <stdlib.h>

union Data {
    char Name[20];
    int Age;
    float Marks;
    };

int main()
{
    union Data Regalo;
    printf("Memory size = %d", sizeof(Regalo));
    return EXIT_SUCCESS;
}
