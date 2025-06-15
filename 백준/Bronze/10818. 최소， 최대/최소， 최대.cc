#include <iostream>
using namespace std;

int main()
{
	long n;
	cin >> n;
	long a;
	long maxn=-1000001, minn=1000001;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > maxn)
			maxn = a;
		if (a < minn)
			minn = a;
		
	}

	cout << minn << " " << maxn;

	return 0;
}