#include <bits/stdc++.h>
#define ll long long

using namespace std;
class SinhVien{
    private:
        string msv, name, clas, day;
        float gpa;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream& in, SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(in, a.name);
    getline(in, a.clas);
    getline(in, a.day);
    in >> a.gpa;
    if(a.day[2] != '/') a.day = "0" + a.day;
    if(a.day[5] != '/') a.day.insert(3, "0");
    return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << a.msv << " " << a.name << " " << a.clas << " " << a.day << " " << fixed << setprecision(2) << a.gpa;
    return out;
}int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}