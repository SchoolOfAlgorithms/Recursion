#include<bits/stdc++.h>
using namespace std;



void TowerOfHanoi(int n, char source , char helper,char destination){
	//base case
	if(n==0)return ;
	//recursive
	//1. move n-1 disc frm to source to helper (consider n-1 disc as one disc and you will able to think through it 
	TowerOfHanoi(n-1, source, destination,helper );
    //2. manually place nth disc from source to destination
    cout<<"Take a disc "<<n<<" from "<< source<<" to "<<destination<<endl;
    //3. move n-1 disc from helper to destination
    TowerOfHanoi(n-1, helper , source , destination);
	
} 
int main(){
	int n;
	cin>>n;
	TowerOfHanoi(n, 'A', 'B', 'C');
}
