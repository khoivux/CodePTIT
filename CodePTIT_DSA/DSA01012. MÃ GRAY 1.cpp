#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n; 
string s[10000];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        int len = pow(2, n);
        s[1] = "0";
        s[2] = "1"; 
        if(n > 1)
        {
            int pos = 2;
            for(int i = 2; i <= n; i++)
            {
                int k = pow(2, i);
                for(int j = 1; j <= pos; j++)
                {
                    s[k - j + 1] = "1" + s[j];
                    s[j] = "0" + s[j];
                }
                pos = k;
            }
        }
        for(int j = 1; j <= len; j++) cout << s[j] << " ";
        cout << endl;
    }
}