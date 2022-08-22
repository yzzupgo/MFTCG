#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int x,y;
cin>>x>>y;
bool ok = false;
for(int i=1; i<=x; i++) {
if((2 * i) + (4 * (x - i)) == y) {
ok = true;
}
}
if(ok) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
