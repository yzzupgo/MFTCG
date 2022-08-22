#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int a,b;
cin>>a>>b;
int t=(b-a*2)/2;
int c=a-t;
if(t>=0 && c>=0)
cout<<"Yes\n";
else
cout<<"No\n";
}
