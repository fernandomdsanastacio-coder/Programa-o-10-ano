#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{

	int esc;
	float resultado = 0, num[2];
	setlocale(LC_ALL, "Portuguese");
	cout << "\33[93mQueres dividir(1), multiplicar(2), subtrair(3), somar(4)";
	cin >> esc;
	cout << "\33[34mDiz o primeiro n�mero ";
	cin >> num[0];
	cout << "\33[94mDiz o segundo n�mero ";
	cin >> num[1];
	switch (esc) {
	case 1:
		resultado = num[0] / num[1];
		break;
	case 2:
		resultado = num[0] * num[1];
		break;
	case 3:
		resultado = num[0] - num[1];
		break;
	case 4:
		resultado = num[0] + num[1];
		break;
	default:
		cout << "\33[31Erro s� podes escolher as quatros op��es";
	}
	cout << "\33[32mO resultado � " << resultado;
	return 0;
}