/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    int p1,p2,p3,p4,media;
    std::cout <<"Por favor, escreva um número";
    std::cin >>p1;
    std::cout <<"Por favor, escrevca um número";
    std::cin >>p2;
    std::cout <<"Por favor, escreva um número";
    std::cin >>p3;
    std::cout <<"Por favor, escreva um número";
    std::cin >>p4;
    media = (p1+p2+p3+p4)/4;
    std::cout <<"A media é "<< media << ".";
}
