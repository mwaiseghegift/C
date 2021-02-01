#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
    char name[20];
    int Age;
    float Points;
};

int main()
{
    union Data regalo;

    strcpy(regalo.name, "Regalo");
    regalo.Age = 20;
    regalo.Points = 12;

    printf("Name\t:\t%s\n", regalo.name);
    printf("Age\t:\t%d\n", regalo.Age);
    printf("Points\t:\t%f\n", regalo.Points);

    return 0;
}

// Name and Age members of union got corrupted because the final value assigned to the variable has occupied the memory location and this is the reason that the value of points member is getting printed very well.