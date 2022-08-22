#include<bits/stdc++.h>
#define fastAF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned ll
#define ld long double
#define pb emplace_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define mapll map<ll,ll>
#define all(v) v.begin(),v.end()
#define deb(x) cout<<x
#define mod (int) 1e9+7 
#define pi 3.1415926536
#define deci(x) setprecision(x)
#define rev greater<int>()
#define vz(v) v.size()
#define endl "\n"
using namespace std; 
int main() 
{
fastAF
pll  a[5];
for(int i=0;i<5;i++)
  {
    cin>>a[i].second;
    a[i].first=a[i].second%10;
    if(a[i].first!=0){
    a[i].first=10-a[i].first;
    }else{
    }
        a[i].first=0;
  }
  sort(a,a+5);
  ll int x=0;
  for(int i=0;i<4;i++){
      x+=a[i].first;
      x+=a[i].second;
  }
 // cout<<x<< " ";
  x+=a[4].second;
  cout<<x<<endl;
}