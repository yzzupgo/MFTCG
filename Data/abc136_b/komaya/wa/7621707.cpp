#include <cstdio>
int main (){
int N;
scanf("%d",&N);
int count=0;
int dec=10;
if(N<10) printf("%d",N);
else if (N>=10 && N<100) printf("9");
else{
while(N>dec*10){
count+=0.9*dec;
dec*=100;
}
N-=dec/10;
count+=N;
printf("%d",count);
}
}
