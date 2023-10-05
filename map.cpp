#include<bits/stdc++.h>
using namespace std;
// (key, value) -- key la duy nhat
/*
mp.insert
for()
mp.size
mp.begin(), mp.end()
mp.count(argument)-> tra ve !=0 or 0
mp.find(argument) -> tra ve con tro mp.end() neu ko tim thay
mp.erase(key value) -> xoa key
*/
int main(){
//	map< int, int> mp;
//	mp.insert({100, 200});
//	mp.insert({400, 200});
//	mp.insert({100, 300});
//	//cout << mp.size();
//	mp.erase(100);
//	for( pair<int, int> x: mp)
//	cout << x.first <<" "<< x.second<<endl;
//	if(mp.count(500)!=0) cout << "found";

//dem so lan xuat hien cua cac phan tu trong mang sau do in ra kem so lan suat hien
	//input: 8      1 1 1 3 3 3 2 2 
	//out: 
//	1 3
//	2 2
//	3 3

//int n; cin>>n;
//map<int, int> mp;
//for(int i=0; i<n; i++){
//	int x; cin >>x;
//	mp[x]++;// bien count ++
//}	
//for (auto x: mp){
//	cout<< x. first<<x.second<<endl;
//}

//neu yeu cau in ra theo thu tu xuat hien

//int n; cin >>n; 
//int a[n];
//map <int , int> mp;
//for(int i=0; i<n; i++){
//	 cin >>a[i];
//	mp[a[i]]++;
//}
//for(int i=0; i<n; i++){
//	if(mp[a[i]]!=0){
//		cout<<a[i]<< " "<<mp[a[i]]<<endl;
//		mp[a[i]]=0;
//	}
//}

/* in chuoi xuat hien nhieu 
10
a
c
b
d
a
b
c
d
e
a
c
*/
int n; cin >>n;
map< string, int> mp;
for(int i=0; i<n; i++){
	string x;cin >> x;
	mp[x]++;
}
int max=0;
string res;
for(auto x : mp){
	if(x.second > max){
		max=x.second;
		res=x.first;
	}
}
cout << res << " "<< max;
}
