#include<iostream>
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <iomanip>//setprecision
#include<math.h>
#include <functional>
#include<climits>
using namespace std;
#define ll  long long 
#define rep(i, n)        for(ll i=0; i<(ll)(n); ++i)
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
  ll a,b,c,d,e,f=10;cin>>a>>b>>c>>d>>e;
  if(a%10!=0){
    f=min(f,a%10);
    a=(a/10+1)*10;
  }
  if(b%10!=0){
    f=min(f,b%10);
    b=(b/10+1)*10;
  }if(c%10!=0){
    f=min(f,c%10);
    c=(c/10+1)*10;
  }if(d%10!=0){
    f=min(f,d%10);
    d=(d/10+1)*10;
  }if(e%10!=0){
    f=min(f,e%10);
    e=(e/10+1)*10;
  }cout<<a+b+c+d+e+f-10;
}

