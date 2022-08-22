#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d=1,ans=0;scanf("%d",&n);
for(int i=1;n>=d;i++){
d*=10;
if(i&1){
if(n>=d)ans+=d/10*9;
else ans+=n%d-(d/10)+1;
}
}
printf("%d",ans);
return 0;
}
