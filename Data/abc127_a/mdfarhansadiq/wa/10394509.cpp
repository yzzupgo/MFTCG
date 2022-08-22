#include <bits/stdc++.h>
using namespace std;
long int gcd(long int a, long int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
void Ok()
{
long long int a,b,c,d[1013],e,f,g,h,t,i,j = 0,k,l1,l2,m,n,x,y,sum,ans_1,ans_2,ans_3,cnt,Max,Min,flag,div,rcv,temp;
long double aa,bb,cc,dd,ee,ff,gg;
char aaa[100013],bbb[1013],ccc[1013],alpbt;
cin>>a>>b;
if(a>=13)
{
cout<<b<<endl;
}
else if(a>=6 && a<=12)
{
ans_1 = b/2;
cout<<b<<endl;
}
else
{
cout<<"0"<<endl;
}
return;
}
int main()
{
Ok();
return 0;
}
