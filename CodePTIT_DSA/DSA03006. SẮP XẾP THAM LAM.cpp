#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

bool check(int a[], int b[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(b[i] != a[i] && b[i] != a[n - i + 1]) return false;
    }
    return true;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        if(check(a, b, n)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}