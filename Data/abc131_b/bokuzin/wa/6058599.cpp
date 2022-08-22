#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int inf=100000000;
int in(){
int a;
cin >> a;
return a;
}
void forin(int* x,int y){
for (int i=0;i<y;i++){
cin >> x[i];
}
}
int intpow(int x,int y){
double a=x,b=y;
return pow(a,b);
}
int intfabs(int x){
double a=x;
return fabs(a);
}
int fact(int x){
if (x == 1) return 1;
return x*fact(x-1);
}
int fib(int x){
if (x <= 2) return x;
int a[x];
a[0]=1;
a[1]=2;
for (int i=2;i<x;i++){
a[i]=a[i-1]+a[i-2];
}
return a[x-1];
}
int div1(ll x){
return x%1000000007;
}
main(){
int n=in(),l=in();
cout << l+((n+1)*n)/2 << endl;
}
