#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
if(L>0){
cout<<(2*L+N-1)*N/2-L<<endl;
}
else if(L<=0 && L+N-1>=0){
cout<<(2*L+N-1)*N/2<<endl;
}
else{
cout<<(2*L+N-1)*N/2-L-N+1<<endl;
}
}
