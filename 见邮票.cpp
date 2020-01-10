#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[5];
int ans = 0;
set<set<int> > ss;
bool used[13] = {false};
bool judge(int x,int y)
{
	if(x > y) swap(x,y);
	if(y - x == 4 || y == x +1 && x % 4 != 0)
	return true;
	
	return false;
}
bool ok(int x,int i)
{
	if(x == 0)
		return true;
	
	for(int j = 0;j < x;j ++)
	if(judge(a[j],i))
	return true;
	
	return false;
}
void dfs(int x)
{
	if(x == 5)
	{
		set<int> s(a,a+5);
		ss.insert(s);
		return ; 
	}
	
	for(int i = 1;i <= 12;i ++)
	{
		if(!used[i] && ok(x,i))
		{
			used[i] = true;
			a[x] = i;
			dfs(x + 1);
			used[i] = false;
		}
	}
}
int main()
{
	dfs(0);
	cout<<ss.size()<<endl;
}

