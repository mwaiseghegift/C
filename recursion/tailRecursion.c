#include <stdio.h>

void func(int n){
    if(n == 0)
        return;
    else
        printf("%d", n);
    return func(n-1);
}

int main(){
    func(3);
    return 0;
}