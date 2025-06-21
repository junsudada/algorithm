#include <iostream>
#include <string>
using namespace std;

int main() {

    int cnt = 0;
    while (1)
    {
        string a;
        cin >> a;
        if (stoi(a) == 0)
            break;
        
        string b(a.length(),'\0');
        for (int i = a.length()-1; i >= 0; i--)
        {
            b[a.length() - 1 - i] = a[i];
        }
        if (a == b)
            cout << "yes"<< "\n";
        else
            cout << "no"<< "\n";

    }
    
    
    
    return 0;
}
