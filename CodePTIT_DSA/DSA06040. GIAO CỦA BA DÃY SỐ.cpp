#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; cin >> t;
    while(t--)
    {
        ll n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        int ok = 0;
        for(ll i = 0; i < n1; i++) cin >> a[i];
        for(ll i = 0; i < n2; i++) cin >> b[i];
        for(ll i = 0; i < n3; i++) cin >> c[i];
        
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2 && k < n3)
        {
            if(a[i] == b[j] && b[j] == c[k])
            {
                ok = 1;
                cout << a[i] << " ";
                i++; j++; k++;
            }
            else if(a[i] < b[j]) i++;
            else if(b[j] < c[k]) j++;
            else k++;
        }
        if(!ok) cout << -1;
        cout << endl;
    }   
}