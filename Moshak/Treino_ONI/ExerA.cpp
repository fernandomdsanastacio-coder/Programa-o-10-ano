#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	setlocale(LC_ALL, "Portuguese");
	int T, N, a[50000],aux=0,rd=0;
	string s[20];
	
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			cin >> a[j];
		}
		for (int i = 0; i < N-1; i++)
		{
			if (a[i] > a[i + 1])
			{
				aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				rd++;
				
			}
			
		}
		
		if (rd > 1)
		{
			s[i] = "NAO";
		}
		else
		{
			s[i] = "SIM";
		}
		
	}
	for (int i = 0; i < T; i++)
	{
		cout << s[i] << endl;
	}


	return 0;
}

