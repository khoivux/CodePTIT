#include <bits/stdc++.h>
#define ll long long

using namespace std;

int binary_search(int a[], int n, int k, int l, int r)
{
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == k) return m;

        if(a[m] > k) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        int tmp = INT_MIN;
        int id;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(a[i] >= tmp)
            {
                id = i;
                tmp = a[i];
            }
        }
        if(binary_search(a, n, k, 0, id) != -1) 
            cout << binary_search(a, n, k, 0, id) + 1;
        if(binary_search(a, n, k, id + 1, n - 1) != -1) 
            cout << binary_search(a, n, k, id + 1, n - 1) + 1;
        cout << endl;
    }
}