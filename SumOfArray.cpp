#include<bits/stdc++.h>
using namespace std;

int SumOfArray1(int *array, int n){
	//recursive case
	if(n==0)return 0;
	
	//base case
	return array[0]+SumOfArray1(array+1, n-1);
}

int SumOfArray2(int *array, int n){
	//base case
	if(n==0)return 0;
	
	//recursive case
	return SumOfArray2(array, n-1) + array[n-1];
}

int SumOfArray3(int *array, int n, int i){
	//base case
	if(i==n)return 0;
	
	//recursive case
	return array[i] + SumOfArray3(array, n, i+1);
	
	}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)cin>>array[i];
	
	//three approaches of recursion for sum of array
	cout<<SumOfArray1(array, n, 0)<<endl;
	cout<<SumOfArray2(array, n, 0)<<endl;
	cout<<SumOfArray3(array, n, 0)<<endl;
	
	return 0;
}
