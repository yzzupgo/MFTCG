#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,wa,ans;
cin>>n>>l;
for(int i=l;i<n+l;i++){
wa+=i;
}
if(n+l<=0)wa-=n+l;
else if(l<=0 && n+l>=0){
}else wa-=l;
cout<<wa;
}
