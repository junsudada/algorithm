#include <iostream>
using namespace std;

int main() {
    int n;
    int a[101];
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i]*a[i] <<" ";
    }
    return 0;
}