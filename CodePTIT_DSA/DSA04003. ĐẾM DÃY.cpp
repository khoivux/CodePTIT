#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
ll mod = 123456789;

ll Pow(ll n, ll k)
{
     if(k == 0) return 1;
     ll x = Pow(n, k / 2);
     if(k % 2 == 0)
          return x * x % mod;
     else 
          return n * ((x * x) % mod) % mod;
}

ll Re(ll n)
{
     ll res = 0;
     while(n)
     {
          res = res * 10 + n % 10;
          n /= 10;
     }
     return res;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          cin >> n;
          cout << Pow(2, n - 1) << endl;
     }
}