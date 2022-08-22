#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L,j=40000;
cin>>N>>L;
int k=N*(N-1)+L*N;
for(int i=0;i<N;i++){
j=min(j,abs(k-(L+i)*2));
}
cout<<j<<endl;
}
