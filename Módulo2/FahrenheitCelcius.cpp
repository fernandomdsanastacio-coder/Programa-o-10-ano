#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	char EscTemp;//Escolha de temperatura, C = celsius, F = fahrenheit.
	float Temp;
	cout << "Como voce quer converter a temperatura de fahrenheit para celsius(C), ou celsius a fahrenheit(F)?\n";
	cin >> EscTemp;
	cout << "Me de uma temperatura : ";
	cin >> Temp;
	if (EscTemp == 'C') {
		cout << "A temperatura convertida para celcius e igual a " << (Temp - 32) / 1.8;
	}
	else if (EscTemp == 'F') {
		cout << "A temperatura convertida para fahrenheit e igual a " << (Temp * 1.8) + 32;
	}
	else {
		cout << "Tinha apenas duas opções e voce errou de algum jeito";
	}
}