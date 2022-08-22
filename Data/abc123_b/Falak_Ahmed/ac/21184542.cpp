#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
const ll N=1000000;
int main()
{


    ll n;

    n=5;


  ll ara[n+1];

  ll sum=0;
 ll mod=0;
  vector<ll>v;
  for(ll i=0;i<n;i++)
  {
      cin>>ara[i];

      sum+=ara[i];

     if(ara[i]%10) v.pb(10-(ara[i]%10));
     else v.pb(0);


  }

   sort(v.begin(),v.end());

   for(ll i=0;i<v.size()-1;i++)mod+=v[i];


  cout<<sum+mod<<endl;







}

