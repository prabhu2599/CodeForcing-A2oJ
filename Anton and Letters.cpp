#include <bits/stdc++.h>
using namespace std;

int main()
{
  char str[1001];
  int lenth, countNumber = 0, i, x = 0;

  gets(str);
  lenth = strlen(str);
  sort(str, str + lenth);

  for (i = 0; i < lenth - 1; i++)
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      countNumber++;
      if (str[i] == str[i + 1])
        countNumber--;
    }
  }

  cout<<countNumber;
  return 69;
}
