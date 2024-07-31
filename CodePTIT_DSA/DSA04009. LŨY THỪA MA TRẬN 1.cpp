#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k, mod = 1e9 + 7;
struct Matrix
{
    ll f[11][11];
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix res;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            res.f[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                res.f[i][j] += (a.f[i][k] * b.f[k][j]) % mod;
                res.f[i][j] %= mod;
            }
        }
    }
    return res;
}

Matrix powMod(Matrix a, int k)
{
    if(k == 1) return a;
    Matrix x = powMod(a, k / 2);
    if(k % 2 == 0) return x * x;
    else return a * (x * x);
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Matrix a;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a.f[i][j];
            }
        }
        Matrix x = powMod(a, k);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << x.f[i][j] << " ";
            }
            cout << endl;
        }
    }
}