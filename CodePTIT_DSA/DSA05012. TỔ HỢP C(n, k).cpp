#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int mod = 1e9 + 7;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int C[k + 1][n + 1];
        for(int i = 1; i <= n; i++) C[0][i] = 1;
        for(int i = 1; i <= k; i++)
        {
            for(int j = i; j <= n; j++)
            {
                if(i == j) C[i][j] = 1;
                else
                {
                    C[i][j] = C[i][j - 1] % mod + C[i - 1][j - 1] % mod;
                    C[i][j] %= mod;
                }
            }
        }
        cout << C[k][n] << endl;
    }
}