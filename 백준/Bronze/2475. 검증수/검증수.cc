#include <iostream>
#include <string>
using namespace std;

int main() {

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int sum = a * a + b * b + c * c + d * d + e * e;
    string hap = to_string(sum);

    cout << hap[hap.length()-1];
    
    
    
    return 0;
}
