#include<bits/stdc++.h>
using namespace std;
int keta(int x){
for(int i=1;i<11;i++){
if(x==0||x==1){
return 1;
}
if(x!=0&&x!=1){
if(x%int(pow(10,i))==x){
return i;
break;
}
}
}
}
int main(){
int N;
cin>>N;
int ans=0;
for(long long int i=1;i<N;i++){
if(keta(i)%2==1){
ans++;
}
}
cout<<ans<<endl;
}
