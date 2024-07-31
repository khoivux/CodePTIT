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
        int a[n], res = n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int mid = n / 2;
        for(int i = 0; i < n / 2; i++)
        {
            if(mid >= n) break;
            while(mid < n)
            {
                if(a[i] * 2 <=  a[mid])
                {
                    res--;
                    mid++;
                    break;
                }
                else mid++;
            }
        }
        cout << res << endl;
    }
}