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
        int d; cin >> d;
        cin.ignore();
        string s;
        cin >> s;
        map<char, int> mp;
        int cntMax = -1;
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            cntMax = max(cntMax, mp[s[i]]);
        }
        if((cntMax - 1) * (d - 1) <= n - cntMax) cout << 1;
        else cout << -1; 
        cout << endl;
    }   
}