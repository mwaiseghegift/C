#include <stdio.h>
#include <stdlib.h>


int main()
{

    int name[50];

    printf("Enter your name\n");
    gets(name);

    printf("\nThe name you entered is\n");
    puts(name);

    return 0;
}

/* The char *gets(char *s) function reads a line from stdin into the buffer pointed 
to by s until either a terminating newline or EOF (End of File). */