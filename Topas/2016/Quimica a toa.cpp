#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char n[1000];
	
	int i = 0;
	
	
		do {
			i++;
			cin >> n[i];
			if (n[i] == '.')
			{
				break;
			}
			else if (n[i] == toupper(n[i]))
			{
				cout << n[i];
			}
			else if (isdigit(n[i]))
			{
				cout << " = "<< n[i];
			}
			else {
				cout << n[i];
			}
		} while (n[i] != '.');
		return 0;
	
		
}
