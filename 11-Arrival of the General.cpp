#include <iostream>
using namespace std;

int main()
{
	int n;
	int maxv = 0;
	int minv = 100;
	int maxi = 0;
	int mini = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x > maxv)
		{
			maxi = i;
			maxv = x;
		}
		if (x <= minv)
		{
			mini = i;
			minv = x;
		}
	}

	if (maxi > mini)
	{
		cout << (maxi - 1) + (n - mini) - 1;
	}
	else
	{
		cout << (maxi - 1) + (n - mini);
	}

	return 0;
}
