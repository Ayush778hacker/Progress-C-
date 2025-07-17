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

 /*20
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
  }*/

  /*#Task
  #1 INR  
  
 int rupee;
 cout<<"Enter Rupees You want to change into smallar notes: ";
 cin>>rupee;

 int remaining =0;
 int note = 0;
 

  if(rupee/500 !=0 || rupee/500 ==0){
    note = rupee/500;
    cout<<"500 ke notes = "<<note<<endl;;
    remaining = rupee%500;
  }
  if(rupee/200 != 0 || remaining/200 ==0){
    note = rupee/200;
    cout<<"200 ke notes ="<<note<<endl;
    remaining = remaining%200;
  }
  if(rupee/100 !=0 || remaining/100 ==0){
    note = rupee/100;
    cout<<"100 ke notes = "<<note<<endl;
    remaining =remaining%100;
    
  }
  if(rupee/50 !=0 || remaining/50 ==0){
    note = rupee/50;
    cout<<"50 ke notes = "<<note<<endl;
    remaining =remaining%50;
  
  }
  if(rupee/20 != 0 || remaining/20 ==0){
    note = rupee/20;
    cout<<"20 ke notes = "<<note<<endl;
    remaining =remaining%20;
    
    
  }
  if(rupee/10 != 0 || remaining/10 ==0){
    note = rupee/10;
    cout<<"10 ke notes = "<<note<<endl;
    remaining =remaining%10;
    
  }
  else{
    cout<<"Remaining Rs = "<<remaining;
  }
  */

 /*#Task 2
 char ch;
 cout<<"Enter Your Gender in capital letters only M or F: ";
 cin>>ch;

 char qualifications;
 cout<<"Enter Your Qualification in short form Example"<<endl<<" Post Graduate:P "<<endl<<"Graduate:G"<<endl;
 cin>> qualifications;
 
 double service;
 cout<<"Enter Your Service In Years: ";
 cin>>service;


 if(ch== 'M'  && qualifications == 'P' && service>=10){
  cout<<"Your salary Is : 15000";
 }
 else if(ch=='M'  && qualifications =='G' && service>=10){
  cout<<"Your Salary is:10000 ";
 }
 else if(ch=='M' && qualifications =='P' && service<10){
  cout<<"Your salary is : 10000";
 }
 else if(ch=='M'  && qualifications =='G' && service<10){
  cout<<"Your Salary is:7000 ";
 }
 else if(ch=='F'  && qualifications =='P' && service>=10){
  cout<<"Your Salary is:12000 ";
 }
 else if(ch=='F'  && qualifications =='P' && service<10){
  
  cout<<"Your Salary is:10000 ";
 }
 else if(ch=='F'  && qualifications =='G' && service>=10){

  cout<<"Your Salary is:9000 ";
 }
 else if(ch=='F'  && qualifications =='G' && service<10)
 {
   cout<<"Your Salary is:6000 ";
 }
 else{
  cout<<"Error";
 }
  */
 /*21*/
 char vow;
 cout<<"Enter Letter in Capital letters only : ";
 cin>>vow;
 if(vow=='A' || vow=='E' || vow=='I' || vow=='O'|| vow=='U'){
  cout<<vow<<" is vowel.";
 }
 else{
  cout<<vow<<" Is A Constant";
 }
  return 0;
}