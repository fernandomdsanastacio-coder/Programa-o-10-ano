#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num=0, i, dec, soma=0, contar=0;

	for (i = 0; i < 10; i++) {
		cout << "Diz um número";
		cin >> num;
		soma = num + num;
		contar = contar + 1;
	}

		cout << "Se deseja somar digite: 0. Se deseja saber todos os números negativos digite: 1\n";
		cin >> dec;

	if (dec == 0) {
		cout << "A soma é " << soma ;
	}
	else if (dec == 1) {
		cout << "Escreves-te " << contar << "números";
	}
	else {
		cout << "És burro ou oq só podes escolher duas opções";
	}


}
