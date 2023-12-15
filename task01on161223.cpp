#include <iostream>
using namespace std;

int main()
{
	const int r = 3;
	const int c = 4;
	int arr[r][c] = {};
	for (int rn = 0; rn < r; rn++)
	{
		for (int cn = 0; cn < c; cn++)
		{
			arr[rn][cn] = rn + cn;
			cout << arr[rn][cn] << "  ";
		}
		cout << endl;
	}
	return 0;
}