#include <iostream>
#include <string>
using namespace std;

int main() {

    long long a, b, c;
    cin >> a >> b >> c;

    long long times;
    times = a * b * c;
    int d[10] = { 0 };
    string hap = to_string(times);
    for (int i = 0; i < hap.length(); i++)
    {
        d[int(hap[i]-'0')] += 1;
    }
    for (int j = 0; j < 10; j++)
    {
        cout << d[j]<<"\n";
    }
    
    return 0;
}
