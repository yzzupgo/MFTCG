#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;
bool f(int x) {
int digit = 0;
while(x) {
digit++;
x /= 10;
}
return digit%2 == 1;
}
int main() {
int n; cin>>n;
int ans=0;
for (int i=1; i<=n; ++i){
if(f(i)) ans++;
}
cout << ans << endl;
}
