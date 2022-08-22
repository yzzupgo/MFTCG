#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
scanf("%d%d",&x,&y);
for (int i = 1; i <= x; i++){
int L = i*2 + (x-i)*4;
if (L == y){
printf("Yes");
return 0;
}
}
printf("No");
}
