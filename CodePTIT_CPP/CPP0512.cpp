#include <bits/stdc++.h>
#define ll long long

using namespace std;
struct PhanSo
{
    ll tu, mau;
};
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
PhanSo rutgon(PhanSo a)
{
    PhanSo res = a;
    ll t = gcd(res.tu, res.mau);
    res.tu /= t;
    res.mau /= t;
    return res;
}
PhanSo tich(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    res = rutgon(res);
    return res;
}
PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.mau = lcm(a.mau, b.mau);
    res.tu = (res.mau / a.mau) * a.tu + (res.mau / b.mau) * b.tu;
    res = rutgon(res);
    return res;
}
void process(PhanSo a, PhanSo b)
{
    // C = (A + B)2 = A2 + B2 + 2AB
    PhanSo C;
    C = tong(tich(a, a), tich(b, b));
    C = tong(C, tong(tich(a, b), tich(a, b)));
    cout << C.tu << "/" << C.mau << " ";
    // D = A x B x C
    PhanSo D = tich(a, tich(b, C));
    cout << D.tu << "/" << D.mau;
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}