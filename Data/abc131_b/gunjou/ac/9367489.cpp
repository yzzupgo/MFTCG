#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L,minabs=320958,Taste=0,totalTaste=0,Answer=0;
string S;
cin>>N>>L;
vector<int>Apple(N);
for(int i=0;i<N;i++){
Apple[i]=L+i;
totalTaste+=Apple[i];
}
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
if(j!=i)Taste+=Apple[j];
}
if(abs(totalTaste-Taste)<minabs){
minabs=abs(totalTaste-Taste);
Answer=Taste;
}
Taste=0;
}
cout<<Answer<<endl;
}
