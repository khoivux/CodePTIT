#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k;
ll len[222];
char res(ll n, ll k)
{    
     if(n == 1) return 'A';
     if(n == 2) return 'B'; 
     if(k > len[n - 2]) 
          return res(n - 1, k - len[n - 2]);
     else 
          return res(n - 2, k);
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     len[1] = 1;
     len[2] = 1;
     for(ll i = 3; i < 93; i++)
     {
          len[i] = len[i - 1] + len[i - 2];
     }
     ll t; cin >> t;
     while(t--)
     {
          cin >> n >> k;
          cout << res(n, k) << endl;
     }
}