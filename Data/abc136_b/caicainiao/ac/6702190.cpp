#include <string.h>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define ll long long
#define inf 0x3f3f3f3f
#define ms(x,a) memset(x,a,sizeof(x))
#define sd(x) scanf("%d",&x)
#define sdd(x,y) scanf("%d%d",&x,&y)
#define sddd(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld%lld",&x,&y)
#define slll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define sf(x) scanf("%lf",&x)
#define sff(x,y) scanf("%lf%lf",&x,&y)
#define sfff(x,y,z) scanf("%lf%lf%lf",&x,&y,&z)
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define repp(i,n,a) for(int i=n;i>=a;i--)
#define pd(x) printf("%d\n",x)
#define pdd(x,y) printf("%d%d\n",x,y)
#define pddd(x,y,z) printf("%d%d%d\n",x,y,z)
#define pl(x) printf("%lld\n",x)
#define pll(x,y) printf("%lld%lld\n",x,y)
#define plll(x,y,z) printf("%lld%lld%lld\n",x,y,z)
#define debug() printf("***\n")
using namespace std;
int n,m;
ll a,b,c;
int main() {
while(sd(n)!=EOF){
int cnt;
if(n==1e5){
cnt=99999-9999+999-99+9;
}
else if(n<1e5&&n>=10000){
cnt=n-9999+999-99+9;
}
else if(n<10000&&n>=1000){
cnt=999-99+9;
}
else if(n<1000&&n>=100){
cnt=n-99+9;
}
else if(n<100&&n>=10){
cnt=9;
}
else {
cnt=n;
}
pd(cnt);
}
return 0;
}
