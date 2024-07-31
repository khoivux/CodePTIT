#include <bits/stdc++.h>
#define long long long
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
        set<int> se;
        for(int i = 0; i < n; i++)
        {
            int u, v; char c;
            cin >> u >> v >> c;
            se.insert(u);
            se.insert(v);
        }
        for(auto it : se) cout << it << " ";
            cout << endl;
    }
}