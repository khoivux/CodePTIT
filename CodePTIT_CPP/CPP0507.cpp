#include <bits/stdc++.h>
#define ll long long

using namespace std;
struct PhanSo{
    ll tu, mau;
};
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo res;
    res.mau = lcm(p.mau, q.mau);
    res.tu = (res.mau / p.mau) * p.tu + (res.mau / q.mau) * q.tu;
    ll t = gcd(res.tu, res.mau);
    res.tu /= t;
    res.mau /= t;
    return res;
}
int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}