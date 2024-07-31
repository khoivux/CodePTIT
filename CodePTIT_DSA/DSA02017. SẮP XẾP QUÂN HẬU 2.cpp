#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[100][100], b[100];
bool chinh[100];
bool phu[100];
int res, n;

void Try(int i, int sum)
{
    for(int j = 1; j <= n; j++)
    {
        if(!b[j] && !chinh[i - j + n] && !phu[i + j - 1])
        {
            b[j] = 1;
            chinh[i - j + n] = true;
            phu[i + j - 1] = true;

            if(i == n)
            {
                res = max(res, sum + a[i][j]);
            }
            else Try(i + 1, sum + a[i][j]);
            b[j] = 0;
            chinh[i - j + n] = false;
            phu[i + j - 1] = false;
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
        memset(chinh, false, sizeof(chinh));
        memset(phu, false, sizeof(phu));
        res = INT_MIN;
        n = 8;
        for(int i = 1; i <= n; i++)
        {
            b[i] = 0;
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 0);
        cout << res << endl;
    }
}