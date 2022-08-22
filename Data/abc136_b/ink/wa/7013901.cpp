#include<cstdio>
#include<string>
using namespace std;
main()
{
int n;
scanf("%d",&n);
int ans=0;
for(int i=1;i<n;i++)
{
if(to_string(i).size()%2==1)ans++;
}
printf( "%d\n",ans);
return 0;
}
