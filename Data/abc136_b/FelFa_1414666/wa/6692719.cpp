#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int cnt=0;
for(int i=1;i<=n;i++)
if ((i>=1&&i<=9)||(i>=100&&i<=999)||i==10000)
cnt++;
cout<<cnt;
return 0;
}
