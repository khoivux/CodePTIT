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
        int n, m;
        cin >> n >> m;
        set<int> A;
        set<int> B;
        set<int> giao;
        set<int> hop;
        for(int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            A.insert(x);
            hop.insert(x);
        }
        for(int i = 1; i <= m; i++)
        {
            int x; cin >> x;
            B.insert(x);
            hop.insert(x);
        }
        for(auto it : hop)
        {
            cout << it << " ";
        }
        cout << endl;
        for(auto it : A)
        {
            if(B.count(it)) cout << it << " ";
        }
        cout << endl;
    }
}