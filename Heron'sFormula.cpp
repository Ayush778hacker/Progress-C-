#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Enter Side A: ";
    int a;
    cin>>a;

    cout<<"Enter Side B: ";
    int b;
    cin>>b;

    cout<<"Enter Side C: ";
    int c;
    cin>>c;

    int s = (a+b+c)/2;

    int Area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area = "<<Area;
    return 0;
}