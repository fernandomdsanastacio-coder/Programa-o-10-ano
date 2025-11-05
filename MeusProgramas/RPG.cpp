#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int  i, resp, vidaM = 20, vidaP = 20;
	srand(time(0));
	cout << "Estás a lutar com um goblin!, ele tem 20 de vida. Boa sorte!!" << endl;
	do
	{
		if (vidaP > 0)
		{
			
			cout << "Gire o dado para atacar (1) ";
			cin >> resp;
			if (resp == 1)
			{
				int num = rand() % 19 + 1;
				cout << "O valor do dado foi: " << num << endl;
				int Monum = rand() % 19 + 1;
				cout << "O valor do dado do monstro foi: " << Monum << endl;
				resp == 0;
				if (num > Monum)
				{
					cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
					cout << "Role o dado para dar dano no monstro (1): ";
					cin >> resp;
					num == 0;
					if (resp == 1)
					{
						num = rand() % 7 + 1;
						cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
						vidaM = vidaM - num;
						cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
					}
				}
				else
				{
					Monum = 0;
					cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
					Monum = rand() % 5 + 1;
					cout << "O dano do monstro foi: " << Monum << endl;
					vidaP = vidaP - Monum;
					cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
				}
			}
			else
			{
				cout << "Desististe, estás com Medo ??!!" << endl;
			}
		}
		
	} while (vidaM > 0 && vidaP > 0);
	{

	}
	if (vidaM <= 0)
	{
		cout << "\33[32mVocê venceu o monstro!\33[0m" << endl;
	}
	else
	{
		cout << "Você foi derrotado pelo monstro!" << endl;
	}
	return 0;
}
