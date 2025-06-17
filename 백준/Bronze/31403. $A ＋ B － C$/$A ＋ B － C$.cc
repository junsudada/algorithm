#include <iostream>
#include <string>
using namespace std;

int pow(int n)
{
	int pown = 1;
	for (int i = 0; i < n; i++)
	{
		pown *= 10;
	}
	return pown;
}

int main()
{
	string a, b, c;
	cin >> a >> b >> c;
	int an=0;
	int bn = 0;
	int cn = 0;
	for (int i = 0; i < a.length(); i++)
	{
		an += (a[i] - '0') * pow(a.length() - 1 - i);
		
	}
	for (int j = 0; j < b.length(); j++)
	{
		bn += (b[j] - '0') * pow(b.length() - 1 - j);
	}
	for (int k = 0; k < c.length(); k++)
	{
		cn += (c[k] - '0') * pow(c.length() - 1 - k);
	}

	cout << an + bn - cn << "\n";
	cout << an * pow(b.length()) + bn - cn;

	return 0;
}