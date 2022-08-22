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
if(y) printf("No");
else printf("Yes");
return 0;
}
