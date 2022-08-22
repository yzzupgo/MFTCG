#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;cin>>N>>L;
vector<int> apple(N);
int sum=0;
for(int i=0;i<N;i++){
sum+=L+i;
}
if(L-1<=0&&(L+N-1)>=0){
cout<<sum<<endl;
}else if(L-1<0){
cout<<sum-(L+N-1)<<endl;
}else if(L+N-1>0){
cout<<sum-L<<endl;
}
}
