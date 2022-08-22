#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int x, y;
if((4*x-y)>=0 && !(y&1) && !((4*x-y)&1)) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
