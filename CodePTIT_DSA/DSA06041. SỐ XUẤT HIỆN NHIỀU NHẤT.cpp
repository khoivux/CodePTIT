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
          int n;
          cin >> n;
          int a[n];
          int res = -1e9;
          int id;
          map<int, int> mp;
          for(int i = 0; i < n; i++)
          {
               cin >> a[i];
               mp[a[i]]++;
               if(mp[a[i]] > res)
               {
                    res = mp[a[i]];
                    id = i;
               }
          }
          if(res > n / 2) cout << a[id];
          else cout << "NO";
          cout << endl;
     }
}