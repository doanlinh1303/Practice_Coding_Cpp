#include<bits/stdc++.h>
using namespace std;
/* dau vao la 2 mang a, b in ra cac phan tu 
a co b ko co -> Not Found
a co b co -> Found
*/
int main(){
	int t; cin >> t;	
	while (t--){
			int n,m; cin >>n>>m;
			int a[n], b[m];
			set<int> se;
			for(int &x:a) cin >> x;
			for (int i=0; i<m; i++){
				int x; cin>> x;
				se.insert(x);
			}

			int cnt=0;
			for(int x:a){
				if(se.find(x)==se.end()){
					++cnt;
				}
			}
			cout <<cnt<<endl;
			
	}
}
