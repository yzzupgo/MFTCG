#include<cstdio>
#include<iostream>
using namespace std;
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(b%2!=0){
printf("No");
return 0;
}
if(b<=a*4){
printf("Yes");
}
else{
printf("No");
}
return 0;
}
