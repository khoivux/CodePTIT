#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int d4 = -1, t;
        for(int d7 = n / 7; d7 >= 0; d7--)
        {
            if((n - d7 * 7) % 4 == 0)
            {
                d4 = (n - d7 * 7) / 4;
                t = d7;
                break;
            }
        }
        if(d4 != -1)
        {
            for(int i = 0; i < d4; i++) cout << 4;
            for(int i = 0; i < t; i++) cout << 7;
        }
        else cout << -1;
        cout << endl;
    }
}