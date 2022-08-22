#include<stdio.h>
int main(){
int N,L,l,i,S=0;
scanf("%d %d",&N,&L);
l=L;
for(i=0;i<N;i++){
S=S+l;
l=l+1;
}
if(L<0 && N+L>=0){
printf("%d",S);
}
else if(L>=0){
printf("%d",S-L);
}
else{
printf("%d",S-(N+L)+1);
}
}
