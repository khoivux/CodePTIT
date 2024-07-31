#include <bits/stdc++.h>
#define long long long
#define ii pair<long, long>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long t; cin >> t;
    while(t--)
    {
        long n; cin >> n;
        long a[n + 1] = {0};
        long l[n + 1];
        long r[n + 5];
        long res = 1;
        for(long i = 1; i <= n; i++)
        {
            cin >> a[i];
            l[i] = 1; r[i] = 1;
        }
        l[0] = 0;
        r[n + 1] = 0;
        for(long i = 1; i <= n; i++)
        {
            if(a[i] > a[i - 1])
                l[i] += l[i - 1];
        }
        for(long i = n; i >= 1; i--)
        {
            if(a[i] > a[i + 1])
                r[i] += r[i + 1];

            res = max(res, r[i] + l[i] - 1);
        }
        cout << res << endl;
    }
}