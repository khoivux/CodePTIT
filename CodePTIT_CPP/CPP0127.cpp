#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}