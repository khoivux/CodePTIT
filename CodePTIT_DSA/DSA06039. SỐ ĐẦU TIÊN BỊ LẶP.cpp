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
          int res = 1e9;
          map<int, int> mp1, mp2;
          for(int i = 0; i < n; i++)
          {
               cin >> a[i];
               if(!mp1[a[i]])
               {    
                    mp2[a[i]] = i;
               }
               else if(mp1[a[i]] == 1)
               {
                    res = min(res, mp2[a[i]]);
               }
               mp1[a[i]]++;
          }
          if(res != 1e9) cout << a[res];
          else cout << "NO";
          cout << endl;
     }
}