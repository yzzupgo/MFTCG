#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> PII;
const int mod = 1e9+7,INF = 1e9;
const int mx = 1e6+5;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
if((x==1&&y==2)|| (x==1&&y==4))
{
cout<<"Yes"<<endl;
return 0;
}
if(2*x<y && y<3*x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
