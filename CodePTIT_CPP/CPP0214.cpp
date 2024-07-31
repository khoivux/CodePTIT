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
        int n, k;
        cin >> n >> k;
        ll tmp = -1;
        ll a[n + 1];
        multiset<int> se;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= k; i++)
        {
            
            se.insert(a[i]);
            tmp = max(tmp, a[i]);
        }
        cout << tmp << " ";

        for(int i = k + 1; i <= n; i++)
        {
            auto it = se.lower_bound(a[i - k]);
            se.erase(it);
            se.insert(a[i]);
            auto it2 = se.end();
            it2--;
            cout << *it2 << " ";
        }
        cout << endl;
    }
}