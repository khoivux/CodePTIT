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
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll res = 0;
        sort(a, a + n);

        for(int i = 0; i < n; i++)
        {
            int it = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            res += it - i - 1;
        }
        cout << res << endl;
    }
}