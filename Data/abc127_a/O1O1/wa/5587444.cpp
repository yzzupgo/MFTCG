#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int ans;
if (a<=5) ans=0;
else if (a<=12) ans=50;
else ans=100;
cout<<ans<<endl;
return 0;
}
