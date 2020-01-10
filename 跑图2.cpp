#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mset(a,b) memset(a,b,sizeof(a))
#define sz size()
#define cl clear()
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164
typedef long long ll;
const int inf = 99999999;
const double eps = 1e-8;
const int dir4[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
const int dir8[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
const ll mod = 2000000000000000003;
struct node{
	int x,y;
	int step;
	node(int x,int y,int step)
	{
		this->x = x;
		this->y = y;
		this->step = step;
	}
};
int mp[505][505],vis[505][505];
int n, m;
queue<node> q;
 
void bfs()
{	
	while(!q.empty())
	{
		node t = q.front();
		q.pop();
		
		for(int i = 0;i < 4;i ++)
		{
			int dx = t.x + dir4[i][0];
			int dy = t.y + dir4[i][1];
			
			if(dx < 1 || dy < 1 || dx > n || dy > m || vis[dx][dy]) continue;
			
			vis[dx][dy] = t.step + 1;
			q.push(node(dx,dy,t.step + 1));
		}
	}
}
int main() 
{
    cin >> n >> m;
    
    for(int i = 1;i <= n;i ++)
    {
    	for(int j = 1;j <= m;j ++)
    	{
    		cin >> mp[i][j];
    		if(mp[i][j])
    		{
    			vis[i][j] = inf;
    			q.push(node(i,j,0));
			}
		}
	}
	
	bfs();
	
	for(int i = 1;i <= n;i ++)
    {
    	for(int j = 1;j <= m;j ++)
    	{
    		if(j != 1)
    		cout << " ";
    		
    		if(vis[i][j] != inf)
    		cout << vis[i][j];
    		else
    		cout << 0 ;
		}
		cout << endl;
	}
    return 0;
} 
