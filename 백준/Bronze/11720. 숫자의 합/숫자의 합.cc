#include <iostream>
//#include <string>
using namespace std;


int main()
{
	int N;
	string number;
	cin >> N;
	cin >> number;
	int sum = 0;
	for (int i = 0; i < number.size(); i++)
	{
		sum += number[i] - '0';
	}
	cout << sum << "\n";
		
	return 0;
}