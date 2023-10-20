#include<bits/stdc++.h>
using namespace std;
void sol1(){
	int n;
	cin >> n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int res= -2e9;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			int sum=0;
			for(int k=i; k<=j; k++){
				sum+=a[k];
			}
			if(sum>=res){
				res=sum;
			}
		}
	}
	cout << res;
}
void sol2(){
	int n;
	cin >> n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int res= -2e9;
	for(int i=1; i<=n; i++){
		int sum=0;
		for(int j=i; j<=n; j++){
			sum+=a[j];
			//check
			if(sum>res){
				res=sum;
			}
		}
	}
	cout << res;
}
int main(){
	//sol1();
	sol2();
	return 0;
}
