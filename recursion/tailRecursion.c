/* In tail recursive, The recursive call is the last thing done by the function
There is no need to keep record of the previous state */

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