#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[10] = { 15,7,54,12,1,2,5,23,14,4 }, aux, trocar, i;
	do
	{
		trocar = 0;
		for (i = 0; i < 9; i++) 
		{
			if (num[i]>num[i+1])
			{
				aux = num[i];
				num[i] = num[i + 1];//Dentro do for é para trocar os números pela ordem crescente
				num[i + 1] = aux;
				trocar++;
				
			}
		}
	} while (trocar > 0);
	for (i = 0; i < 10; i++)
	{
		cout << "\33[31m" <<num[i] << endl<<"\33[0m";
	}
	return 0;
}
