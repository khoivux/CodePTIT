#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k;
ll len[222];
ll solve(ll n, ll k)
{
     ll t = len[n] / 2 + 1;
     if(k == t) return n;
     if(k > t) 
          return solve(n - 1, k - t);
     else 
          return solve(n - 1, k);
}
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     ll t; cin >> t;
     len[1] = 1;
     for(ll i = 2; i <= 50; i++)
     {
          len[i] = len[i - 1] * 2 + 1;
     }
     while(t--)
     {
          cin >> n >> k;
          cout << solve(n, k) << endl;
     }
}