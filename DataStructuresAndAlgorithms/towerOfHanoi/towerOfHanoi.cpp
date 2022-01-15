#include <iostream>
using namespace std;

void towerOfHanoi(int, int, int, int);
int step_counter = 0;

int main(){
    int diskNum; //No of disks to be move
    cout<<"Enter the number of disks: ";
    cin >> diskNum;
    towerOfHanoi(diskNum, 1,3,2);

    //show number of steps taken
    cout<<"\vIt took "<<step_counter<<" steps for the "
                <<diskNum<<" disks to reach destination";
    return 0;
}

void towerOfHanoi(int count, int disk1, int disk3, int disk2){
    if (count>0){
        towerOfHanoi(count-1, disk1, disk2, disk3);
        cout<<"Move disk "<<count<<" from "<< disk1<<" to "<<disk3<<endl;
        step_counter+=1;
        towerOfHanoi(count-1, disk2, disk3, disk1);
    }
}

/*  
    int count --> Number of disks
    int disk1 --> rod where disk is present (Source)
    int disk2 --> Rod where the disk is to be moved (Destination)
    int disk3 --> Auxilliary
*/
