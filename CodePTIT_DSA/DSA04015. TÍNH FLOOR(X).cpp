#include <bits/stdc++.h>
#define ll long long

using namespace std;


ll floor(int a[], int n, int x)
{
     int l = 1, r = n, res = -1;
     while(l <= r)
     {
          int mid = (l + r) / 2;
          if(a[mid] <= x)
          {
               res = mid;
               l = mid + 1;
          }
          else r = mid - 1;
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
          int n, x;
          cin >> n >> x;
          int a[n + 1];
          for(int i = 1; i <= n; i++) cin >> a[i];
          cout << floor(a, n, x) << endl;
     }
}