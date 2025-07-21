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

    /*31*/



/*32*/
cout<<"Enter no: ";
int n;
cin>>n;
int i=0;
while(i<=n){
    if(n%i==0)
    i++;
}
    return 0;
}