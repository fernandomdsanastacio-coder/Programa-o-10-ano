#include <iostream>
//Problema 4
using namespace std;
int main() 
{
	int num = 0, pergunta1[8], pergunta2[8],aux=0,cont=0,bla=0;

	cin >> num;
	//primeira pergunta
	for (int i = 0; i < num; i++)
	{
		cin >> pergunta1[i];
	}
	for (int i = 0; i < num; i++)
	{
		if (pergunta1[0] == pergunta1[i]) 
		{
			cont++;
		}
		
	}
	if (cont == num)
	{
		aux++;
	}
	
	cont = 0;
	//segunda pergunta
	for (int i = 0; i < num; i++)
	{
		cin >> pergunta2[i];
	}
	for (int i = 0; i < num-1; i++)
	{
		if (pergunta2[i] > pergunta2[i + 1])
		{
			bla = pergunta2[i];
			pergunta2[i] = pergunta2[i + 1];
			pergunta2[i + 1] = bla;
			i = -1;
		}
	}
	for (int i = 0; i < num; i++)
	{
		if (pergunta2[i + 1] != pergunta2[i])
		{
			cont++;
		}
	}
	if (cont == num)
	{
		aux++;
	}
	
	cout << aux;
	return 0;
}
