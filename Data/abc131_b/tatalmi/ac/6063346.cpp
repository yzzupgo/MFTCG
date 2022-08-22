#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int sum=0;
for(int i=y;i<x+y;i++){
sum +=i;
}
if(y>=0){
cout<<sum-y<<endl;
}
else if(y<0&&y+x-1>=0){
cout<<sum<<endl;
}
else{
cout<<sum-(y+x-1)<<endl;
}
}
