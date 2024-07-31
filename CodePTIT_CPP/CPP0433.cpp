#include <bits/stdc++.h>
#define ll long long

using namespace std;
int d[19999] = {0};
bool cmp(int a, int b)
{
    if(d[a] != d[b]) return d[a] > d[b];
    else return a < b;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        for(auto &it : d) it = 0;
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            d[a[i]]++;
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++) 
            cout << a[i] << " ";
        cout << endl;
    }   
}