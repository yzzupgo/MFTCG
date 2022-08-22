using namespace std;
#include <iostream>
#include <algorithm>
#define ll long long
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
ll mod = 1e9+7;
#include <cmath>
int main(){
int n;
cin >> n;
ll ans = 0;
for(int i=1; i<=n; i++){
int tmp = log10(i);
if(tmp%2 == 1) ans++;
}
cout << ans << endl;
return 0;
}
