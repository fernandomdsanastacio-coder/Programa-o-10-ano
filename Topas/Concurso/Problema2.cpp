#include <iostream>
//Problema 2
using namespace std;
int main(){
	int TipoServico, DuracaoViagemMin, PercursoKM, PrecoTotal;
	/*
	TipoServico
	---------------------------------
	1 == UberX
		Custo por min = 10 cêntimos
		Custo por KM = 80 cêntimos
		Tarifa base = 100 cêntimos
		Taxa mín = 250 cêntimos

	---------------------------------
	2 == UberXL
		Custo por min = 015 cêntimos
		Custo por KM = 120 cêntimos 
		Tarifa base = 150 cêntimos
		Taxa mín = 350 cêntimos

	---------------------------------
	PrecoTotal, em cêntimos, um número inteiro

	*/
	cin >> TipoServico >> DuracaoViagemMin >> PercursoKM;
	PrecoTotal = 0;
	if (TipoServico == 1)//UberX
	{
		PrecoTotal += 100;//Base

		PrecoTotal += 10 * DuracaoViagemMin;// Por min

		PrecoTotal += 80 * PercursoKM;//Por KM

		if (PrecoTotal < 250)//Taxa mín
			PrecoTotal = 250;
	}
	else if (TipoServico == 2)//UberXL
	{
		PrecoTotal += 150;//Base

		PrecoTotal += 15 * DuracaoViagemMin;// Por min

		PrecoTotal += 120 * PercursoKM;//Por KM

		if (PrecoTotal < 350)//Taxa mín
			PrecoTotal = 350;
	}
	cout << PrecoTotal;

	return 0;
}