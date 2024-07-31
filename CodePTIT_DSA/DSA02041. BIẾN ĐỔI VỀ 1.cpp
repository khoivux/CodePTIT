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
        int a;
                                                                                               cin >> a;
        queue<ii> q;
        q.push({a, 0});
        int res = 1e9;
        while(!q.empty())
        {
            ii s = q.front();
            q.pop();
            if(s.first == 1)
            {
                cout << s.second << endl;
                break;
            }
            if(s.first % 2 == 0)
                q.push({s.first / 2, s.second + 1});
            if(s.first % 3 == 0)
                q.push({s.first / 3, s.second + 1});
            q.push({s.first - 1, s.second + 1});
        }
    }
}