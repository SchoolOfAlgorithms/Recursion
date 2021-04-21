#include<bits/stdc++.h>
using namespace std;

bool IsSorted1(int *array, int n){
	// base case
	if(n==1 || n==0)return true;
	
    //recursive case
    bool check = IsSorted(array+1, n-1);
    
    if(check==true and array[0]<array[1])return true;
    
    else return false;
	
	
}

bool IsSorted2(int *array, int n , int i){
	
	//base case
	if(i==n-1)return true;
	
	//solve for one case
   else if(array[i]>array[i+1])return false;
   
   // recursive case
   else return IsSorted(array, n, i+1);
    
    
}
int main(){
	int n;
	cin>>n;
	int array[n]; 
	for(int i=0;i<n;i++)cin>>array[i];
	
	if(IsSorted(array, n, 0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
	
}
