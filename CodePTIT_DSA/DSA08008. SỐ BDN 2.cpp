#include <bits/stdc++.h>
#define ll long 
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
        queue<long> q;
        long n; cin >> n;
        q.push(1);
        while(true)
        {
            ll x = q.front(); q.pop();
            if(x % n == 0)
            {
                cout << x << endl;
                break;
            }
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
    }
}