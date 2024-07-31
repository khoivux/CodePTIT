#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int find(int n, int x, int in[])
{
    for (int i = 0; i < n; i++)
        if (in[i] == x)
            return i;
    return -1;
}
void Try(int n, int in[], int pre[])
{
    int k = find(n, pre[0], in);
    if (k != 0)
        Try(k, in, pre + 1);
    if (k != n - 1)
        Try(n - k - 1, in + k + 1, pre + k + 1);
    cout << pre[0] << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int in[n], pre[n];
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> pre[i];
        Try(n, in, pre);
        cout << endl;
    }
}