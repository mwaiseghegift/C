#include <stdio.h>
#include <stdlib.h>

struct Company {
    char name[50];
    char CEO[100];
    char location[10];
    int rating[];

};

int main()
{

struct Company RetechEmpire;
struct Company Mwashighadi_and_Sons;

//Retech Empire Specs
strcpy(RetechEmpire.name, "Retech Empire");
strcpy(RetechEmpire.location, "Mwatate");
strcpy(RetechEmpire.CEO, "Gift Mwaiseghe");
RetechEmpire.rating, 10;

//Mwashighadi and sons specs
strcpy(Mwashighadi_and_Sons.name, "Retech Empire");
strcpy(Mwashighadi_and_Sons.location, "Werugha");
strcpy(Mwashighadi_and_Sons.CEO, "Mwashighadi");
Mwashighadi_and_Sons.rating, 8;

//printing the info
printf("Name:\t\t %s\n", RetechEmpire.name);
printf("Location:\t %s\n", RetechEmpire.location);
printf("CEO\t\t %s\n", RetechEmpire.CEO);
printf("Rating\t\t %d\n\n", RetechEmpire.rating);

printf("Name:\t\t %s\n", Mwashighadi_and_Sons.name);
printf("Location:\t %s\n", Mwashighadi_and_Sons.location);
printf("CEO\t\t %s\n", Mwashighadi_and_Sons.CEO);
printf("Rating\t\t %d\n", Mwashighadi_and_Sons.rating);

return EXIT_SUCCESS;


}
