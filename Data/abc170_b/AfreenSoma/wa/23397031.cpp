#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,i;
cin>>x>>y;
for(i=0;i<=100;i++){
int sum=x-i;
if(sum>=0){
if(i*2+sum*4==y){
cout<<"yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
