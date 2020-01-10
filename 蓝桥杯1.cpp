#include <algorithm>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
int main()
{
    freopen("input.txt","r",stdin);
    double ans = 0,a,b;
    char buf[1110];
    while(scanf("%s%lf%lf",buf,&a,&b)!=EOF){
        ans += a*b/100;
    }
    printf("%lf\n",ans);
    return 0;
}
