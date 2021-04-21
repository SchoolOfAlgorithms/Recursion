#include<bits/stdc++.h>
using namespace std;

bool find(int *array, int n, int element){
	
	//base case
	if(n==0)return false;
	
	//solution
	else if(array[n-1]==element)return true;
	
	//recursive case
	else return find(array, n-1, element);
	
	
	
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)cin>>array[i];
	int element;
	cin>>element;
	if(find(array, n, element))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
