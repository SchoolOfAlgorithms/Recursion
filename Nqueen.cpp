#include<bits/stdc++.h>
using namespace std;
int count;
bool safe( int chess[][11], int i, int j, int n){
	//check wheather there is any queen in the (i'j)th
	for(int k=0;k<n;k++){
		if(chess[i][k]==1 || chess[k][j]==1){
			return false;
		}
	}
  
  int l=i,m=j;
  while(i>=0 && j<n){
    if(chess[i][j]==1){
    	return false;
	}
	i--;
	j++;
  }
  
  i=l,j=m;
  while(i>=0 && j>=0){
  	if(chess[i][j]==1){
  		return false;
	  }
	  i--;
	  j--;
  }
  return true;
}
bool Nqueen(int chess[][11], int i, int n ){
	
	//base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<chess[i][j]<<" ";
			}
			cout<<endl;
		}
        cout<<endl;
         
		return  false;
	}
	//recursive case
	for(int j=0;j<n;j++){
	
		if(safe(chess, i, j, n)){
			chess[i][j]=1;
			bool issolved = Nqueen(chess, i+1,n);
			if(issolved){
				return true;
			}
			else chess[i][j]=0; //backtrack
		}	 
		
	}
	
	return false;
}
int main(){
	int chess[11][11]={0};
	int n;
	cin>>n;
	Nqueen(chess, 0, n);
 
}
