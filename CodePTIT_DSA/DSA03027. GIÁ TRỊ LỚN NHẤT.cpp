#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin  >> n;
    int a[n + 1];
    long res = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];

        if(a[i] >= 0) res += a[i];
    }  
    cout << res * 2;
}