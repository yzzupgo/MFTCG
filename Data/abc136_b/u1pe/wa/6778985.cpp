#include<iostream>
using namespace std;
int main(){
int n,a,c,x=0;
cin>>n;
for(int i=1;i<=n;i++){
c=i;
a=0;
for(int k=0;;k++){
if(c==0){
if(a%2!=0){
cout<<i<<endl;
x++;
}
break;
}
c/=10;
a++;
}
}
cout<<x<<endl;
}
