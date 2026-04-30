#include <iostream>
#include <locale.h>
#include <string>
 
using namespace std;
int Grid[50][50];// Grid[X][Y]
int main()
{
	int NLinhas, NColunas;
	cin >> NLinhas >> NColunas;
 
	int Soma, NInicial;
 
	for (int i = 0; i < NLinhas; i++)//Y = i
		for (int ii = 0; ii < NColunas; ii++)//X = ii
			cin >> Grid[ii][i];
 
	NInicial = Grid[0][0];
	Soma = NInicial;
	bool Simulado = false;
	string Passos;
 
	int X = 0, Y = 0;
 
	do
	{
		int TentativasFalhas = 0;
		if (X != 0)//Checar esquerda
		{
			if (Grid[X - 1][Y] == NInicial)
			{
				Grid[X][Y] = 10;
				X--;
				Passos += 'E';
				Soma += NInicial;
			}
			else
				TentativasFalhas++;
		}
		else
			TentativasFalhas++;
		if (X != NColunas-1)//Checar direita
		{
			if (Grid[X+1][Y] == NInicial)
			{
				Grid[X][Y] = 10;
				X++;
				Passos += 'D';
				Soma += NInicial;
			}
			else
				TentativasFalhas++;
		}
		else
			TentativasFalhas++;
 
		if (Y != 0)//Checar cima
		{
			if (Grid[X][Y-1] == NInicial)
			{
				Grid[X][Y] = 10;
				Y--;
				Passos += 'C';
				Soma += NInicial;
			}
			else
				TentativasFalhas++;
		}
		else
			TentativasFalhas++;
		if (Y != NLinhas-1)//Checar baixo
		{
			if (Grid[X][Y+1] == NInicial)
			{
				Grid[X][Y] = 10;
				Y++;
				Passos += 'B';
				Soma += NInicial;
			}
			else
				TentativasFalhas++;
		}
		else
			TentativasFalhas++;
 
		if (TentativasFalhas == 4)
			Simulado = true;
 
	} while (!Simulado);
	cout << Passos << endl << Soma;
	return 0;
}
