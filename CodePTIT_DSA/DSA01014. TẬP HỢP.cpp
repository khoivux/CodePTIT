#include <bits/stdc++.h>
#define ll long long

using namespace std;

int N, k, s, n;
int x[10000];
int a[10000];
int res = 0;

bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0) return false;
    }
    return true;
}

void solve()
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += x[i] * a[i];
    }
    if(sum == s) res++;
}

void nextGen()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i >= 1)
    {
        x[i] = 1;
    }
    int sum = 0;
    for(int j = 1; j <= n; j++)
    {
         sum += x[j];
    }
    if(sum == k) solve();
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while(cin >> N)
    {
        n = 0;
        res = 0;
        cin >> k >> s;
        for(int i = 1; i <= N; i++)
        {
            n++;
            a[n] = i;
            x[n] = 0;
        }
        while(!isFinal())
        {
            nextGen();
        }
        if(N != 0 && k != 0 && s != 0) cout << res << endl;
    }
}