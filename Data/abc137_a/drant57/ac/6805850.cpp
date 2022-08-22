#include<stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
return *(int*)a - *(int*)b;
}
int main(){
int A, B;
scanf("%d %d", &A, &B);
if ((A + B) >= (A - B) && (A + B) >= (A*B)){
printf("%d\n", A + B);
}
else if ((A + B) <= (A - B) && (A - B) >= (A*B)){
printf("%d\n", A - B);
}
else{
printf("%d\n", A*B);
}
return 0;
}
