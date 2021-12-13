#include <iostream>
using namespace std;

void move(int, int, int, int);

int main(){
    int diskNum;
    cout<<"Enter the number of disks";
    cin >> diskNum;
    move(diskNum, 1,3,2);
    system("PAUSE");
    return 0;
}

void move(int count, int num1, int num3, int num2){
    if (count>0){
        move(count-1, num1, num2, num3);
        cout<<"Move disk "<<count<<" from "<< num1<<" to "<<num3<<endl;
        move(count-1, num2, num3, num1);
    }
}