#include<bits/stdc++.h>
using namespace std;
int main(){
//	vector <int> v;
//	v.push_back(10);
//	v.push_back(15);
//	v.push_back(20);
//	//cout << v[0]<<" "<<v.size();
//	for(int i=0; i < v.size(); i++){
//		cout << v[i] <<" ";
//	}
//	cout<< endl;
//	cout <<"phan tu cuoi cung " << v.back();
//	for (vector<int> :: iterator it=v.begin(); it!=v.end(); it++){
//		cout << *it<<" ";
//	}
//	int n; cin>>n;
//	vector<int> a(n,1);
//	for( int i=0;  i<n; i++){
//		cout << a[i]<<" ";
//	}
	string s="ngon ngu lap trinh C plus";
	stringstream ss(s);
	string tmp;
	vector<string> str;
	while(ss >> tmp){
		str.push_back(tmp);
	}
	
	for (vector<string> :: iterator it=str.begin(); it<str.end(); it++)
	cout << *it<<endl;
	return 0;
}
