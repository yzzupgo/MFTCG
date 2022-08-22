#include <iostream>
int main(){
int N,num;
scanf("%d",&N);
if(N<10){
printf("%d",N);
}
else if(N<100){
printf("9");
}
else if(N<1000){
printf("%d",9+N-99);
}
else if(N<10000){
printf("109");
}
else{
printf("%d",9+900+N-10000);
}
}
