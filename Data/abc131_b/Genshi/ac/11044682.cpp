#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n,l,c=300,ans=0;
cin >>n>>l;
int s[n];
for (int i = 1; i <= n;i++)
{
s[i] = l + i - 1;
ans += s[i];
}
for (int i = 1; i <=n; i++)
{
if(abs(s[i])<c)
c = abs(s[i]);
}
if(ans>=0)
cout << ans-c << endl;
else
cout << ans + c << endl;
return 0;
}
