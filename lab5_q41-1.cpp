//load the lib
#include<iostream>
using namespace std;
//main fn
int main (){
            //initialising i and ic
            int i=33;
            //looping i from 33 to 126 to display all the values of the ascii characters along with the character
            for (i=33;i<=126;i++){//defining icc, printing its value and adding 1 to it.
                                  char ic(i);
                                  cout <<"value "<<i<<" corresponds to the ascii character: "<<ic<<endl;
                                  }
            //terminate
            return 777;
}

