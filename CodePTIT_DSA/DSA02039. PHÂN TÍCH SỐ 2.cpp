#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, sum = 0;
vector<vector<int>> res;
vector<int>v;
int a[1000];

void Try(int i, int pos)
{
    if(i > n) return;
    for(int j = pos; j <= n; j++)
    {
        if(sum + a[j] <= n)
        {
            sum += a[j];
            v.push_back(a[j]);
            if(sum == n) res.push_back(v);
            else Try(i + 1, j);
            v.pop_back();
            sum -= a[j];
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
        v.clear();
        res.clear();
        cin >> n;

        for(int i = 1; i <= n; i++) a[i] = i;
        sort(a + 1, a + n + 1, greater<int>());
        Try(1, 1);

        cout << res.size() << endl;
        for(auto it : res)
        {
            cout << "(";
            for(int i = 0; i < it.size(); i++)
            {
                cout << it[i];
                if(i < it.size() - 1) cout << " ";
                else cout << ") ";
            }
        }
        cout << endl;
    }   
}