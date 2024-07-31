#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int x[10000];

bool isFinal()
{
    for(int i = n - 1; i >= 1; i--)
    {
        if(x[i] < x[i + 1]) return false;
    }
    return true;
}

void display()
{
    for(int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}

void nextGen()
{
    int i = n - 1;
    while(i >= 1 && x[i] > x[i + 1])
    {
        i--;
    }
    int j = n;
    while(x[i] > x[j]) j--;
    swap(x[i], x[j]);
    int l = i + 1, r = n;
    while(l <= r)
    {
        swap(x[l], x[r]);
        l++;
        r--;
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            x[i] = i;

        while(!isFinal())
        {
        	display();
        	nextGen();
        }
        display();
        cout << endl;
    }
}