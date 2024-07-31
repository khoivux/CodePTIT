#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n, L, R;

ll len(ll n)
{
    if(n == 1 || n == 0) return 1;
    ll t = len(n / 2);
    return t * 2 + 1;
}

ll solve(ll n, ll l, ll r)
{
    if(l > R || r < L) return 0;
    if(l >= L && r <= R) return n;

    ll mid = (l + r) / 2;
    if(mid >= L && mid <= R)
        return solve(n / 2, l, mid - 1) + solve(n / 2, mid + 1, r) + n % 2;
    else 
        return solve(n / 2, l, mid - 1) + solve(n / 2, mid + 1, r);
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> L >> R;
        cout << solve(n, 1, len(n)) << endl;
    }
}