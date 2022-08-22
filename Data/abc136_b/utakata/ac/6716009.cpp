#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m=0,N;cin>>n;
N=n;
while(N>0){
N/=10;
m+=1;
}
if(m==1)cout<<n<<endl;
if(m==2)cout<<9<<endl;
if(m==3)cout<<n-90<<endl;
if(m==4)cout<<909<<endl;
if(m==5)cout<<n-9090<<endl;
if(m==6)cout<<90909<<endl;
}
