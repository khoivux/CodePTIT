#include <bits/stdc++.h>
#define ll long long

using namespace std;

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
        int cnt = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        bool check = true; //Mang toan so 0 -> false
        while(check)
        {
            check = false;
            for(int i = 0; i < n; i++)
            {
                if(a[i] % 2)
                {
                    a[i]--;
                    cnt++;
                }
            }
            for(int i = 0; i < n; i++) 
            {
                a[i] /= 2;
                if(a[i] != 0) check = true;//Con so khac 0
            }
            cnt++;
        }
        cout << cnt - 1 << endl;
    }
}