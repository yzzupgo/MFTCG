#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
vector<int> a(N);
int sum=0;
for(int i=0;i<N;i++){
a.at(i)=L+i;
sum+=L+i;
}
if(L>0){
sum-=L;
}else if(N<-L){
sum-=L+N-1;
}
cout<<sum<<endl;
}
