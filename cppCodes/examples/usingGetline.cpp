#include <iostream>
#include <string>

using namespace std;

int main()
{

string name, unitName;
int marks;


    cout << "Enter your full name(first name, middle name and last name)\n!" << endl;
    getline(cin, name);
    cout<< "Enter the unit name\n";
    getline(cin, unitName);
    cout<< "Enter your Marks\n";
    cin>>marks;
    cout<<"Name:   "<<name<<endl;
    cout<<"Unit Name "<<unitName<<endl;
    cout <<"Marks "<<marks<<endl;
    return 0;
}