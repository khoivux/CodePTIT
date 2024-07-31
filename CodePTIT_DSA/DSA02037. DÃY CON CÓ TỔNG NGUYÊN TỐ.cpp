#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int a[1000];
vector<vector<int>> v;
vector<int> tmp;

bool isPrime()
{
    int sum = 0;
    for(auto it : tmp)
    {
        sum += it;
    }
    for(int i = 2; i <= sqrt(sum); i++)
    {
        if(sum % i == 0) return false;
    }
    return sum > 1;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        if(j == 1) tmp.push_back(a[i]);
        if(i == n)
        {
            if(isPrime()) v.push_back(tmp);
        }
        else Try(i + 1);
        if(j == 1) tmp.pop_back();
    }
}
bool cmp(int a, int b)
{
    return a > b;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        v.clear();
        tmp.clear();
        cin >> n;
 
        for(int i = 1; i <= n; i++)
             cin >> a[i];
        sort(a + 1, a + n + 1, cmp);
        Try(1);
        sort(v.begin(), v.end());
        for(auto it : v)
        {
            for(auto ti : it) cout << ti << " ";
                cout << endl;
        }
    }
}