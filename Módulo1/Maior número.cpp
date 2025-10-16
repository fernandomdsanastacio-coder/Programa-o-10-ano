/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
  using namespace std;

int main()
{
    int P1,P2,P3;
    cout<<"Dá-me 1 número ";
    cin>>P1;
    cout<<"Dá-me 1 número ";
    cin>>P2;
    cout<<"Dá-me 1 número ";
    cin>>P3;
    if(P1>P2 && P1>P3){
        cout<<"O maior número é "<<P1;
    }else if(P2>P3){
        cout<<"O maior número é "<<P2;
    }else{
        cout<<"O maior número é "<<P3;
    }
  
}
