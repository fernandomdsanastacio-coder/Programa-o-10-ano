#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int S, H;// quantos supermercados e quantos hipermercados haver� recolha
	int A, M, N;// Quantos volunt�rios s�o necess�rios para armaz�m e etc
	int V; // Quantos volunt�rios s�o
	cout  ;
	cin >> S;
	cout ;
	cin >> H;
	cout ;
	cin >> A;// N�o � para usar texto no ToPAS :(
	cout ;
	cin >> M;
	cout ;
	cin >> N;
	cout ;
	cin >> V;
	int total = A + (M * S) + (N * H);
	if (V != total)
	{
		cout << "\nFaltam " << V - total << " volunt�rios";
	}
	else if (V = total)
	{
		cout << "\nN�o h� falta de volunt�rios";
	}
	return 0;
}