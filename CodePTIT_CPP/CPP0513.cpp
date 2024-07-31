#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien
{
    string id, name, clas, day;
    float gpa;
};
void nhap(SinhVien a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        string s = "B20DCCN0";
        if(i + 1 < 10) s = s + '0' + to_string(i + 1);
        else s = s + to_string(i + 1);
        a[i].id = s;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].clas >> a[i].day >> a[i].gpa;;

        if(a[i].day[2] != '/') a[i].day = "0" + a[i].day;
        if(a[i].day[5] != '/') a[i].day.insert(3, "0");
    }
}
void in(SinhVien a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].clas << " ";
        cout << a[i].day << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}