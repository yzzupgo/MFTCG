#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
int i, n, sum, k;
scanf("%d", &n);
sum = 0;
k = 0;
for(int i = 1; i < n; i++) {
sum = sum + i;
k = k + 1;
if(sum >= n) {
break;
}
}
printf("%d", &k);
return 0;
}
