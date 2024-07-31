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
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            res.f[i][j] = 0;
            for(int k = 0; k < 2; k++)
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
        cin >> n;
        Matrix a;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(i == 1 && j == 1) a.f[i][j] = 0;
                else a.f[i][j] = 1;
            }
        }
        Matrix x = powMod(a, n);
        cout << x.f[0][1] << endl;
    }
}