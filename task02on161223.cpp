#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	const int s = 3;
	int arr[s][s] = {};
	int rsum[s] = {};
	int csum[s] = {};

	cout << "fill by rows\n";
	for (int rnum = 0; rnum < s; rnum++)
	{
		for (int cnum = 0; cnum < s; cnum++)
		{
			cout << rnum + 1 << " row ";
			cout << cnum + 1 << " column";
			cin >> arr[rnum][cnum];
		}
		cout << endl;
	}
	for (int rnum = 0; rnum < s; rnum++)
	{
		for (int cnum = 0; cnum < s; cnum++)
		{
			cout << setw(4) << arr[rnum][cnum] << "  ";
			rsum[rnum] += arr[rnum][cnum];
			csum[rnum] += arr[cnum][rnum];
		}
		cout << endl;
	}
	cout << "\nrows sum\n";
	for (int i = 0; i < s; i++)
	{
		cout << i + 1 << " row: " << rsum[i] << endl;
	}
	cout << "\ncolumn sum\n";
	for (int i = 0; i < s; i++)
	{
		cout << i + 1 << " column: " << csum[i] << endl;
	}
	return 0;
}