#include<iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, maior = 0, menor = 2147483647;
	do
		{
		cout << "Digite um numero (0 para sair): ";
		cin >> num;
		if (num > maior && num != 0) {

			maior = num;
		}
		if (num < menor && num != 0) {
			menor = num;
		}
	} while (num != 0);
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;

	return 0;

}
