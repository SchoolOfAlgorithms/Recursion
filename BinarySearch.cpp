#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr, int l, int r, int key){
	 
	if(l>r)return -1;
	
	int mid=(l+r)/2;
	if(arr[mid]==key)return mid;
	else if(arr[mid]>key) return BinarySearch(arr, l,mid-1, key);
	else return BinarySearch(arr, mid+1, r, key);	
	
}
int main(){
	
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;	
    cout<<BinarySearch(arr, 0, n-1, key)<<endl;	
 
}
