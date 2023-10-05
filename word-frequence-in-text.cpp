#include<bits/stdc++.h>
using namespace std;

int main(){
	string line;
	string key;
	map<string, int> mp;
	while(getline(cin, line)){
		if(line=="") break;
		stringstream ss(line);
		while(ss >> key){
		mp[key]++;
		}
	}
	for(auto x: mp){
		cout <<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
