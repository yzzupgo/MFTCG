#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define INF 999999999
#define lint long long
#define rep(i,n) for(int i = 1; i <= (int)(n); i++)
#define rep0(i,n) for(int i = 0; i < (int)(n); i++)
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
int x, y;
cin >> x >> y;
if (y%2!=0){
printf("No\n");
return 0;
}
for (int i=0; i<=x; ++i){
int t = i;
int k = x - i;
if (2*t + 4*k == y){
printf("Yes\n");
return 0;
}
}
printf("No\n");
return 0;
}
