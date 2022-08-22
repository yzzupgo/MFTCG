#include <iostream>
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
#define rep(i,n) for (ll i = 0; i < (int)(n); i++)
#define repk(i,k,n) for (ll i = k; i <= (int)(n); i++)
#define MAX 10000
typedef long long ll;
using namespace std;
int main(){
int a,b;
cin >> a >> b ;
int ans =a*b;
if(ans>a*b) ans = a*b;
if(ans>a+b) ans = a+b;
if(ans>a-b) ans = a-b;
cout<< ans << endl;
return 0;
}
