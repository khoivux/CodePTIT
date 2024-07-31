#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
bool visited[10000];
int x[10000];

bool isTrue()
{
    for(int i = 2; i <= n; i++)
    {
        if(abs(x[i] - x[i - 1]) == 1) return false;
    }
    return true;
}

void solve()
{
    if(isTrue())
    {
        for(int i = 1; i <= n; i++)
        {
            cout << x[i];
        }
        cout << endl;       
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!visited[j])
        {
            x[i] = j;
            visited[j] = true;
            if(i == n) solve();
            else Try(i + 1);
            visited[j] = false;
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, 10000);

    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
}