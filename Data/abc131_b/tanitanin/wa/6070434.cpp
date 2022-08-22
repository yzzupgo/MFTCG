#include <iostream>
using namespace std;
int main(){
int N,L;cin>>N>>L;
int min=L+N;
int sum=0;
for(int i=1;i<=N;++i) {
sum+=L+i-1;
if(min*min>(L+i-1)*(L+i-1)) min=L+i-1;
}
cout<<(sum-min)<<endl;
}
