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
        set<int> se;
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            while(x)
            {
                se.insert(x % 10);
                x /= 10;
            }
        }
        for(auto it : se) cout << it << " ";
            cout << endl;
    }
}