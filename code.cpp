#include <iostream>
using namespace std;

int main()
{
/*1
   int a= 15;
   int b= 16;
   cout<<"Sum is: "<< a+b<< endl;
*/

/*2

 int a=15;
 int b=16;
 cout<<"Sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
 */

/*3
    int a;
    cout<<"Enter First Number: ";
    cin>>a;
    int b;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"The Sum of "<<a<<" & "<<b<<" is: "<<a+b<<endl;
 */

 /*4

    string name;
    cout<<"Enter Your Name: ";
    cin>>name;

    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    cout<<"Hello "<<name<<" ,you are "<<age<<" years old."<<endl;
    */


 /*5
 
   int a= 15;
   int b= 17;

   cout<< --b + a++ + --a + b++;
   */

   /*6
   
   
   Part--1(Using third variable)*/
    /*
   int a = 14;
   int b = 15;

   int temp = a;
   a=b;
   b=temp;
    cout<<a<<b<<temp;
    */

   /*Part --2(Without using third variable)

    int a=15;
    int b=14;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;

    */

    /*7
    int len;
    cout<<"Enter alue of Length: ";
    cin>>len;

    int breadth;
    cout<<"Enter value of Breath: ";
    cin>>breadth;

    cout<<"The Area of Reactangle is: "<<len*breadth<<endl;
    cout<<"The Perimeter of Rectangle is: "<<2*(len+breadth)<<endl;
    */

    /*8

    

    int t;
    cout<<"No of Years (t): ";
    cin>>t;

    int P;
    cout<<"Enter Principal Amount (P): ";
    cin>>P;

    int r;
    cout<<"Annual Interest Rate (r): ";
    cin>>r;
    int d=r/100;
     

    int n;
    cout<<"Number of times interest is compounded per year (n): ";
    cin>>n;

    int p= n*t;
    int A=P*(((1+d/n))^p)-P;
    cout<<"d "<<d<<endl;
    cout<<"p "<<p<<endl;
    cout<<"Your Compound Interest is: "<<A<<endl;
    */

    /*12

    int A;
    cout<<"Enter First Number: ";
    cin>>A;
    int B;
    cout<<"Enter Second Number: ";
    cin>>B;

    if(A>B){
      cout<<"A is Greater than b.";
    }
    else if(A==B){
      cout<<"You enter same number.";
    }
    else{
      cout<<"B is Greater than A. ";
    }*/

    /*13 & 14 included due to else statement
    char user;
    cout<<"Enter Your Gender in Capital Letter M or F: ";
    cin>>user;

    if(user == 'm' || user == 'M'){
      cout<<"Good Morning Sir..";
    }
    else if(user== 'f' || user == 'F'){
      cout<<"Good Morning Mam..";
    }
    else{
      cout<<"Wrong Input";
    }
    */

    /*15

    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(n%2==0){
      cout<<"Number is Even..";
    }
    else{
      cout<<"Number is Odd..";
    }
*/

/*16
int age;
cout<<"Enter your age: ";
cin>>age;
if(age>=18){
  cout<<"You are eligible for voting..";
}
else if(age>=0){
  cout<<"Invalid age";
}
else{
  cout<<"You are not eligible to be a voter little one..";
}
  */
 
/*18

int a;
cout<<"Enter First Number: ";
cin>>a;
int b;
cout<<"Enter Second Number: ";
cin>>b;
int c;
cout<<"Enter Third Number: ";
cin>>c;

if(a>b && a>c){
  cout<<"A is greater than b and c";
}
else if(b>a && b>c){
  cout<<"B is greater than A And C";
}
else if(c>a && c>a){
  cout<<"C is greater than a and b";
}
else{
  cout<<"Invailid values..";
}
*/

/*19
 int year;
 cout<<"Enter Year: ";
 cin>>year;

 if(year%4==0 && year%100 != 0){
  cout<<"its a leap year..";
 }
 else if(year%4==0 && year%400==0){
  cout<<"its a leap year..";
 }
 else{
  cout<<"its not a leap year: ";
 }
 */

 /*20*/
  int unit;
  cout<<"Enter Unit: ";
  cin>>unit;
  if(unit>=0 && unit<=100){
    cout<<"Your Bill Is Rs"<<(unit*4.2)<<endl;
  }
  else if(unit>=101 && unit<=200){
    cout<<"Your Bill Is Rs "<<((100*4.2)+(unit-100)*6)<<endl;
    
  }
  else if(unit>=201 && unit<=400){
    cout<<"Your Bill Is Rs "<<((100*4.2)+(100*6)+(unit-200)*8)<<endl;
    
  }
  else{

    cout<<"Your Bill Is Rs "<<((100*4.2)+(100*6)+(200*8)+(unit-400)*13)<<endl;
  }
  return 0;
}