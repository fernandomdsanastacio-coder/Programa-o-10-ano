#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int matriz1[3][5], matriz2[3][5],j,i;
	for ( int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "num[" << i + 1 << "][" << j + 1 << "]";
			cin >> matriz1[i][j];


		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			cout << matriz1[i][j]<<endl;


		}
	}
	
	


	
	
	
	





}