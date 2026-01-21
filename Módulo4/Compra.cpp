#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;
void Verificar(int i);
void Venda();
int n[8];
double valor = 0;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int E,C;
	cin >> E >> C;
	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
		Verificar(i);
	}
	cout << valor;

	return 0;
}
void Verificar(int i)
{
	if (i == 1 && n[i] > 0)
	{
		valor = valor + 2 * n[i];
	}
	else if (i == 2 && n[i] > 0)
	{
		valor = valor + 1*n[i];
	}
	else if (i == 3 && n[i] > 0)
	{
		valor = valor + 0.5 * n[i];
	}
	else if (i == 4 && n[i] > 0)
	{
		valor = valor + 0.2 * n[i];
	}
	else if (i == 5 && n[i] > 0)
	{
		valor = valor + 0.1 * n[i];
	}
	else if (i == 6 && n[i] > 0)
	{
		valor = valor + 0.05 * n[i];
	}
	else if (i == 7 && n[i] > 0)
	{
		valor = valor + 0.02 * n[i];
	}
	else if (i == 8 && n[i] > 0)
	{
		valor = valor + 0.01 * n[i];
	}
}
void Venda()
{

}
