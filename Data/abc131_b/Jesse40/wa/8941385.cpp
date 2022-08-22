#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;cin>>N>>L;
int sum=0,m,mm=100;
for(int i=1;i<=N;i++){
sum+=L+i-1;
if(abs(L+i-1)<abs(mm)){m=i;mm=L+i-1;}
}
cout<<sum-(L+m-1)<<endl;
return 0;
}
