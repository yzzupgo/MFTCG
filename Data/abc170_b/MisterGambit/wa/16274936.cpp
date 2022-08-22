#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0);
int main() {
fast_io;
int x,y;
cin>>x>>y;
string ans;
ans="No";
for(int i=1;i<=x;i++) {
int b;
b=x-i;
if(b*2+i*4==y) {
ans="Yes";
break;
}
}
cout<<ans<<endl;
}
