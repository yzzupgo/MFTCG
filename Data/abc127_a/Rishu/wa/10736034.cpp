#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,t;
cin>>a>>b;
if(a<6)
{
cout<<"0";
}
else{
if(a<=13)
{
t=b/2;
cout<<t;
}
else{
cout<<b;
}
}
return 0;
}
