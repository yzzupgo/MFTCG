#include<bits/stdc++.h>
using namespace std;
int main()
{
int cnt=0;
int n;
cin>>n;
for(int i=n;i>=1;i--)
{
int countt=0;
int s=i;
while(s)
{
s=s/10;
countt++;
}
if(countt%2==1)
{
cnt++;
}
}
cout<<cnt;
}
