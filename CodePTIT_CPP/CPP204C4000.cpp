#include <bits/stdc++.h>
#define ll long long

using namespace std;
struct SinhVien
{
    string id, name, clas, date;
    float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    a.id = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.clas >> a.date;
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a)
{
    cout << a.id << "\t" << a.name << "\t" << a.clas << "\t";
    if(a.date[1] == '/') a.date = '0' + a.date;
    for(int i = 0; i < a.date.length(); i++)
    {
        if(a.date[i - 1] == '/' && a.date[i + 1] == '/')
            cout << "0";
        cout << a.date[i];
    }
    cout << "\t" << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}