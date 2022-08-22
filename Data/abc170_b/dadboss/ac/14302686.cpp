#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll x,y;
cin>>x>>y;
ll k=0;
while(k<=x)
{
if(2*(2*x-k)==y)
{
Yes
return 0;
}
k++;
}
No
}
