#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool binary_search(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == k) return true;

        if(a[m] > k) r = m - 1;
        else l = m + 1;
    }
    return false;
}

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
        if(binary_search(a, n, k)) cout << 1;
        else cout << -1;
        cout << endl;
    }
}