#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include <iomanip>
#include<math.h>
#include <functional>
#include<climits>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0; i<(ll)(n); ++i)
#define mod 1000000007
vector<ll>to[1000005];
ll dp[2000000];
int gcd(int a, int b)
{
if (a%b == 0)
{
return(b);
}
else
{
return(gcd(b,a%b));
}
}
int main(){
ll a,b,c;cin>>a>>b;
c=(a-1)*a/2;
c+=a*b;
if(a+b<=0)cout<<c-b-a+1;
else if(b>0)cout<<c-b;
else cout<<c;
}
