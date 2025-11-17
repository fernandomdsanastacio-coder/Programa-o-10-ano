#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num, i;
	string disciplinas[9] = { "Inglês ", "Portugues ","matematica ","TLP ","ACSO ", "EDF ","FQ ","AI ","TIC " };
	string stores[9] = { "Helena", "Alice", "luis", "Maria","jose","matheus","carlos","gil","anastácio" };
	do
	{
		cout << "Qual níumero queres para uma maatéria \n";
		cin >> num;
		if (num > 8 || num < 0)
		{
			cout << "erro";
		}
		else {
			cout << "O stor da disciplina" << disciplinas[num] << "é o " << stores[num];
			cout << "As disciplinas do teu curso são\n";
			for (i = 0; i < 9; i++)
			{
				cout << disciplinas[i];
			}
		}
	} while (num != 0);
	return 0;
}
