#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num, i;
	string disciplinas[9] = { "Ingl�s ", "Portugues ","matematica ","TLP ","ACSO ", "EDF ","FQ ","AI ","TIC " };
	string stores[9] = { "Helena", "Alice", "luis", "Maria","jose","matheus","carlos","gil","anast�cio" };
	do
	{
		cout << "Qual n�umero queres para uma maat�ria \n";
		cin >> num;
		if (num > 8 || num < 0)
		{
			cout << "erro";
		}
		else {
			cout << "O stor da disciplina" << disciplinas[num] << "� o " << stores[num];
			cout << "As disciplinas do teu curso s�o\n";
			for (i = 0; i < 9; i++)
			{
				cout << disciplinas[i];
			}
		}
	} while (num != 0);
	return 0;
}
