#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
    char name[20];
    int Age;
    float points;
};

int main()
{
    union Data regalo;

    strcpy(regalo.name, "Regalo");
    printf("Name: %s\n", regalo.name);

    regalo.Age = 20;
    printf("Age: %d\n", regalo.Age);

    regalo.points = 12;
    printf("Points: %f", regalo.points);

    return 0;
}

