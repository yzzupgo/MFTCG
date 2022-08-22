#include <bits/stdc++.h>
using namespace std;
int main(void)
{
string ans="No";
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++)
{
int j=x-i;
if((2*i)+(4*j)==y) ans="Yes";
}
cout<<ans<<endl;
return 0;
}
