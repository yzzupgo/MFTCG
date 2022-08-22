#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
int main(void) {
int x,y;
scanf("%d %d", &x, &y);
for(int i = 0; i <= 100; i++){
for (int j = 0; j <= 100; j++) {
if ((i + j)==x && (i*2)+(j*4) == y) {
printf("Yes");
return 0;
}
}
}
printf("No");
return 0;
}
