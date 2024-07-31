#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int x[10000] = {0};
int a[10000] = {0};
int res = 0;

bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
            return false;
    }
    return true;
}

bool isTrue()
{
    int s = 0;
    for(int i = 1; i <= n; i++) s += x[i];
    if(s != k) return false;
    else
    {
        int tmp = INT_MIN;
        for(int i = 1; i < n; i++)
        {
            if(x[i])
            {
                if(a[i] > tmp)
                    tmp = a[i];
                else return false;
            }
        }
    }
    return true;
}

void nextGen()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i >= 1) x[i] = 1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    while(!isFinal())
    {
        if(isTrue())
            res++;
        nextGen();
    }
    if(isTrue()) res++;
    cout << res;
}