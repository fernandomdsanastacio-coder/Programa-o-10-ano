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
	int num[5],j, i, adv, aux=0;
	for (i = 0; i < 5; i++)
	{
		num[i] = rand() % 50 + 1;
		
		for (j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				num[i] = rand() % 10 + 1;
				j = -1;
			}
		}
	}
	for (i = 0; i < 5; ++i)
	{
		cout << "Escreva um número entre 1 e 50:\n";
		cin >> adv;
		if (adv == num[i])
		{
			++aux;
		}
	}
	cout << "Números certos: " << aux << "\n";
	cout << "Números da lotaria:" << "\n";
	for (int k = 0; k < 5; ++k)
	{
		cout << num[k] << "\n";
	}
	if (aux == 5)
	{
		cout << "Parabéns, ganhas-te 1 milhão de donuts!!!";
	}
}