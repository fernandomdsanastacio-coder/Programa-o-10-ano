#include <iostream>
#include <string>
using namespace std;
char Grid[50][50];// Grid[X][Y]
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Codigo abaixo
	int Linhas, Colunas;
	string Resultado;

	// Input
	cin >> Linhas >> Colunas;
	for (int i = 0; i < Linhas; i++)
		for (int ii = 0; ii < Colunas; ii++)
			cin >> Grid[ii][i];
	// "Calculos"
	char EspacoAtual = Grid[0][0];
	int X = 0, Y = 0;
	do
	{
		EspacoAtual = Grid[X][Y];
		switch (EspacoAtual)
		{
		case 'E':
			X++;
			break;
		case 'S':
			Y++;
			break;
		case 'O':
			X--;
			break;
		case 'N':
			Y--;
			break;
		default://Se for X ou A
			break;
		}
	} while (EspacoAtual != 'X' && EspacoAtual!= 'A');
	// Output
	if (EspacoAtual=='X')
		cout << "Tesouro";
	else if (EspacoAtual=='A')
		cout << "Armadilha";
	
	//Codigo acima
	return 0;
}
