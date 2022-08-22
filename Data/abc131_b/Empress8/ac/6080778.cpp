#include<bits/stdc++.h>
using namespace std;
int main(void){
int n,l;
int i,j;
int sum,x;
int MIN;
int point;
cin>>n>>l;
MIN=INT_MAX;
point=n+1;
x=0;
for(i=1;i<=n;i++) x+=l+i-1;
for(i=1;i<=n;i++){
sum=0;
for(j=1;j<=n;j++){
if(i!=j){
sum+=l+j-1;
}
}
if(MIN>abs(sum-x)){
MIN=abs(sum-x);
point=sum;
}
}
cout<<point<<endl;
return 0;
}
