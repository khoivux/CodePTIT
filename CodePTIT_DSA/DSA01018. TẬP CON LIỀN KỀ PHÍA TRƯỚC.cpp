#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int x[10000] = {0};
void preGen()
{
    int i = k; 
    while(x[i] == x[i - 1] + 1) i--;
    if(i == 0)
    {
        for(int j = k; j <= n; j++)
            cout << j << " ";
    }
    else
    {
        x[i]--;
        for(int j = i + 1; j <= k; j++)
        {
            x[j] = n - k + j; 
        }
        for(int j = 1; j <= k; j++)
            cout << x[j] << " ";
    }
    cout << endl;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= k; i++)
            cin >> x[i];
        preGen();
    }   
}