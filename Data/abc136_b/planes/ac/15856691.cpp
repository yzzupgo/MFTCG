#include <bits/stdc++.h>
using namespace std;
using ll =long long;
#define all(v) v.begin(),v.end()
int main() {
ll N;
cin>>N;
ll ans=0;
if(N>9) {
ans+=9;
}
else {
cout<<N<<endl;
return 0;
}
if(N>99) {
if(N>999) {
ans+=900;
}
else {
ans+=N-99;
}
}
if(N>9999) {
if(N>99999) {
ans+=90000;
}
else {
ans+=N-9999;
}
}
cout<<ans<<endl;
}
