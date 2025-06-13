#include <iostream>
using namespace std;

int a[9];

int main()
{

    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }
    int b = a[0];
    int number=1;
    for (int i = 0; i < 9;i++)
    {
        if (b < a[i])
        {
            b = a[i];
            number = i + 1;
        }

    }
    cout << b << "\n" << number;

    return 0;
}