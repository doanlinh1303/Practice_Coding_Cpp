#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long a,b;
	cin >>a>>b;
	unsigned long long x=a/10+b/10;
	int y=a%10+b%10;
	if(x<10){
		cout <<a+b;
	}
	else{
		if(y>=10) cout << x+1<<y%10;
	else cout <<x<<y%10;
	}
}
