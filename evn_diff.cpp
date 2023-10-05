#include<bits/stdc++.h>
using namespace std;
int main(){
	double x;
	cin >> x;
	double gia_hien_hanh, gia_de_xuat;
	if(x<=50) gia_hien_hanh = x*1.728;
	else{
		if(x<=100) gia_hien_hanh =50*1.728+(x-50)*1.786;
		else{
			if(x<=200) gia_hien_hanh =50*1.728+50*1.786+(x-100)*2.074;
			else{
				if(x<=300) gia_hien_hanh =50*1.728+50*1.786+100*2.074+(x-200)*2.612;
				else {
					if(x<=400) gia_hien_hanh =50*1.728+50*1.786+100*2.074+100*2.612+(x-300)*2.919;
					else gia_hien_hanh=50*1.728+50*1.786+100*2.074+100*2.612+100*2.919+(x-400)* 3.015;
				}
			}
		}
	}
//	cout<< gia_hien_hanh * 1.1<< endl; 
	
if(x<=100) gia_de_xuat = x*1.728;
	else{
		if(x<=200) gia_de_xuat =100*1.728+(x-100)*2.074;
		else{
			if(x<=400) gia_de_xuat =100*1.728+100*2.074+(x-200)*2.612;
			else{
				if(x<=700) gia_de_xuat =100*1.728+100*2.074+200*2.612+(x-400)*3.111;
				else {
					gia_de_xuat=100*1.728+100*2.074+200*2.612+300*3.111+(x-700)* 3.457;
				}
			}
		}
	}
	double diff =(gia_de_xuat-gia_hien_hanh)*1100;
	 cout<<fixed<< setprecision(2)<<diff;
	}

