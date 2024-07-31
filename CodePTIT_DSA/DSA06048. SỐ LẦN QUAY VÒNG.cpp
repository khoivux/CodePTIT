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
        int Min = INT_MAX, Max = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            Min = min(Min, a[i]);
            Max = max(Max, a[i]);
        }
        
        if(a[0] == Min && a[n - 1] == Max) cout << "0";
        else
        {            
            for(int i = 0; i < n - 1; i++)
            {
                if(a[i] == Max && a[i + 1] == Min)
                {
                    cout << i + 1;
                    break;
                }
            }
        }
        cout << endl;
    }
}