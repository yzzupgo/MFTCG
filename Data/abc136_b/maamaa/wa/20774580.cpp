#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
int sum=0;
int flag=1;
while(flag<=N){
flag*=10;
sum++;
}
int ans=0;
for(int i=1;i<=sum;i+=2){
int a=1;
int b=i;
while(b){
b/=10;
a*=10;
}
ans+=a-1;
}
cout<<ans<<endl;
}
