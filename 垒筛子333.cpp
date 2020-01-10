#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MO=1e9+7;
const int opps[]={0,4,5,6,1,2,3};

struct Mat {
    int r,c;
    ll el[10][10];
    Mat() {}
    Mat(ll x) {
        r=c=6;
        memset(el,0,sizeof(el));
        for (int i=1;i<=r;i++) {
            el[i][i]=x;
        }
    }
    Mat(int _r,int _c,ll x) {
        r=_r;c=_c;
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=c;j++) {
                el[i][j]=x;
            }
        }
    }
    Mat operator *(const Mat &b) {
        Mat res(r,b.c,0);
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=b.c;j++) {
                for (int k=1;k<=c;k++) {
                    res.el[i][j]+=el[i][k]*b.el[k][j];
                }
            }
        }
        return res;
    }
    Mat operator %(const int Mo) {
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=c;j++) {
                el[i][j]=el[i][j]%Mo;
            }
        }
        return (*this);
    }
    void print() {
        for (int i=1;i<=r;i++) {
            for (int j=1;j<=c;j++) {
                printf("%I64d ",el[i][j]);
            }
            puts("");
        }
    }
};

template <class DataType>
DataType fpow(DataType x,int n)
{
    DataType res(1);
    while (n) {
        if (n&1) {
            res=x*res%MO;
        }
        x=x*x%MO;
        n>>=1;
    }
    return res;
}

int main()
{
    int n,m;
    Mat coop(6,6,1);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;i++) {
        int x,y;
        scanf("%d%d",&x,&y);
        coop.el[x][opps[y]]=0;
        coop.el[y][opps[x]]=0;
    }
    coop=fpow(coop,n-1);
    Mat cnt(6,1,1);
    cnt=coop*cnt%MO;
    ll ans=0,fo=4;
    for (int i=1;i<=6;i++) {
        ans=(ans+cnt.el[i][1])%MO;
    }
    ans=ans*fpow(fo,n)%MO;
    printf("%I64d\n",ans);
    return 0;
}

