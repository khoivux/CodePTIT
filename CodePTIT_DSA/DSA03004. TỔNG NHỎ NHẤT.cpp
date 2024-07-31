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
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        ll t1 = 0, t2 = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2) t1 = t1 * 10 + a[i];
            else t2 = t2 * 10 + a[i];
        }
        cout << t1 + t2 << endl;
    }
}   