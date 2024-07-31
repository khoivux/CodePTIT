#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct PhanSo{
	ll tu, mau;
};

void nhap(PhanSo &p)
{
	cin >> p.tu >> p.mau;
}
ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}
void rutgon(PhanSo &p)
{
	ll t = gcd(p.mau, p.tu);
	p.mau /= t;
	p.tu /= t;
}
void in(PhanSo p)
{
	cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}