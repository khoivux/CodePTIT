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
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        int l = 1, r = n;
        while(l <= r)
        {
            if(l == r) cout << a[l];
            else
            {
                cout << a[l] << " " << a[r];
            }
            l++; r--; cout << " ";
        }
        cout << endl;
    }
}