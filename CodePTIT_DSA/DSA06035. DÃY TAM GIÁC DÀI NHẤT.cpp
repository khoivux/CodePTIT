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
        int n; cin >> n;
        int a[n + 1];
        int l[n + 1] = {0}, r[n + 1] = {0};
        for(int i = 1; i <= n; i++) cin >> a[i];
        l[1] = 1; r[n] = 1;
        for(int i = 2; i <= n; i++)
        {
            if(a[i] > a[i - 1])
                l[i] = l[i - 1] + 1;
            else 
                l[i] = 1;
        }
        for(int i = n - 1; i >= 1; i--)
        {
            if(a[i] > a[i + 1])
                r[i] = r[i + 1] + 1;
            else 
                r[i] = 1;
        }
        int res = INT_MIN;
        for(int i = 1; i <= n; i++)
        {
            res = max(res, l[i] + r[i] - 1);
        }
        cout << res << endl;
    }   
}