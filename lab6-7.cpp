
//include the library file
#include<iostream>
using namespace std;

int byvalue(int a,int b)
{int c= a+b;
return c;}

void byreference(int a,int b,int &sum)
{sum= byvalue(a,b);
cout<<sum;}
//Write a main function with variables
int main(){
int a,b,sum=0;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
byvalue(a,b);
byreference(a,b,sum);
return 0;}
