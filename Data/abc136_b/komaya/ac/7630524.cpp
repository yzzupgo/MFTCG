#include <cstdio>
int main (){
int N;
scanf("%d",&N);
int count=0;
int dec=10;
if (N<dec) count=N;
else while(N>=dec){
count+=dec*0.9;
if(N<dec*100 && N>=dec*10){
count+=N-dec*10+1;
break;
}
dec*=100;
}
printf("%d",count);
}
