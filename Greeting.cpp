#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    cout<<"Enter your Gender Male(M)/Ffemale(F): ";
    char ch;
    cin>>ch;

    if(ch=='M' || ch=='m'){
        cout<<"Good Morning Sir, Have A Nice Day.";
        
    }
    else if (ch=='F' || ch=='f'){
        cout<<"Good Morning Maam,Have A Nice Day.";
        
    }
    else{
        cout<<"Invaild value";
    }
    return 0;
}