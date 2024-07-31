#include <bits/stdc++.h>
#define ll long long

using namespace std;

string s;
int n;
bool visited[10000];
string res = "";

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!visited[j])
        {
            visited[j] = true;
            res += s[j];
            if(i == n) cout << res << " ";
            else Try(i + 1);
            visited[j] = false;
            res.pop_back();
        }
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
        cin >> s;
        n = s.length();
        s = '0' + s;
        Try(1);
        cout << endl;
    }
}