#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    cout<<"Enter Radius: ";
    int r;
    cin>>r;
    
    int sa = 4*3.14*pow(r,2);
    cout<<"Surface Area Of Sphere: "<<sa;
    return 0;
}