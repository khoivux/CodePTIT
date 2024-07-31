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
          ll n; cin >> n;
          ll a[n];
          ll ok = 0;
          for(ll i = 0; i < n; i++) cin >> a[i];
          sort(a, a + n);

          for(ll i = 0; i < n; i++)
          {
               for(ll j = i + 1; j < n; j++)
               {
                    ll t = pow(a[i], 2) + pow(a[j], 2);
                    ll c = sqrt(t);
                    if(c * c == t && binary_search(a + j + 1, a + n, c))
                    {
                        ok = 1; break;
                    }
               }
               if(ok == 1) break;
          }

          if(ok) cout << "YES";
          else cout << "NO";
          cout << endl;
     }
}