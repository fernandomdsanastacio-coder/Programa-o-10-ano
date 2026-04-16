#include <iostream>
//Problema 3
using namespace std;
int main() {
	int Meses[12][31] = { -1 }, Dia, Mes, DiasRestantes;

	//Inicializar meses
	for (int i = 0; i < 31; i++)
	{
		//Meses 31 dias
		Meses[0][i] = 1;
		Meses[2][i] = 1;
		Meses[4][i] = 1;
		Meses[6][i] = 1;
		Meses[7][i] = 1;
		Meses[9][i] = 1;
		Meses[11][i] = 1;
		if (i < 28)//28 dias
			Meses[1][i] = 1;
		if (i < 30) {//30 dias
			Meses[3][i] = 1;
			Meses[5][i] = 1;
			Meses[8][i] = 1;
			Meses[10][i] = 1;
		}
	}
	cin >> Dia >> Mes;
	DiasRestantes = 0;
	 if (Mes == 12 && Dia > 25 ) 
	{
		DiasRestantes = (31 - Dia) + 359;
	}
	else 
	{
		
		Dia--; Mes--;//Arrays :/
		int MesInicial = Mes;
		for (int i = Mes; i < 12; i++)
		{
			int Parar = 0;
			for (int j = 0; j < 31; j++)
			{
				if (MesInicial == i && Parar == 0)
				{
					j = Dia;
					Parar++;
				}


				if (i == 11 && j > 24)//Se for natal pare
				{
				} else if (Meses[i][j] == 1)//E um dia existente
				{
					DiasRestantes++;
				}

			}
		}
		DiasRestantes--;//Dia inicial não conta
	}

	cout << DiasRestantes;
	return 0;
}