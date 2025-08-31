#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Length: ";
    int length;
    cin>>length;

    cout<<"Enter Width: ";
    int width;
    cin>>width;

    int Area = length*width;
    int perimeter = 2*(length + width);
    cout<<"Area: "<<Area;
    cout<<"Perimeter: "<<perimeter;

    return 0;
}