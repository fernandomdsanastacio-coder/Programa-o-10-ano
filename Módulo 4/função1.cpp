#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int n = 0, media1 = 0, N[10], menor1 = 100000000, maior1 = -100000;
int media()
{
	media1 = n / 10;
	cout << media1;
	return 0;
}
int menor(int i)
{
	if (N[i] < menor1)
	{
		menor1 = N[i];
	}
	return menor1;
}
int maior(int i)
{
	if (N[i] > maior1)
	{
		maior1 = N[i];
	}
	return maior1;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int esc = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << "º número \n";
		cin >> N[i];
		n = n + N[i];
		menor(i);
		maior(i);
	}
	do
	{
		cout << "======Menu======" << endl << "1-calcular a média dos números​ ";
		cout << "\n2 – achar o menor ​";
		cout << "\n3 – achar o maior​ ​";
		cout << "\n0 – sair \n​";
		cin >> esc;
		switch (esc)
		{
		case 1:
			media();
			break;
		case 2:
			cout << menor1 << endl;
			break;
		case 3:
			cout << maior1 << endl;
			break;
		default:
			break;
		}
	} while (esc != 0);
	return 0;
}
