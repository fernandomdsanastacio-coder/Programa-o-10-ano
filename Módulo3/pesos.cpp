#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int alt[10],i,BP=0,PN=0,EX=0,O=0,OE=0,media;
	float pesos[10];
	for (i = 0; i < 10; i++)
	{
		cout << "Dá-me a altura da " << i+1 << "º pessoa ";
		cin >> alt[i];
		cout << "Dá-me o peso da " << i+1 << "º pessoa ";
		cin >> pesos[i];
		if (pesos[i] < 18, 5)
		{
			BP++;
		}
		else if (pesos[i] > 18.5 && pesos[i] < 24, 9)
		{
			PN++;
		}
		else if (pesos[i] > 25 && pesos[i] < 29, 9)
		{
			EX++;
		}
		else if (pesos[i] > 30 && pesos[i] < 35)
		{
			O++;
		}
		else if (pesos[i] >= 35)
		{
			OE++;
		}

	}
	media = BP / 10;
	cout << "\nTem uma média de " << media << "De pessoas";
	float media1 = PN / 10;
	cout << "\nTem uma média de " << media1 << "De pessoas";
	float media2 = EX / 10;
	cout << "\nTem uma média de " << media2 << "De pessoas";
	float media3= O / 10;
	cout << "\nTem uma média de " << media3 << "De pessoas";
	float media4 = OE / 10;
	cout << "\nTem uma média de " << media4 << "De pessoas";
	return 0;
}
