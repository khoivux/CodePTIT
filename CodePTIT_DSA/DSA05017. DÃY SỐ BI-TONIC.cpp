#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
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
       int a[n + 5];
       a[0] = -1; a[n + 1] = -1;
       long l[n + 5] = {0}, r[n + 5] = {0};
      
       long res = -1;
       for(int i = 1; i <= n; i++)
       {
            cin >> a[i];
            l[i] = a[i];
            for(int j = 1; j < i; j++)
            {
                if(a[i] > a[j])
                    l[i] = max(l[i], l[j] + a[i]);
            }
       }
       for(int i = n; i >= 1; i--)
       {
            r[i] = a[i];
            for(int j = n; j > i; j--)
            {
                if(a[i] > a[j])
                    r[i] = max(r[i], r[j] + a[i]);
            }
            res = max(res, r[i] + l[i] - a[i]);
       }
       cout << res << endl;
    }
}