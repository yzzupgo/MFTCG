#include<cstdio>
int main(){
int X, Y;
scanf("%d %d", &X, &Y);
int a,b;
int ans;
if((Y-2*X) % 2 != 0) ans = 0;
else{
b = (Y-2*X)/2;
if(b<0 || b>X) ans = 0;
else ans = 1;
}
if(ans == 0) printf("No");
else printf("Yes");
return 0;
}
