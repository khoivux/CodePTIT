#include <bits/stdc++.h>
using namespace std;
main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for(auto x : s)
        {
            sum += x - '0';
        }
        while(sum >= 10)
        {
            int tmp = 0;
            while(sum)
            {
                tmp += sum % 10;
                sum /= 10;
            }
            sum = tmp;
        }
        cout << (sum == 9) << endl;
    }
}