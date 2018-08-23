#include <iostream>
#include <cmath> 
using namespace std;
int main()
{double p,R,T,A,A1,N,A2;
//assigning values
cout<<"Enter the principal amount"<<endl;
cin>>p;
cout<<"Enter the Rate per year"<<endl;
cin>>R;
cout<<"Enter the Time period involved in years"<<endl;
cin>>T;
cout<<"Enter Compounds per year"<<endl;
cin>>N;
A=p*(1+R/N);
A2=N*T;
A1=pow(A,A2);
cout<<"The Compound Interest is = "<<A1<<endl;
//DONE
} 


