#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
scanf("%d %d", &X, &Y);
if(Y%2==0 && Y/2-X>=0 && 2*X-Y/2>=0){
printf("Yes\n");
}else{
printf("No\n");
}
return 0;
}
