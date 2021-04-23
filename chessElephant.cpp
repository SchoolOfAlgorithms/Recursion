#include<bits/stdc++.h>
using namespace std;
int chessElephant(int n, int m){
	if(n==0 and m==0){
		return 1;
	}
	int sumforrow=0;
	for(int i=0;i<n;i++){
		sumforrow+=chessElephant(i, m);
	}
//	int sumforcolumn=0;
	for(int i=0;i<m;i++){
		sumforrow+=chessElephant(n, i);
	}
	return sumforrow ;
}
int main(){
   int n, m;
   cin>>n>>m;
   cout<<chessElephant(n,m);
}
