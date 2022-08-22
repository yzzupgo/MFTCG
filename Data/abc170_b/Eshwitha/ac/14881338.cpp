#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr first
#define sec second
#define rep(i,n) for(i=0;i<n;i++)
#define vi vector <int>
#define vc vector <char>
#define vl vector <ll>
#define vb vector <bool>
#define pb push_back
#define M 1000000007
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define open freopen("input.txt","r",stdin);
#define close freopen("output.txt","w",stdout);
#define M_PI 3.14159265358979323846
#define pp pair<int,int>
#define nn 100003
int main()
{
ios;
ll x,y;
cin>>x>>y;
ll m=4*x-y;
ll n=y-2*x;
if(m>=0 && n>=0 && m%2==0 && n%2==0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
