#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int V[N+100];
int total=0;
int minabs=400;
for(int i=1;i<N+1;i++){
V[i]=L+i-1;
}
for(int i=1;i<N+1;i++){
total=total+V[i];
}
for(int i=1;i<N+1;i++){
minabs=min(minabs,abs(V[i]));
}
if (total>0){
cout<<total-minabs;
return 0;
}
cout<<total+minabs<<endl;
return 0;
}
