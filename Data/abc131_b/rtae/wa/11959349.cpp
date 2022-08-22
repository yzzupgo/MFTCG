#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
if(0<=L)
cout<<L*N+N*(N+1)/2-L<<endl;
else{
if(0<=L+N-1)
cout<<L*N+N*(N-1)/2<<endl;
else
cout<<L*N+N*(N-1)/2-L+1-N<<endl;
}
return 0;
}
