#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L,minTaste=320958,Taste=0;
string S;
cin>>N>>L;
vector<int>Apple(N);
for(int i=0;i<N;i++){
Apple[i]=L+i;
}
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
if(j!=i)Taste+=Apple[j];
}
minTaste=min(minTaste,Taste);
Taste=0;
}
cout<<minTaste<<endl;
}
