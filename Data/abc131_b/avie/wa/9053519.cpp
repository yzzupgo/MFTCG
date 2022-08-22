#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>
#include<numeric>
#include<queue>
#include<string>
#include<vector>
#define ll long long
#include<cstring>
#define rep(i,n) for(int i=0;i<n;i++)
ll mod = 1000000007;
using namespace std;
priority_queue<ll int>QUE;
int length(char* str) {
int len = strlen(str);
return len;
}
ll LCM(ll a,ll b)
{
ll r, x, tmp;
ll i, j;
ll lcm;
i = a;
j = b;
if (a < b) {
tmp = a;
a = b;
b = tmp;
}
r = a % b;
while (r != 0) {
a = b;
b = r;
r = a % b;
}
lcm = (i / b) * j;
return lcm;
}
int main()
{
int ans;
int N, L;
int sum = 0;
cin >> N >> L;
ans = abs(L);
for (int i = 0; i < N; i++) {
sum += L;
ans = min(abs(ans), abs(L));
L++;
}
if (L < 0)cout << sum + abs(ans) << endl;
else cout << sum - abs(ans) << endl;
}
