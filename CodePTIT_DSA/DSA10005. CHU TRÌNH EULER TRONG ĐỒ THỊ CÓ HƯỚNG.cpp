#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m;
vector<vector<int>> adj;
int poDeg[1001], neDeg[1001];

bool check()
{
    for(int i = 1; i <= n; i++)
    {
        if(poDeg[i] != neDeg[i]) return false;
    }
    return true;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--) 
    {
        cin >> n >> m;
        adj.clear(); adj.resize(n + 1000);
        memset(poDeg, 0, 1001);
        memset(neDeg, 0, 1001);

        for(int i = 0; i < m; i++) 
        {
            int x, y; cin >> x >> y;
            poDeg[x]++;
            neDeg[y]++;
        }
        if(check()) cout << 1;
        else cout << 0;
        cout << endl;
    }
}