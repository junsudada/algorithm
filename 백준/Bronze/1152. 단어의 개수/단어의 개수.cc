#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int cnt = 0;
    int sp = -1;                 

    for (int i = 0; i < (int)a.length(); ++i) {
        if (a[i] == ' ') {
            if (sp == i - 1) continue;

            
            if (i == 0) { sp = i; continue; }
            ++cnt;
            sp = i;               
        }
    }

    if (!a.empty() && a.back() != ' ') ++cnt;

    cout << cnt << '\n';
    return 0;
}
