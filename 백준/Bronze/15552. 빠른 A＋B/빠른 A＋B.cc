#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    
    
    return 0;
}
