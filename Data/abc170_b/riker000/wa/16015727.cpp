#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b<=2*a||b>=4*a||b%2==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
return 0;
}
