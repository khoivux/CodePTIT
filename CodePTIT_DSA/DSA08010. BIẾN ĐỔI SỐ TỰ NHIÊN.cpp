#include <bits/stdc++.h>
#define long long long
#define ii pair<long, long>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long t; cin >> t;
    while(t--)
    {
        long n; cin >> n;
        queue<ii> q;
        q.push({n, 0});
        map<int, bool> used;
        while(!q.empty())
        {
            ii top = q.front(); q.pop();

            if(top.first == 2)
            {
                cout << top.second + 1<< endl;
                break;
            }
            for(long i = 2; i <= sqrt(top.first); i++)
            {
                if(top.first % i == 0 && !used[top.first / i])
                {
                    used[top.first / i]  = true;
                    q.push({max(i, top.first / i), top.second + 1});
                }
            }               
            q.push({top.first - 1, top.second + 1});
        }
    }
}