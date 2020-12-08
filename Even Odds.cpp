#include <iostream>

using namespace std;

int main()
{
  long long n1, a1;
  cin >> n1 >> a1;
  if (a1 <= (n1 + 1) / 2)
  {
    cout << a1 * 2 - 1 << endl;
  }
  else
  {
    cout << (a1 - (n1 + 1) / 2) * 2 << endl;
  }
  return 0;
}
