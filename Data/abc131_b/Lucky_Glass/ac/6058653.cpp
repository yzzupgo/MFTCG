#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n,m;scanf("%d%d",&n,&m);
if(m<=0 && m+n-1>=0)
printf("%d\n",(m+n-1+m)*n/2);
else{
if(m+n-1<0) printf("%d\n",(m+n-2+m)*(n-1)/2);
else printf("%d\n",(m+1+m+n-1)*(n-1)/2);
}
return 0;
}
