#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int turma1[10][10],turmaM[10][10];
	int resposta, i, j,c=0;
	char scl = 'n';
	string disciplinas[10] = { "Portugues","Ingles","Fisica","TLP","TIC","Matemática","ACS","Filosofia","Quimica","Ed.Fis." }, nomes[10] = { "António","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" };
	cout << "Dá-me as notas da turma\n";
	for ( i = 0; i < 10; i++) 
	{
		
		cout << "Nota do/da " << nomes[i] << " : ";
		for ( j = 0; j < 10; j++)
		{	
			cout << disciplinas[j] << "\n";
			cin >> turma1[i][j];
		}
		system("cls");
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			turmaM[i][j] = turma1[i][j]/10;
		}
		system("cls");
	}
	system("cls");
	for (i = 0; i < 10; i++)
	{
		cout << nomes[i] << " Tem " << turmaM[i][i] << " em " << disciplinas[i] << endl;
	}
	cout << "Queres saber qual é a melhor nota? (s/n)";
	cin >> scl;
	
	if (scl == 's')
	{
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < 10; i++)
			{
				c++;
				if (turmaM[i][j] > turmaM[i+1][j+1])
				{
					cout << "O aluno com a maior média é " << nomes[c] << "na disciplina "<<disciplinas[c];
				}
			}
		}
	}
	else
	{

		return 0;
	}
}
