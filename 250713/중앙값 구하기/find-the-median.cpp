#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    if(a>b&&c>a||b>a&&a>c)
        cout << a;
    if(a>b&&b>c||c>b&&b>a)
        cout << b;
    if(b>c&&c>a||c>b&&a>c)
        cout << c;


    return 0;
}