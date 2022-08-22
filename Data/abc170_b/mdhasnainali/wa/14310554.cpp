#include <iostream>
#include <stddef.h>
#define ll long long
#define pii pair<int,int>
#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define MAX3(a,b,c) max(a,max(b,c))
#define SQ(x) ((x) * (x))
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define end "\n";
using namespace std;
int main()
{
int x,y,a=-1,i,j;
cin>>x>>y;
for(i=1;i<=x;i++)
{
j=x-i;
if(j*4+i*2==y)
{
a=1;
}
}
if(a==1) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
