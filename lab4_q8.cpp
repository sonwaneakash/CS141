#include <iostream>
using namespace std;
int main(){
//assigning values
float mrk1,mrk2,mrk3,mrk4,mrk5,Total,average,percentage;
//Entering Values
cout<<"Enter Marks in CS"<<endl;
//cin used for assigning value for angles
cin>>mrk1;
cout<<"Enter Marks in Maths"<<endl;
cin>>mrk2;
cout<<"Enter Marks in Chemistry"<<endl;
cin>>mrk3;
cout<<"Enter Marks in English"<<endl;
cin>>mrk4;
cout<<"Enter Marks in Physics"<<endl;
cin>>mrk5;
//calculations
Total=mrk1+mrk2+mrk3+mrk4+mrk5;
average=Total/5;
percentage=average*100;
cout<<"Total="<<Total<<endl;
cout<<"Average="<<average<<endl;
cout<<"percentage="<<percentage<<endl;
}



