#include <stdio.h>

int main(){
    int hours, rates, net;

    printf("Enter the Hours Worked :\n");
    scanf("%d", &hours);

    if(hours<=35){
        net = hours * 8;
    }else if(hours>35<=(35+25)){
        int hoursExceeded = hours-35;
        net = (35*8)+hoursExceeded*(1.5*8);
    }
}