#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <cstdio>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int gcd(int a,int b){
int t;
while(b>0){
t=b;
b=a%b;
a=t;
}
return a;
}
int lcm(int a,int b){
return a*b/gcd(a,b);
}
int main(){
ll a,b,c,d,e,k,l,m,n,o=0,p,q,r,x,y,z,max1=0,ans=0;
string s,t,u;
cin>>a>>b;
cout<<max(a+b,max(a-b,a*b))<<endl;
}
