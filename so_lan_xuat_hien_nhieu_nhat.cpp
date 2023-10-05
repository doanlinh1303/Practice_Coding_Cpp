// so co so lan xuat hien nhieu nhat trong mang
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >>t;
	while(t--){
		int n;
		cin >> n;
		map<long, long> mp;
		for(int i=0;i<n; i++){
			long x; cin >> x;
			mp[x]++;
		}
		long key, cnt=0;
		for(auto x:mp){
			if(x.second >cnt){
				cnt= x.second;
				key=x.first;
			}
		}
		cout << key<<" "<<cnt;
	}
	return 0;
}
