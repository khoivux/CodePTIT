#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int mod = 1e9 + 7;
long long P[1001][1001];
void solve()
{
    for(int i = 1; i <= 1000; i++) P[i][1] = i;
    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            P[i][j] = (P[i - 1][j - 1] * i) % mod;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    solve();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        cout << P[n][k] << endl;
    }   
}