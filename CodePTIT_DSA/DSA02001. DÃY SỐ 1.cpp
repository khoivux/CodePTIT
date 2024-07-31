#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
vector<int>x;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        x.clear();
        cin >> n;
        int a;

        for(int i = 0; i < n; i++)
        {
            cin >> a;
            x.push_back(a);
        }   

        while(x.size() != 1)
        {
            vector<int> y;
            cout << "[";
            for(int i = 0; i < x.size(); i++)
            {
                y.push_back(x[i]);
                cout << x[i];
                if(i < x.size() - 1) cout << " ";
                else cout << "]";
            }
            cout << endl;
            x.clear();
            for(int i = 1; i < y.size(); i++)
            {   
                x.push_back(y[i] + y[i - 1]);
            }
        }
        cout << "[" << x[0] << "]" << endl;
    }
}