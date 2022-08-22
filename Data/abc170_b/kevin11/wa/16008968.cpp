#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b<a*2||b<a*4||b%2!=0)
cout<<"No";
else
cout<<"Yes";
return 0;
}
