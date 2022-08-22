#include<bits/stdc++.h>
using namespace std;
int n,a=1,b=10,ans;
int main(){
scanf("%d",&n);
while(a<=n){
for(int i=a;i<=min(b-1,n);i++)ans++;
a*=100;b*=100;
}
printf("%d",ans);
}
