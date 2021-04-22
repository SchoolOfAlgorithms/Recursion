#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void subsequences(char * inp, char *out, int i, int j){
  //base case
  if(inp[i]=='\0'){
  	out[j]='\0';
  	cout<<out<<endl;
  	return ;
  }
  //solution
  out[j]=inp[i];
  //recursive case
  
  subsequences(inp, out, i+1, j+1);
  subsequences(inp, out, i+1,j);

}

void subsequences1(char * inp, char *out, int i, int j){
  //base case
  if(inp[i]=='\0'){
  	out[j]='\0';
  	string s(out);
  	v.push_back(s);
  	return ;
  }
  //solution
  out[j]=inp[i];
  //recursive case
  
  subsequences1(inp, out, i+1, j+1);
  subsequences1(inp, out, i+1,j);

}
int main(){
	char inp[100],  out[100];
	cin>>inp;
	subsequences1(inp, out,0, 0);
	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
