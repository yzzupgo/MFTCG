#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int mina=300;
int sum=0;
for(int i=1;i<N+1;i++){
mina=min(mina,abs(L+i-1));
sum=sum+L+i-1;
}
cout<<sum-mina<<endl;
return 0;
}
