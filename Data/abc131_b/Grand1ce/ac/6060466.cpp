#include <bits/stdc++.h>
using namespace std;
int N,L;
int main(){
scanf("%d%d",&N,&L);
int first=L,last=N+L-1,ans;
ans=(first+last)*N/2;
if(first>0){
ans-=first;
}
if(last<0){
ans-=last;
}
printf("%d\n",ans);
return 0;
}
