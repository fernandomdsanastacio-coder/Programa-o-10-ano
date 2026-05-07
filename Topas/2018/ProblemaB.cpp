#include <iostream>
#include <string>
using namespace std;

int main()
{
  int babablalao[3], balaodeagora[3], quantos, output = 0;

  for (int i = 0; i < 3; ++i)
  {
    cin >> babablalao[i];
  }
  cin >> quantos;
  for (int i = 0; i < quantos; i++)
  {
    int corretos = 0;
    for (int ii = 0; ii < 3; ++ii)
    {
      cin >> balaodeagora[ii];
      if (balaodeagora[ii] == babablalao[ii])
      {
        corretos++;
      }
    }
    if (corretos == 3)
      output++;

  }
  cout << output;


  return 0;
}
