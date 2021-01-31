#include<stdio.h>
#include <stdlib.h>

struct Company {
    char name[50];
    char CEO[100];
    char location[10];
    int rating[];

};

//function declaration
void printCompany(struct Company theeComapny);

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
printCompany(RetechEmpire);
printCompany(Mwashighadi_and_Sons);

return EXIT_SUCCESS;


}

void printCompany(struct Company theeCompany){
    printf("Name:\t\t %s\n", theeCompany.name);
    printf("Location:\t %s\n", theeCompany.location);
    printf("CEO\t\t %s\n", theeCompany.CEO);
    printf("Rating\t\t %d\n\n", theeCompany.rating);
    }
