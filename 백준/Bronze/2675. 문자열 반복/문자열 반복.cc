#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	long a;
	string b;


	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;

		for (int k = 0; k < b.size(); k++)
		{
			for (int j = 0; j < a; j++)
			{
				cout << b[k];
			}
		}
		cout << "\n";
		
	}

	return 0;
}