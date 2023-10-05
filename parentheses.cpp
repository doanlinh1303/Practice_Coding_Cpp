#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<char> s;
	string input;
	bool check=false;
	getline(cin, input);
	for(char c: input){
		if(c=='{'||c=='['||c=='('){
			s.push(c);
		}
		else{
			if(s.empty()){
				check=false;
			}
			else{
				if(c=='}'&&s.top()=='{'||c==']'&&s.top()=='['||c==')'&&s.top()=='('){
					s.pop();
					check =true;
				}
				else{
					check=false;
				}
				}
			}
		}
		if(s.empty()&&check) cout <<1;
		else cout <<0;
	}
	
	

