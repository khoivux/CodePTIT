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
        int n, k; cin >> n >> k;
        int a[n + 1] = {0};
        for(int i = 1; i <= n; i++) cin >> a[i];
        multiset<int> ms;
        for(int i = 1; i <= k; i++)
        {
            ms.insert(a[i]);
        }
        cout << *ms.rbegin() << " ";
        for(int i = k + 1; i <= n; i++)
        {
            auto it = ms.find(a[i - k]);
            ms.erase(it);
            ms.insert(a[i]);
            cout << *ms.rbegin() << " ";
        }
        cout << endl;
    }   
}