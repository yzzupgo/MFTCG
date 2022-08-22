#include <iostream>
using namespace std;
int main()
{
int L,N;
cin>>N>>L;
int p=(N*(L-1))+(N*(N+1))/2;
int k;
if(L>=1){
k=p-(L);
}
if((L<1)&&(abs(L)<N)){
k=p;
}
if((L<1)&&(abs(L)>N)){
k=p-(L+N-1);
}
cout<<k;
}
