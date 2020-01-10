#include<stdio.h>
#include<string.h>
#define N 6

int vis[N+1][N+1],ans=0,d[4][2]={0,1,1,0,0,-1,-1,0};

int dfs(int x,int y){
    int i,x1,y1;
    if(x==0||y==0||x==N||y==N){
        ans++;
        return 0;
    }
    else{
        for(i=0;i<4;i++){//???????????          
            x1=x+d[i][0];
            y1=y+d[i][1];
            if(vis[x1][y1]==0){//?????????? 
                vis[x1][y1]=1;
                vis[N-x1][N-y1]=1;
                dfs(x1,y1);//?? 
                vis[x1][y1]=0;//??,????? 
                vis[N-x1][N-y1]=0;
            }   
        }
    }
}

int main(){
    memset(vis,0,sizeof(vis));
    vis[3][3]=1;
    dfs(3,3);
    printf("%d",ans/4); 
    return 0;
} 

