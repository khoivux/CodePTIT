#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int prime[1000000]={0};

void sieve(){
	prime[1] = prime[0] = 0;
	for(int i=2; i<=1000000; i++){
		prime[i]=1;
	}
	for(int i=2; i<=sqrt(100000); i++){
		if(prime[i]){
			for(int j=i*i; j<=100000; j+=i){ 		
				prime[j]=0;				
			}
		}
	}
}

main()
{	
	sieve();

	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	
	  for(int i = a+1; i < b; i++)
		if(prime[i]) cout << i << " ";
}