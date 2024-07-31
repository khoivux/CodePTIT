#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll b, p; cin >> b >> p;
		if(p == 1) cout << 0 << endl;
		else{
			ll s = 0;
			for(ll i = 1;i < p ;i++)
			{

	        	if((i * i) % p == 1)
	        	{ 
	        		ll k = i + p * (b / p); 
	        	    if(k > b) k -= p; 
	         		s += (k - i) / p + 1; 
	       		}
	    	}
	    	cout << s << endl;
		}
	}
}