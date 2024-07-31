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
        int k; cin >> k;
        cin.ignore();
        string s; getline(cin, s);
        int cnt[300] = {0};
        priority_queue<int> q;
        for(int i = 0; i < s.length(); i++) 
        {
            cnt[s[i]]++;
        }
        for(int i = 0; i <= 260; i++) 
        {
            if(cnt[i]) q.push(cnt[i]);
        }
        while(!q.empty() && k--) 
        {
            int s = q.top();
            q.pop();
            q.push(s - 1);
        }
        long res = 0;
        while(!q.empty()) 
        {
            res += pow(q.top(), 2);
            q.pop();
        }
        cout << res << endl;
    }
}