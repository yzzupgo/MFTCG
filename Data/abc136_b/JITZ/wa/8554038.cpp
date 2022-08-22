#include<iostream>
using namespace std;
int main(){
int n,u;
cin>>n;
int c=n,n_d=0;
while(c>0){
n_d++;
c=c/10;
}
int sum=0,k=1;
for(int i=1;i<=n_d-1;i++){
if(i%2==1){
sum=sum+(9*k);
}
k=k*10;
}
if(n_d%2==1){
for(int i=1;i<=n_d;i++)
u=u*10;
sum=sum+n-u+1;
}
cout<<sum;
return 0;
}
