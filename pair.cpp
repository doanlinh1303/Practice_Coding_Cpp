#include<bits/stdc++.h>
#include<tuple>
using namespace std;
//pair<dt_1,dt_2> p;
//p.first
//p.second
int main(){
//	pair<int , int> p;
//	pair<string, int>p1;
//	int x, y;cin >>x>>y;
//	p=make_pair(x,y);
//	cin >> p.first>>p.second>>p1.first>>p1.second;
//	cout << p.first<<" "<< p.second<<endl<< p1.first<<" "<<p1.second;
//	cout <<p.first<<" "<< p.second<<endl; 
	
	tuple<int , int , int> t{1, 2, 3};
	for (int i=1; i<=3;i++){
		
		cout << get<i>(t)<<" ";
	}
}
