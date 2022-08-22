#include<iostream>
#include<cstdlib>
#include<math.h>
#include<set>
#include<string>
#include<stdlib.h>
using namespace std ;
int main(){
int N,L,ans=0;
cin>>N>>L;
if(L<=0&&abs(L)<=N)cout<<L*N+(N*(N-1))/2<<endl;
if(L<=0&&abs(L)>N)cout<<L*N-(L+N-1)+(N*(N-1))/2<<endl;
if(L>0)cout<<L*(N-1)+(N*(N-1))/2<<endl;
return 0;
}
