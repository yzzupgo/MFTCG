#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
vector<int>a(N);
for(int i=0;i<N;i++){
a.at(i)=L+i-1;
}
int s=0;
for(int i=0;i<N;i++){
s+=a.at(i);
}
int ans=1e9;
for(int i=0;i<N;i++){
int t=s-a.at(i);
if(abs(t-s)<abs(ans-s)){
ans=t;
}
}
cout<<ans<<endl;
return 0;
}
