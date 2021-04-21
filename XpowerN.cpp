#include<bits/stdc++.h>
using namespace std;

int XpowerN(int x, int n){
	//base case
	if(n==0)return 1;
	
	//recursive case
	return x*XpowerN(x, n-1);
}
int main(){
	int x,n;
	cin>>x>>n;
	cout<<XpowerN(x,n)<<endl;
}
