#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9 + 7;
ll n, k;
struct Matrix
{
    ll f[11][11];
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            res.f[i][j] = 0;
            for(ll k = 0; k < n; k++)
            {
                res.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
                res.f[i][j] %= mod;
            }
        }
    }
    return res;
}
Matrix Solve(Matrix a, ll b)
{
    if(b == 1) return a;

    Matrix x = Solve(a, b / 2);
    if(b % 2 == 0) 
        return x * x;
    else 
        return a * x * x;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Matrix a;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                cin >> a.f[i][j];
            }
        }

        Matrix b = Solve(a, k);
        ll res = 0;
        for(int i = 0; i < n; i++)
        {
            res += b.f[i][n - 1] % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}