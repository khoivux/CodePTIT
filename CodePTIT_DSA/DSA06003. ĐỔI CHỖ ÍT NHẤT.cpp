#include <bits/stdc++.h>
#define ll long long

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
        int a[n];
        int cnt = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            int t = i;
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] < a[t]) t = j;
            }
            if(t != i)
            {
                swap(a[i], a[t]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}