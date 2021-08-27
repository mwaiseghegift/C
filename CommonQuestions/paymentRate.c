#include <stdio.h>

int main(){
    int hours, rates, net;
    printf("Enter the Hours Worked :\n");
    scanf("%d", &hours);

    if(hours<=35){
        net = hours * 8;
        printf("Net pay: %d", net);
    }else if(hours>35<=(35+25)){
        int hoursExceeded = hours-35;
        net = (35*8)+hoursExceeded*(1.5*8);
        printf("Net pay: %d", net);
    }else if(hours>(35+25)){
        int first35 = hours*8;
        int extra25 = hours*(1.5*8);
        int after = (hours-(35+25))*(8.2);

        net = first35+extra25+after;
        printf("Net pay: %d", net);
    }
    return 0;
}