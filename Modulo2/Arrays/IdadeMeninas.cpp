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
	int num;
	string nomes[5] = {};
	int idades[5] = {};

	for (int i = 0; i < 5; ++i)
	{
		cout << "Diz um nome da " << i + 1 << "ª menina\n";
		cin >> nomes[i];
		idades[i] = (rand() % 40) + 15;
	}
	cout << "Qual é o número da menina que quer saber?\n";
	cin >> num;
	cout << "A menina " << nomes[num - 1] << " tem " << idades[num - 1] << " anos\n";


	return 0;
}
