#include<iostream>
#include<stdlib.h>
using namespace std;
int count = 0; 
bool Check(int n,int t,int i,int s,int **map)   
    {  
        for(int q=t-1;q>=0;q--)                       
        {  
            if(map[q][i]==s)return false;  
        }         
        for(int q=t-1,w=i-1;q>=0&&w>=0;q--,w--)        
        {  
            if(map[q][w]==s)return false;  
        }  
        for(int q=t-1,w=i+1;q>=0&&w<=n-1;q--,w++)     
        {  
            if(map[q][w]==s)return false;  
        }  
        return true;                                
    }
void p(int i,int j,int n,int **map){
	if(i==n){
		if(j==2)p(0,3,n,map);
		else count++;
		return ;
	}
	for(int k=0;k<n;k++){
		if(map[i][k]!=1)
			continue;
		if(Check(n,i,k,j,map))
			map[i][k] = j;
		else
			continue;
		p(i+1,j,n,map);
		map[i][k] = 1;			
	}
	return ;		
	}

int main(void){
	int n;
	cin>>n;
	int **t = new int*[n];
	for(int i=0;i<n;i++)
		t[i] = new int[n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>t[i][j];
	p(0,2,n,t);
	cout<<count<<endl;	
} 
