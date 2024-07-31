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
          int n; cin >> n;
          int a[n];
          int s = 0;
          for(int i = 0; i < n; i++)
          {
               cin >> a[i];
               s += a[i];
          }
          cout << n - s << endl;
     }
}