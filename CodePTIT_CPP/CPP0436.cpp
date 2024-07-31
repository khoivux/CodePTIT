#include <bits/stdc++.h>
#define ll long long

using namespace std;
void solve(int a[], int l, int r, int k)
{
    int ok = 0;
    int res = INT_MAX; 
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] > k)
        {
            res = min(res, a[mid]);
            r = mid - 1;
            ok = 1;
        }
        else l = mid + 1;
    }
    if(ok) cout << res;
    else cout << "_";
    cout << " ";
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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for(int i = 0; i < n; i++)
        {
            solve(b, 0, n - 1, a[i]);
        }
        cout << endl;
    }
}