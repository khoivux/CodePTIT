#include <bits/stdc++.h>
#define long long long
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
        long n, k; cin >> n >> k;
        long a[n + 1];
        a[0] = 0;
        long ok = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        if(a[n] == k) 
        {
            cout << "YES" << endl; 
            continue;
        }
        for(int i = 1; i <= n; i++)
        {
 
            if(binary_search(a + i, a + n + 1, a[i - 1] + k))
            {
                ok = 1;
                break;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
   }
}