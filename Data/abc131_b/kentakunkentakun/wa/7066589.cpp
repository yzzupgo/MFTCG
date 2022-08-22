#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l;
cin>>n>>l;
int ans=0;
if(0<(1+l-1)){
for(int i=2;i<=n;i++){
ans+=i+l-1;
}
}
else if(0>(n+l-1)){
for(int i=1;i<n;i++){
ans+=i+l-1;
}
}
else {
for(int i=1;i<1-l;i++){
ans+=i+l-1;
}
for(int i=2-l;i<n;i++){
ans+=i+l-1;
}
}
cout<<ans<<endl;
}
