#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutgon();
        PhanSo operator + (PhanSo a)
        {
            PhanSo tong(0, 0);
            ll t = lcm(this->mau, a.mau);
            tong.tu = t / this->mau * this->tu + t / a.mau * a.tu;
            tong.mau = t;
            tong.rutgon();
            return tong;
        }
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
void PhanSo::rutgon()
{
    ll g = gcd(tu, mau);
    this->tu /= g;
    this->mau /= g;
}
// PhanSo PhanSo::operator + (PhanSo a)
// {
//     PhanSo tong(0, 0);
//     ll t = lcm(this->mau, a.mau);
//     tong.tu = t / this->mau * this->tu + t / a.mau * a.tu;
//     tong.mau = t;
//     tong.rutgon();
//     return tong;
// }
main()
{
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}