#include<bits/stdc++.h>
using namespace std;
int main()
{
double n,p;
double ans;
while(scanf("%lf%lf",&n,&p)==2)
{
ans=pow(p,1/n);
printf("%.0lf\n",ans);
}
return 0;
}
