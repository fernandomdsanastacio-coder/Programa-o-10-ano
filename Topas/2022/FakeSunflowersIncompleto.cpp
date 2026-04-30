#include <iostream>
#include <locale.h>
#include <string>
 
using namespace std;
int main()
{
	int NCasos, Horario, AntHorario;
 
	bool FakeNatty[200];
	for (int i = 0; i < NCasos; i++)
	{
		// - Guardar os numeros
		cin >> Horario >> AntHorario;
 
		// - Ordenar
		if (Horario > AntHorario)
		{
			int aux;
 
			aux = AntHorario;
			AntHorario = Horario;
			Horario = aux;
		}
 
		// - Achar Horario na sequência de Fibonacci
		bool Achado = false;
		int N[2] = {0, 1};
		do
		{
			int aux = N[0] + N[1];
 
 
		} while (!Achado);
	}
	return 0;
}
