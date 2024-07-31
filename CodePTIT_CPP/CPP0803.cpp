#include <bits/stdc++.h>
#define ll long long

using namespace std;
int cnt[19999] = {0};
main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        ifstream input;
        input.open("DATA.in");
        int n;
        while(input >> n)
        {
                cnt[n]++;
        }      
        for(int i = 0; i <= 1000; i++)
        {
                if(cnt[i]) cout << i << " " << cnt[i] << endl;
        } 
}