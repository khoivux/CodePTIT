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
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);

        vector<int> v;
        int i = 0, j = 0;
        while(i < n && j < m)
        {
            if(a[i] < b[j])
            {
                v.push_back(a[i++]);
            }
            else v.push_back(b[j++]);
        }  
        while(i < n) v.push_back(a[i++]);
        while(j < m) v.push_back(b[j++]);
        for(auto it : v) cout << it << " ";
            cout << endl;
    }
}