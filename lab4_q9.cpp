#include <iostream>
 
using namespace std;
int main()
{float P,R,T,A,A1;
//assigning values
cout<<"Enter the principal amount"<<endl;
cin>>P;
cout<<"Enter the Rate per year"<<endl;
cin>>R;
cout<<"Enter the Time period involved in years"<<endl;
cin>>T;
A=1+R*T;
A1=P*A/100;
cout<<"The Simple Interest is = "<<A1<<endl;
//DONE
} 


