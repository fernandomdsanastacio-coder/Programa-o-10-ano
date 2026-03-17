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
	int N, Q, L, R, aux, c = 0;
	vector <int> x;
	cin >> N >> Q;
	for (int i = 0; i < N; i++)
	{
		cin >> aux;
		x.push_back(aux);
	}
	for (int i = 0; i < Q; i++)
	{
		c = 0;
		cin >> L >> R;
		for (size_t j = 0; j < x.size(); j++)
		{
			if (L<=x[j]&&R>=x[j])
			{
				c++;
			}
			
		}
		cout << c << endl;
	}
	
	return 0;
}