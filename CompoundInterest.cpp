#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Enter Principal Amount: ";
    int p;
    cin>>p;

    cout<<"Annual Interest Rate: ";
    int r = r/100;
    cin>>r;

    cout<<"Number Of Times Interest is compounded per year: ";
    int n;
    cin>>n;

    cout<<"Time (in years) : ";
    int t;
    cin>>t;
    int powerWork = pow((1+(r/n)),n*t);
    int A = p*powerWork;
    cout<<"A = "<<A<<endl;
    cout<<"Compound Interest ="<<A-p; 

    return 0;
}