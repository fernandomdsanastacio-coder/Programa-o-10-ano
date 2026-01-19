#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;
void deposito(int ii);

void debito(int c);
void VerificarSaldo(int i);
void EnviarDinheiro(int j);
void Inserir(int s)
{
	system("CLS");
	int esc = 0;
	cout << "=====Ecrã=====";
	cout << "\n1-Depósito ";
	cout << "\n2-Débito ";
	cout << "\n3-Enviar dinheiro ";
	cout << "\n4-Verificar Saldo \n";
	cin >> esc;
	switch (esc)
	{
	case 1:
		deposito(s);
		break;
	case 2:
		debito(s);
		break;
	case 3:
		EnviarDinheiro(s);
		break;
	case 4:
		VerificarSaldo(s);
		break;
	default:
		break;
	}
}
void debito(int c)
{
	int esc;
	cout << "=====Débito=====\n";
	cout << "Quanto queres retirar?\n";
	cin >> esc;
	if (esc > c)
	{
		cout << "Por favor retire dinheiro quando tiver saldo.\n";
		Sleep(2000);
		Inserir(c);

	}
	c = c - esc;
	Sleep(2000);
	Inserir(c);
}
void deposito(int ii)
{
	system("CLS");
	int depositar = 0, randomNum = 0;
	cout << "=====Depósito=====\n";
	cout << "Quanto dinheiro queres depositar?\n";
	cin >> depositar;
	ii = ii + depositar;
	if (depositar >= 2000)
	{
		randomNum = rand() % 5;
		switch (randomNum)
		{
		case 1:
			cout << "Uau! Ainda vais preso!\n";
			break;
		case 2:
			cout << "A nadar em dinheiro, ahn?\n";
			break;
		case 3:
			cout << "Cuidado para não afundares o banco com tanto dinheiro!\n";
			break;
		case 4:
			cout << "Já vi que finalmente tomaste banho e foste a casa da madrinha\n";
			break;
		default:
			break;
		}
	}
	Sleep(2000);
	Inserir(ii);
}
void VerificarSaldo(int i)
{
	cout << "=====Saldo=====\n";
	cout << i;
	Sleep(2000);
	Inserir(i);

}
void EnviarDinheiro(int j)
{
	system("CLS");
	int esc = 0int aux=0;
	cout << "=====EnviarDinheiro=====\n";
	cout << "Para quem quer enviar?\n";
	cout << "1-Mãe\n 2-Pai\n 3-Irmã\n 4-Pessoa que ninguém gosta\n";
	switch (aux)
	{
	case 1:
		cout << "Quanto quer enviar?\n";
		cin >> esc;
		break;
	case 2:
		cout << "Quanto quer enviar?\n";
		cin >> esc;
		break;
	case 3:
		cout << "Quanto quer enviar?\n";
		cin >> esc;
		break;
	case 4:
		cout << "Quanto quer enviar?\n";
		cin >> esc;
		break;
	default:
		break;
	}
	
	if (esc > j)
	{
		cout << "Não tem dinheiro suficiente para enviar a outra pessoa.\n";
		Sleep(2000);
		Inserir(j);
	}
	j = j - esc;
	Sleep(2000);
	Inserir(j);
}




int main() {
	setlocale(LC_ALL, "Portuguese");
	int saldo = 1000;
	Inserir(saldo);
	return 0;
}
