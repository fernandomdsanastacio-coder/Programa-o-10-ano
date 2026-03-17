#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	setlocale(LC_ALL, "Portuguese");
	int  T;
	vector <char> S;
	
	cin >> T;
	for (int i = 0; i <T; i++)
	{
		cin >> S[i];
	}
	for (size_t i = 0; i < S.size() - 1; i++)
	{
		if (S[i] == S[i + 1]) 
		{
			S.erase(S.begin() + i);
			i--;
		}
	}
	return 0;
}