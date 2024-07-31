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
        vector<int> a(n);
        vector<vector<int>> v;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] < a[i]) swap(a[i], a[j]);
            }
            v.push_back(a);
        }
        for(int i = v.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for(auto it : v[i]) cout << it << " ";
                cout << endl;
        }
    }
}