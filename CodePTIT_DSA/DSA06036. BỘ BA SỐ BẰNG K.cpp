#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          ll n, k; cin >> n >> k;
          ll a[n];
          ll ok = 0;
          for(int i = 0; i < n; i++) cin >> a[i];
          sort(a, a + n);
          for(int i = 0; i < n; i++)
          {
               for(int j = i + 1; j < n; j++)
               {
                    ll t = k - a[i] - a[j];
                    if(binary_search(a + j + 1, a + n, t))
                    {
                        ok = 1;
                        break;
                    }
               }
               if(ok == 1) break;
          }
          if(ok) cout << "YES";
          else cout << "NO";
          cout << endl;
     }
}