#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int mod = 1e9 + 7;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            q.push(x);
        }
        ll res = 0;
        while(!q.empty())
        {
            int x = q.top(); q.pop();
            int y = q.top(); q.pop();

            res += (x + y) % mod;
            res %= mod;
            if(q.empty()) break;
            q.push((x + y) % mod);
        }
        cout << res << endl;
    }   
}