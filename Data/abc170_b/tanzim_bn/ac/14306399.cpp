#include<bits/stdc++.h>
typedef long long ll;
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
void fast()
{
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
}
int main()
{
int a,b,c,d,e;
cin>>a>>b;
for(int i=0;i<=a;i++)
{
if((b-2*i)%4==0&&(b-2*i)/4+i==a)
{
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
return 0;
}
