#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll Prime[1000001] = {0};

void makePrime()
{
    for(int i = 2; i <= 1e6; i++)
    {
        Prime[i] = 1;
    }
    for(int i = 2; i <= 1e3; i++)
    {
        if(Prime[i])
        {
            for(int j = i * i; j <= 1e6; j += i)
            {
                Prime[j] = 0;
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    makePrime();
    int t; cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        ll cnt = 0;
        for(ll i = sqrt(l); i <= sqrt(r); i++)
        {
            if(Prime[i]) cnt++;
        }
        cout << cnt << endl;
    }
}