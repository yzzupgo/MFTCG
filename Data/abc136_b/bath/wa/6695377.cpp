#include <bits/stdc++.h>
using namespace std;
int main() {
int a;
cin>>a;
int b=a;
int n=1;
while(a/10>=1) {
a/=10;
n+=1;
}
int ans=0;
if (n=1) {
ans=b;
} else if (n%2==0) {
for (int i=0;i<n/2;++i) {
ans+=9*(pow(10,(i*2)));
}
} else {
for (int i=0;i<n/2;++i) {
ans+=9*(pow(10,(i*2)));
}
int l=pow(10,(n-1));
ans+=(b%l);
ans+=1;
}
cout<<ans<<endl;
}
