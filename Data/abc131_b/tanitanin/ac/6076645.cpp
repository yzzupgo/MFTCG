#include <iostream>
using namespace std;
int main(){
int N,L;cin>>N>>L;
int sum=0;
for(int i=1;i<=N;++i) {
sum+=L+i-1;
}
int e=L+N-1;
int ans=0;
if (0<=L) {
cout<<sum-L<<endl;
}
else if (e<=0) {
cout<<sum-e<<endl;
}
else {
cout<<sum<<endl;
}
}
