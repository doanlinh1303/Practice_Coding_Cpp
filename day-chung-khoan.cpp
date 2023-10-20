#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	 int a[n]; 
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int tmp=a[0],cnt=1;
	for(int i=1; i<n; i++){
		if(tmp<a[i]){
			++cnt;
			tmp=a[i];
		}
	}
	cout << cnt<< endl;
	return 0;
}
