#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, cmp);
        ll sum = 0;
        for(int i = 0; i < n; i++) sum += a[i] * b[i];
            cout << sum << endl;
    }
}