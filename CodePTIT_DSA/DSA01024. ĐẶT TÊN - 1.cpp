
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int cnt = 0;
string a[1000];
string res[10000];
map<string, int> mp;

void Try(int i, int pos)
{
    for(int j = pos; j <= cnt; j++)
    {
        res[i] = a[j];
        if(i == k)
        {
            string s = "";
            for(int u = 1; u <= k; u++)
                s += res[u] + " ";
            cout << s << endl;
        }
        else Try(i + 1, j + 1);
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
        string t; 
        cin >> t;
        if(!mp[t])
        {
            mp[t]++;
            a[++cnt] = t;
        }
    }
    sort(a + 1, a + cnt + 1);
    Try(1, 1);
}
