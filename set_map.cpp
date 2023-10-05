//set Ologn
// insert, size, find, count
//erase
//
//multiset
//Unorder_set
#include<bits/stdc++.h>
using namespace std;
int main(){
//	set <int> s;
//	int n=5;
////	cin >>n;
//	for (int i=0; i<n; i++){
//		int x; cin >>x;
//		s.insert(x);
//	}
//	
//	cout << s.size();
//	if (s.count(5)==0) cout<<"not found";
//	else cout <<" found";
//	if( s.find(5)!=s.end()){
//		cout <<"found";
//	}
//	s.erase(1);
	for(set<int> :: iterator it = s.begin(); it !=s.end(); it++){
		cout<<*it<<" ";
	}
//	cout<< *s.begin();
//	cout <<*s.rbegin();// phan tu cuoi vi s.end() la tro den phan tu sau phan tu cuoi
//	



//cho mang co n pt va so nguyen k, doi voi moi day con lien tiep co chieu dai k, thi output la phan tu lon nhat cua moi day con
//ex: input 10 3
//1 2 3 1 4 5 1 8 9 10
//input: 3 3 4 5 5 8 9 10

//int n, k; cin >> n>>k;
//int a[n];
//for(int i=0; i<n; i++){
//	int x; cin >>x;
//	a[i]=x;
//}
//multiset<int> ms;
//
//for(int i=0; i<k; i++){
//	ms.insert(a[i]);
//}
//for(int i=k; i<n;i++){
//	cout << *ms.rbegin()<<" ";
//	ms.erase(ms.find(a[i-k]));
//	ms.insert(a[i]);
//}
//cout << *ms.rbegin()<<endl;

//unordered_set
//unordered_set<int> us;
//set<int> s;
//for(int i=1; i<=10;i++){
//	us.insert(i);
//}
//for(int x: us){
//	cout << x<< " ";
//}
//for(int i=1; i<=10;i++){
//	s.insert(i);
//}
//cout <<endl;
//for(int x: s){
//	cout << x<< " ";
//}
	return 0;
}
