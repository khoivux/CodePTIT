#include <bits/stdc++.h>
#define long long long
#define ii pair<long, long>
using namespace std;

long n; 
long x[1000];
long c[1000][1000];
bool used[10000];
long res = 1e9;
long s = 0;
long MIN = 1e9;
void solve(long k)
{
    for(long j = 1; j <= n; j++)
    {
        if(!used[j])
        {
            x[k] = j;
            used[j] = true;
            s += c[x[k - 1]][x[k]];

            if(k == n) res = min(res, s);;
            else if(s + (n - k + 1) * MIN < res)
            {
                solve(k + 1);
            }
            used[j] = false;
            s -= c[x[k - 1]][x[k]];
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long t; cin >> t;  
    while(t--)
    {
        cin >> n;
        for(long i = 1; i <= n; i++)
        {
            for(long j = 1; j <= n; j++)
            {
                cin >> c[i][j];
                if(c[i][j])
                    MIN = min(MIN, c[i][j]);
            }
        }
        res = 1e9;
        for(long i = 1; i <= n; i++)
        {
            s = 0;
            memset(used, false, sizeof(used));
            memset(x, 0, sizeof(x));
            used[i] = true;
            x[1] = i;
            solve(2);
        }
        cout << res << endl;
    }
}