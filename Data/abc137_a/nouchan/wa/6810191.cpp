#include<stdio.h>
int max(int A, int B){
int max = A+B;
if(max < A-B){
max = A-B;
}else if (max < A*B)
{
max = A*B;
}
return max;
}
int main(){
int A,B;
scanf("%d %d", &A, &B);
printf("%d", max(A,B));
return 0;
}
