#include <bits/stdc++.h>
#define ll long long

using namespace std;
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutgon();
};
PhanSo::PhanSo(ll tu, ll mau)
{
    this->tu = tu;
    this->mau = mau;
}
ostream& operator << (ostream& out, PhanSo a)
{
    out << a.tu << "/" << a.mau << endl;
    return out;
}
istream& operator >> (istream& in, PhanSo &a)
{
    in >> a.tu >> a.mau;
    return in;
}
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
void PhanSo::rutgon()
{
    ll g = gcd(tu, mau);
    this->tu /= g;
    this->mau /= g;
}
main()
{
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}