#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int ans;
if (a<=5) ans=0;
else if (a<=12) ans=b/2;
else ans=b;
cout<<ans<<endl;
return 0;
}
