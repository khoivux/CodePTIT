#include <bits/stdc++.h>
#define ll long long

using namespace std;

char c;
int n, k;
int x[1000];

void Try(int i, int pos)
{
    for(int j = pos; j <= n; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int u = 1; u <= k; u++)
            {
                char t = 'A' + x[u];
                cout << t;
            }
            cout << endl;
        }
        else Try(i + 1, j);
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
      
    cin >> c >> k;
    n = c - 'A';
    Try(1, 0);
}