#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n, l;
cin >> n >> l;
ll min = l+1-1;
ll minimum;
ll sum =min;
for(int i=2; i<=n; i++){
minimum = l+i-1;
if(abs(minimum)<abs(min))
min=minimum;
sum+=minimum;
}
cout << sum-min;
return 0;
}
