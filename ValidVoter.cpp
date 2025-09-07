#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    cout<<"Enter Name: ";
    string name;
    cin>>name;
    cout<<"Enter Your Age: ";
    int age;
    cin>>age;
    int years = 18-age;

    if(age>=18){
        cout<<"Hello "<<name<<" ,You Are A valid voter."<<endl;
    }
    else if(age<18){
        cout<<"Sorry "<<name<<" ,you can't cast vote."<<endl;
        cout<<"You need "<<years<<" more yearsfor casting your first vote."<<endl;
    }
    else{
        cout<<"Invalid value";
    }


    return 0;
}