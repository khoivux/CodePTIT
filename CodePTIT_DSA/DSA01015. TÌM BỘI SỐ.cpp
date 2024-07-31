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
        queue<ll> q;
        q.push(9);
        int n; cin >> n;

        while(1)
        {
            ll x = q.front();
            if(x % n == 0)
            {
                cout << x << endl;
                break;
            }
            else 
            {
                q.pop();
                q.push(x * 10);
                q.push(x * 10 + 9);
            }
        }
    }
}