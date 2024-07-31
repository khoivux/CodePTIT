#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          int n; cin >> n;
          int res = 0;
          int i = 9;
          while(n && i >= 0)
          {
               if(n >= a[i])
               {
                    res += n / a[i];
                    n = n % a[i];
               }
               i--;
          }
          cout << res << endl;
     }
}