#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod=1e9+7;
int main() {
int n;
cin >> n;
int ans=0;
for(int i=1; i<=n; i++){
if( !( (10<=i&&i<=99) || (1000<=i&&i<=9999) || (100000<=i&&i<=999999) ) ){
ans++;
}
}
cout << ans << endl;
return 0;
}
