#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define pb push_back
#define mk make_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)
int main()
{
optimize();
int x,y;
int sum=0,done=0;
cin>>x>>y;
REP(i,1,x)
{
REP(j,1,x)
{
if(i*2+j*4==y)
{
done=1;
break;
}
}
}
if(done) cout<<"Yes";
else cout<<"No";
return 0;
}
