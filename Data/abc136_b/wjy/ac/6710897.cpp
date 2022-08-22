#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int ans[maxn];
int main(){
int n;
cin>>n;
int num=0;
for(int i=0;i<=9;i++){
ans[i]=num;
num++;
}
for(int i=100;i<=999;i++){
ans[i]=num;
num++;
}
for(int i=10000;i<=99999;i++){
ans[i]=num;
num++;
}
ans[100000]=num-1;
if((1<=n&&n<10)||(100<=n&&n<1000)||(10000<=n&&n<=100000)){
cout<<ans[n];
}
else if(10<=n&&n<100){
cout<<ans[9];
}
else if(1000<=n&&n<10000){
cout<<ans[999];
}
}
