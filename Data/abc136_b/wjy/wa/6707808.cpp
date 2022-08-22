#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int ans[maxn];
int main(){
int n;
cin>>n;
int num=1;
for(int i=1;i<=10;i++){
ans[i]=num;
num++;
}
for(int i=101;i<=1000;i++){
ans[i]=num;
num++;
}
for(int i=10001;i<=100000;i++){
ans[i]=num;
num++;
}
if((1<=n&&n<=10)||(101<=n&&n<=1000)||(10001<=n&&n<=100000)){
cout<<ans[n];
}
else if(10<n&&n<101){
cout<<ans[10];
}
else if(1000<n&&n<10001){
cout<<ans[1000];
}
}
