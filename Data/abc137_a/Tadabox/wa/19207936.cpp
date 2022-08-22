#include <stdio.h>
int main (){
float a,b,rez,rez1,rez2;
scanf ("%f%f",&a,&b);
rez=a+b;
rez1=a-b;
rez2=a*b;
if (rez>rez1 & rez>rez2){
printf ("%f",rez);
}
if (rez1>rez & rez1>rez2){
printf ("%f",rez1);
}
if(rez2>rez1 & rez2>rez){
printf ("%f",rez2);
}
}
