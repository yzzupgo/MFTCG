#include<cstdio>
#include<algorithm>
using namespace std;
int n;
inline int tp(int t)
{
if(n>=t) return t/10*9;
if(n<t/10) return 0;
return n%t+(t>10);
}
int main()
{
scanf("%d",&n);
printf("%d",tp(10)+tp(1000)+tp(100000));
}
