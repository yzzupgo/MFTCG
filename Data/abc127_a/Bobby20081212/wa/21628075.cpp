#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a>=13)
{
cout<<b<<endl;
}
else if(a>6 && a<12)
{
b/=2;
cout<<b<<endl;
}
else if(a<=5)
{
b=0;
cout<<b<<endl;
}
return 0;
}
