#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod=1e9+7;
int main() {
int n;
cin >> n;
int ans=0;
for(int i=1; i<=n; i++){
if( !( (11<=i&&i<=99) || (1111<=i&&i<=9999) || (111111<=i&&i<=999999) ) ){
ans++;
}
}
cout << ans << endl;
return 0;
}
