#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
int y;
cin>>x>>y;
double tmp=(x*4-y)/2;
int t=int(tmp);
bool f=true;
if(tmp<0) f=false;
if(tmp>t) f=false;
if(tmp>x) f=false;
if(f==true) cout<<"Yes"<<endl;
if(f==false) cout<<"No"<<endl;
}
