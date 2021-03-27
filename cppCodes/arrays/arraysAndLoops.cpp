#include <iostream>
#include <string>
using namespace std;


int main(){
    string employees[5] = {"Joel", "Clemence", "Mercy", "Michal"};

    //printing them using forLoop
    for(int i = 0;i<5;i++){
        int index = i+1;
        cout<<index<<" "<<employees[i]<<endl;
    }

    //inserting
    employees[4] = "Clever";

    for(int i =0; i<5; i++){
    int index = i+1;
        cout<<index<<" "<<employees[i]<<endl;
    }

}
