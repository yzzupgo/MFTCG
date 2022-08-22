#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(i,a,b) for(ll i=b-1;i>=a;i--)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define ml map<ll,ll>
#define pll pair<ll,ll>
int main(){
int x,y;
cin>>x>>y;
int mini=2*x;
int maxi=4*x;
if(mini<=y && y<=maxi && y%2==0)
cout<<"Yes";
else
cout<<"No";
}
