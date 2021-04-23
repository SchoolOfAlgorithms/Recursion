#include<bits/stdc++.h>
using namespace std;
//euclidian algorithm
int GCD(int a, int b){
	//base case
	if(b==0)return a;
	//recursive case
	return GCD(b, a%b);
}
int main(){
	int a, b;
	cin>>a>>b;
	//for 2 numbers
	cout<<GCD(a,b)<<endl;
	
	//for 3 numbers a, b, c
	cout<<GCD(GCD(a,b), c)<<endl;
	return 0;
}
