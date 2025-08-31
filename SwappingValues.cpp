#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter First number: ";
    cin>>a;
    int b;
    cout<<"Enter Second Number: ";
    cin>>b;

    int temp = a;
    a=b;
    b=temp;

    cout<<"a: "<<a;
    cout<<"b: "<<b;
    
     // Withot using third variable
     a= a+b;
     a= a-b;
     b= a-b;
     cout<<"a: "<<a;
     cout<<"b: "<<b;
      
    return 0;

}