#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int n, l; scanf("%d %d",&n,&l);
int tab[n+1];
int sum=0;
for(int i=1;i<=n;i++){
tab[i] = l+i-1;
sum+=tab[i];
}
int mn = INT_MAX;
int ind = 0;
for(int i=1;i<=n;i++){
if(abs(sum-(sum-tab[i])) < mn){
mn = abs(sum-(sum-tab[i]));
ind = i;
}
}
printf("%d",sum-tab[ind]);
}
