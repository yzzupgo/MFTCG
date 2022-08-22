#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a>>b;
c = a*4;
d = a*2;
if(b%2==1 || b<d || c<b)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
return 0;
}
