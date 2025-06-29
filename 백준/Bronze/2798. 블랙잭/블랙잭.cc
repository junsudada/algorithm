#include <iostream>
using namespace std;

int main() {

    int a,b,c,n,m;
    cin >> n >> m;
    int arr[101];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum,closem=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (i != j && j != k && k != i)
                {
                    sum = arr[i] + arr[j] + arr[k];
                    if (sum > m) 
                        continue;
                    else
                        if (sum > closem)
                            closem = sum;
                }
                else
                    continue;
                
            }
        }
    }

    cout << closem;
    return 0;
}
