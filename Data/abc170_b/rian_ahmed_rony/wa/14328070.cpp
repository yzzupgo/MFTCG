#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a>>b;
c = a*4;
d = a*2;
if(b%2==0 && d<=b && b<=c)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
