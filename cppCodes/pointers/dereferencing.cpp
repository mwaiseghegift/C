#include <iostream>
#include <string>
using namespace std;

//A pointer is a variable that stores the memory address as its value.

/*

you can also use the pointer to get the 
value of the variable, by using the * operator (the dereference operator)
*/

int main(){
    string name = "Gift";
    //this is how
    string* namePtr = &name;

    cout << name<<endl; //outputs Gift
    cout <<*namePtr << endl; //outputs Gift--dereferencing


}