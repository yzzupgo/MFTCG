#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define pi acos(-1)
#define mod 1000000007
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef pair<int, int> PII;
inline void quickread(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
}
int pow(int a, int b){
int ans=1;
while(b){
if(b&1)ans=1LL*ans*a%mod;
a=1LL*a*a%mod;b>>=1;
}
return ans;
}
int pow(int a, int b, int c){
int ans=1;
while(b){
if(b&1)ans=1LL*ans*a%c;
a=1LL*a*a%c;b>>=1;
}
return ans;
}
const int maxn = 100000 + 5;
int main()
{
quickread();
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++){
if(i * 2 + (x - i)*4 == y){
cout <<"Yes";
return 0;
}
}
cout <<"No";
return 0;
}
