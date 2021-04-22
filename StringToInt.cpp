#include<bits/stdc++.h>
using namespace std;

int StringToInt(char *s, int n){
	//base case
	if(n==0)return 0 ;
	
	//recursive case
	return StringToInt(s,n-1)*10 + (s[n-1])-'0';
	
}
int main(){
 
	char s[1000];
	cin>>s;
	 int x=100+StringToInt(s, strlen(s));
	 cout<<x<<endl;
	
}
