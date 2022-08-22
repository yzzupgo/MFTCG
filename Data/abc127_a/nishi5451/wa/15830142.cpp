#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
int main(){
int a,b;
cin >> a >> b;
int ans = a;
if(a<=5) ans=0;
else if(a>=6 && a<=12) ans/=2;
cout << ans << endl;
return 0;
}
