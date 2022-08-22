#include <stdio.h>
int main (){
int a,b,rez,rez1,rez2;
scanf ("%d%d",&a,&b);
rez=a+b;
rez1=a-b;
rez2=a*b;
if (rez>=rez1 && rez>=rez2){
printf ("%d",rez);
}
else if (rez1>=rez && rez1>=rez2){
printf ("%d",rez1);
}
else if(rez2>=rez1 && rez2>=rez){
printf ("%d",rez2);
}
}
