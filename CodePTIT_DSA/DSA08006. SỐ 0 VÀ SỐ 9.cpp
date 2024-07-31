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
        queue<long> q;
        q.push(9);
        while(!q.empty())
        {
            long s = q.front();
            if(s % n == 0) 
            {
                cout << s << endl;
                break;
            }
            q.pop();
            q.push(s * 10);
            q.push(s * 10 + 9);
        }
    }
}