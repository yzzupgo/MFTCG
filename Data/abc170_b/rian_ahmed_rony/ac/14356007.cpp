#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
cin>>a>>b;
c = a*4;
d = a*2;
if(b%2==0 && d<=b && b<=c)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
