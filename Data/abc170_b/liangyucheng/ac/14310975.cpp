#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
if(2*i+4*(x-i)==y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
