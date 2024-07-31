#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check1(ll n)
{
    int tmp = 10;
    while(n)
    {
        if(n % 10 >= tmp) return false;
        tmp = n % 10;
        n /= 10;
    }
    return true;
}
bool check2(ll n)
{
    int tmp = -1;
    while(n)
    {
        if(n % 10 <= tmp) return false;
        tmp = n % 10;
        n /= 10;
    }
    return true;
}
bool isPrime(ll n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n; cin >> n;
        
        ll l = pow(10, n - 1);
        ll r = pow(10, n) - 1;
        int cnt = 0;
        for(ll i = l; i <= r; i++)
        {
            if(check1(i) || check2(i))
            {
                if(isPrime(i)) cnt++;
            }
        }
        cout << cnt << endl;
    }
}