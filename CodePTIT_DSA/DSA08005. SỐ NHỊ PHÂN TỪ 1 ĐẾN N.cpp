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
        queue<string> q;
        q.push("1");
        while(n-- && !q.empty())
        {
            string s = q.front();
            cout << s << " ";
            q.pop();
            q.push(s + '0');
            q.push(s + '1');
        }
        cout << endl;
    }
}