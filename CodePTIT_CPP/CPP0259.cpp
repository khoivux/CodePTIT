#include <bits/stdc++.h>
using namespace std;

 main(){
	int n, m , p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p];


	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> b[i][j];
		}
	}
	
	for(int i=0; i<n; i++){	
		for(int j=0; j<p; j++){
			int t =0;
			for(int k=0; k<m; k++){
				t+=a[i][k]*b[k][j];
			}
			cout << t << " ";
		}
		cout << endl;
	}

}