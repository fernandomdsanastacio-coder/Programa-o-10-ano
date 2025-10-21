#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num=0, cont=0, adv=0;
	int ramdomNum = rand() % 99 + 1;
	
	do {
		cout << "\nDá-me um número de 1 a 100 ";
		cin >> num;
		cont = cont++;
		if (num < ramdomNum)
		{
			cout << "\nO número é maior que " << num;

		}
		else if (num > ramdomNum) {
			cout << "\nO número é menor que " << num;
		
		}
		else if (num == ramdomNum) {
			cout << "\nAcertas-te, parabéns";
			cout << "Tentás-te " << cont;
			adv = 1;
		}
		
	} while (adv==0);
	

	return 0;
}