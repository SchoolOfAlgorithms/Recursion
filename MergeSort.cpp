#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int n){
	int i, j;
	
}
void MergeSort(int *arr, int s, int e, int n){
	if(s>e)return;
	
	int mid=(s+e)/2;
	MergeSort(arr, s, mid, n);
	MergeSort(arr, mid+1, e,n);
	merge(arr, n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>n;
	MergeSort(arr, )
}
