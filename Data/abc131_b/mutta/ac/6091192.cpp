#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int mini=abs(L);
int all=0;
for (int i=0;i<N;i++){
all+=L+i;
}
for (int i=1;i<N;i++){
mini=min(mini,abs(L+i));
}
if(L+N-1<=0)
mini=(-1)*mini;
int rest=all-mini;
cout<<rest<<endl;
}
