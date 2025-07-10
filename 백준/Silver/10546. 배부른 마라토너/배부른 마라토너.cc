#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;



string s;

int main()
{
    unordered_map<string, int> name;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {   
        cin >> s;
        name[s]++;
    }

    for (int j = 0; j < N-1; j++)
    {
        cin >> s;
        name[s]--;
        
    }

    
    for (auto& pair : name)
    {
        if(pair.second>0)
            cout <<pair.first;
    }


    
}