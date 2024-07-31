#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll mod = 1e9 + 7;
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        ll res = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            res += (a[i] * i) % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}