#include <bits/stdc++.h>
#define ll long long

using namespace std;
int cnt1 = 0;
int cnt2 = 0;
int cnt3 = 0;

class HoaDon;
class KhachHang;
class MatHang;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
	public :
		string ma, ten, gioitinh, ngaysinh, diachi;
		friend class HoaDon;

		friend istream &operator >> (istream &in, KhachHang &a)
		{
			cnt1++;
			if(cnt1 < 10) a.ma = "KH00" + to_string(cnt1);
			else a.ma = "KH0" + to_string(cnt1);

			scanf("\n");
			getline(in, a.ten);
			getline(in, a.gioitinh);
			getline(in, a.ngaysinh);
			getline(in, a.diachi);
			KH[a.ma] = a;

			return in;
		}
		friend ostream &operator << (ostream &out, KhachHang a)
		{
			cout << a.ten << " " << a.diachi;
			return out;
		}
};
class MatHang
{
	public :
		string ma, ten, donvi;
		int mua, ban; 
		friend class HoaDon;

		friend istream &operator >> (istream &in, MatHang &a)
		{
			cnt2++;
			if(cnt2 < 10) a.ma = "MH00" + to_string(cnt2);
			else a.ma = "MH0" + to_string(cnt2);

			scanf("\n");
			getline(in, a.ten);
			getline(in, a.donvi);
			cin >> a.mua >> a.ban;
			MH[a.ma] = a;

			return in;
		}
		friend ostream &operator << (ostream &out, MatHang a)
		{
			cout << a.ten;
			return out;
		}
};


class HoaDon
{
	public :
		string ma, makh, mamh;
		int soluong, loinhuan;	

		friend istream &operator >> (istream &in, HoaDon &a)
		{
			cnt3++;
			if(cnt3 < 10) a.ma = "HD00" + to_string(cnt3);
			else a.ma = "HD0" + to_string(cnt3);

			in >> a.makh >> a.mamh >> a.soluong;
			a.loinhuan = (MH[a.mamh].ban - MH[a.mamh].mua) * a.soluong;
			return in;
		}
		friend ostream &operator << (ostream &out, HoaDon a)
		{
			cout << a.ma << " " << KH[a.makh] << " " << MH[a.mamh] << " ";
			cout << a.soluong << " " << MH[a.mamh].ban * a.soluong  << " " <<a.loinhuan << endl;
			return out;
		}
};

bool cmp(HoaDon a, HoaDon b)
{
	return a.loinhuan >= b.loinhuan;
}

void sapxep(HoaDon dshd[], int k)
{
	sort(dshd, dshd + k, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

