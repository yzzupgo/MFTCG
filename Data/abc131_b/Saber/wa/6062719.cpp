#include <iostream>
using namespace std;
int main(void){
int N,L;
cin>>N>>L;
int sum=((N-1)*N)/2+L*N;
if(L>=1) cout<<sum-2;
else if(L==0) cout<<sum-1;
else if(L<0&&L>=-N+1) cout<<sum;
else cout<<sum-(L+N-1);
}
