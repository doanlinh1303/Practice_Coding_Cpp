#include<bits/stdc++.h>
using namespace std;

int main(){
	string line;
	vector<string> v;
	while(getline(cin, line)){
		if(line=="#")
		break;
		stringstream ss(line);
		for(int i=0; i<6; i++){
			string tmp;
			ss >> tmp;
			v.push_back(tmp);
		}		
	}
	
	for(auto x: v){
		cout << v[1]<<endl;
	}
}
