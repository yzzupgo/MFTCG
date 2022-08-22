#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >>N>>L;
int taberu=500;
for(int i=1;i<=N;i++){
if(L+i-1<0){
taberu=min(taberu,-1*(L+i-1));
}
if(L+i-1>=0){
taberu=min(taberu,L+i-1);
}
}
cout<< N*(L-1)+N*(N+1)/2-taberu <<endl;
}
