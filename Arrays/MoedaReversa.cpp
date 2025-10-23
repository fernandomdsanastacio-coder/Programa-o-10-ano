/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string names[5]={};
    int i;
    char sair;
    do{
    for(i = 0; i < 5; i++)
    {
    cout << "Dá-me um nome ";
    cin>> names[i];
    }
    for(i = 4; i>=0; i--)
    {
        cout << names[i]<<" ";
    }
    cout<< "\ndeseja sair?(s/n) ";
    cin >> sair;
    }while(sair != 's');
    return 0;
}