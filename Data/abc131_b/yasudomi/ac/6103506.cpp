#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L,koko,ans=0;
cin>>N>>L;
vector<int> a(N);
int m = 1e5;
for(int i=0;i<N;i++){
a.at(i) = L+i;
if(m>abs(a.at(i))){
m = abs(a.at(i));
koko = i;
}
}
for(int i=0;i<N;i++){
if(i!=koko)
ans +=a.at(i);
}
cout<<ans<<endl;
}
