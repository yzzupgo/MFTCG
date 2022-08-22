#include <bits/stdc++.h>
#define lld unsigned long long int
#define MAX 90000000
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
using namespace std;
int n, l, s, m=MAX;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
scanf("%d %d", &n, &l);
s = ((l+l+n-1)*n)/2;
for(int i =1; i<=n; i++){
if(abs(s-(l+i-1))<m)m=s-(l+i-1);
}
printf("%d\n", m);
}
