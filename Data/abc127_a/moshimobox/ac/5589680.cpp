#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll a,b,ans;
cin>>a>>b;
if (a<=5) {
ans=0;
}
else if (a<=12) {
ans = b/2;
}
else {
ans=b;
}
cout << ans << endl;
}
