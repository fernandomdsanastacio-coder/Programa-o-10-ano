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
	int tent = 0, numAdv[4], numJog[4], i,j,aux;
	for (i = 0; i < 4; i++)
	{
		numAdv[i] = rand() % 2;
		
	}
	do
	{
		aux = 0;
		for (i = 0; i < 4; i++)
		{
			cout << "números de 1/0 : ";
			cin >> numJog[i];
			if (numJog[i] == numAdv[i])
			{
				cout << "Acertas - te\n";
				aux++;
			}
			else
			{
				cout << "tenta novamente\n";
			}
			
		}
		tent++;
		cout << "Tenta a combinação de novo" << endl;
	}
	while (aux<4);
	{
		cout << "Acabou";
		cout << "\nTentativas = " << tent << endl;
	}
	return 0;
}