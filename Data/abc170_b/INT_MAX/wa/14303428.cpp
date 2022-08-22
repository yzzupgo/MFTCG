#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define pob pop_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.14159265
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <ll, ll> pll;
const ll M=1e9+7;
ll inf=1e18;
int main()
{
int x,y;
cin>>x>>y;
if(y%2==0){
if((y/2-x)>=0 && (2*x-y/2)>=0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"NO";
}
