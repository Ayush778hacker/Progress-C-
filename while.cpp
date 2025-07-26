#include <iostream>
#include <cmath>
using namespace std;

int main(){
        /*While Loop se Question solving*/
    /*23*/
    cout<<"Enter number: ";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<"Hello World"<<endl;
        i++;
    }
    
 /*24
   cout<<"Enter Number: ";
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    cout<<i<<endl;;
    i++;
   }
*/
/*25*/
 cout<<"Enter Number: ";
 int n;
 cin>>n;
 int i=n;
 while(i>=1){
    cout<<i<<endl;;
    i--;
 }
  
 /*26*/
  cout<<"Enter Number so that i can print its Table: ";
  int n;  
  cin>>n;
  int i=1;
  while(i<=10){
    cout<<n <<" * "<< i <<" = "<< n*i <<endl;
    i++;
  }
  
 /*27*/
 cout<<"Enter number: ";
 int n;
 cin>>n;
 int i=0;
 int sum =0;
 while(i<=n){
    sum=sum+i;
    i++;
 }
 cout<<"Sum ="<<sum;
 
/*28*/
cout<<"Enter no so that i can calculate its factorial: ";
int n;
cin>>n;
int i=1;
int fact=1;
while(i<=n){
    fact=fact*i;
    i++;
}
cout<<"Factorial of "<<n<<" = "<< fact;

/*29*/
cout<<"Enter number so that i can seperate even & odd and give you sum: ";
int n;
cin>>n;
int even=0;
int odd =0;
int i=1;
while(i<=n){
    if(i%2==0){
        even =even+i;
        i++;
    }
    else{
        odd = odd+i;
        i++;
    }
}
cout<<"Sum of even = "<<even<<endl;
cout<<"Sum of odd = "<<odd<<endl;

/*30*/
cout<<"Enter number to find its factors: ";
int n;
cin>>n;
int i=1;

while(i<=n){
    if(n%i==0){
        cout<<i<<endl;
        
    }
    i++;
}

/*31*/
cout<<"Enter Number: ";
int a;
cin>>a;
int i=1;
int sf=0;
while(i<=a){
    if(a%i==0){
        sf=sf+i;
    }
    i++;
}
cout<<"Sum ="<<sf;

    return 0;
}