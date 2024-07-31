#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int x[10000];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int res = 0;
        int cnt[10000] = {0};

        for(int i = 1; i <= k; i++)
        {
            cin >> x[i];
            cnt[x[i]] = 1;
        }

        int i = k; 
        while(i >= 1 && x[i] == n - k + i)
        {
            i--;
        }

        if(i >= 1)
        {
            x[i]++;
            if(cnt[x[i]] == 0) res++;
            for(int j = i + 1; j <= k; j++)
            {
                x[j] = x[j - 1] + 1;
                if(cnt[x[j]] == 0) res++;
            }
            cout << res;
        }
        else 
        {
            cout << k;
        }
        
        cout << endl;
    }
}
