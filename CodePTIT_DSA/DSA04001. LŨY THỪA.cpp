#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k;
ll mod = 1e9 + 7;

ll Pow(ll n, ll k)
{
     if(k == 0) return 1;
     ll x = Pow(n, k / 2);
     if(k % 2 == 0)
          return x * x % mod;
     else 
          return n * ((x * x) % mod) % mod;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          cin >> n >> k;
          cout << Pow(n, k) << endl;
     }
}