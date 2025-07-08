#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int sum = 0;
	int b, ans;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '*')
		{
			b = i;
			continue;
		}
		if (i % 2 == 0)
		{
			sum += int(a[i] - '0');

		}
		else
			sum += int(a[i]-'0') * 3;
	}
	if (b % 2 == 0) //모르는 숫자가 홀수번째 일때
	{
		for (int i = 0; i < 10; i++)
		{
			if ((sum + i) % 10 == 0)
				ans = i;
		}
		
	}
	else  //모르는 숫자가 짝수 번째 일때
	{
		for (int i = 0; i < 10; i++)
		{
			if ((sum + i*3) % 10 == 0)
				ans = i;
		}
		
	}
	

	cout << ans;
}