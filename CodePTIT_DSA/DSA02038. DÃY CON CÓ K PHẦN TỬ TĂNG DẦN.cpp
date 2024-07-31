#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int a[1000];
vector<vector<int>> res;
vector<int> tmp;

void Try(int i, int pos)
{
    for(int j = pos; j <= n; j++)
    {
        tmp.push_back(a[j]);
        if(i == k) res.push_back(tmp);
        else Try(i + 1, j + 1);
        tmp.pop_back();
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
        res.clear(); tmp.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 1);
        sort(res.begin(), res.end());
        for(auto it : res)
        {
            for(auto ti : it) cout << ti << " ";
                cout << endl;
        }
    }
}