#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

long s, t;
long c[100001];
int solve() 
{
    queue<ii> q;
    q.push({s, 0});
    c[s] = 1;
    while(!q.empty()) 
    {
        ii x = q.front();
        q.pop();
        if(x.first == t) return x.second;

        if(x.first > 1 && !c[x.first - 1])
        {
            q.push({x.first - 1, x.second + 1});
            c[x.first - 1] = 1;
        }
        if(x.first < t && !c[x.first * 2])
        {
            q.push({x.first * 2, x.second + 1});
            c[x.first * 2] = 1;
        }
    }
    return -1;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int test; cin >> test;
    while(test--)
    {   
        memset(c, 0, sizeof(c));
        cin >> s >> t;
        cout << solve() << endl;
    }   
}