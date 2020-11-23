#include <iostream>
using namespace std;

int main()
{
	int s;
	int pi = 0, pj = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> s;
			if (s == 1)
			{
				pi = i;
				pj = j;
			}
		}
	}

	cout << abs(pi - 2) + abs(pj - 2);

	return 0;
}
