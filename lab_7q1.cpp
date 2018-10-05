#include <iostream>
using namespace std;

int pow(int a,int b)
{
	if (b==0)
	{
	 return 1;
	}
	else {
	return a*pow(a,b-1);
	}
}
int main(){
int base,power,r;
cout<<"Enter base"<<endl;
cin>>base;
cout<<"Enter power"<<endl;
cin>>power;
r=pow(base,power);
cout<<r<<endl;
return 0;
}
