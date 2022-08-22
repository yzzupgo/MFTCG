#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
typedef long long ll;
#define MODSIZE 1000000007
priority_queue<int, vector<int>, greater<int> > PQ;
int main(){
int x,y;
scanf("%d %d", &x, &y);
int i,j;
int f = 0;
for(i = 0;i <= x;i++){
for(j = 0;j <= x;j++){
if(i + j > x) continue;
if(i*4 + j*2 == y){
f = 1;
break;
}
}
}
if(f) printf("Yes\n");
else printf("No\n");
return 0;
}
