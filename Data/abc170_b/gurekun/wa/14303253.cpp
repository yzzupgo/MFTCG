#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int kazu=x;
x=x*4;
for(int i=0;i<=kazu;i++){
x-=2;
if(x==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
