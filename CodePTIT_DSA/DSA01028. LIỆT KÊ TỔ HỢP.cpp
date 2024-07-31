#include <bits/stdc++.h>
#define ll long long

using namespace std;

int N, n = 0, k;
int x[10000];
int a[10000];
int arr[10000];
int cnt[10000] = {0};
void init()
{
    for(int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        if(cnt[arr[i]] == 0)
        {
            n++;
            a[n] = arr[i];
            cnt[arr[i]]++;
        }
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= k; i++)
    {
        x[i] = i;
    }
}

bool isFinal()
{
    for(int i = 1; i <= k; i++)
    {
        if(x[i] != n - k + i) return false;
    }
    return true;
}

void display()
{
    for(int i = 1; i <= k; i++)
    {
        cout << a[x[i]] << " ";
    }
    cout << endl;
}

void nextGen()
{
    int i = k; 
    while(i >= 1 && x[i] == n - k + i)
    {
        i--;
    }
    if(i >= 1)
    {
        x[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            x[j] = x[j - 1] + 1;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N >> k;
    init();
    while(!isFinal())
    {
        display();
        nextGen();
    }
    display();
}
