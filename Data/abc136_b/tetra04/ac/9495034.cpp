#include<stdio.h>
#include<iostream>
using namespace std;
int keta(int a){
int count=0;
while(a!=0){
a/=10;
count++;
}
return count;
}
int main(){
int n,cnt=0;
cin>>n;
for(int i=1;i<=n;i++){
if(keta(i)%2==1){
cnt++;
}
}
cout<<cnt<<endl;
return 0;
}
