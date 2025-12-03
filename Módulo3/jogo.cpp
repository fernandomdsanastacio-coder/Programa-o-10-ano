#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int  resposta, soma = 0;
	float Votos[23] = { 0 };
	do
	{
		do
		{
			cout << "Diz um numero de 1 a 23, 0 é para sair: ";
			cin >> resposta;
			if (resposta > 23 || resposta < 0)
			{
				cout << "Inválido\n";
			}
			else if (resposta != 0)
			{
				Votos[resposta - 1]++;
				soma++;
			}
		} while (resposta > 23 || resposta < 0);
	} while (resposta != 0);

	for (int i = 0; i < 23; i++)
	{
		if (Votos[i] > 0)
		{
			cout << "O número " << i + 1 << " teve " << Votos[i] << " votos, que é " << (Votos[i] / soma) * 100 << "%\n";
		}
	}
	cout << "Houve " << soma << " votos no total!";
}