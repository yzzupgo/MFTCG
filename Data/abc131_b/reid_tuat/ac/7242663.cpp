#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <utility>
#include <math.h>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string.h>
#include <cassert>
#include <string.h>
#include <tuple>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define RREP(i,a,b) for(int i=a;i<b;i--)
typedef long long int ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pair_t;
#define MOD 1000000007
#define Ru(n) ( ((n)+9)/10*10 )
#define Rd(n) ( ((n)-10)/10*10 +10 ) 切り捨て
int gcd(int a,int b);
size_t length(const std::string& str) {
return str.length();
}
bool comp(const pair_t &a, const pair_t &b) {
return a.first < b.first;
}
int main() {
int n,L,sum,ans=0;
cin>>n>>L;
sum=(L+(L+(n-1)))*n/2;
if(L>0)
ans=sum-L;
else{
if(L+n-1>0)
ans=sum;
else
ans=sum-(L+n-1);
}
cout<<ans<<endl;
return 0;
}
int gcd(int a,int b){
if(b==0) return a;
return gcd(b,a%b);
}
