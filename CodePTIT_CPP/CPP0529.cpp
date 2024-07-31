#include <bits/stdc++.h>
#define ll long long
using namespace std;
int cnt = 0;
struct SinhVien
{
    string id, name, clas, mail, comp;
    int stt;
};
void nhap(SinhVien a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cnt++;
        a[i].stt = cnt;
        
        getline(cin,a[i].id);
        getline(cin,a[i].name);
        getline(cin,a[i].clas);
        getline(cin,a[i].mail);
        getline(cin,a[i].comp);
    }
}
void in(SinhVien a[], int n, string s)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i].comp == s)
        {     
            cout << a[i].stt << " " << a[i].id << " " << a[i].name << " " << a[i].clas << " ";
            cout << a[i].mail << " " << a[i].comp;
            cout << endl;
        }
    }
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.id < b.id;
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    cin.ignore();
    nhap(ds, N);
    sort(ds, ds + N, cmp);
    
    int d; cin >> d;
    cin.ignore();
    while(d--)
    {
        string s; cin >> s;
        in(ds, N, s);
    }
}