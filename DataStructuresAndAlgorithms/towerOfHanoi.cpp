#include <iostream>
using namespace std;

void towerOfHanoi(int, int, int, int);

int main(){
    int diskNum; //No of disks to be move
    cout<<"Enter the number of disks: ";
    cin >> diskNum;
    towerOfHanoi(diskNum, 1,3,2);
    return 0;
}

void towerOfHanoi(int count, int num1, int num3, int num2){
    if (count>0){
        towerOfHanoi(count-1, num1, num2, num3);
        cout<<"Move disk "<<count<<" from "<< num1<<" to "<<num3<<endl;
        towerOfHanoi(count-1, num2, num3, num1);
    }
}

/*
    int num1 --> rod where disk is present
    int num2 --> Rod where the disk is to be moved
    int num2 --> Auxilliary
*/
