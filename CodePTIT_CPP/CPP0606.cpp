#include <bits/stdc++.h>
#define ll long long

using namespace std;
class NhanVien{
    private:
        string msv, name, gioitinh, day, diachi, thue, date;
        float gpa;
    public:
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator >> (ostream&, NhanVien);
};
istream& operator >> (istream& in, NhanVien &a)
{
    a.msv = "00001";
    getline(cin, a.name);
    cin >> a.gioitinh >> a.day;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.thue >> a.date;
    if(a.day[2] != '/') a.day = "0" + a.day;
    if(a.day[5] != '/') a.day.insert(3, "0");
    if(a.date[2] != '/') a.date = "0" + a.date;
    if(a.date[5] != '/') a.date.insert(3, "0");
    return in;
}
ostream& operator >> (ostream& out, NhanVien a)
{
    cout << a.msv << " " << a.name << " " << a.gioitinh << " " << a.day << " "  << a.diachi << " " << a.thue << " " << a.date;
    return out;
}int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}