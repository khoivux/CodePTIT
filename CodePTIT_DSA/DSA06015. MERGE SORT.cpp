#include <bits/stdc++.h>
#define ll long long

using namespace std;

void Merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);

    int i = 0, j = 0;
    while(i < x.size() && j < y.size())
    {
        if(x[i] < y[j])
        {
            a[l++] = x[i++];
        }
        else
        {
            a[l++] = y[j++];
        }
    }
    while(i < x.size()) a[l++] = x[i++];
    while(j < y.size()) a[l++] = y[j++];
}

void Merge_Sort(int a[], int l, int r)
{
    if(l >= r) return;
    int m = (l + r) / 2;

    Merge_Sort(a, l, m);
    Merge_Sort(a, m + 1, r);
    Merge(a, l, m, r);
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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        Merge_Sort(a, 0, n - 1);
        for(auto &x : a) cout << x << " ";
        cout << endl;
    }
}