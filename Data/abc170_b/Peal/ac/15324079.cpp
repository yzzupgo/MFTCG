#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
void solve()
{
int x, y;
scanf("%d %d",&x, &y);
if(2*x > y)
printf("No\n");
else
{
int r = y-2*x;
if(r%2 == 0 && r<=2*x)
printf("Yes\n");
else
printf("No\n");
}
}
int main()
{
solve();
return 0;
}
