#include <bits/stdc++.h>
using namespace std;
int main() {
int i, n, sum, k;
scanf("%d", &n);
sum = 0;
for(int i = 0; i < n; i++) {
sum = sum + i;
if(sum >= n) {
break;
}
}
k = i;
printf("%d", &k);
}
