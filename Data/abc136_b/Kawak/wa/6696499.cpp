#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
long long int lcm(long long int a,long long int b){
long long int n;
n=a*b/__gcd(a,b);
return n;
}
using ll =long long int;
#define ci(a) cin>>a
#define co(a) cout<<a<<endl
#define gcd(a,b) __gcd(a,b)
#define vec vector<ll>
#define for(i,a,b) for(int i=a;i<b;i++)
#define sort(a,b) sort(a.begin(),b.end())
int main() {
ll a;
ci(a);
ll b=0;
for(i,1,6){
if(a/pow(10,i)<10){
b=i;
break;
}
}
ll c=0;
if(b==0)
for(i,1,a+1)
c++;
else if(b==1)
c=9;
else if(b==2){
for(i,100,a+1)
c++;
c+=9;
}
else if(b==3)
c=909;
else if(b==4){
for(i,10000,a+1)
c++;
c+=909;
}
if(a==pow(10,5))
c=90909;
co(c);
}
