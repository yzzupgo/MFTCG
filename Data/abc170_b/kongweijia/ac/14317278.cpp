#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
int y;
cin>>x>>y;
int t=(x*4-y);
int tmp=t/2;
bool f=true;
if(tmp<0) f=false;
if(tmp*2<t) f=false;
if(tmp>x) f=false;
if(f==true) cout<<"Yes"<<endl;
if(f==false) cout<<"No"<<endl;
}
