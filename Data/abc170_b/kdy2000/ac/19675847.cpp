#include <stdio.h>
using namespace std;
int main(void){
int x, y; scanf("%d %d", &x, &y);
if((y - 2 * x) % 2) {
printf("No\n");
return 0;
}
int b = (y-2*x) / 2;
int a = x - b;
if(0 <= a && 0 <= b) {
printf("Yes\n");
}else{
printf("No\n");
}
}
