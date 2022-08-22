#include<bits/stdc++.h>
using namespace std;
int main()
{
long long X,Y,a,b;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
cin>>X>>Y;
a = (Y- 2*X)/2 ;
b = X-a;
if((a>=1 && b==0) || (a==0 && b>=1))
{ cout<<"YES";
exit(0);
}
if(a>=1 && b>=1)
cout<<"YES";
else
cout<<"NO";
}
