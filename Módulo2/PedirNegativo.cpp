#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num=0, i, dec, soma=0, contar=0;

	for (i = 0; i < 10; i++) {
		cout << "Diz um n�mero";
		cin >> num;
		soma = num + num;
		contar = contar + 1;
	}

		cout << "Se deseja somar digite: 0. Se deseja saber todos os n�meros negativos digite: 1\n";
		cin >> dec;

	if (dec == 0) {
		cout << "A soma � " << soma ;
	}
	else if (dec == 1) {
		cout << "Escreves-te " << contar << "n�meros";
	}
	else {
		cout << "�s burro ou oq s� podes escolher duas op��es";
	}


}
