#include <iostream>
using namespace std;

int main() {

    long n;
    long s, m, l, xl, xxl, xxxl;
    cin >> n;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;
    
    long T, P;
    cin >> T >> P;

    cout << (s + T - 1) / T + (m + T - 1) / T + (l + T - 1) / T + (xl + T - 1) / T + (xxl + T - 1) / T + (xxxl + T - 1) / T << "\n";
    cout << n/P<<" "<<n-P*(n/P);
    
    
    return 0;
}
