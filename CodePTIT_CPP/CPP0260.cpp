#include <bits/stdc++.h>
using namespace std;
main()
{
    int n; cin >> n;
    int a[n][n];
    int b[n * n];
    int id = 0;
    for(int i = 0; i < n; i++)
    {
         for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[id] = a[i][j];
            id++;
        }
    }
    sort(b, b + n * n);
    int res[n][n];
    int h1 = 0, h2 = n - 1;
    int c1 = 0, c2 = n - 1;
    int cnt = 0;
    while(1)
    {
        for(int i = c1; i <= c2; i++)
        {
            res[h1][i] = b[cnt];
            cnt++;
        }
        if(cnt == n * n) break;
        h1++;
        for(int i = h1; i <= h2; i++)
        {
            res[i][c2] = b[cnt];
            cnt++;
        }
        if(cnt == n * n) break;
        c2--;
        for(int i = c2; i >= c1; i--)
        {
            res[h2][i] = b[cnt];
            cnt++;
        }
        if(cnt == n * n) break;
        h2--;
        for(int i = h2; i >= h1; i--)
        {
            res[i][c1] = b[cnt];
            cnt++;
        }
        if(cnt == n * n) break;
        c1++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cout << res[i][j] << " ";
        cout << endl;
    }
}