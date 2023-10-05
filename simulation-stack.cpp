//C++ 
#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
   string line;
   string cmd;
   stack<int> s;
   int x;
   while(getline(cin, line)){
   	if(line =="#")
   	break;
   	istringstream iss(line);
   	iss >> cmd;
   		if(cmd=="PUSH"){
   			iss >>x;
   			s.push(x);
		   }
		if(cmd=="POP"){
		   	if(s.empty()){
		   		cout<<"NULL"<<endl;
			   }
			   else{
			   	cout << s.top()<<endl;
			   	s.pop();
			   }
	      }	 
	   }
	     return 0;
   }


