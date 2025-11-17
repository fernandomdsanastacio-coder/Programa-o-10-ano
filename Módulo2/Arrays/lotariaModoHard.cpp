#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int adv[5], ramdomNum[5], i;
	for (i = 0; i < 5; i++)
	{
		ramdomNum[i + 1] = (rand() % 49) + 1;
		cout << "advinhe o " << i + 1 << "º número";
		cin >> adv[i + 1];
		
	}
	if (adv[i] == ramdomNum[i])
	{
		cout << "Acertas-te tudo, Parabéns";
	}
	 if (adv[1]== ramdomNum[1])
	{
		cout << ramdomNum[1];
		cout << "Acertas-te o primeiro número";
	}
	 if (adv[2] == ramdomNum[2])
	{
		cout << ramdomNum[2];
		cout << "Acertas-te o segundo número";
	}
	 if (adv[3] == ramdomNum[3])
	{
		cout << ramdomNum[3];
		cout << "Acertas-te o terceiro número";
	}
	 if (adv[4] == ramdomNum[4])
	{
		cout << ramdomNum[4];
		cout << "Acertas-te o quarto número";
	}
	 if (adv[5] == ramdomNum[5])
	{
		cout << ramdomNum[5];
		cout << "Acertas-te o quinto número";
	}
	else
	{
		cout << "Não acertas-te nada, parabéns";
	}
	 cout << endl << ramdomNum[1] ;
	 cout << endl << ramdomNum[2];
	 cout << endl << ramdomNum[3] ;
	 cout << endl << ramdomNum[4];
	 cout << endl << ramdomNum[5] ;
}
