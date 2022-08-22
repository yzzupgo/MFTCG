#include <bits/stdc++.h>
#define lb lower_bound
#define ub upper_bound
#define sqr(x) (x)*(x)
#define lowbit(x) (x)&(-x)
#define mem(a,x) memset(a,x,sizeof(a));
using namespace std;
typedef long long ll;
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(b<=4*a&&b>=2*a&&b%2==0) printf("Yes\n");
else printf("No\n");
}
