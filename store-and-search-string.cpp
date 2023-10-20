#include<bits/stdc++.h>
using namespace std;
int main(){
	string line;
	set<string> se;
	while(getline(cin, line)){
		if(line =="*") break;
		se.insert(line);
	}
	string cmd="";
	string res;
	bool check= false;
	while(cmd!="***"){
		cin >> cmd >> res;
			if (cmd=="find"){
				if(se.find(res)==se.end()){
				cout << 0<<endl;}
				else {
				cout << 1<<endl;}
			}
			if(cmd=="insert"){
				if(se.find(res)==se.end()) {
					se.insert(res);
					cout <<1<<endl;
				}
				else
				{
				cout <<0<<endl;}
			}
		}
}

