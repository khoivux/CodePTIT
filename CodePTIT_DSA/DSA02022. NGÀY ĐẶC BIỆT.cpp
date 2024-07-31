#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n = 8;
int so[2] = {0, 2};
int x[10000];
vector<string> res;

void solve()
{
    string s = "";
    for(int i = 1; i <= n; i++) s += to_string(x[i]);

    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4));
    if (d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000) {
        string tmp = s;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        res.push_back(tmp);
    }
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = so[j];
        if(i == n) solve();
        else Try(i + 1);
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    Try(1);
    sort(res.begin(), res.end());
    for (string i : res) cout << i << endl;
}