#include <iostream>
using namespace std;

int main() {
    char a[11];
    
    for(int i=0;i<10;i++)
    {
        cin >>a[i];
    }
    for(int i=9;i>=0;i--)
    {
        cout <<a[i];
    }

    return 0;
}