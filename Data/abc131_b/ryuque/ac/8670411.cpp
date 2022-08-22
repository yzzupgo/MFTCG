#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,ans=0;
cin >> n >> l ;
for(int i=l;i<l+n;i++){
ans+=i;
}
if(l<0&&n<=(-l)){
ans-=l+n-1;
}
if(l>0){
ans-=l;
}
cout << ans << endl;
}
