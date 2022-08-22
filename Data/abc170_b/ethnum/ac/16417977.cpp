#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
scanf("%d%d", &x,&y);
vector<int> dp(x);
for(int i=0; i<x; i++) {
if(y >= 2) {
dp[i] = 2;
y -= 2;
}
}
for(int i=0; i<x; i++) {
if(y >= 2) {
dp[i] += 2;
y -= 2;
}
}
bool ok = false;;
for(int a : dp) {
if(a == 0) {
ok = true;
break;
}
}
if(y || ok) printf("No");
else printf("Yes");
return 0;
}
