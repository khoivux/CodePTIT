#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            q.push(x);
        };
        ll res = 0;
        while(!q.empty())
        {
            ll t1 = q.top(); q.pop();
            ll t2 = q.top(); q.pop();
            ll sum = t1 + t2;
            res += t1 + t2;
            if(q.empty()) break;
            q.push(sum);
        }
        cout << res << endl;
    }   
}