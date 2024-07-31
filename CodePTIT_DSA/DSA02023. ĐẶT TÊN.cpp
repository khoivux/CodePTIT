#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
map<string, int> mp;
vector<string> v;

void Try(int i, int pos, string s)
{
    for(int j = pos; j < v.size(); j++)
    {
        if(i == k)
        { 
            cout << s + v[j] + " " << endl;
        }
        else Try(i + 1, j + 1, s + v[j] + " ");
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        string s; cin >> s;
        if(mp[s] == 0)
        {
            mp[s]++;
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    Try(1, 0, "");    
}