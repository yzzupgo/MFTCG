#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
typedef long long ll;
const int INF = 1001001001;
int main(){
int n;
cin >> n;
int ans=0;
for(int i=1; i<n+1;i++){
if(1<=i<10 || 100<=i<1000 || 10000<=i<100000) ans++;
}
cout << ans << endl;
return 0;
}
