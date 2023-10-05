#include<bits/stdc++.h>
using namespace std;
int main(){
	string line;
	set<string> se;
	while(getline(cin, line)){
		if(line =="*") break;
		se.insert(line);
	}
	while(getline(cin,line)){
		if(line=="***") break;
		string cmd, res;
		while(stringstream(line) >> cmd >> res){
			if (cmd=="find"){
				if(se.find(res)==se.end()){
				cout << 0<<endl;break;}
				else {
				cout << 1<<endl;break;}
			}
			else {
				if(se.find(res)==se.end()) {
					se.insert(res);
					cout <<1<<endl;break;
				}
				else
				{
				cout <<0<<endl;break;}
			}
		}
	}
}
