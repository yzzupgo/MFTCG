#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b%2==1){
cout<<"No"<<endl;
return 0;
}
if(b>=2*a&&b<=4*a)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}