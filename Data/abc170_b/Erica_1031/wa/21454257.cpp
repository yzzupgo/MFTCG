#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define ch(a) (int(a-'a')+1)
#define mm(a) memset(a,0,sizeof(a))
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define inf 0x7FFFFFFF
typedef long long ll;
const int Maxx=1e5+5;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
if(y>=2*x&&y<=4*x) printf("Yes\n");
else printf("No\n");
return 0;
}
