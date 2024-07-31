#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
int sumNum(int n)
{
    int res = 0;
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int N; cin >> N;
        int ok = 0;
        if(!isPrime(N))
        {
            int sum = sumNum(N);
            int sumNumDiv = 0;
            for(int i = 2; i <= sqrt(N); i++)
            {
                if(N % i == 0)
                {
                    while(N % i == 0)
                    {
                        sumNumDiv += sumNum(i);
                        N /= i;        
                    }
                }
            }
            if(N > 1) sumNumDiv += sumNum(N);
            if(sum == sumNumDiv) ok = 1;
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }   
}