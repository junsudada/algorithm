#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long a, b;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << a + b<<"\n";
	}

	return 0;
}