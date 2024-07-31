#include <bits/stdc++.h>
#define ll long long

using namespace std;
int mod = 1e9 + 7;
ll powMod(ll a, ll b)
{
    if(b == 0) return 1;
    ll x = powMod(a, b / 2);
    if(b % 2 == 0)
        return x * x % mod;
    else 
        return a * (x * x % mod) % mod;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll a, b;
    while(cin >> a >> b)
    {
        if(!a && !b) break;
        cout << powMod(a, b) << endl;
    }   
}