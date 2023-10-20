#include<bits/stdc++.h>
using namespace std;
#define MAX 20
int n;
int a[MAX][MAX];
int cmin=INT_MAX;
int s=0;
int used[MAX];
int best=INT_MAX;
int x[MAX];
void readData(){
    // ifstream f;
    // f.open("tsp.txt", ios::in);
    // f >> n;
    cin >>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]!=0)
            cmin=min(cmin, a[i][j]);
        }
    }
    //f.close();
}
void Try(int i){
    if(s+cmin*(n-i+1)>=best)
    return;
    for(int j=1; j<=n; j++){
        if(used[j]==1){
            x[i]=j;
            used[j]=0;
            s+=a[x[i-1]][j];
            if(i==n){
                if(s+a[x[n]][x[1]]<best)
                best=s+a[x[n]][x[1]];
            }
            else
            Try(i+1);
            //backtrack
            s-=a[x[i-1]][j];
            used[j]=1;
        }
    }
}
int main(){
    readData();
  for(int i=1; i<=n; i++){
    used[i]=1;
  }
   x[1]=1;
   used[1]=0;
   Try(2);
 cout << best;
    return 0;
}