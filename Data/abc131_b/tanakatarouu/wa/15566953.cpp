#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin >> n >> l;
int sum=0;
int eat=l+n-1;
for(int i=1;i<=n;i++){
sum+=l+i-1;
if(abs(l+i-1),abs(eat)) eat=l+i-1;
}
cout << sum-eat;
}
