#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num, i;
	char sair = 'n';
	string namoradas[5];
	string nomefofo[5];

	for (i = 0; i < 5; i++)
	{
		cout << "Diz o nome da " << i + 1 << "º namorada: ";
		cin >> namoradas[i];
		cout << "Diz o nome fofo da " << i + 1 << "º namorada: ";
		cin >> nomefofo[i];
	}
	while (sair == 'n') {

		cout << "Diz-me o número da namorada ";
		cin >> num;
		cout << "Nome da namorada é " << namoradas[num - 1] << "\nE tem como nome fofo " << nomefofo[num - 1];
		cout << "\n Deseja sair? (s/n)";
		cin >> sair;
	}
}
