#include<bits/stdc++.h>
using namespace std;
//cho trc 1 mang a, sap xep lai cac so trong mang a[i]=i in ra i ko thi in -1
int main(){
	int t;cin >> t;
	while(t--){
		unsigned int n; cin >> n;
		set<long> se;
		for(int i=0; i<n; i++){
			long x; cin >> x;
			se.insert(x);	
		}
		for(int i=0; i<n; i++){
			if(se.find(i)==se.end())	 cout << -1<<" ";
			else cout <<i<<" ";	
		}
		cout <<endl;
	}
	
	
}
