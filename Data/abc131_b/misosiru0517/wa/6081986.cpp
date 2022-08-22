#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
int i,N,L,ans=0;
cin>>N>>L;
for(i=0;i<N;i++){
ans+=L+i;
}
if(L>=0){
ans-=L;
}else if(L+N<0){
ans-=L+N-1;
}
cout<<ans;
}
