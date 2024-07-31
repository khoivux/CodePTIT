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
        int a[n];
        int res = -1;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = n - 1; j > i; j--)
            {
                if(j - i <= res) break;
                if(a[j] >= a[i]) res = max(res, j - i);
            }
        }
        cout << res << endl;
    }
}