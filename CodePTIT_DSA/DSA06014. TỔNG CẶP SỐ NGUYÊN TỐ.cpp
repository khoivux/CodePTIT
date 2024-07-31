#include <bits/stdc++.h>
#define ll long long

using namespace std;

int prime[1000000];

void sang()
{
    for(int i = 2; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[1] = 0;
    prime[0] = 0;
    for(int i = 2; i <= 1000; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    sang();
    int t; cin >> t;
    while(t--)
    {
       int n; cin >> n;
       int ok = -1;
       for(int i = 2; i <= n; i++)
       {
            if(prime[i])
            {
                if(prime[n - i])
                {
                    cout << i << " " << n - i;
                    ok = 1;
                    break;
                }
            }
       }
       if(ok == -1) cout << -1;
       cout << endl;
    }
}