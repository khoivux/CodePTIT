#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        ll a[n];
        ll cnt = 0;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        for(ll i = 0; i < n - 1; i++)
        {
            if(a[i] <= k)
            {
                auto it1 = lower_bound(a + i + 1, a + n, k - a[i]);
                auto it2 = upper_bound(a + i + 1, a + n, k - a[i]);
                cnt += it2 - it1;
            }
        }
        cout << cnt << endl;
    }
}