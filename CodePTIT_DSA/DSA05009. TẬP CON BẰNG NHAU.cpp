#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int a[10000];
int sum = 0;
int ok = 0;

void Try(int i, int pos, int s)
{
    if(ok = 1) return;
    for(int j = pos; j <= n; j++)
    {
        if(s + a[j] <= sum)
        {
            if(s + a[j] == sum)
            {
                ok = 1;
                return;
            }
            else Try(i + 1, j + 1, s + a[j]);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        ok = 0;
        sum = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 0) 
        {
            sum /= 2;
            Try(1, 1, 0);
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}