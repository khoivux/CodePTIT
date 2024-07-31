#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
     return a.first < b.first;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
         vector<pair<int, int>> v;
         int n; cin >> n;
         for(int i = 0; i < n; i++)
         {
               int x, y;
               cin >> x;
               y = i;
               v.push_back({x, y});
         }
         sort(v.begin(), v.end(), cmp);
         int res = -1e9;
         int tmp = v[0].second;
         for(int i = 1; i < n; i++)
         {
               if(v[i].second - tmp > res)
               {
                    res = v[i].second - tmp;
               }
               tmp = min(tmp, v[i].second);
         }
         cout << res << endl;
     }
}