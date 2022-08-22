#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,wa,ans;
cin>>n>>l;
for(int i=l;i<n+l;i++){
wa+=i;
}
if(n+l-1<0){
wa-=n+l-1;
}
else if(n+l==0){
}
else if(l<0 && n+l>0){
}
else if(l==0){
}
else {
wa-=l;
}
cout<<wa;
}
