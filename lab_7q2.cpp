#include <iostream>
using namespace std;

int num(int i,int n)
{
	if (i>n)
	{
	 return 0;
	}
	else
	{
	 cout << i;
	 i++;
	 num(i,n);
	}
}
int main(){
int n;
cout<<"Enter number till where you want to see natural numbers"<<endl;
cin>>n;
num(1,n);
return 0;
}
		
		
