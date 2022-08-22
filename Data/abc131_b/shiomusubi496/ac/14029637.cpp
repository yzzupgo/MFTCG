#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L,j=40000,l=0;
cin>>N>>L;
int k=N*(N-1)/2+L*N;
for(int i=0;i<N;i++){
if(j>abs(L+i)){
j=abs(L+i);
l=k-(L+i);
}
}
cout<<l<<endl;
}
