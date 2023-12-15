#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int s = 3;
	int arr[s][s] = {};
	for (int i = 0; i < s; ++i)
	{
		for (int j = 0; j < s; ++j)
		{
			int r = rand();
			arr[i][j] = 10 + r % 91;
		}

	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int maxsum = 0;
	int maxn = 0;
	for (int i = 0; i < 3; ++i)
	{
		int rsum = 0;
		for (int j = 0; j < 3; ++j)
		{
			rsum += arr[i][j];

		}
		if (maxsum < rsum)
		{
			maxsum = rsum;
			maxn = i;
		}
		cout << "row sum " << i + 1 << " is " << rsum << endl;
	}
	cout << maxn + 1;
}