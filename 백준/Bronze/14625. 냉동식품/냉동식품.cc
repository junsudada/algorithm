#include <iostream>
#include <string>
using namespace std;


int main()
{
    int h1, h2, m1, m2;
    char num;
    cin >> h1 >> m1; //처음시간
    cin >> h2 >> m2; //나중시간
    cin >> num;
    int cnt = 0;
    string a;
    string b;
    string c;
    if(h1==h2)
    {
        for (int k = m1; k <= m2; k++) //처음 시가 같을 때
        {
            if (h1 < 10)
            {
                a = "0";
                a += to_string(h1);
            }
            else
                a = to_string(h1);

            if (k < 10)
            {
                c = "0";
                c += to_string(k);
            }
            else
                c = to_string(k);

            if (a[1] == num || a[0] == num || c[1] == num || c[0] == num)
                cnt++;
        }
    }
    
    else {
        for (int i = h1; i <= h2; i++) // 시(hour)이 다를 때
        {
            if (i == h1) //시간이 다르지만 1차이 일때
            {
                if (i < 10)
                {
                    a = "0";
                    a += to_string(i);
                }
                else
                    a = to_string(i);
                for (int j = m1; j < 60; j++) // 1시간을 뺀 연산 그래서 m1에서
                {
                    if (j < 10)
                    {
                        b = "0";
                        b += to_string(j);
                    }
                    else
                        b = to_string(j);
                    if (a[1] == num || a[0] == num || b[1] == num || b[0] == num)
                        cnt++;
                }
            }


            else if (i != h2) //처음과 마지막을 제외한 시
            {
                if (i < 10)
                {
                    a = "0";
                    a += to_string(i);
                }
                else
                    a = to_string(i);

                for (int j = 0; j <= 59; j++)
                {
                    if (j < 10)
                    {
                        b = "0";
                        b += to_string(j);
                    }
                    else
                        b = to_string(j);
                    if (a[1] == num || a[0] == num || b[1] == num || b[0] == num)
                        cnt++;
                }
            }
            else //마지막 시간의 남은 분 (i==h2)
            {
                if (i < 10)
                {
                    a = "0";
                    a += to_string(i);
                }
                else
                    a = to_string(i);
                for (int j = 0; j <= m2; j++) // 같은 시간에서 m2 까지
                {
                    if (j < 10)
                    {
                        b = "0";
                        b += to_string(j);
                    }
                    else
                        b = to_string(j);
                    if (a[1] == num || a[0] == num || b[1] == num || b[0] == num)
                        cnt++;
                }
            }
        }
    }
    cout << cnt;
}