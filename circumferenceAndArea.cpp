#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    cout<<"Enter Radius: ";
    int r;
    cin>>r;


    int c = 2*3.14*r;
    int a = 3.14*pow(r,2);
    cout<<"Area = "<<a<<endl;
    cout<<"Circumference = "<<c;
    
    return 0;
}