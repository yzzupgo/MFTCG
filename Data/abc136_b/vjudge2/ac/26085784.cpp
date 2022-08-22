#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main() {
std::ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,ans=0;
cin >> n;
for(int i=1; i<=n; i++) {
int e =0, k=1;
while(k<=i) {
e++;
k*=10;
}
if(e%2==1)
ans++;
}
cout << ans;
return 0;
}
