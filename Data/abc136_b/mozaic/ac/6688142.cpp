#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(long long i=(a),i ##Len_=(b);i<i ##Len_;i++)
typedef long long ll;
static const ll MOD = 1000000007;
static const ll INF = 1000000000000000000LL;
int main() {
ll N;
cin >> N;
ll res;
res = 0;
FOR(i,1,N+1)
{
ll tmp = i;
ll kai = 0;
while(tmp / 10 != 0)
{
++kai;
tmp /= 10;
}
if(kai % 2 == 0)
{
++res;
}
}
cout << res <<endl;
return 0;
}
