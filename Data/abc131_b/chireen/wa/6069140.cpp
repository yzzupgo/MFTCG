#include<iostream>
#include<cstdlib>
#include<math.h>
#include<set>
#include<string>
#include<stdlib.h>
using namespace std ;
int main(){
int N,L;
cin>>N>>L;
if(L<=0&&abs(L)<=N+1)cout<<L*N+(N*(N-1))/2<<endl;
if(L<=0&&abs(L)>N+1)cout<<(L-1)*(N-1)+(N*(N-1))/2<<endl;
if(L>0)cout<<L*(N-1)+(N*(N-1))/2<<endl;
return 0;
}
