#include <iostream>
using namespace std;

int main()
{
	double a[1001] = { 0.0 };
	double n;
	double maxn = -1;
	double b[1001] = { 0.0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (maxn < a[i])
			maxn = a[i];
	}
	double sum = 0;
	for (int j = 0; j < n; j++)
	{
		b[j] = a[j] / maxn * 100;
		sum += b[j];
	}
	cout << sum/n;


	return 0;
}