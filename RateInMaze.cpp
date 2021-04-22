#include<bits/stdc++.h>
using namespace std;
bool ratinmaze(char maze[][5],int i,int j, int solution[][4], int n, int m){
	if(i==n-1 && j==m-1){
		solution[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<solution[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
     return false;

	}
   solution[i][j]=1;
   // rercursive case
  if(j+1<m && maze[i][j+1]!='X' ){
        bool forward= ratinmaze(maze,i,j+1, solution, n, m);
		if(forward)return true;
   }
   if(i+1<n && maze[i+1][j] !='X' ){
       bool downward= ratinmaze(maze, i+1, j, solution, n, m);
	   if(downward)return true;
   }
    
   // backtracking case
   solution[i][j]=0;
   return  false;

}
int main() {
	//  int n,m;
	// cin>>n>>m;
    char maze[4][5]={"OOOO","OOXX","OOOO","XXOO"};
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		cin>>maze[i][j];
	// 	}
	// }
    int solution[4][4];
	ratinmaze(maze, 0,0,solution, 4,4);
	return 0;
}
