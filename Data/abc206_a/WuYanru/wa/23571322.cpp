#include<cstdio>
using namespace std;
int main() {
int in;
scanf("%d", &in);
if((int)(in * 1.08) == 206) {
printf("so-so");
} else if((int)(in * 1.08) < 206) {
printf(":(");
} else {
printf("Yay!");
}
return 0;
}
