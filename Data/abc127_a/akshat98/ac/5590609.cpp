#include <iostream>
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ll long long
#define MOD 1000000007
#define MAX 1000000001
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int,int> >
#define vpl vector<pair<ll,ll> >
#define rep(i,a,b) for(i=a;i<b;i++)
#define reqp(i,a,b) for(i=a;i<=b;i++)
#define ren for(i=0;i<n;i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
int main()
{
#ifndef ONLINE_JUDGE
#endif
int i,j,k,l,n,test_case,m,r,a,b;
test_case=1;
while(test_case--){
cin>>a>>b;
if(a<6){
cout<<0;
}else if(a<13){
cout<<b/2;
}else cout<<b;
}
return 0;
}
