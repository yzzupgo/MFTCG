#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
int a;
scanf("%d", &a);
int b;
scanf("%d", &b);
int prc;
if(13 <= a){
prc = b;
}
else if(6 <= a){
prc = b/2;
}
else{
prc = 0;
}
printf("%d\n", &prc);
return 0;
}
