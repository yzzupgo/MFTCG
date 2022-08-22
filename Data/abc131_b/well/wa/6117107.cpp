#include <iostream>
using namespace std;
int main(void){
int N,L,minus;
long ans;
cin>>N>>L;
if(L*(L+N-1)<0) minus=0;
else if(L>0) minus=L;
else minus=L+N-1;
ans=(L-1)*N+(N+1)*N/2-minus;
cout<<ans;
}
