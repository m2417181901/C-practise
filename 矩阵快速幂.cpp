#include<bits/stdc++.h>
using namespace std;
#define Max 1000000007
typedef long long ll;
//const int N = 10;
const int inf=0x3f3f3f3f;
const ll INF=9e18;
const int N=1e2+50;
const ll mod=1e9+7;
int n,m,k,s;
int power(long long x,int n)
{
	long long ans = 1;
	while(n>0)
	{
		if(n&1)
		{
			ans *= x;
			ans %= Max;
		}
		x *= x%Max;
		x %= Max;
		n = n/2;
	}
	return ans%Max;
}
int power1(long long x,int n)
{
	long long ans = 1;
	while(n--)
	{
		ans *= x;
		ans %= Max;	
	}
	return ans%Max;
	
	
}
struct Matrix{
	ll a[N][N];
	Matrix(){memset(a,0,sizeof(a));}
	Matrix operator* (const Matrix &rhs) const
	{
		Matrix res;
		for(int i=1;i<n;i++)
			for(int j=1;j<n;j++)
				for(int k=1;k<n;k++)
				{
					res.a[i][j] +=this->a[i][k] * rhs.a[k][j];	
				}
		return res;
	}
	
}G,res; 
/*typedef struct ab{
	int a;
	int b;
	ab(int aa,int bb)(a(aa),b(bb)){}
	}
};
*/
void fpow(int k)
{
	while(k>0)
	{
		if(k&1) res *= G;
		G *= G;
		k /= 2;
	}
}
int main()
{
	scanf("%d%d%d%d",&n,&m,&k,&s);
    for(int i=1;i<=m;i++) {
        int u,v;
        scanf("%d%d",&u,&v);
        G.a[u][v]++;
    }
    for(int i=1;i<=n;i++) res.a[i][i]=1; 
    fpow(k);
    ll sum=0;
    for(int i=1;i<=n;i++)
        if(i!=s) sum+=res.a[s][i],sum%=mod;
    printf("%lld\n",sum);
    return 0;
} 
