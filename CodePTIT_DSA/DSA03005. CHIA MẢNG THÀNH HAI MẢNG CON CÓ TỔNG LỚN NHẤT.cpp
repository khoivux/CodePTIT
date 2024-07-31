#include <bits/stdc++.h>
#define ll long long
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
        int n, k; cin >> n >> k;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);

        ll t1 = 0, t2 = 0;
        if(k >= n - k) k = n - k;
        for(int i = 1; i <= n; i++)
        {
            if(i <= k) t1 += a[i];
            else t2 += a[i];
        }
        if(t1 >= t2) cout << t1 - t2;
        else cout << t2 - t1;
        cout << endl;
    }
}   