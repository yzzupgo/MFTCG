#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
signed main()
{
cin>>a>>b;
if(b>=a*2&&b<=a*4&&b%2==0)
printf("Yes");
else
printf("No");
return 0;
}
