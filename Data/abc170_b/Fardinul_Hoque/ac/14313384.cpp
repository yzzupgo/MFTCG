#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl '\n'
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
return (a.second<b.second);
}
int main()
{
ios;
int x,y,flag=0;
cin>>x>>y;
for(int i=0;i<=x;i++)
{
if((i*2+(x-i)*4==y)||((x-i)*2+i*4==y))
{
flag=1;
break;
}
}
if(flag)
cout<<"Yes\n";
else
cout<<"No\n";
}
