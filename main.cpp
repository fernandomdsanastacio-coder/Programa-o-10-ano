/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int F,I,P,M,media;
    std::cout<<"Nota de Fisico-Quimica ";
    std::cin>>F;
    std::cout<<"Nota de Matemática ";
    std::cin>>M;
    std::cout<<"Nota de Português ";
    std::cin>>P;
    std::cout<<"Nota de Inglês ";
    std::cin>>I;
    media=(F+M+P+I)/4;
    std::cout<<"A media é"<<media<<" .";
    return 0;
}