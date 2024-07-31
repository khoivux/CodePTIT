#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<int, int> mp;

bool cmp(int a, int b)
{
     if(mp[a] == mp[b]) return a < b;
     else return mp[a] > mp[b];
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
          mp.clear();
          int n; cin >> n;
          int a[n];
          for(int i = 0; i < n; i++)
          {
               cin >> a[i];
               mp[a[i]]++;
          }
          sort(a, a + n, cmp);
          for(auto &x : a)
          {
               cout << x << " ";
          }
          cout << endl;
    }
}