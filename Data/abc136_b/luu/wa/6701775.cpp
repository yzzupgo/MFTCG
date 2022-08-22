#include <iostream>
#include <vector>
#include <algorithm>
#include<stdio.h>
#include<functional>
#include <math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
int s=0;
int main() {
int N;
int num=0;
int t=0;
int ans=0;
cin >> N;
s+=N;
while(N!=0){
N/=10;
num+=1;}
if (num%2==0){
t=num/2;
for (int i=0; i<t;++i){
ans+=9*pow(10,i);
}}
else{
t=int(num/2);
for (int i=0; i<t;++i){
ans+=9*pow(10,i);
}
ans+=s-pow(10,num-1);
}
cout << ans<< endl;
return 0;
}
