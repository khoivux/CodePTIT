#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int cnt[10000] = {0};
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(cnt[a[i]]) cout << a[i] << " ";
        cnt[a[i]] = 0;
    }
}