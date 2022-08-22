#include <iostream>
#include <cstring>
#include <map>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
#include <list>
#include <numeric>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <math.h>
#include <stack>
#include <climits>
#include <bitset>
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) {
ll tmp = 0;
if (x < y){
tmp=x;
x=y;
y=tmp;
}
while (y > 0) {
ll r = x % y;
x = y;
y = r;
}
return x;
}
ll lcm(ll x,ll y){
return x/gcd(x,y)*y;
}
ll kaijo(ll k){
ll sum = 1;
for (ll i = 1; i <= k; ++i)
{
sum *= i;
sum%=1000000000+7;
}
return sum;
}
int main(){
int n;
cin>>n;
if(n<10)cout<<n<<endl;
else if(10<=n&&n<100)cout<<9<<endl;
else if(100<=n&&n<1000)cout<<9+(n+1)-100<<endl;
else if(1000<=n&&n<10000)cout<<909<<endl;
else if(10000<=n&&n<100000)cout<<909+(n+1)-10000<<endl;
else cout<<90909<<endl;
return 0;
}
