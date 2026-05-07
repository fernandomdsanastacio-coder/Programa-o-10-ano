#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int quantidadenotas, notas[200];
  vector<int> output;

  cin >> quantidadenotas;

  for (int i = 0; i < quantidadenotas; i++)
    cin >> notas[i];

  for (int i = 0; i < quantidadenotas-2; i++)
  {
    //notas[i] = primeira nota
    //notas[i+1] = segunda nota
    //notas[i+2] = terceira nota
    if (notas[i]+4 == notas[i+1] && notas[i]+7 == notas[i+2])
    {
      output.push_back(notas[i]);
      output.push_back(notas[i+1]);
      output.push_back(notas[i+2]);
    }
  }

  cout << output.size()/3 << endl;
  for (int i = 0; i < output.size(); i++)
  {
    cout << output[i] << " ";
    if ((i+1)%3==0)
      cout << endl;
  }
  return 0;
}
