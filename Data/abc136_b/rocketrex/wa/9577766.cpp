#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for (int i=a;i<n;i++)
typedef pair<ll, ll> pa;
const ll mod=1000000007;
int main(int argc, char const *argv[])
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin >> n;
ll c = n;
ll b = 0;
while (c != 0) {
c /= 10;
b++;
}
ll ans = 0;
if (b % 2 == 0) {
ans += 9;
for (int i = 2; i < b; i += 2) {
ans += 9*pow(10, i);
}
} else {
ans += 9;
for (int i = 2; i < b - 1; i += 2) {
ans += 9*pow(10, i);
}
ans += n - pow(10, b - 1) + 1;
}
cout << ans;
return 0;
}
