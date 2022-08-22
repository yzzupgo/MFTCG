#include <cstdio>
int main (){
int N,L;
scanf("%d %d",&N,&L);
int aji=N*(2*L+N-1)/2;
if(L>=0) aji-=L;
else if(L+N<=0) aji-=L+N-1;
printf("%d",aji);
}
