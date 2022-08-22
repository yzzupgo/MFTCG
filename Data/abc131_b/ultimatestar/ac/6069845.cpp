#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >>N>>L;
int futaberu=-500;
for(int i=1;i<=N;i++){
if(L+i-1<0){
futaberu=max(futaberu,L+i-1);
}
}
int seitaberu=500;
for(int i=1;i<=N;i++){
if(L+i-1>=0){
seitaberu=min(seitaberu,L+i-1);
}
}
if(seitaberu<=-1*futaberu){
cout<< N*(L-1)+N*(N+1)/2-seitaberu <<endl;
}
if(seitaberu>-1*futaberu){
cout <<N*(L-1)+N*(N+1)/2-futaberu <<endl;
}
}
