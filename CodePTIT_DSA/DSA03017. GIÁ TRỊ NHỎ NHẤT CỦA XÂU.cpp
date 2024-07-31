#include <bits/stdc++.h>
#define ll long long
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
        int k; cin >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(int i = 0; i < s.length(); i++) 
            mp[s[i]]++;

        priority_queue<int> q;
        for(char c : s)
        {
            if(mp[c])
            {
                q.push(mp[c]);
                mp[c] = 0;
            }
        }

        while(k--)
        {
            if(q.empty()) break;

            int x = q.top(); q.pop();
            if(x > 1) q.push(x - 1);
        }
        ll res = 0;
        
        while(!q.empty())
        {
            int x = q.top(); q.pop();
            res += x * x;
        }
        cout << res << endl;
    }   
}