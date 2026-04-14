#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int resultado=0, quantidadeseries=0, numeroserie[1000]={0}, sumatorio=0;

	cin >> quantidadeseries;
	for (int i = 1; i < quantidadeseries+1; i++)
	{
		cin >> numeroserie[i];
	}
	for (int i = 1; i < quantidadeseries+1; i++)
	{
		
		sumatorio = sumatorio + ((numeroserie[i] - numeroserie[i - 1])-1);
	
	}
	cout << numeroserie[quantidadeseries] + (sumatorio / quantidadeseries);

	return 0;
}
