#include <iostream>
using namespace std;
//defining the first function
int f1(int a,int b){
if (a<b) {return a;}
else if (b<a) {return b;}
else if (a==b) {return 0;}
}
void f2(int a,int b,int &c){
if (a<b){c=a;}
else if (b<a) {c=b;}
else if (a==b){c=0;}
}
//Driver function
int main(){
int a,b,c,d;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
//calling functions
c=f1(a,b);
if (c==0)
{cout<<"Both the numbers are equal"<<endl;}
else 
{cout<<c<<" is minimum"<<endl;}
//calling f2
f2(a,b,d);
if (d==0)
{cout<<"Both the numbers are equal"<<endl;}
else
{cout<<d<<" is minimum"<<endl;}
return 0;}
