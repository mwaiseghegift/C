#include <iostream>
using namespace std;

int main()
{

    float temp;

    cout<<"Enter your temperature"<<endl;
    cin>>temp;

    if (temp>27.5 && temp < 50.5){
        cout<<"Hot"<<endl;
    }
    else if (temp<27.5){
        cout<<"Cold"<<endl;
    }
    else if (temp>50.5){
        cout<<"Out of Scope"<<endl;
    }
    else{
        cout<<"Error! Please try again"<<endl;
    }

    return 0;
}