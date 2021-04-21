#include<bits/stdc++.h>
using namespace std;

int FindFirstIndex(int *array, int n, int element, int i){
	
 //base case
 if(i==n)return -1;
 
 //solution
 else if (array[i]==element)return i;
 
 //recursive case
 else FindFirstIndex(array, n, element, i+1);
 
	
	
}

int FindLastIndex(int *array, int n, int element, int i){
	if(i==0)return -1;
	else if(array[i-1]==element)return i;
	else FindLastIndex(array, n, element, i-1);
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)cin>>array[i];
	int element;
	cin>>element;
	cout<<FindFirstIndex(array, n, element, 0)<<endl; 
	cout<<FindLastIndex(array, n, element, n)<<endl; 
	 
	
}
