#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
void solve()
{
int x, y;
scanf("%d %d",&x, &y);
if(2*x > y)
printf("NO\n");
else
{
int r = y%x;
if(r%2 == 0 && r<=x)
printf("YES\n");
else
printf("NO\n");
}
}
int main()
{
solve();
return 0;
}
