#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
ll N,L; cin>>N>>L;
ll sum=(2*L+N-1)*N/2;
if(L>=0){
cout<<sum-L<<endl;
}else if(L<0&&L+N-1<0){
cout<<sum-(L+N-1)<<endl;
}else{
cout<<sum<<endl;
}
return 0;
}
