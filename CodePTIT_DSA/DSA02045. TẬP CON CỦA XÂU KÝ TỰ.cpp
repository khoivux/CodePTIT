#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n; 
string s;
vector<string> v;
string res = "";

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        if(j == 1) res += s[i];
        if(i == n - 1) v.push_back(res);
        else Try(i + 1);
        if(j == 1) res.pop_back();
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        res = "";
        v.clear();
        cin >> n >> s;
        Try(0);
        sort(v.begin(), v.end());
        for(auto it : v) cout << it << " ";
            cout << endl;
    }
}