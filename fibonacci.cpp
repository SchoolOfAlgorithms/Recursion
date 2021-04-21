#include<bits/stdc++.h>
using namespace std;

//fibonacci series 0,1,1,2,3,5,8,13,....... : f(n)=f(n-1) + f(n-2)

int fibonacci(int n){
	// base case 
	if(n==0 || n==1)return n;
	
	//recursive case (pure assumption  we dont know we get the answer)
	return fibonacci(n-1) + fibonacci(n-2); 
	
}
int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}
