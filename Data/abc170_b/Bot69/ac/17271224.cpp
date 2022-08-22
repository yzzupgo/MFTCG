#include<bits/stdc++.h>
#define lg long long int
#define loop(i,s,e) for(lg i=s;i<=e;i++)
#define iloop(i,s,e) for(lg i=e;i>=s;i--)
#define pb push_back
#define mp make_pair
using namespace std;
lg min(lg a,lg b)
{return a<b?a:b;}
lg max(lg a,lg b)
{return a>b?a:b;}
lg lcm(lg a ,lg b)
{
return (a*b)/__gcd(a,b);
}
lg bin(vector<lg>& a,lg start,lg end,lg num)
{
if(a[end]==num) return end+1;
else if(a[end]<num) return end+1;
else if(a[start]>num) return start;
else if(start+1>=end) return end;
else
{
lg mid = (end+start)/2;
if(a[mid]>num) return bin(a,start,mid-1,num);
else return bin(a,mid+1,end,num);
}
}
int main()
{
lg x,y;
cin>>x>>y;
if(4*x>=y && 2*x<=y && y%2==0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
