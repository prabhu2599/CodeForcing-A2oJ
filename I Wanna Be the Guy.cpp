#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s;
  int n, n1, n2;
  cin >> n;
  cin >> n1;
  for (int i = 0; i < n1; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  cin >> n2;
  for (int i = 0; i < n2; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  if (int(s.size()) == n)
  {
    cout << "I become the guy.";
  }
  else
  {
    cout << "Oh, my keyboard!";
  }

  return 0;
}
