#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	map<int, int> mp;
	while (t--){
		int n; cin n;
		for(int i=0;  i<n; i++){
			int x; cin >> x;
			mp[x]++
		}
		int res=0;
		for(auto x: mp){
			if(x.second>1)
			res+=x.second;
		}
		cout << res;
		
	}
	return 0;
}
