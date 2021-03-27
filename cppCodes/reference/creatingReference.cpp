#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Gift";
    string &programmer = name;

    cout<<name<<endl; //outputs Gift
    cout<<programmer<<endl; //outputs Gift
}