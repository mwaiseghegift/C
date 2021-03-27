#include <iostream>
#include <string>
using namespace std;

//A pointer is a variable that stores the memory address as its value.

/*

*/

int main(){
    string name = "Gift";
    //this is how
    string* namePtr = &name;

    cout << name<<endl; //outputs Gift
    cout<<&name<<endl;//outputs the memory address
    cout <<*namePtr << endl; //outputs Gift The value of the pointer

    //changing the value of a pointer
    *namePtr = "Mwaiseghe";
    cout<<&name<<endl;//outputs the memory address
    cout <<*namePtr<<endl;

}