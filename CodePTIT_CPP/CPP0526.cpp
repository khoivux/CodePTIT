#include <bits/stdc++.h>
using namespace std;

struct People {
    string name;
    string date;
    int day, month, year;
};

void nhap(People &pp) {
    scanf("\n");
    cin >> pp.name >> pp.date;
    pp.day = stoi((pp.date).substr(0, 2));
    pp.month = stoi((pp.date).substr(3, 2));
    pp.year = stoi((pp.date).substr(6));
}

bool cmp(People a, People b)
{
    if(a.year > b.year) return true;
    if(a.year == b.year)
    {
        if(a.month > b.month) return true;
        if(a.month == b.month)
        {
            if(a.day > b.day) return true;
        }
    }
    return false;
}
void in_ds(People ds[], int n) 
{
     cout << ds[0].name << endl;
     cout << ds[n - 1].name <<endl;
}

int main() {
    int n;
    cin >> n;
    struct People ds[199];
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sort(ds, ds + n, cmp);
    in_ds(ds, n);
}
