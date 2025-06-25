#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    int sum0[41] = { 0, };
    int sum1[41] = { 0, };

    sum0[0] = 1; sum0[1] = 0;
    sum1[0] = 0; sum1[1] = 1;
    for (int i = 2; i <= 40; i++)
    {
        sum0[i] = sum0[i - 1] + sum0[i - 2];

    }

    for (int i = 2; i <= 40; i++)
    {
        sum1[i] = sum1[i - 1] + sum1[i - 2];

    }
    int a;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        cout << sum0[a] << " " << sum1[a]<<"\n";
    }
    
    


    return 0;
}
