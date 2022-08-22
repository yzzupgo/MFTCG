#include<iostream>
using namespace std;
int main(){
int n,a=0,c;
cin>>n;
for(int i=1;i<=n;i++){
c=i;
for(int k=0;;k++){
if(c==0){
break;
}
if(c%2!=0){
a++;
}
c/=10;
}
}
cout<<a<<endl;
}
