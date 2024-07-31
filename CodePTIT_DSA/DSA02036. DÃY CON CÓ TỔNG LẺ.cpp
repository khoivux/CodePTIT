#include<bits/stdc++.h>
using namespace std;

int x[22], n;
int a[22] = {};
vector < string > S;

void display()
{
    string s;
    for (int i = 1; i <= n; i++) if(a[i] == 1) s += to_string(x[i]) + " ";
    S.push_back(s);
}
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += x[i]*a[i];
    return sum%2!=0;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check())
            {
                display();
            } 
        }
        else Try(i+1); 
    }
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        S.clear();
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> x[i];
        sort(x+1,x+n+1,cmp);
        Try(1);
        for (auto x:S) cout << x << endl;
    }
    
}