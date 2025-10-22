#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int S, H;// quantos supermercados e quantos hipermercados haverá recolha
	int A, M, N;// Quantos voluntários são necessários para armazém e etc
	int V; // Quantos voluntários são
	cout  ;
	cin >> S;
	cout ;
	cin >> H;
	cout ;
	cin >> A;// Não é para usar texto no ToPAS :(
	cout ;
	cin >> M;
	cout ;
	cin >> N;
	cout ;
	cin >> V;
	int total = A + (M * S) + (N * H);
	if (V != total)
	{
		cout << "\nFaltam " << V - total << " voluntários";
	}
	else if (V = total)
	{
		cout << "\nNão há falta de voluntários";
	}
	return 0;
}
