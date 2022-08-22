#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fr first
#define sc second
#define sz(v) ((int)(v).size())
#define mp make_pair
#define all(a) a.begin(),a.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repd(i,a,p) for(int i=a-1;i>=p;i--)
#define M 1000000007
#define vi vector<int>
#define vp vector<pair<int,int> >
#define ml map<int,int>
#define MPI 3.1415926536
using namespace std;
int n,m,k=0,t,i,j,c=0,x,s=0,a,b;string s1;
signed main()
{
cin>>n>>m;
for(i=0;i<=100;i++)
{
if(4*n-2*i==m)
{
cout<<"YES";
return 0;}
}
cout<<"NO";
}
