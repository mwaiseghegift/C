#include <stdio.h>
#include <stdlib.h>

int main()
{
    int retechOrder = 50;
    int *retechOrderPointer;

    //assigning the addess of the variable to a pointer
    retechOrderPointer = &retechOrder;
    printf("The adress %x contains %d", retechOrderPointer, *retechOrderPointer);
    return EXIT_SUCCESS;

    //%x is used for hexadecimal number
}
