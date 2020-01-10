#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
struct node
{
    int fx,fy,next;
    double vl;
}st[100022];
int vis[10011],head[100011],n,m,num;
double dis[10011];
void DFS()
{
    queue <int> q;
    int i,j,ka;
    double ans;
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));
    dis[1] = 1.0;
    vis[1] = 1;
    q.push(1);
    while(!q.empty())
    {
        int pl = q.front();
        q.pop();
        vis[pl] = 0; // ????
        for(int i = head[pl] ; i != -1 ; i = st[i].next)
        {
            cout<<i<<endl;
			int py = st[i].fy;
            if(dis[py] < dis[pl] * st[i].vl)
            {
                dis[py] = dis[pl] * st[i].vl;
            if(!vis[py])
            {
                vis[py] = 1; // ????
                q.push(py);
            }
            }
            cout<<dis[py]<<endl;
        }
    }
    printf("%.6lf\n",dis[n] * 100);
}
void add(int px,int py,double va)
{
    st[num].fx = px;
    st[num].fy = py;
    st[num].vl = va;
    st[num].next = head[px];
    head[px] = num++;
}
int main()
{
    int T,a,b,i,j;
    double val;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        num = 0 ;
        memset(head,-1,sizeof(head));
        while(m--)
        {
           scanf("%d%d%lf",&a,&b,&val);
           val /= 100;
           add(a,b,val);
           add(b,a,val);
        }
       DFS();
    }
    return 0;
}

