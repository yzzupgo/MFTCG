#include <stdio.h>
using namespace std;
int main(){
int X, Y;
scanf("%d %d", &X, &Y);
for (int i = 0; i < X; i++) {
int numOfLeags = i * 4 + (X - i ) * 2;
if (numOfLeags == Y) {
printf("Yes\n");
return 0;
}
}
printf("No\n");
}
