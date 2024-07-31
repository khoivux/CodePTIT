#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
int mod = 1e9 + 7;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        cin >> a[0];
        ll h = a[0];
        ll g = a[0];
        for(int i = 1; i < n; i++)
        {
            cin >> a[i];
            h = (h * (a[i] % mod)) % mod;
            g =   gcd(g, a[i]);
        }
        ll res = 1;
        for(int i = 0; i < g; i++)
        {
            res = (res * h ) % mod;
        }
        cout << res << endl;
    }
}