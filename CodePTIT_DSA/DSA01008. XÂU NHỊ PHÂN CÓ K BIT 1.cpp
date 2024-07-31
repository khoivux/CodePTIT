#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int x[10000];

bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
            return false;
    }
    return true;
}

bool isTrue()
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += x[i];
    }
    if(s == k) return true;
    else return false;
}

void display()
{
    for(int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

void nextGen()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i >= 1) x[i] = 1;
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
        for(int i = 1; i <= n; i++) x[i] = 0;
        while(!isFinal())
        {
            if(isTrue())
                display();
            nextGen();
        }
        if(isTrue())
            display();
    }
}
