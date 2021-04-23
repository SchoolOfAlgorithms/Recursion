#include<bits/stdc++.h>
using namespace std;
string RemoveDuplicate(string s,int  i){
	 if(s.length()-1==i){
	 	return s;
	 }
	 
	 string smallerstring= RemoveDuplicate(s, i+1);
	 
	 if(smallerstring[i]==smallerstring[i+1]){
	 	smallerstring =smallerstring.substr(0,i) +smallerstring.substr(i+1);
	 }
	 
	 return smallerstring ;
}
int main(){
	string s;
	cin>>s;
	int n=s.size();
	cout<<RemoveDuplicate(s, 0)<<endl;
	return 0; 
}
