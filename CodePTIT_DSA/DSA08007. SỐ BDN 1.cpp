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
        long n; cin >> n;
        int cnt = 0;
        queue<long> q;
        q.push(1);
        while(!q.empty())
        {
            long s = q.front();
            if(s > n) 
            {
                cout << cnt << endl;
                break;
            }
            else cnt++;
            q.pop();
            q.push(s * 10);
            q.push(s * 10 + 1);
        }
    }
}