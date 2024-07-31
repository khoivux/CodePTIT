#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV;
    string tenSV;
    string lop;
    float diem1;
    float diem2;
    float diem3;
};

void nhap(SinhVien &sv) {
    cin.ignore();
    getline(cin, sv.maSV);
    getline(cin, sv.tenSV);
    getline(cin, sv.lop);
    cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

void sap_xep(SinhVien ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tenSV > ds[j].tenSV) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

void in_ds(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << ds[i].maSV << " " << ds[i].tenSV << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
    }
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
