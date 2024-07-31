#include <bits/stdc++.h>
using namespace std;

struct sinhvien{
    int stt;
    string id;
    string name;
    string clas;
    string email;
    string comp;
};

int n;
sinhvien a[1999];

bool cmp(sinhvien a, sinhvien b)
{
    return a.name < b.name;
}
void input(sinhvien &a)
{
    scanf("\n");
    getline(cin , a.id);
    getline(cin , a.name);
    getline(cin , a.clas);
    getline(cin , a.email);
    getline(cin , a.comp);   
}

int main() 
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        a[i].stt = i;
        input(a[i]);
    }

    sort(a + 1, a + n + 1, cmp);
    int q; cin >> q;
    while(q--)
    {
        string s; cin >> s;

        for(int i = 1; i <= n; i++)
        {   
            if(a[i].comp == s)
            cout << a[i].stt << " " << a[i].id << " " << a[i].name << " ";
            cout << a[i]. clas << " " << a[i].email << " " << a[i].comp << endl;
        }
    }
}
