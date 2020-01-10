#include<iostream>
using namespace std;
int num=0;
 
void dfs(int n,int r,int l){
	if(n==32){
		num++;
		return;
	}
 
		if(r>l){
			if(r<16)
			dfs(n+1,r+1,l);
			if(l<16)
			dfs(n+1,r,l+1);
		}else{
			if(r==l)
			if(r<16)
			dfs(n+1,r+1,l);
		}
 
	return;
}
 
int main(){
	
	dfs(0,0,0);
	cout<<num<<endl;
	return 0;
}
