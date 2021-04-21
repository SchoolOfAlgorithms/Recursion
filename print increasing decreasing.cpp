#include<bits/stdc++.h>
using namespace std;

void NumInDecreasing(int n){
	//base case
	if(n==0) return ;
	
	//solve the problem
	cout<<n<<endl;
	NumInDecreasing(n-1);

}

void NumInIncreasing(int n){
	//base case
	if(n==0) return ;
	
   //recursive case
	NumInIncreasing(n-1);
	
	//solve the problem
	cout<<n<<endl;

}

int main(){
	int n;
	cin>>n;
	cout<<"print increasing"<<endl;
	NumInIncreasing(n);
	cout<<"print decreasing"<<endl;
    NumInDecreasing(n);
	
}
