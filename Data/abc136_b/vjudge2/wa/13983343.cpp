#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
long long int b=0,c,e=1,f=0,a,k=0,l;
cin>>a;
for(int i=a;i>0;i=i/10)
b++;
if(b>2)
for(int k=b;k>1;k=k-2)
{f=f+9*e;e=e*100;}
else if(b==1)
f=a;
if(b%2!=0 && b>2)
f=f+a%100+1;
if(b==2)
f=9;
cout<<f;
}
