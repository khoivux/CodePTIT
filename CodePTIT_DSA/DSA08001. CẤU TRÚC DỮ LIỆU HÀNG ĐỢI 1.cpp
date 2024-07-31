#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--) 
	{
		int n; cin >> n;
		deque<int> dq;
		while(n--) {
			int q; cin >> q;
			if(q == 1) {
				cout << dq.size() << endl;
			}
			else if(q == 2) {
				if(dq.empty()) cout << "YES";
				else cout << "NO";
				cout << endl;
			}
			else if(q == 3) {
				int x; cin >> x;
				dq.push_back(x);
			}
			else if(q == 4) {
				if(!dq.empty())
					dq.pop_front();
			} 
			else if(q == 5) {
				if(dq.empty()) cout << -1;
				else cout << dq.front();
				cout << endl;
			}
			else {
				if(dq.empty()) cout << -1;
				else cout << dq.back();
				cout << endl;
			}
		}
	}
}