#include<iostream>
#include<cmath>
using namespace std;

int main(){

    /*23
    int n;
    cout<<"Enter How many times you want to print: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"Hello World"<<endl;
    }
    */
    /*24
    int n;
    cout<<"Enter where you want to print: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    */
   /*25
   int n;
   cout<<"Enter no from where you want to print the reverse loop: ";
   cin>>n;
   for(int i=n; i>=1;i--){
    cout<<i<<endl;;
   }
   */
    /*26
    int n;
    cout<<"Enter number you want to print its table: ";
    cin>>n;

    for(int i=1; i<=10;i++){
        cout<<n<< "*"<< i <<"="<< n*i<<endl;
    }
    */
    /*27
    int n;
    cout<<"Enter no where you want to get sum: ";
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;i++){
        sum= sum+i;
    }
    cout<<sum;
    */
   /*28
   int n;
   cout<<"Enter Number you wat factorial: ";
   cin>>n;
   int fact=1;

   for(int i=1;i<=n;i++){
    fact=fact*i;
   }
   cout<<fact;
   */
  /*29
  int n;
  cout<<"Enter number you want to discriminate even and odd and get their sum alone: ";
  cin>>n;

  int even=0;
  int odd =0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            even=even+i;
        }
        else{
            odd = odd+i;
        }
    }
    cout<<"Even Sum = "<<even<<endl;
    cout<<"Odd Sum = "<<odd;
    */
   /*30
   int n;
   cout<<"Enter number for you want factors: ";
   cin>>n;

   for(int i=1; i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;;
    }
    }
    */

    /*31
cout<<"Enter Number so that i can print its factors sum: ";
int n;
cin>>n;
int sum =0;

for(int i=1; i<=n;i++){
    if(n%i==0){
        sum=sum+i;
    
    }
}
cout<<sum;

*/
/*32
cout<<"Enter no: ";
int n;
cin>>n;
if(n==0){
    cout<<"No Prime";
    
}
else if(n==2){
    cout<<"prime";
    
}
else if(n%2==0){
    cout<<"Not prime";
}
else{

    for(int i=3; i<=n;i=i+2){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    }
    }
*/
/*33*/
cout<<"Enter first number: ";
int a;
cin>>a;
cout<<"Enter Second number: ";
int b;
cin>>b;
int sp=1; 
for(int i=1; i<=b;i++){
    
    sp= sp*a;
}
cout<<sp;

/*34*/
cout<<"Enter number which you want to spilit: ";
int n;
cin>>n;

int sv;
while(n>0){
    sv=n%10;
    cout<<sv<<endl;
    n=n/10;
}

/*35*/
cout<<"Enter number: ";
int n;
cin>>n;
int sd;
int ds=0;
while(n>0){
    sd=n%10;
    ds=ds+sd;
    n=n/10;
}
cout<<ds;

/*36*/
cout<<"Enter number: ";
int n;
cin>>n;
int sf;
while(n>0){
    sf=n%10;
    cout<<sf<<endl;
    n=n/10;
}

/*37*/
cout<<"Enter Number: ";
int n;
cin>>n;
int copy=n;
int rev;
while(n>0){
    int dig =n%10;
    rev=(rev*10)+dig;
    n=n/10;

}
if(copy==n){
    cout<<"Number is palindromic";
}
else{
    cout<<"Number is not palindromic";
}
    cout<<rev;
return 0;
}
