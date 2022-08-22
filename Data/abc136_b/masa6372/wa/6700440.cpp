#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<numeric>
using namespace std;
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
#define rep(i,x) for(int i=0;i<x;i++)
#define re(i,x,y) for(int i=x;i<y;i++)
long long INF=1e9;
const long long mod=2019;
#define ll long long
int main(){
int a;
cin>>a;
int N=a;
int num=0;
while(N>0){
N/=10;
num++;
}
int x;
ll ans=0;
if(num%2==0){
if(num>=3){
for(int i=3;i<=num;i+=2){
ans+=(pow(10,i)-pow(10,i-1));
}
}
ans+=9;
}
else if(num%2!=0){
if(num>=3){
for(int i=3;i<=num-1;i+=2){
ans+=(pow(10,i)-pow(10,i-1));
}
}
ans+=9;
x=a-(pow(10,(num-1)));
ans=ans+x+1;
}
cout<<ans<<endl;
return 0;
}
