#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
vector<int>apples(N);
for(int i=0;i<N;i++){
apples.at(i)=L+i;
}
int risou=0;
for(int i=0;i<N;i++){
risou+=apples.at(i);
}
int h=10000000;
int unko=0;
for(int i=0;i<N;i++){
if(abs(apples.at(i))<h){
h=abs(apples.at(i));
unko=risou-apples.at(i);
}
else{
int man=0;
}
}
cout<<unko<<endl;
}
