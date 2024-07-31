#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int p[n], q[m];
        ll res[n + m] = {0};
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < m; i++) cin >> q[i];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                res[i + j] += p[i] * q[j];
            }
        }
        for(int i = 0; i < m + n - 1; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }   
}