#include <iostream>
//Problema 1
using namespace std;
int main() 
{
	int E, C, moedas[8] = { 200,100,50,20,10,5,2,1 }, valorDado = 0, preco, troco, input[8], output[8] = { 0 };

	cin >> E >> C;
	preco = 100 * E + C;
	for (int i = 0; i < 8; ++i)
	{
		cin >> input[i];
		valorDado += input[i] * moedas[i];
	}
	if (valorDado < preco)
	{
		for (int i = 0; i < 8; ++i)
		{
			output[i] = input[i];
		}
	}
	else
	{
		troco = valorDado - preco;
		for (int i = 0; i < 8; ++i)
		{
			if (troco >= moedas[i])
			{
				output[i]++;
				troco -= moedas[i];
				--i;
			}
		}
	}
	for (int i = 0; i < 8; ++i)
	{
		cout << output[i] << " ";
	}

	return 0;
}